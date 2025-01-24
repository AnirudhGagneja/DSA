#include <iostream>

using namespace std;
int binary(int a[], int n, int val)
{
    int first = 0, last = n-1;
    
    while (first<=last)
    {
        int mid = (first + last) / 2;
        if (a[mid] == val)
        {
            return mid;
        }
        else if (a[mid] < val)
        {
            first = mid + 1;
        }
        else
        {
            last=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a[]={2,3,4,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    int val=8;
    if(binary(a,n,val)!=-1){
        cout<<binary(a,n,val);
    }
    return 0;
}