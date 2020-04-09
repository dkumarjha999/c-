#include<iostream>
using namespace std;
class date
{
int d,m,y;
public:
void getdate(int day,int month,int year)
{
d=day;
m=month;
y=year;
}
void leap(void)
{
if((y%400==0)||((y%4==0)&&(y%100!=0)))
{
cout<<"year"<< y<<"\n"<<" is leap "<<"\n";
}
else
{
cout<<"year"<<y<<"\n""is not leap"<<"\n";
}
}void dateval(void)
{
if(((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))&&((d<=31)&&(d>0)&&(y>0)))
{
cout<<"date is valid"<<"\n"<<d <<m <<y <<"\n";
}
 else if(((m==4)||(m==6)||(m==8)||(m==10))&&((d<=30)&&(d>0)&&(y>0)))
{
cout<<"date is valid<<"<<"\n"<<d <<m <<y <<"\n";
}
else if((m==2)&&((d<=28)&&(d>0)&&(y>0)))
{
cout<<"date is valid"<<"\n"<<d <<m <<y <<"\n";
}
else if((m==2)&&((d<=29)&&(d>0))&&((y%400==0)||((y%4==0)&&(y%100!=0)))&&(y>0))
{
cout<<"date is valid"<<"\n"<<d<<"/" <<m<<"/" <<y <<"\n";
}
else
{
cout<<"date is not valid"<<"\n"<<d<<"/" <<m<<"/" <<y <<"\n";
}
}
void nextdate(void)
{
{
if(((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10))&&(d==31))
{
m=m+1;
d=1;
}
if((m==12)&&(d==31))
{
d=1;
m=1;
y=y+1;
}
else
{d=d+1;}
if(((m==4)||(m==6)||(m==9)||(m==11))&&(d==30))
{
m=m+1;
d=1;
}
if(((m==2)&&(d==28))||((m==2)&&(d==29)&&((y%400==0)||((y%4==0)&&(y%100!=0)))))
{
m=m+1;
d=1;
}

cout<<" "<<"\n"<<d<<m<<y<<"\n";
}
}
};
int main()
{
date a;
int day,month,year,ch;
cout<<"enter day month year "<<"\n"<<"\n";


cin>>day>>month>>year;

a.getdate(day,month,year);
do
{
cout<<"enter 1 for leap"<<"\n"<<"enter 2 for check valid date"<<"\n"<<"enter 3 for next date"<<"\n"<<"enter 4 for quit"<<"\n";
cout<<"enter your choice"<<"\n";
cin>>ch;
switch(ch)
{
case 1:
{
a.leap();
};break;
case 2:
{
a.dateval();
};break;
case 3:
{
a.dateval();
cout<<"day to new date is"<<"\n";
a.nextdate();
};break;
default:
{
cout<<"invalid choice"<<"\n";
}
}
}
while(ch<4)
;
}

