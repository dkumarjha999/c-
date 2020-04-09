#include<iostream>
using namespace std; // this is example of nesting of member function because in this program we have called max() function inside disp function.
class set
{ 
int m,n;
public:
void input(void);
void disp(void);
int max(void);
};

int set::max(void)
{
if(m>=n)
{
return(m);
}
else
{
return(n);
}
}
void set::input(void)
{
cout<<"enter two numbers "<<"\n";
cin>>m>>n;
}
void set::disp(void)
{
cout<<"maxm value is= "<< max()<<"\n";
}
int main()
{
set a;
a.input();
a.disp();
return(0);
}
