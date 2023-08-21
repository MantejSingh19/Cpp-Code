#include<iostream>
using namespace std;
int math(string str,int a,int b)
{
   if(str=="add")
      {
        return (a+b);
      }
        if(str=="sub")
      {
        return (a-b);
      }
   if(str=="mul")
      {
        return (a*b);
      }

    if(str=="div")
      {
        return (a/b);
      }
}

int main()
{
    int a,b,ttl;
    string str;
    cin>>str;
    cin>>a>>b;
    ttl=math(str,a,b);
    cout<<ttl;
}

