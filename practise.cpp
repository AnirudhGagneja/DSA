#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
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
int majorityelementbysort(vector <int> &vec){
    
    sort(vec.begin(), vec.end());
    
    int freq=1,n=vec.size(),ans=0;
    for (int i = 1; i < n; i++)
    {
        if (vec[i] == vec[i-1])
        {
            freq++;
            /* code */
        }
        else{
            freq=1;
        }
        if (freq>n/2)
        {
            ans=vec[i];
            /* code */
        }
        
        /* code */
    }
    return ans;
}
// 1,2,1,2,2,2
int moorevotingmethod(vector <int> &vec){
    int count=vec.size();
    int freq=0,ans=0;
    for (int i = 0; i < count; i++)
    {
        if (freq==0)
        {
            ans=vec[i];
            /* code */
        }
        
        if (ans==vec[i])
        {
            freq++;
            /* code */
        }
        else{
            freq--;
        }
        if (freq>count/2)
        {
            ans=vec[i];
            /* code */
        }
        
        /* code */
    }
    return ans;
}
double power (double x , int n){
    long bf=n;
    if(x==0) return 0.0;
    if(n==0) return 1.0;
    if(x==-1 && n%2 == 0) return 1.0;
    if(x==-1 && n%2 != 0) return -1.0; 
    if(x==1) return 1.0;
    double ans=1;
    if(bf<0){
        x=1/x;
        bf = -bf;
    }
    while (bf>0)
    {
        if (bf%2==1)
        {
            ans*=x;
            /* code */
        }
        
        x*=x;
        bf/=2;
        
    }
    
    return ans;
}
int stocksproblem(vector <int> &prices){
    int buying = prices[0],maxprofit=0;

    for (int i = 1; i < prices.size(); i++)
    {
        int selling = prices[i];
        
        if ((selling - buying )>maxprofit)
        {
            maxprofit= selling-buying;
        }
        if(selling<buying){
            buying=selling;
        }

    }
    // cout<<a<<" "<<b;
    return maxprofit;
    
}
int watercontainer(vector <int> &vec){
    int h,w,area,maxwater=0;
    // for (int i = 0; i < vec.size()-1; i++)
    // {
    //     for (int j = i+1; j < vec.size(); j++)
    //     {
    //         w = j-i;
    //         h = min(vec[j],vec[i]);
    //         area =w*h;
    //         if (area>maxwater)
    //         {
    //              maxwater =area;
    //             /* code */
    //         }
            
    //         /* code */
    //     }
        
    //     /* code */
    // }


    // by 2 pointer 


    int i=0,j=vec.size()-1;
    while (i<j)
    {
        h = min(vec[i],vec[j]);
        w = j-i;
        area = h*w;
        if (area>maxwater)
        {
            maxwater = area;
            
            
        }
        if (vec[i]>vec[j])
            {
                j--;
                /* code */
            }
            else{
                i++;
            }
        
        
        
        
    }
    
    return maxwater;
}
void productexceptself(vector <int> &vec){

    vector<int> ans(vec.size(),1);
    vector<int> prefix(vec.size() , 1);
    vector<int> suffix(vec.size(),1);
    prefix[0]=1;
    for (int i = 1; i < vec.size(); i++)
    {
        prefix[i] = prefix[i-1]*vec[i-1];
        /* code */
    }
    suffix[vec.size()-1]=1;
    for (int i = vec.size()-2; i >=0; i--)
    {
        suffix[i] = suffix[i+1]*vec[i+1];
        /* code */
    }
    for (int i = 0; i < vec.size(); i++)
    {
        ans[i] = prefix[i]*suffix[i];
        /* code */
    }
    
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     int product=1;
    //     for(int j = 0 ; j<vec.size() ; j++ ){
    //         if (i!=j)
    //         {
    //             product*=vec[j];
                
    //             /* code */
    //         }
    //         ans[i]=product;
    //     }
    //     /* code */
    // }
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<ans[i]<<" ";        /* code */
    }
    
    
}
int bsbyrecursion(int arr[] ,int target, int first , int last ){
    int mid = (first+last)/2;
    if (arr[mid] == target)
    {
        return mid;
        /* code */
    }
    else if (arr[mid] > target)
    {
        return bsbyrecursion(arr , target , first , mid-1);
        /* code */
    }
    else return bsbyrecursion(arr,target,mid+1,last);

    
    
}
int searchinrotatedsortedarray(int arr[] , int first , int end , int target){
    while (first<=end)
    {
        int mid = end + (first-end)/2;
        if (arr[mid] == target)
        {
            return mid;
            /* code */
        }
        if(arr[first]<=arr[mid]){
            //left sorted
            }
            else{
                //right sorted
            }







    //     else if (arr[mid] > target && arr[first] > target)
    //     {
    //         first = mid+1;
    //         /* code */
    //     }
    //     else if (arr[mid] < target && arr[end] < target )
    //     {
    //         end= mid-1;
    //         /* code */
    //     }
    //     /* code */
    // }
    return -1;
}}
int peakelement(vector <int>  &arr){
    int n = arr.size();
    int st=1,end=n-2;
    while (st<=end)
    {
        int mid = st + (end-st)/2;
        if (arr[mid-1]<arr[mid]&& arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if (arr[mid-1]<arr[mid])
        {
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}


int singleelementinasortedarray(vector <int> &vec){
    //brute force 
    int count = vec.size();
    // for (int i = 0; i < count; i++)
    // {
    //     if (vec[i] != vec[i+1] && vec[i]!=vec[i-1])
    //     {
    //         return vec[i];
    //         /* code */
    //     }
        
    //     /* code */
    // }
    int st=0,end=count-1;
    while (st<=end)
    {
        int mid = st + (end-st)/2;
        if (vec[mid]!=vec[mid-1] && vec[mid]!=vec[mid+1])
        {
            return mid;
            /* code */
        }
        else if (vec[mid-1]==vec[mid])
        {
            end = mid-2;
            /* code */
        }
        else{
            st = mid+2;
        }
        

        /* code */
    }
    



    return -1;
}
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
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
    int arr[]={6,7,8,3,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int sum=7;
    // subarray(arr,n);
    // cout<<maxsubarraysum(arr,n)<<endl; //O(n^2)
    // cout<<kadanestheorm(arr,n)<<endl;//O(n)
    // pairsum(arr,n,9);
    // majorityelement(vec);
    // cout<<majorityelementbysort(vec);
    // cout<<moorevotingmethod(vec);
    // int a=3;
    // cout<<power(a,4);
    vector <int> prices = {1,1,4,4,6,6,7,8,8};
    // cout<<stocksproblem(prices)<<endl;
    // cout<<watercontainer(prices);
    // cout<<min(1,1);
    // productexceptself(prices);
    // cout<<bsbyrecursion(arr,5,0,n-1)<<endl;
    // cout<<searchinrotatedsortedarray(arr , 0 , n-1 , 6);
    // cout<<peakelement(prices);
    cout<<singleelementinasortedarray(prices);
    return 0;
}
