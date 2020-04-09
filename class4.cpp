#include<iostream>
using namespace std;
const int m=50;
class itms
{

private:
int itmcode[m];
float itmprice[m];
int count;
public:
void cnt(void)
{
count=0;
}
void getitm(void);
void total(void);
void remove(void);
void showitm(void);
};
void itms::getitm(void)
{
cout<<"enter itm code"<<"\n";
cin>>itmcode[count];
cout<<"enter price of item"<<"\n";
cin>>itmprice[count];
count++;
}
void itms::total(void)
{
float total=0;
for(int i=0;i<count;i++)
{
total=total+itmprice[i];
}
cout<<"total="<<total<<"\n";
}
void itms::remove(void)
{
int a;
cout<<"enter item code"<<"\n";
cin>>a;
for(int i=0;i<count;i++)
{
if(itmcode[i]==a)
{
itmprice[i]=0;
}
}
}
void itms::showitm(void)
{
cout<<"item code and price are"<<"\n";
for(int i=0;i<count;i++)
{
cout<<itmcode[i]<<"  "<<itmprice[i];
cout<<"\n";
}
}
int main()
{
itms order;
order.cnt();
int x;
do
{
cout<<"enter your choice"<<"\n";
cout<< " 1: to add items "<<"\n";
cout<<"2 :to display total"<<"\n";
cout<<"3 :to delete an item"<<"\n";
cout<<"4 :to show all items"<<"\n";
cout<<"5 : quit"<<"\n";
cin>>x;
switch(x)
{

case 1: order.getitm();break;
case 2: order.total();break;
case 3: order.remove();break;
case 4: order.showitm();break;
case 5:  break;
default:cout<<"invalid selection"<<"\n";
}
}
while(x<5);
}
               




