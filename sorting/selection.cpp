#include <iostream>
#include <array>
#define SIZE 10

using namespace std;

void printNumbers(array<int, SIZE> &numbers)
{
    for (int i = 0; i < numbers.size(); i++)
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

void selectionSort(array<int, SIZE> &numbers)
{
    int index;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < numbers.size(); j++)
        {
            if (numbers[j] < numbers[index])
            {
                index = j;
            }
        }
        if (index != i)
        {
            swap(&numbers[index], &numbers[i]);
        }
    }
}

int main()
{
    array<int, SIZE> numbers = {4, 1, 9, 32, 15, 8, 10, 12, 3, 6};
    cout << "Before selection sorting : ";
    printNumbers(numbers);
    selectionSort(numbers);
    cout << "After selection sorting : ";
    printNumbers(numbers);
    return 0;
}