#include<iostream>
using namespace std;
int main()
{

    int arr1[4]={1,3,5,8};
    int arr2[3]={2,4,7};

    int arrm[7];
    int i,l,k;
    l=0;
    k=0;
    for(i=0;i<7;i++)
    {

        if(arr1[l]<arr2[k])
        {
            if(l>3){
                 arrm[i]=arr2[k];

            }
             if(k>2){
                 arrm[i]=arr1[l];

            }
            else if(1){
            arrm[i]=arr1[l];
            l++;}
        }
        else if(arr1[l]>arr2[k])
        {
            if(k>2){
                 arrm[i]=arr1[l];
            }

            if(l>3){
                 arrm[i]=arr2[k];
            }
            else if(1){
            arrm[i]=arr2[k];
            k++;
            }

        }

    }
    for(i=0;i<7;i++)
    {

        cout<<arrm[i];
    }


}
