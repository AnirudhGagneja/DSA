#include <iostream>
using namespace std;

int maxelement(int arr[], int n){
    int max=arr[0];
    int maxindex;
    for (int i = 1; i < n; i++)
    {
        if (max<=arr[i])
        {
            max=arr[i];
            maxindex=i;
            /* code */
        }
        
        /* code */
    }
    cout<<max;
    return maxindex;

}
int minelement(int arr[],int n){
    int min=arr[0];
    int minindex;
    for (int i = 1; i < n; i++)
    {
        if (min>=arr[i])
        {
            min=arr[i];
            minindex=i;
            /* code */
        }
        
        /* code */
    }
    cout<<min;
    return minindex;
    
}
int main() {
    int arr[]= {-1,-2,4,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxelement(arr,n)<<endl;
    cout<<minelement(arr,n);
    return 0;
}