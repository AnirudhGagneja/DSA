#include <iostream>
#include <math.h>
using namespace std;

int sumofdigits(int count){
    int t;
    int sum=0;
    while(count!=0)
    {
        t=count%10;
        sum=sum+t;
        count=count/10;
        /* code */
    }
    return sum;
    
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int nCr(int n , int r){
    if(n<r){
        cout<<"Not possible";
    }
    else{
    int c = fact(n)/(fact(n-r)*fact(r));
    return c;
    }
    return 0;
}
bool prime(int n){
    bool isprime=true;
    if(n==0||n==1){
        isprime=false;
    }
    for (int i = 2; i <=n/2; i++)
    {
        if(n%i==0){
            isprime= false;
            break;
        }
        /* code */
    }
    if(isprime){
        return true;
    //    cout<<"it is prime";
    }
    else{
        // cout<<"not prime";
        return false;
    }
    return false;
}
int binarydivision(int n){
    int t=0,i=0,binary=0;
    while (n!=0)
    {
        t=n%2;
        n=n/2;
        binary=binary+t*pow(10,i);
        i++;
        /* code */
    }
    return binary;
}
int power(int a,int n){
    int pow=1;
    for (int i = 0; i < n; i++)
    {
        pow=pow*a;
        /* code */
    }
    return pow;
}
int bianrytodecimal(int n){
    int decimal=0,t=0,i=0;
    while (n!=0)
    {
        t=n%10;
        n=n/10;
        decimal=decimal+t*pow(2,i);
        i++;
        /* code */
    }
    return decimal;
}
int lengthofnumer(int n){
    int count=0;
    while (n!=0)
    {
        n=n/10;
        count++;
        /* code */
    }
    return count;
}
int negbinary(int n){
    int t=0,ans=0;
    while (n!=0)
    {
        
        /* code */
    }
    
}
int main() {
    // cout<<sumofdigits(145)<<endl;
    // cout<<nCr(8,2)<<endl;
    // int n;
    // cout<<"Enter N"<<endl;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     if(prime(i)){
    //         cout<<i<<endl;
    //     }
    //     /* code */
    // }
    cout<<binarydivision(42)<<endl;
    cout<<power(5,4)<<endl;
    cout<<bianrytodecimal(101010)<<endl;
    cout<<lengthofnumer(377);
    return 0;
}