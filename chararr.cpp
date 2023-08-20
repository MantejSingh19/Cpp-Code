#include<iostream>
using namespace std;
int main()
{
    int i,x;
    char arr[10];
    int freq[26];
    for(i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<7;i++)
    {
        x=arr[i]-'a';
        freq[x]+=1;
    }
    for(i=0;i<26;i++)
    {
        cout<<freq[i]<<endl;
    }
}
