#include <iostream>
#include <vector>
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
int linearsearch(int a[] , int count , int val){
    for (int i = 0; i < count; i++)
    {
        if(a[i]==val){
            return i;
        }
        /* code */
    }
    return -1;
    
}
int linearsearchvector(vector<int> &vac , int val){
    int i=0;

    for(int num : vac){
        
        if (num==val)
        {
            return i;
            /* code */
        }
        i++;
        
    }
    return -1;
}
int main()
{
    // int a[]={2,3,4,5,6,7,8};
    // int n = sizeof(a)/sizeof(a[0]);
    // int val=8;
    // if(binary(a,n,val)!=-1){
    //     cout<<binary(a,n,val)<<endl;
    // }
    // cout<<linearsearch(a,n,val)<<endl;
    // cout<<linearsearch(a,n,4);
    vector <int> vec = {2,4,5,345,7,24,5};
    int val=34567;
    cout<<linearsearchvector(vec, val)<<endl;
    return 0;
}