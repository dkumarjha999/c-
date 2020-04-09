#include<iostream>
using namespace std;
void swapval(int,int);
void swapad(int*,int*);
void swapref(int & ,int &);

int main()
{
int a,b;
cout<<"enter two number"<<"\n";
cin>>a>>b;
cout<<"number before swapping="<<a<<","<<b<<"\n";
swapval(a,b);
swapad(&a,&b);
swapref(a,b);
 
return(0);
}
void swapval(int m,int n)
{
int temp;
temp=m;
m=n;
n=temp;
cout<<"swapped value by call by value="<<m<<","<<n<<"\n";
}
void swapad(int *p,int *q)
{
int *temp;
temp=p;
p=q;
q=temp;
cout<<"swapped value by call by adress="<<*p<<","<<*q<<"\n";
}
void swapref(int &x,int &y)
{
int temp;
temp=x;
x=y;
y=temp;
cout<<"swapped value by call by reference="<<x<<","<<y<<"\n";
}
