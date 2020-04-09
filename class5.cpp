#include<iostream>
using namespace std;
class item  // we use static variable when we have to maintain common value to the class
{
static int count; // initialising static variable
int num;
public:
void getdata(int a)
{
num=a;
count++;
}
void getcount(void)
{
cout<<" count is="<<count<<"\n"; //printing count before its use always it will have value=0
}
};
int item::count=10; //defining static data member which is part of class we can also give some value here
int main()
{
item a,b,c;
a.getcount();  // calling member function initially so it will print count =0
b.getcount();
c.getcount();
a.getdata(100);
b.getdata(200);
c.getdata(300);
cout<<" after reading data"<<"\n";
a.getcount(); // again printing value of count after incrementing it 3 timer so value will be 3 from 0
b.getcount();
c.getcount();
return(0);
}
