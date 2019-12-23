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

void bubbleSort(int *numbers)
{
    for (int i = SIZE - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                swap(&numbers[j], &numbers[j + 1]);
            }
        }
    }
}

int main()
{
    int numbers[SIZE] = {4, 1, 9, 32, 15, 8, 10, 12, 3, 6};
    cout << "Before bubble sorting : ";
    printNumbers(numbers);
    bubbleSort(numbers);
    cout << "After bubble sorting : ";
    printNumbers(numbers);
    return 0;
}