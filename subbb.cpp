#include<iostream>
using namespace std;
int main()
{
   int arr[5]={1,6,-5,5,-2};
   int i,j,k=0,l=0,summ=0,cnt=0;;
   for(i=0;i<5;i++)
   {
       summ=0;
       for(j=i;j<5;j++)
       {
          summ=summ+arr[j];
          k++;
          if(summ>l)
          {
              l=summ;
              cnt=k;

          }
       }
   }
   cout<<l<<endl;
   cout<<cnt;

}
