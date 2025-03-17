#include <iostream>
#include <vector>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
        /* code */
    }
    else
    {
        return n * factorial(n - 1);
    }
    return 0;
}
int sumofn(int n)
{
    if (n == 1)
    {
        return 1;
        /* code */
    }
    return n + sumofn(n - 1);
}
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
        /* code */
    }
    return (fibonacci(n - 1) + fibonacci(n - 2));
}
bool issortedarray(vector<int> arr, int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }
    if (arr[n - 1] < arr[n - 2])
    {
        return false;
        /* code */
    }
    else
    {
        return issortedarray(arr, n - 1);
    }
}
int binarysearch(vector<int> arr, int first, int last, int target)
{
    int mid = first + (last - first) / 2;
    if (arr[mid] == target)
    {
        return mid;
        /* code */
    }
    else if (arr[mid] > target)
    {
        return binarysearch(arr, first, (mid - 1), target);
        /* code */
    }

    return binarysearch(arr, mid + 1, last, target);
}
void subset() {}
void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }

    for (int a = 0; a < temp.size(); a++)
    {
        arr[a + st] = temp[a];
    }
}
void mergesort(vector<int> &arr, int st, int end)
{
    int n = arr.size();
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        mergesort(arr, st, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, st, mid, end);
        /* code */
    }
}





// void quicksort(vector<int> &arr, int st, int end)
// {
//     if (st >= end)
//     {
//         return;
//         /* code */
//     }

//     int piv = st, i = st + 1, j = end;

//     while (i <= j)
//     {
//         if (arr[i] > arr[piv] && arr[j] < arr[piv])
//         {
           
            
//                 swap(arr[i], arr[j]);
//                 /* code */
            
//         }
//         else if (arr[i] < arr[piv])
//         {
//             i++;
//             /* code */
//         }
//         else if(arr[j]>arr[piv])
//         {
//             j--;
//             /* code */
//         }
//         // else{
//         //     i++;j--;
//         // }

//         /* code */
//     }
    
//         swap(arr[piv], arr[j]);
//         // piv = j;
//     quicksort(arr, st, j-1);
//     quicksort(arr, j + 1, end);
// }




void quicksort(vector <int> &arr , int st  , int end){
    if (st >= end)
    return;
    int idx=st-1 , piv = arr[end] , j=st ;
    while (j<end)
    {
        if (arr[j]<piv )
        {
            idx++;
            swap(arr[idx],arr[j]);
            /* code */
        }
        j++;
        /* code */
    }
    idx++;
    swap(arr[idx],arr[end]);
    quicksort(arr,st,idx-1);
    quicksort(arr,idx+1,end);
}

int main()
{
    vector<int> arr = {5, 6, 2, 3, 5, 7, 7, 4, 2, 0};
    int n = arr.size();
    quicksort(arr, 0, n - 1);
    // mergesort(arr,0,n-1);
    for (int num : arr)
    {
        cout << num << endl;
    }
    // cout<<binarysearch(arr,0,n-1,5);
    // cout << issortedarray(arr, n);
    // cout<<"Enter n: "<<endl;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<fibonacci(i+1)<<" ";
    //     /* code */
    // }
    // cout<<sumofn(n);
    return 0;
}