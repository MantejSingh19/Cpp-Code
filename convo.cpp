#include<iostream>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dec;
    cin>>dec;
    int rem,i=0,tw=1,ls,j,len;
    string ans;
    while(dec>0)
    {
        ls=dec%16;
        dec=dec/16;
        if(ls>=0 && ls<=9)
        {
            ans=ans+to_string(ls);

        }
        else if(ls>=10 && ls<=15)
        {
            char st=ls+'A'-10;
             ans.push_back(st);
        }


    }
   j=ans.size();
   while(j>=0)
   {
       cout<<ans[j];
       j--;

   }




}
