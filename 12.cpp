#include<iostream>
using namespace std;
class dist
{
float in,ft;
public:
void getdist()
{
cout<<"enter distance in ft and inch\n\n";
cin>>ft>>in;
}
void show()
{
cout<<" distance in feet and inch = "<<ft<<"   "<<in<<"\n\n";
}
dist operator +(dist d)
{
dist t;
t.in=in+d.in;
if(t.in>=12)
{
t.ft+=1;
t.in=t.in-12;
}
t.ft+=ft+d.ft;
cout<<" sum of ";
return t;

}
friend dist operator <(dist m,dist n);
};

dist operator <(dist x, dist y)
{
dist z;

cout<<"greater distance of two distances \n\n";
if(((x.ft)*12+x.in)<((y.ft)*12+y.in))
{return y;}
else 
{return x;}

}

int main()
{
dist d1,d2,d3,d4;

d1.getdist();
d2.getdist();

d1.show();
d2.show();

d3=(d1+d2);

d3.show();

d4=d1<d2;

d4.show();

return 0;
}


