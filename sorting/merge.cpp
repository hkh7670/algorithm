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
    swap(numbers[0], numbers[2]);
}

int main()
{
    int numbers[SIZE] = {4, 1, 9, 32, 15, 8, 10, 12, 3, 6};
    cout << "Before merge sorting : ";
    printNumbers(numbers);
    mergeSort(numbers);
    cout << "After merge sorting : ";
    printNumbers(numbers);
    return 0;
}