#include<iostream>
using namespace std;
class date
{
int d,m,y;
public:
void getdate(int day,int mon,int yr)
{
d=day;
m=mon;
y=yr;
}
void dispdate(void)
{
cout<<"entered date is"<<"\n"<<d<<"/"<<m<<"/"<<y<<"\n";
}
void leap(void)
{
if((y%400==0)||((y%100!=0)&&(y%4==0)))
{cout<<"year"<<y<<"is leap"<<"\n";
}

else
{cout<<"year"<<" "<<y<<" "<<"is not leap"<<"\n";}
}
void dateval(void)
{
if((d<=0)||(d>31)||((m<=0)||(m>12))||(y<=0))
{cout<<"date is invalid"<<"\n"<<d<<"/"<<m<<"/"<<y<<"\n";}
else if((d<=31)&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)))
{cout<<"date is valid"<<"\n"<<d<<"/"<<m<<"/"<<y<<"\n";}
else if((d<=30)&&((m==4)||(m==6)||(m==9)||(m==11)))
{cout<<"date is valid"<<"\n"<<d<<"/"<<m<<"/"<<y<<"\n";}
 else if(((d<=28)&&(m==2)))
{cout<<"date is valid"<<"\n"<<d<<"/"<<m<<"/"<<y<<"\n";}
else if((d<=29)&&(m==2)&&((y%400==0)||((y%100!=0)&&(y%4==0))))
{cout<<"date is valid"<<"\n"<<d<<"/"<<m<<"/"<<y<<"\n";}
else
{cout<<"date is invalid"<<"\n"<<d<<"/"<<m<<"/"<<y<<"\n";}
}
void nextdate(void)
{
if(((d>0)&&(d<32))&&((m>0)&&(m<13))&&(y>0))
{
if((d==31)&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)))
{d=1;m=m+1;}
else if((d==30)&&((m==4)||(m==6)||(m==9)||(m==11)))
{d=1;m=m+1;}
else if((d==29)&&(m==2)&&((y%400==0)||((y%100!=0)&&(y%4==0))))
{d=1;m=m+1;}
else if((d==28)&&(m==2)&&(y))
{d=1;m=m+1;}
else if((d==31)&&(m==12))
{d=1;m=1;y=y+1;}
else
{d=d+1;}
cout<<"next date is"<<"\n"<<d<<"/"<<m<<"/"<<y<<"\n"; 
}
else 
{cout<<" date is invalid "<<"\n"<<d<<"/"<<m<<"/"<<y<<"\n";}
}
};
int main()
{
date a;
int day,mon,yr,ch;
cout<<"enter day month and year"<<"\n";
cin>>day>>mon>>yr;
a.getdate(day,mon,yr);
do
{

cout<<"enter 1 for yoyr given date"<<"\n";
cout<<"enter 2 for leap year check"<<"\n";
cout<<"enter 3 for check date valid"<<"\n";
cout<<"enter 4 for next date"<<"\n";
cout<<"enter your choice"<<"\n";
cin>>ch;
switch(ch)
{
case 1:{a.dispdate();}break;
case 2:{a.leap();}break;
case 3:{a.dateval();}break;
case 4:{a.nextdate();}break;
default:{cout<<"invalid choice"<<"\n";}
}
}
while(ch<5);
return(0);
}
