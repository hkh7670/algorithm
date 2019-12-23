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

void quickSort(int left, int right, int *numbers)
{
    if (left >= right)
        return;

    int pivot = left;
    int i = pivot + 1;
    int j = right;
    while (i <= j)
    {
        while (numbers[pivot] >= numbers[i] && i <= right)
            i++;
        while (numbers[pivot] <= numbers[j] && j > left)
            j--;
        if (i > j)
            swap(&numbers[j], &numbers[pivot]);
        else
            swap(&numbers[i], &numbers[j]);
    }
    quickSort(left, j - 1, numbers);
    quickSort(j + 1, right, numbers);
}

int main()
{
    int numbers[SIZE] = {4, 1, 9, 2, 7, 3, 8, 10, 6, 5};
    cout << "Before quick sorting : ";
    printNumbers(numbers);
    quickSort(0, SIZE - 1, numbers);
    cout << "After quick sorting : ";
    printNumbers(numbers);
    return 0;
}