#include<iostream>
using namespace std;
class bank
{
public:
static float r;
int x,ac;
char name[30];
float p,y,f,t;
void input()
{
cout<<" enter name, a/c no ,principal and year\n";
cin>>name>>ac>>p>>y;
t=p;
if((p>0)&&(y>0))
x=1;
else
x=0;
}
static float interest( float& yr,float& pr)
{
while(yr>0)
{
pr=((pr*r)/100)+pr;
yr--;
return pr;
}
}
const void disp(float itr)
{
cout<<" starting account balance = "<<t<<"\n\n";
cout<<" final account balance = "<<itr<<"\n\n";
}
void show()
{
cout<<" account holder name = "<<name<<"\n account number a/c = "<<ac<<"\n";
}
};
float bank::r=4.5;
int main()
{
int n;
cout<<"enter number of customers\n";
cin>>n;
bank b[n];
for(int i=0;i<n;i++)
{
b[i].input();
b[i].show();
if(b[i].x==1)
{
b[i].interest(b[i].y,b[i].p);
b[i].disp(b[i].p);
}
else
cout<<" Invalid input \n\n";
}
return 0;
}
