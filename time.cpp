#include<iostream>
using namespace std;
int main()
{
   int n,i,j,maxx=INT_MIN,secmaxx=INT_MIN;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   //FIRST

   /*for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(arr[i]+arr[j]>maxx)
           {
               if(arr[i]==arr[j])
               {
                   continue;
               }
               maxx=arr[i]+arr[j];
           }
       }
   }
   cout<<maxx;*/

   //SECOND

   /* for(i=0;i<n;i++)
    {
        maxx=max(arr[i],maxx);
    }
    cout<<"fmax"<<maxx;
    for(i=0;i<n;i++)
    {
        int temp=INT_MIN;
        temp=max(arr[i],temp);
        if(temp==maxx)
        {
            continue;
        }
        else{
            secmaxx=max(secmaxx,temp);
        }

    }
    cout<<"secmax"<<secmaxx<<endl;
    cout<<maxx+secmaxx;*/

    //THIRD

    /*int z;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                z=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=z;
            }
        }
    }
    cout<<arr[n-1]+arr[n-2];*/
}
























