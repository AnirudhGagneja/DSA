#include <iostream>
#include<math.h>
using namespace std;

int binarytodecimal(int n ){
    int r,ans=0,idx=0;
    while(n!=0){
        r= n%10;
        ans+= r*pow(2,idx++);
        n/=10;
    }
    return ans;
}
int decimaltobinary(int n ){
    int i =0,t=0,ans=0;

    while(n!=0){
        t=n%2;
        n/=2;
        ans = ans+ t*pow(10,i++);
    }
    return ans;
}
int main() {
    cout<<binarytodecimal(111)<<endl;
    cout<<decimaltobinary(3)<<endl;
    return 0;
}