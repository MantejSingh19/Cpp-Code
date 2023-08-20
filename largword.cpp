#include<iostream>
using namespace std;
int main()
{
    char arr[50]="hii kya haal sahibhaiii tera";
    int i=0,countt=0,maxx=INT_MIN,maxst,st;

    while(arr[i]!='\0')
    {
        if(arr[i]==' ')
        {
            countt=0;
            maxst=st;
            st=i+1;
        }
        else{
            countt++;
        }
       if(countt>maxx)
       {
           maxx=countt;
       }
       i++;
        }
        cout<<maxx;
        for(i=0;i<maxx;i++)
        {
            cout<<arr[i+maxst];
        }
}
