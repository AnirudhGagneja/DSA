#include <iostream>
#include <math.h>
using namespace std;
void hollowdiamond(int count){
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <count-i-1; j++)
        {
            cout<<" ";
            /* code */
        }
        cout<<"*";
        if(i!=0){
        for (int k = 0; k < 2*i-1; k++)
        {
            cout<<" ";
        }
    cout<<"*";
}
        
        cout<<endl;
        /* code */
    }
    for (int i = 0; i < count-1; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<" ";
            /* code */
        }
        cout<<"*";
        if (i!=count-2)
        {
            for (int k = 0; k < 2*(count-i)-5; k++)
        {
            cout<<" ";
            /* code */
        }
        cout<<"*";
        }
        
        
        
        cout<<endl;
    }
    
}
int fact(int n){
    if (n==0 || n==1)
    {
        return 1;
        /* code */
    }
    return n*fact(n-1);
    
}
int nCr(int n , int r){
    int ans;
    ans= fact(n)/(fact(r)*fact(n-r));
    return ans;
}
void func(int count)
{
    int a = 1;
    char ch = 'A';
    for (int i = 0; i < count; i++)
    {
        int b = 1;
        for (int k = count - 1 /*i+1*/; k > i; k--)
        {
            // 8th pattern
            //  cout<<k;

            // 11th pattern half
            // cout << " ";
        }
        cout << '*';
        
        
        for (int j = 0; j <= i; j++)
        {
            // 1st pattern
            //  cout<<j+1<<" ";

            // 2nd pattern
            //  cout<<a++<<" ";

            // 3rd pattern
            //  cout<<ch++<<" ";

            // 4th pattern
            //  cout<<"*";

            // 5th pattern
            //  cout<<i+1<<" ";

            // 6th pattern
            //  cout<<ch<<" ";

            // 7th pattern
            //  cout<<b++<<" ";

            // 8th in negative

            // 9th pattern / floyds triangle pattern
            //  cout<<a++<<" ";
            //  cout<<ch++<< " ";

            // 10th half part
            //  cout<<" ";

            // 11th pattern half
            //  cout<<j+1;

            // 12th hollow diamond
            // cout<<" ";
        }
        // cout<<"*";
        // negative loop

        // extra loop for half part

        for (int q = i; q > 0; q--)
        {

            // 10th pattern
            //  cout<<i+1;

            // 11th half
            //   cout<<q;
        }

        // ch++;
        cout << endl;
        /* code */
    }
}
bool prime(int n){
    if (n==1 || n==0)
    {
        return false;
        /* code */
    }
    
    for (int i = 2; i*i <=n; i++)
    {
        if (n%i==0)
        {
            return false;
            /* code */
        }
        
        /* code */
    }
    return true;
}

int decitobi(int n){
    int ans=0;
    int a=0,i=0;
    while (n!=0)
    {
        a = n%2;
        n=n/2;
        ans = ans+a*pow(10,i++);
        /* code */
    }
    return ans;
}
int bitodeci(int n){
    int ans=0;
    int a=0,i=0;
    while (n!=0)
    {
        a=n%10;
        n=n/10;
        ans = ans + a*pow(2,i++);
        /* code */
    }
    return ans;
}
int main()
{
    int n=20;
    // hollowdiamond(4);
    // cout<<nCr(5,3);
    for (int i = 0; i < 16; i++)
    {
        cout<<decitobi(i)<<endl;
        
       cout<<bitodeci(decitobi(i))<<endl;
    }
    
    return 0;
}
