#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    int i;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
    int i;
    vector<int> vect;
    int ele;
    for(i=0;i<5;i++)
    {
        cin>>ele;
        vect.push_back(ele);
    }
     display(vect);
    vect.pop_back();
    display(vect);
    vector<int> :: iterator iter=vect.begin();
    vect.insert(iter+2,5,50);
     display(vect);
}
