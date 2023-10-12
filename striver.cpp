#include<bits/stdc++.h>
using namespace std;
int sub(int i,int arr[],vector<int> &vect)
{

    int n=3;
    if(i==n)
    {
    int sizee=vect.size();
    for(int i=0;i<sizee;i++)
    {
        cout<<vect[i];
    }
    cout<<endl;
      return 0;
    }
    vect.push_back(arr[i]);
    sub(i+1,arr,vect);
    vect.pop_back();
    sub(i+1,arr,vect);
}
int main()
{
    int arr[]={1,2,3};
     vector<int> vect;
    sub(0,arr,vect);
}
