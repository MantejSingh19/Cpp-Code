#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rev(string &str)
{
    static int i=0;

    if(i>=str.size()/2)
    {
        return 0;
    }
    swap(str[i],str[str.size()-i-1]);
    i++;
    rev(str);
}
int main()
{
  string name="mantejss";
  rev(name);
  cout<<name;

}
