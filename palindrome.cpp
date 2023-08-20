#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
char arr[n];
char crr[n];
int i;
for(i=0;i<n-1;i++)
{
    cin>>arr[i];
}
i=0;
int j=n-2;
while(arr[i]!='\0')
{
    crr[i]=arr[j];
    j--;
    i++;
}
int flag=0;
for(i=0;i<n;i++)
{
    if(arr[i]==crr[i])
    {
        flag++;
    }

}

if(flag==n)
{
    cout<<"Palindrome";
}
else{
    cout<<"Not palindrome";
}


}
