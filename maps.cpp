#include<iostream>
#include<map>
using namespace std;
int main()
{
    int i;
    map<string,int> marks;
    marks["mantej"]=99;
    marks["tere"]=65;
    marks["mere"]=76;
    marks.insert({"hann",56});
    map<string,int> :: iterator itr;
    for(itr=marks.begin();itr!=marks.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
}
