#include<stdio.h>
int main(){
    int arr[] = {2,4,5,7,11,15,18};
    int target = 15;
    int n = sizeof(arr)/sizeof(arr[0]);
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==target){
            printf("%d ",mid);
            break;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
      return 0;

  
    }


  
