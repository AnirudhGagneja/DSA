#include <iostream>
using namespace std;

int main() {
    int n =123;
    int ans=0;
    while(n!=0){
        int r = n%10;
        ans = ans*10 + r ;
        n/=10;
    }
    printf("the reverse of the number is %d",ans);
    return 0;
}