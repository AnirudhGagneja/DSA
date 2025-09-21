#include <iostream>
#include <vector>
using namespace std;

void printFibonacci(int num)
{
    long num1 = 0;
    long num2 = 1;
    for (int i = 0; i < num; i++)
    {
        cout << num1 << " ";
        long sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
}
void reverseHalfArray(int size, int inputList[])
{
    int i, temp;
    for (i = size / 2; i < size; i++)
    {
        temp = inputList[size - 1];
        inputList[size - 1] = inputList[i];
        inputList[i] = temp;
        size -= 1;
    }
}

void printPattern(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= 2 * i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void selectionSortArray(int len, vector<int> &arr)
{
    int x = 0, y = 0;
    for (x = 0; x < len; x++)
    {
        int index_of_min = x;
        for (y = x + 1; y < len; y++)
        {
            if (arr[index_of_min] > arr[y])
            {
                index_of_min = y;
            }
        }
        int temp = arr[x];
        arr[x] = arr[index_of_min];
        arr[index_of_min] = temp;
    }
}
void descendingselectionsort(int len, vector<int> &arr)
{
    {
        int small, pos, i, j, temp;
        for (i = 0; i <= len - 1; i++)
        {
            for (j = i; j < len; j++)
            {
                temp = 0;
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}
void func(int len, vector<int> &arr)
{
    int i, max, location, j, temp;
    for (i = 0; i < len; i++)
    {
        max = arr[i];
        location = i;
        for (j = i; j < len; j++)
        {
            if (max < arr[j])
            {
                max = arr[j];
                location = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[location];
        arr[location] = temp;
    }
}
int main()
{
    vector<int> arr = {20, 30, 10, 40, 50};
    // reverseHalfArray(5,arr);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    //     /* code */
    // }
    // printPattern(3);
    // descendingselectionsort(5, arr);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    //     /* code */
    // }
    func(5, arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
    return 0;
}