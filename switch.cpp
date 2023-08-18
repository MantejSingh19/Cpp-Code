#include<iostream>
using namespace std;
int main()
{
    int n,b;
    cin>>n;
    switch(n)
    {
        case (n>60) :
        {
            cout<<"old age";
            break;
        }
        case (n>30):
        {
            cout<<"middle age";
            break;
        }
                case (n>19):
        {
            cout<<"adult";
            break;
        }
                case (n>3):
        {
            cout<<"teenage";
            break;
        }
                case (n>0):
        {
            cout<<"infant";
            break;
        }
        default:
            {
                cout<<"Please enter valid input";
            }

    }
}



a=10,b=20;
b=b-a//b=10
a=a+b;//a=20
