#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n)
{
    // bool isprime=true;
    if (n == 0 || n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int sumdiv3(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
            cout << i << " ";
        }
    }
    return sum;
}
int fact(int n)
{
    int fac = 1;
    if (n == 0 || n == 1)
    {
        fac = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fac = fac * i;
        }
    }
    return fac;
}
void squarepattern(int count)
{

    int a = 1;
    char ch = 'A';
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }

    // for (int i = 0; i <count; i++)
    // {
    //    for (int j = 1; j <=count; j++)
    //    {
    //     cout<<j;
    //    }
    //    cout<<endl;
    // }
    // for (int i = 0; i <count; i++)
    // {
    //     char ch='a';
    //    for (int j = 1; j <=count; j++)
    //    {
    //     cout<<ch++;
    //    }
    //    cout<<endl;
    // }
}

void trianglepattern(int count)
{
    char ch = 'a';
    for (int i = 0; i < count; i++)
    {
        int a = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << a++;
        }
        ch++;
        cout << endl;
    }
    //  for (int i = 0; i <count; i++)
    // {

    //     for(int j=0;j<=i;j++){
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }
}
void revtripattern(int count)
{
    int a = 1;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a++;
        }
        // for (int j = i; j >0; j--)
        // {
        //     cout<<j;
        // }

        cout << endl;
    }
}
void invertedtriangle(int count)
{
    // for(int i = 0 ; i<count ; i++){

    //     for (int j = 0 ; j<i ; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0 ; j<count-i;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }
    char ch = 'A';
    for (int i = 0; i < count; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < count - i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}
void pyramidpattern(int count)
{
    for (int i = 0; i < count; i++)
    {
        int a = 1;
        int b = i;

        // spaces
        for (int j = 0; j < count - i; j++)
        {
            cout << " ";
        }

        // ntri1
        for (int j = 0; j <= i; j++)
        {
            cout << a++;
        }

        // tri2
        for (int k = 0; k < i; k++)
        {
            cout << b--;
        }
        cout << endl;
    }
}
void hollowdiamond(int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            cout << " ";
        }
        cout << '*';
        if (i != 0)
        {
            for (int j = 2 * i - 1; j > 0; j--)
            {
                cout << " ";
            }

            cout << '*';
        }

        cout << endl;
    }
    for (int i = 0; i < count - 1; i++)
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // stars
        cout << '*';
        if (i != count - 2)
        {
            for (int j = 0; j < 2 * (count - i) - 5; j++)
            {
                cout << " ";
            }
            cout << '*';
        }
        cout << endl;
    }
}
//    *
//   * *
//  *   *
// * * * *
void startriangle(int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            cout << " ";
            /* code */
        }
        cout << "*";
        if (i == count - 1)
        {
            cout << " ";
            for (int j = 0; j < count - 1; j++)
            {
                cout << "*" << " ";
                /* code */
            }

            /* code */
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
                /* code */
            }
            if (i != 0)
            {
                cout << "*";
            }
        }

        cout << endl;

        /* code */
    }
}
int poweroftwo(int count){
    int ans=-1;
   \
    if (count>0 && (count&(count-1)==0))
    {
         ans=1;
        /* code */
    }
    
    return ans;
}
int main()
{
    int n = 15;
    for (int i = 0; i < n; i++)
    {
        if (prime(i))
        {
            cout<<i<<" ";
        }
    }
    // cout<<sumdiv3(n)<<endl;
    // cout<<fact(5)<<endl;
    // squarepattern(3);
    // trianglepattern(4);
    // revtripattern(4);
    // invertedtriangle(4);
    // pyramidpattern(4);
    // hollowdiamond(4);
    // startriangle(7);
    // cout<<poweroftwo(7)<<endl;

    return 0;
}
