#include<iostream>
using namespace std;
int main()
{
    int arr[5]={3,5,1,2,4};
    int i,j,temp;
    for(i=1;i<5;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;


    }
    for(i=0;i<5;i++)
    {

        cout<<arr[i];
    }
}
