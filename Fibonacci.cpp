#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}
int main()
{

    for (int i = 0; i < 10; i++)
    {
        cout << fib(i) << endl;
    }

    return 0;
}