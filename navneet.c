#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int number = 11;
    int n = sizeof(arr)/(sizeof(arr[0]));
    int st = 0 , end = n-1;
    while(st<=end){
        int mid = st + (end-st)/2;  
        if(arr[mid]==number){
            printf("%d",mi  d);
            break;
        }
        else if (number < arr[mid]){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return 0;

}