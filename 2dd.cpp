#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1;
   int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   for(i=0;i<4;i++)
   {
       if(k%2!=0)
        {
            for(j=0;j<3;j++)
       {
           cout<<arr[j][i];
       }
       cout<<endl;
        }
       else{

        for(j=2;j>=0;j--)
       {
           cout<<arr[j][i];
       }
       cout<<endl;
       }
       k++;



   }

}
