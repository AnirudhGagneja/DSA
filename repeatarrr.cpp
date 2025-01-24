#include <iostream>
using namespace std;

void repnum(int a[], int n ){
    int val;
    bool dupe;
    // int i=0,j=0;
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int  j = 0; j < n; j++)
        {
            
            if(a[i]==a[j]){
                count++;
                
            }
        }
        if(count==1){
            cout<<"non repeated number is at index:"<<i<<"  and number is "<< a[i];
        }
        
    }
    
    
}
int main() {
    int a[]={2,3,4,2,5,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    repnum(a,n);
    return 0;
}