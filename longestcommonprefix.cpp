#include <iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
 

string longestcommonprefix(vector<string>arr){
    int count = arr.size();
    int a=0 , b=count-1;
    string prefix = "";
    sort(arr.begin() , arr.end());
        
    string s1=arr[a] , s2= arr[b];
    for (int i = 0; i < min(s1.length(),s2.length()); i++)
    {
        if(s1[i]!=s2[i]){
            return prefix;
        }
        prefix+=s1[i];
        /* code */
    }
    
    
    
    return prefix;
}
int main() {
    vector<string>arr = { "hello" , "help" , "hell" , "helium" , "helozan"};


    string ans = longestcommonprefix(arr);
    cout<<ans<<endl;
    return 0;
}