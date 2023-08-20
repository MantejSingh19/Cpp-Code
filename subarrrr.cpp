#include<iostream>
using namespace std;
int main()
{
    int i,j,sum=0,num,n;
    cin>>n;
     int arr[n];
    cin>>num;
     for(i=0;i<n;i++)
    {

       cin>>arr[i];

    }

    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
           sum=sum+arr[j];
           if(sum==num)
           {
              int k=j;
              int summ=0;
               while(summ!=sum)
               {
                   summ=summ+arr[j];
                   j--;

               }
               cout<<j+1<<"TO"<<k;
           }
        }
    }
}
