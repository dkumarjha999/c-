#include<iostream>
using namespace std;
 inline void max(int a,int b,int c)
{
if((a>b)&&(b>c))
cout<<a;
if((b>a)&&(b>c))
cout<<b;
else
cout<<c;
}
int main()
{
int a,b,c;
cout<<"enter three value";
cin>>a>>b>>c;
cout<<"max is";
max(a,b,c);
return(0);
}
