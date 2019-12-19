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

void insertionSort(array<int, SIZE> &numbers)
{
    int i, j;
    for (i = 0; i < numbers.size(); i++)
    {
        int temp = numbers[i];
        for (j = i - 1; j >= 0 && numbers[j] > temp; j--)
        {
            swap(&numbers[j], &numbers[j - 1]);
        }
        // numbers[j] = temp;
    }
}

int main()
{
    array<int, SIZE> numbers = {4, 1, 9, 32, 15, 8, 10, 12, 3, 6};
    cout << "Before insertionSort sorting : ";
    printNumbers(numbers);
    insertionSort(numbers);
    cout << "After insertionSort sorting : ";
    printNumbers(numbers);
    return 0;
}