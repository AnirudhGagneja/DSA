#include <iostream>
using namespace std;

void squarepattern(int count){
    char ch='a';
    int a=1;
    for (int i = 0; i < count; i++)
    {
        
        for (int j = 0; j < count; j++)
        {
            cout<<a++<<" ";
            /* code */
        }
        cout<<endl;
        
        /* code */
    }
    
}
void alphabetpattern(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j =0 ;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
        for(int j=0;j<2*i-1;j++){
            
            if(i==2 && j==1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"*";
    }
        for(int j =0 ;j<n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
        /* code */
    }
    
}
void trianglepattern(int count){
    char ch='a';
    
    for (int i = 1; i <=count; i++)
    {
        int a=i+1;
        for (int  j = i; j >0; j--)
        {
           cout<<j;
        }
        // ch++;
        cout<<endl;
        /* code */
    }
    
}
void invertedtri(int count){
    char ch='A';
    for (int i = 0; i < count; i++)
    {
        //spaces
        for (int j = 0; j <i; j++)
        {
            cout<<" ";
            /* code */
        }
        for (int j = 0; j < count-i; j++)
        {
            cout<<ch;
            /* code */
        }
        ch++;
        cout<<endl;
        
        /* code */
    }
    cout<<endl;
    
}
void pyrammidpattern(int count){
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-i-1; j++)
        {
            cout<<" ";
            /* code */
        }
        for (int j = 0; j <=i; j++)
        {
            cout<<j+1;
            /* code */
        }
        for (int j = i; j > 0; j--)
        {
            cout<<j;
            /* code */
        }
        
        /* code */
        cout<<endl;
    }
    
}
void hollowdiamond(int count){
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-i-1; j++)
        {
            cout<<" ";
            /* code */
        }
        cout<<"*";
        if(i!=0){
            
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<" ";
            /* code */
        }
        cout<<"*";
        }
        
        /* code */
        cout<<endl;
    }

    for (int i = 0; i < count-1; i++)
    {
        //spaces

        for (int j = 0; j <=i; j++)
        {
            cout<<" ";
            /* code */
        }
        //star
        cout<<"*";
        if(i!=count-2){
            
        for (int j = 0; j < 2*(count-i)-5 ; j++)
        {
            cout<<" ";
            /* code */
        }
        cout<<"*";
        }
        cout<<endl;
        /* code */
    }
    cout<<endl;
    
    
}
void hollowdiagram(int count){
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <count-i-1; j++)
        {
            cout<<" ";
            /* code */
        }
        cout<<"*";
        if(i!=0){
        for (int j = 0; j <2*i-1; j++)
        {
            cout<<" ";
            /* code */
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
        if(i!=count-2){
            for (int j = 0; j < 2*(count-i)-5; j++)
            {
                cout<<" ";
                /* code */
            }
            cout<<"*";
            
        }
        cout<<endl;
        /* code */
    }
    
    
}
void hollowsquare(int count){
    for (int i = 0; i < count; i++)
    {
        if(i==0 || i==count-1){
        for (int j = 0; j < count ; j++)
        {
            cout<<"* ";
            /* code */
        }
        }
        else{
            cout<<"*";
            for (int j = 1; j <=2*count-3; j++)
            {
                cout<<" ";
                /* code */
            }
            cout<<"*";
        }  
        
        /* code */
        cout<<endl;
    }
    
}

int main() {
    alphabetpattern(4);
    return 0;
}