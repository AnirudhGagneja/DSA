#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector <int> arr , int val)
{
    int n = arr.size();
    int st=0,end=n-1;
    while (st<=end)
    {
        int mid = st+ (end-st)/2;
        if(arr[mid]==val)
        {
            return mid;
        }
        else if (arr[mid]>val)
        {
            end=mid-1;
        }
        else{
            st=mid+1;
        }
        /* code */
    }
    return -1;
}
int main() {

    
    vector<int>arr ={2,3,5,6,7,8,12,23};
    cout<<binarysearch(arr,8);
    return 0;
}