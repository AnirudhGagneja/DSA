#include <iostream>
#include<vector>
using namespace std;
//k is window size
vector<int> swm(vector<int>arr,int k){
int count = arr.size();
vector<int>ans;
for (int i = 0; i <=count-k; i++)
{
    int maxval = INT_MIN;
    for(int j =i;j<i+k;j++){
        maxval=max(maxval,arr[j]);
    }
    ans.push_back(maxval);
    /* code */
}
return ans;
}
vector<int> swmdeque(vector<int>arr,int k){
    
}



int main() {
    vector<int>arr = {1,2,-2,5,3,-1,9,-5,13};
    vector<int>ans = swm(arr,3);
    for(auto val : ans){
        cout<<val<<" ";
    }
    return 0;
}