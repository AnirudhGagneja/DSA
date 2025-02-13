#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool prime(int n)
{
    // bool isprime=true;
    if (n == 0 || n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int sumdiv3(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
            cout << i << " ";
        }
    }
    return sum;
}
int fact(int n)
{
    int fac = 1;
    if (n == 0 || n == 1)
    {
        fac = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fac = fac * i;
        }
    }
    return fac;
}
void squarepattern(int count)
{

    int a = 1;
    char ch = 'A';
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }

    // for (int i = 0; i <count; i++)
    // {
    //    for (int j = 1; j <=count; j++)
    //    {
    //     cout<<j;
    //    }
    //    cout<<endl;
    // }
    // for (int i = 0; i <count; i++)
    // {
    //     char ch='a';
    //    for (int j = 1; j <=count; j++)
    //    {
    //     cout<<ch++;
    //    }
    //    cout<<endl;
    // }
}

void trianglepattern(int count)
{
    char ch = 'a';
    for (int i = 0; i < count; i++)
    {
        int a = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << a++;
        }
        ch++;
        cout << endl;
    }
    //  for (int i = 0; i <count; i++)
    // {

    //     for(int j=0;j<=i;j++){
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }
}
void revtripattern(int count)
{
    int a = 1;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a++;
        }
        // for (int j = i; j >0; j--)
        // {
        //     cout<<j;
        // }

        cout << endl;
    }
}
void invertedtriangle(int count)
{
    // for(int i = 0 ; i<count ; i++){

    //     for (int j = 0 ; j<i ; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0 ; j<count-i;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }
    char ch = 'A';
    for (int i = 0; i < count; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < count - i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}
void pyramidpattern(int count)
{
    for (int i = 0; i < count; i++)
    {
        int a = 1;
        int b = i;

        // spaces
        for (int j = 0; j < count - i; j++)
        {
            cout << " ";
        }

        // ntri1
        for (int j = 0; j <= i; j++)
        {
            cout << a++;
        }

        // tri2
        for (int k = 0; k < i; k++)
        {
            cout << b--;
        }
        cout << endl;
    }
}
void hollowdiamond(int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            cout << " ";
        }
        cout << '*';
        if (i != 0)
        {
            for (int j = 2 * i - 1; j > 0; j--)
            {
                cout << " ";
            }

            cout << '*';
        }

        cout << endl;
    }
    for (int i = 0; i < count - 1; i++)
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // stars
        cout << '*';
        if (i != count - 2)
        {
            for (int j = 0; j < 2 * (count - i) - 5; j++)
            {
                cout << " ";
            }
            cout << '*';
        }
        cout << endl;
    }
}
//    *
//   * *
//  *   *
// * * * *
void startriangle(int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            cout << " ";
            /* code */
        }
        cout << "*";
        if (i == count - 1)
        {
            cout << " ";
            for (int j = 0; j < count - 1; j++)
            {
                cout << "*" << " ";
                /* code */
            }

            /* code */
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
                /* code */
            }
            if (i != 0)
            {
                cout << "*";
            }
        }

        cout << endl;

        /* code */
    }
}
int poweroftwo(int count){
    int ans=-1;
   \
    if (count>0 && (count&(count-1)==0))
    {
         ans=1;
        /* code */
    }
    
    return ans;
}
void singlenumber(vector<int> &vec){
    int ans=0;
    for(int n: vec)
    {
        ans^=n;
    }
    cout<<ans<<endl;
    int i=0;
    for(int n:vec){

        if (n==ans)
        {
            cout<<i<<endl;
            /* code */
        }
        i++;
    }
}
void revavector(vector <int> &vec){
    int i=0,j=vec.size()-1;
    vector<int> temp;
    temp=vec;
    while (j>=0)
    {
        vec[i++]=temp[j--];
        /* code */
    }
    
}
void subarray(int arr[] , int count){
    
    for (int st = 0; st < count; st++)
    {
        for(int end=st;end<count;end++){
            for (int i = st; i < end; i++)
            {
                cout<<arr[i];
                /* code */
            }
            cout<<" ";
            
            
        }
        /* code */
        cout<<endl;
    }
    
}
int maxsubarraysum(int arr[],int n){
    int maxsum=INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentsum = 0;
        for(int end=st;end<n;end++)
        {
            currentsum+=arr[end];
            maxsum= max(currentsum , maxsum);
        }
        /* code */
    }
    return maxsum;
}
int kadanestheorm(int arr[],int n){
    int maxsum = INT_MIN;
    int currentsum=0;
    for (int i = 0; i < n; i++)
    {
        currentsum+=arr[i];
        maxsum=max(currentsum,maxsum);
        if (currentsum<0)
        {
            currentsum=0;
            /* code */
        }
        
        /* code */
    }
    return maxsum;
}
void pairsum(int arr[],int n,int target){
    int i=0,j=n-1;
    
    while(i<j){
        int pairsum=arr[i]+arr[j];
        if (pairsum<target)
        {
            i++;
            /* code */
        }
        else if (pairsum>target)
        {
            j--;
            /* code */
        }
        else{
            cout<<i<<" "<<j;
            break;
        }
        
        
    }
    
}
void majorityelement( vector <int> & vec){
    //using brute force
    int n=vec.size()/2;
    for(int num : vec){
        int freq=0;
        for(int el:vec){
            if (el==num)
            {
                freq++;
                /* code */
            }
            
        }
        if (freq>n)
        {
            cout<<num<<endl;
            break;
            /* code */
        }
        
    }
}
int main()
{
    // int n = 15;
    // for (int i = 0; i < n; i++)
    // {
    //     if (prime(i))
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    // cout<<sumdiv3(n)<<endl;
    // cout<<fact(5)<<endl;
    // squarepattern(3);
    // trianglepattern(4);
    // revtripattern(4);
    // invertedtriangle(4);
    // pyramidpattern(4);
    // hollowdiamond(4);
    // startriangle(7);
    // cout<<poweroftwo(7)<<endl;
    vector <int> vec = {3,2,3,2,2,2};
    // singlenumber(vec);
    // revavector(vec);
    // for(int n:vec){
    //     cout<<n<<endl;
    // }
    int arr[]={1,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int sum=7;
    // subarray(arr,n);
    // cout<<maxsubarraysum(arr,n)<<endl; //O(n^2)
    // cout<<kadanestheorm(arr,n)<<endl;//O(n)
    // pairsum(arr,n,9);
    majorityelement(vec);
    return 0;
}
