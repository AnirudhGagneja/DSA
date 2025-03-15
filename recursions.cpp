#include <iostream>
using namespace std;

int factorial(int n){
    if (n==1 || n==0)
    {
        return 1;
        /* code */
    }
    else{
        return n*factorial(n-1);
    }
    return 0;
}
int sumofn(int n){
    if (n==1)
    {
        return 1;
        /* code */
    }
    return n+sumofn(n-1);
}
int main() {
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<factorial(i)<<" ";
    //     /* code */
    // }
    cout<<sumofn(n);
    return 0;
}