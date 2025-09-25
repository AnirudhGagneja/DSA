#include <iostream>
using namespace std;
int main(){
int arr[5];
for(int i =0 ;i<5;i++){
    printf("Enter value at index %d:\n" , i);
    scanf("%d" ,&arr[i]);
}
for(int i =0 ;i<5;i++){
    printf("%d " , arr[i]);
}



return 0;
}