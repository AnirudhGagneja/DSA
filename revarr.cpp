#include <iostream>

using namespace std;
void revarr(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
        /* code */
    }

    // return temp[n];
    // return arr[n];
}
int elementsum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        /* code */
    }
    return sum;
}
int main()
{
    // Your code here
    int a[] = {2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    revarr(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    cout << elementsum(a, n);

    // cout << "Hello, World!" << endl;
    return 0;
}