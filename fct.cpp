#include<iostream>
using namespace std;

    int power(int n,int pw)
    {
        if(pw==1)
        {
            return n;
        }
        int ans=n*power(n,pw-1);
        return ans;
    }

    int main()
    {
        int ans;
          int n=2,pw=;
        ans=power(n,pw);
        cout<<ans;
    }

