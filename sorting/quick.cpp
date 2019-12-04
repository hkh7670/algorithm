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

void quickSort(int left, int right, array<int, SIZE> &numbers)
{
    // int pivot = left;
    // int i = left;
    // int j = right;
    // for (; i <= j; i++)
    // {
    //     if(numbers[i] > numbers[pivot])
    // }
}

int main()
{
    array<int, SIZE> numbers = {4, 1, 9, 32, 15, 8, 10, 12, 3, 6};
    cout << "Before quick sorting : ";
    printNumbers(numbers);
    quickSort(0, SIZE - 1, numbers);
    cout << "After quick sorting : ";
    printNumbers(numbers);
    return 0;
}