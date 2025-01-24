#include <iostream>

using namespace std;
int rev(int n){
    int rev=0;
    while(n!=0){
        rev = rev*10+n%10;
        n=n/10;
    }
    return rev;
}
int sumofodd(int n){
    int sum=0;
    for (int i = 0; i <=n; i++)
    {
        if(i%2!=0){
            sum=sum+i;
            cout<<i<<endl;
    }
    }
    
    return sum;
}
int main() {
    int n=12;
    cout<<rev(n)<<endl;
    cout<<sumofodd(n);
    return 0;
}