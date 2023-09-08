#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1;
   string s2;
   cin>>s1;
   cin>>s2;
   int arr[26]={0};
   int arr2[26]={0};
   int temp,temp2,i,j,flag=1,k;
   k=s2.length();
   cout<<k;
    for(i=0;i<26;i++)
   {
      arr[i]=0;

   }
    for(i=0;i<26;i++)
   {
      arr2[i]=0;

   }
   for(i=0;i<s2.length();i++)
   {
      temp=s2[i]-'a';
      arr[temp]++;

   }
   for(i=0;i<s1.length()-1;i++)
   {
       for(i=0;i<26;i++)
   {
      arr2[i]=0;

   }
       flag=1;

       for(j=i;j<s2.length()+i;j++)
       {
           temp2=s1[j]-'a';
           arr2[temp2]++;

       }
       for(i=0;i<26;i++)
       {

            if(arr[i]!=arr2[i])
            {
               flag=0;
            }

       }
       if(flag==1)
            {

                cout<<"True";
                 break;
            }

   }
   if(flag==0)
   {

       cout<<"False";
   }

}
