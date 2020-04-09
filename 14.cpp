#include<iostream>

using namespace std;

class dist
{
int ft;
float in;
public:
dist()
{ft=0; in=0;}

dist(float x)
{
cout<<" entered distance in metre = "<<x<<"\n\n";
dist m;
m.in=x*39.37;
if(m.in>=12)
{
m.ft=(m.in)/12;
m.in=(m.in)-(m.ft)*12;
}
cout<<" metre to ft , inch \n\n";
cout<<"distance in ft , inch = "<<m.ft<<" , "<<m.in<<"\n\n";
}
dist getdist()
{
dist d;
cout<<" enter distance in feet and inch\n\n";
cin>>d.ft>>d.in;
return d;
}

friend void operator +(dist m);
}d1,d2,d3; 

void operator +(dist n)
{

float z;
z=(((n.ft)*12+n.in)/39.37);

cout<<" distance in ft and inches is = "<<n.ft<<" , "<<n.in<<"\n";
cout<<" converted distance in metre = "<<z<<"\n\n";

}

int main()
{
float mtr1;

cout<<" enter distance in metre\n";
cin>>mtr1;
d1=mtr1;

d3=d2.getdist();
+d3;


return 0;

}





