#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4,k=7,z=5,m,h,g;
    for(i=0;i<z;i++)
    {
        m=i;
        for(j=0;j<=i;j++)
        {
            cout<<2*i+1;
            if(i>0)
            {
                 i--;
            }


        }


        i=m;
        cout<<endl;
    }



    for(h=k;h>0;h=h-2)
    {

        for(g=h;g>0;g--)
        {
           if(g%2!=0)
           {
               cout<<g;
           }
        }

        cout<<endl;
}

}
