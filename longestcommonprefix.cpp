#include <iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
 


}
string longestcommonprefix(vector<string>arr){
    int count = arr.size();
    int a=0 , b=count=1;
    string prefix = "";
    sortarr(arr.begin() , arr.end());
    for (int i = 0; i < count; i++)
    {
        if()
        /* code */
    }
    
    
    string s1=arr[a] , s2= arr[b];
    int j =0;
    while (s1[j]==s2[j])
    {
        prefix+=s1[j++];
        /* code */
    }
    
    
    return prefix;
}
int main() {
    vector<string>arr = { "flower" , "flu" , "fly" , "float" , "flying"};
    int count=arr.size();
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    sort(arr.begin(),arr.end());
    string s1= longestcommonprefix(arr);
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    for (int i = 0; i < s1.length(); i++)
    {
        cout<<s1[i];
        /* code */
    }
    cout<<endl;
    return 0;
}