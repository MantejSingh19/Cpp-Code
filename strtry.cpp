#include<iostream>
#include<string>
using namespace std;
int main()
{
 int i=0,j=0;
        while(i<s.length()-1)
        {

            if(s[i]==s[i+1])
            {
                s.erase(i,2);
                i=0;
            }

            else{
                i++;
            }


        }

        return s;

}
