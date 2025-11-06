#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <climits>
#include <cstdlib>
using namespace std;

int ratfood(int r, int unit, vector<int> arr)
{
    if (arr.size() < 1)
    {
        return -1;
        /* code */
    }
    int count = 0, sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        count++;
        if (sum >= r * unit)
        {
            return count;
        }
        /* code */
    }

    if (sum < r * unit)
    {
        return 0;
    }
    return -1;
}
int stringoperation(string str)
{
    if (str.length() < 1)
        return -1;
    int ans = str[0] - '0';
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1' || str[i] == '0' && i != str.length() - 1)
        {
            if (str[i + 1] == 'A')
            {
                ans = ans & str[i + 2] - '0';
                /* code */
            }
            if (str[i + 1] == 'B')
            {
                ans = ans | str[i + 2] - '0';
                /* code */
            }
            if (str[i + 1] == 'C')
            {
                ans = ans ^ str[i + 2] - '0';
                /* code */
            }
        }
    }

    return ans;
}
bool validpass(string str)
{
    // – At least 4 characters
    // – At least one numeric digit
    // – At Least one Capital Letter
    // – Must not have space or slash (/)
    // – Starting character must not be a number
    if (str.length() < 4)
        return 0;
    if (str[0] - '0' >= 0 && str[0] - '0' <= 9)
    {
        return 0;
        /* code */
    }
    int i = 0, capital = 0, num = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        if (str[i] - '0' >= 0 && str[i] - '0' <= 9)
        {
            num++;
        }
        if (str[i] == ' ' || str[i] == '/')
        {
            return 0;
        }
        i++;
    }
    if (capital < 1)
        return 0;
    if (num < 1)
        return 0;

    return 1;
}

int sumdivide(int n, int m)
{
    int sumdiv = 0, sumndiv = 0;
    for (int i = 0; i <= m; i++)
    {
        if (i % n == 0)
        {
            sumdiv += i;
        }
        else
        {
            sumndiv += i;
        }
        /* code */
    }
    return abs(sumdiv - sumndiv);
}
int largesmallsum(int arr[], int n)
{
    int maxeven = arr[0], secondmax = INT_MIN;
    int minodd = arr[1], secondmin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > maxeven)
            {
                secondmax = maxeven;
                maxeven = arr[i];
            }
            if (arr[i] > secondmax && arr[i] != maxeven)
            {
                secondmax = arr[i];
            }
        }
        if (i % 2 != 0)
        {
            if (arr[i] < minodd)
            {
                secondmin = minodd;
                minodd = arr[i];
            }
            if (arr[i] < secondmin && arr[i] != minodd)
            {
                secondmin = arr[i];
            }
        }

        /* code */
    }
    return secondmax + secondmin;
}
int productsmallestpair(int sum, int arr[],int n)
{
    // int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr+n);
    if(arr[0]+arr[1]<sum)return arr[0]*arr[1];
    return -1;
    // int product;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         sum = min(sum, arr[i] + arr[j]);
    //         if (arr[i] + arr[j] == sum)
    //         {
    //             product = arr[i] * arr[j];
    //         }
    //         /* code */
    //     }

    //     /* code */
    // }
    // return product;
}


// string nnotations(int num , int div){
//     // char modmap[div];
//     char ch = 'A';
//     for (int i = 0; i < div; i++)
//     {
        
//         if(i<=9){
//             modmap[i]='0'+i ;
//         }
//         else{
//             modmap[i] = ch++;
//         }
//         /* code */
//     }
//     int r;
//     string ans= "";
//     while (num!=0)
//     {
//         r=num%div;
//         num/=div;
//         ans =  modmap[r]+ans;
//         /* code */
//     }
    
//     return ans;
// }
string moveit(string str){
    string ans ="";
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='-'){
            ans = str[i] + ans;
        }
        else{
            ans = ans+str[i];
        }
        /* code */
    }
    return ans;
}

int countcarry(int n , int m ){
    int count=0 , r1,r2;
    while(n!=0 && m!=0){
         r1=n%10;
         r2= m%10;
         n/=10;
        m/=10;
        if((r1+r2)>=10){
            count++;
            m++;
        }
        
        
    }
    return count;
}
string replace(string str , char ch1 ,char ch2){
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==ch1)
        {
            ans+=ch2;
            /* code */
        }else if(str[i]==ch2){
            ans+=ch1;
        }else{
            ans+=str[i];
        }
        
        /* code */
    }
    return ans;
}
int countexp(int n){
    int count=0;
    while(n!=0 && n%2==0){
        n/=2;
        count++;
    }
    return count;
}
int maxexp(int n , int m){
    int maxexp = INT_MIN , ans,count=0;
    for(int i = n ;i<=m ; i++){
       int temp = countexp(i);
       if(temp>maxexp){
        maxexp = temp;
        ans=i;
       }
    
    }
    return ans;
}

int calculate(int n , int m ){
    int sum=0;
    for(int i = n; i<=m;i++){
        if( i%3==0 && i%5==0){
            sum+=i;
        }
    }
    return sum;
}
vector<int> evensort(int arr[] , int n){
    vector<int>even;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            even.push_back(arr[i]);
        }
        /* code */
    }
    sort(even.begin() , even.end());
    return even;
}
vector<int> oddsort(int arr[] , int n){
    vector<int>odd;
    for (int i = 0; i < n; i++)
    {
        if(i%2!=0){
            odd.push_back(arr[i]);
        }
        /* code */
    }
    sort(odd.begin() , odd.end());
    return odd;
}
int sumofsecondlast(vector<int>arr ,vector<int>arr2){
    
    return arr[arr.size()-2]+arr2[arr2.size()-2];
}
bool autobn(string str){
    unordered_map<int,int> freq;
    bool isauto = true;
    for (int i = 0; i < str.length(); i++)
    {
        int a = str[i]-'0';
        freq[a]++;
        /* code */
    }
    for (int i = 0; i < str.length(); i++)
    {
        int a= str[i]-'0';
        if(a!=freq[i]){
            isauto =false;
        }
        /* code */
    }
    return isauto;
}
int main()
{
    cout<<autobn("1210");
//     int arr[] = {1,2,4,4,2,5};
//   cout<<sumofsecondlast(evensort(arr,7),oddsort(arr,7));

    // cout<<calculate(12,50);

    // cout<<maxexp(7,12);

    // cout<<replace("apple" , 'a' , 'p');

    // cout<<countcarry(451,349);
    // cout<<countcarry(1451,9349);
    


    // cout<<moveit("Move-Hyphens-to-Front");

    // cout<<nnotations(718,12);

    // int arr[] = {5 ,2 ,4 ,3 ,9 ,7, 1};
    // cout<<productsmallestpair(9,arr,7);
        // int arr[] = {3, 2, 1, 7, 5 ,4};
        // cout<<largesmallsum(arr , 6);

        // cout<<sumdivide(4,20);

        // string pass = "aA1_67";
        // cout<<validpass(pass);

        // string str = "1C0C1C1A0B1A1A0C1";
        // cout<<stringoperation(str);

        // vector<int> arr = {2,8,3, 5, 7, 4, 1, 2};
        // cout<<ratfood(7,2,arr);
        return 0;
}
