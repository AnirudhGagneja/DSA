#include <iostream>
using namespace std;
int sumcheck(int a[], int n, int sum)
{
    bool sumpresent = false;
    for (int i = 0; i <= n/2; i++)
    {
        for (int j = 1; j <n ; j++)
        {
            if ((a[i] + a[j]) == sum)
            {
                cout<<"Value is the sum of "<<a[i]<<" and "<<a[j]<<endl;
                sumpresent = true;
                break;
            }
        }
    }
    // if (sumpresent)
    // {
    //     cout << "sum is present";
    // }
    return sumpresent;
}

int main()
{
    int a[] = {5, 3, 4, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 10;
    if(!sumcheck(a, n, sum)) {
        cout<<"Sum is not present";
    }
    return 0;
}