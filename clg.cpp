#include<iostream>
using namespace std;
int main()
{
   int marks;
   cin>>marks;
  if(marks>=90 && marks<=100)
  {
      cout<<'A';
  }
  if(marks>=80 && marks<90)
  {
      cout<<'B';
  }
  if(marks>=70 && marks<80)
  {
      cout<<'C';
  }
  if(marks>=60 && marks<70)
  {
      cout<<'D';
  }
  if(marks>=50 && marks<60)
  {
      cout<<'E';
  }
  if(marks<50){
    cout<<"Fail";
  }
}

