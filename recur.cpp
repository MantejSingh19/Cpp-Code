#include<iostream>
using namespace std;

    int factorial(int);

int main()
{
     int i,j,a=10;

    int ans=factorial(a);
    cout<<ans;
}
 int factorial(int a)
    {
        if(a==1)
        {
            return 1;

        }
        int fact=a*factorial(a-1);
        return fact;

    }

