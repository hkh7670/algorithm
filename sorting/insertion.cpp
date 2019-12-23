#include <iostream>
#define SIZE 10

using namespace std;

void printNumbers(int *numbers)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << ' ';
    }
    cout << endl;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void insertionSort(int *numbers)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (numbers[j - 1] <= numbers[j])
                break;
            if (numbers[j - 1] > numbers[j])
            {
                swap(&numbers[j - 1], &numbers[j]);
            }
        }
    }
}

int main()
{
    int numbers[SIZE] = {4, 1, 9, 2, 7, 3, 8, 10, 6, 5};
    cout << "Before insertion sorting : ";
    printNumbers(numbers);
    insertionSort(numbers);
    cout << "After insertion sorting : ";
    printNumbers(numbers);
    return 0;
}