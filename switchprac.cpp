#include<iostream>
using namespace std;
int main()
{
    int i=5;
    switch(i)
    {
    case 1 ... 2 :
        cout<<"hii";
        break;
    case 3 ... 6 :
        cout<<"hello";
        break;
    }
}
