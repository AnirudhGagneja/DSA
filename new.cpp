#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = { 1,3,5,2,5,3,1,4,6,2};
    int n  = sizeof(arr)/sizeof(arr[0]);
    for(int i =0 ;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                    
                }
                n--;
                    j--;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
//#include <stdio.h>
/*int main() {
 int arr[10], i, j, k, n = 10;
 printf("Enter 10 elements:\n");
 for(i = 0; i < n; i++)
 scanf("%d", &arr[i]);
 for(i = 0; i < n; i++) {
 for(j = i + 1; j < n; j++) {
 if(arr[i] == arr[j]) {
 for(k = j; k < n - 1; k++)
 arr[k] = arr[k + 1];
 n--;
 j--;
 }
 }
 }
 printf("\nArray after removing duplicates:\n");
for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
 
}
return 0;
}*/

