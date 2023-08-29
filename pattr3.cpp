#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
char ch='A';
cout<<'A'<<endl;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i+1;j++)
        {
          cout<<ch;
          ch++;
        }
        ch--;

        cout<<endl;


    }
}
