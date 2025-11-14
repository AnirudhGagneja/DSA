#include <iostream>
using namespace std;

int main() {
    int num =5,result=1;
    for(int i =1;i<=num ;i++){
        if(i%2==0){
            result+=i;
        }else{
            result*=i;
        }
    }
    cout<<result;
    return 0;
}
