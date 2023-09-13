#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4]={-1,4,7,2};
   int tryy[4];
   int maxx,i,j,ele;
   tryy[0]=0;
   j=1;
   int sun=0;
   for(i=0;i<4;i++)
   {
    sun=sun+arr[i];
       tryy[j]=sun;
       j++;
   }
   for(i=1;i<=4;i++)
   {

       for(j=0;j<i;j++)
       {
          ele=tryy[i]-tryy[j];
          maxx=max(maxx,ele);
       }
   }
   cout<<maxx;



}
