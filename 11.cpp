#include<iostream>
using namespace std;
class date
{
int d,m,y;
public: void getdate()
{
cout<<"enter day month and year\n";
cin>>d>>m>>y;
}
void show()
{
cout<<" date is = "<<d<<"/"<<m<<"/"<<y<<"\n";
}
date operator + (int x)
{
date t;
t.d=d+x;
if((t.d>31)&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)))
{
t.m=m+1;
t.d=t.d-31;
t.y=y;
}
else if((t.d>30)&&((m==4)||(m==6)||(m==9)||(m==11)))
{
t.m=m+1;
t.d=t.d-30;
t.y=y;
}
else if((t.d>29)&&(m==2)&&((y%400==0)||((y%4==0)&&(y%100!=0))))
{
t.m=m+1;
t.d=t.d-29;
t.y=y;
}
else if((t.d>28)&&(m==2))
{
t.m=m+1;
t.d=t.d-28;
t.y=y;					//  okk well done bro
}
else if((t.d>31)&&(m==12))
{
t.m=1;
t.d=t.d-31;
t.y=y+1;
}
else
{
t.m=m;
t.y=y;
}
return t;
}

};

int main()
{
date d1,d2;
int p;
d1.getdate();
d1.show();

cout<<"enter a day\n";
cin>>p;
d2=(d1+p);
cout<<"new ";
d2.show();

return 0;
}

