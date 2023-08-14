#include<iostream>
using namespace std;
int main()
{
    int n,i,j,flag=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
          if(arr[i]==arr[j])
             {
                    cout<<"index "<<i;
                    flag=1;
                    break;

             }
      }
      if(flag==1)
      {
          break;
      }

    }
}
