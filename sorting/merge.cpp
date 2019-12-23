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

void mergeSort(int *numbers)
{
    return;
}

int main()
{
    int numbers[SIZE] = {4, 1, 9, 2, 7, 3, 8, 10, 6, 5};
    cout << "Before merge sorting : ";
    printNumbers(numbers);
    mergeSort(numbers);
    cout << "After merge sorting : ";
    printNumbers(numbers);
    return 0;
}