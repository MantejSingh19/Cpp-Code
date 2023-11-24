#include<iostream>
using namespace std;
int main()
{

    int arr[6]={3,1,7,5,2,8};
    int no;
    for(int i=0;i<6;i++)
    {
        int minno=456677;
        for(int j=i;j<6;j++)
        {

            if(arr[j]<minno)
            {

                minno=arr[j];
                no=j;
            }
        }
        int save=arr[i];
        arr[i]=minno;
        arr[no]=save;

    }
    for(int j=0;j<6;j++)
        {

            cout<<arr[j]<<endl;
        }
}
