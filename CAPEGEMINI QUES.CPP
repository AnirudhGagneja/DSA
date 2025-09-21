#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int count(int arr[] , int n,int k){
    int count =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>k)return -1;
        int diff = k - arr[i];
        while(diff>0){
        int j=0;
        while(pow(2,j)<=diff){
            j++;
        }
        diff = diff -pow(2,j-1);
        count++;
    }



        /* 18 3 5 6 */
    }
    
    return count;
}
int main() {
    int arr[] = {18,3,32,100};
    int ans = count(arr,4,100);
    cout<<ans;
    return 0;
}