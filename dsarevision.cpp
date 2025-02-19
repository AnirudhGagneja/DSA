#include <iostream>
#include <vector>
using namespace std;

double power ( double x , int n){
long bf = n ;
if(x==0)return 0.0;
if(n==0) return 1.0;
if(x==1)return 1.0;
if(x==-1 && n%2==0)return 1.0;
if(x==-1 && n%2!=0)return -1.0;
double ans=1;
if(bf<0){
    x=1/x;
    bf=-bf;
}
while (bf!=0)
{
    if (bf%2==1)
    {
        ans*=x;
        /* code */
    }
    x*=x;
    bf/=2;
    /* code */
}

return ans;
}
void productexceptself(vector <int> &nums){
    vector <int> ans (nums.size() ,1);
    vector <int> prefix (nums.size() ,1);
    vector <int> suffix (nums.size() ,1);

    int count = nums.size();
    prefix[0]=1;
    suffix[count-1]=1;
    for (int i = count-2; i >= 0 ; i--)
    {
        
            suffix[i] = suffix[i+1]*nums[i+1];
            /* code */
       
        /* code */
    }
    for (int i = 1; i < count; i++) 
    {
       
            prefix[i]= prefix[i-1] *nums[i-1];
        /* code */
    }
    
    
    for (int i = 0; i < count; i++)
    {
       
        
        ans[i] = prefix[i] * suffix[i];
        /* code */
    }
    for (int i = 0; i < count; i++)
    {
        cout<<ans[i]<<" ";
        /* code */
    }
    
}







int main() {

    vector <int> vec ={1,2,3,4};
    cout<<power(2,8)<<endl;
    productexceptself(vec);
        return 0;
}