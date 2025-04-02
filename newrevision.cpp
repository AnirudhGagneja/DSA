#include <iostream>
using namespace std;

void func(int count){
    int a=1;
    char ch = 'A';
    for (int i = 0; i <count; i++)
    {
        int b=1;
        for (int k = count /*i+1*/; k >i; k--)
        {
            //8th pattern
            // cout<<k;
            
            //11th pattern half 
            cout<<" ";
        }
        cout<<'*';
        for (int l = 0; l < ; l++)
        {
            /* code */
        }
        
        for (int j = 0; j <=i; j++)
        {
            //1st pattern
            // cout<<j+1<<" ";
            

            //2nd pattern
            // cout<<a++<<" ";


            //3rd pattern
            // cout<<ch++<<" ";

            //4th pattern
            // cout<<"*";


            //5th pattern
            // cout<<i+1<<" ";


            //6th pattern
            // cout<<ch<<" ";

            //7th pattern
            // cout<<b++<<" ";

            //8th in negative


            //9th pattern / floyds triangle pattern
            // cout<<a++<<" ";
            // cout<<ch++<< " ";

            //10th half part
            // cout<<" ";
            
            //11th pattern half
            // cout<<j+1;


            //12th hollow diamond 

        }
       
        //negative loop
        
       
        //extra loop for half part
        
        for (int  q = i; q >0; q--)
        {

            //10th pattern
            // cout<<i+1;
            
            //11th half
            //  cout<<q;
        }


        // ch++;
        cout<<endl;
        /* code */
    }
    
}
int main() {
    func(4);
    return 0;
}

/*
    *
   * *
  *   *
 *     *
  *   *
   * *
    *
*/