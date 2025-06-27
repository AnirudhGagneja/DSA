#include <iostream>
#include <vector>
using namespace std;
void display(int n , int m ,vector<vector<int>> &arr ){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
            /* code */
        }
        cout<<endl;
        /* code */
    }
    cout<<endl;
    
}
bool issafe(int a,int b , int last_idx ,int last_col){
    if (a<=last_idx && b<=last_col)
    {
        return true;
        /* code */
    }
    else{
        return false;
    }
    
}
void solve(int s_row,int s_col, int e_row, int e_col,vector<vector<int>>&rat){
if(s_row==e_row && s_col==e_col){
    display(e_row,e_col,rat);
    return;
}
else{
    int next_row=s_row;
    int next_col = s_col +1;

    if (issafe(next_row,next_col,e_row,e_col)==true)
    {
        rat[next_row][next_col] = 1; 
        solve(next_row,next_col,e_row,e_col,rat);
        /* code */
    }
    rat[next_row][next_col] = 0;
}
}
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> rat(n,vector<int>(m,0));
    rat[0][0]=1;
    solve(0,0,n-1,m-1,rat);
    return 0;
}

// #include <iostream>
// #include<vector>
// using namespace std;  
// bool issafe(int next_row,int next_col,int e_row,int e_col)
// {
//   if(next_row<=e_row && next_col<=e_col)
//   {
//     return true;
//   }
//   else 
//   {
//     return false;
//   }
// }
// void display(int e_row,int e_col,vector<vector<int>>& rat)
// {
//   int i,j; 
//   for(i=0;i<=e_row;i++)
//   {
//     for(j=0;j<=e_col;j++)
//     {
//       cout<<rat[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   cout<<endl;
// }
// void solve(int s_row,int s_col,int e_row,int e_col,vector<vector<int>>& rat)
// {
//   if(s_row==e_row && s_col==e_col)
//   {
//     display(e_row,e_col,rat);  
//     return;
//   }
//   else 
//   {
//     //forward 
//     int next_row;
//     int next_col;
//     next_row = s_row; //next_row = 0 
//     next_col = s_col+1; //next_col = 1 
//     if(issafe(next_row,next_col,e_row,e_col) == true) 
//     {
//       rat[next_row][next_col] = 1; 
//       solve(next_row,next_col,e_row,e_col,rat);
//     }
//     //downward  
//     next_row = s_row+1; //next_row = 0 
//     next_col = s_col; //next_col = 1 
//     if(issafe(next_row,next_col,e_row,e_col) == true) 
//     {
//       rat[next_row][next_col] = 1; 
//       solve(next_row,next_col,e_row,e_col,rat);
//     }
//     //assigning zero 
//     rat[s_row][s_col] = 0;
    
//   }
// }
// int main() 
// {
//     int n,m; 
//     cin>>n>>m; //n=3 m=3 
//     vector<vector<int>> rat(n,vector<int>(m,0)); 
//     rat[0][0] = 1;
//     solve(0,0,n-1,m-1,rat); //Function calling
//     return 0;
// }
    