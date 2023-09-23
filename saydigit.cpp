#include<iostream>
using namespace std;
int say(int num,int dig,string arr[]);

int main()
{
  int dig=402;
  string arr[10]={"zero","one","two","three","four","five"};
  say(dig,dig%10,arr);


}
int say(int num,int dig,string arr[])
{
 if(num==0)
 {
     return 0;
 }
 num=num/10;
 say(num,num%10,arr);
cout<<arr[dig]<<endl;
return 0;

}
