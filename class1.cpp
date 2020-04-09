#include<iostream>
using namespace std;
class item
{
int num;
float cost;
public:
void getdata(int,float); //hmne public me two function getdata and putdata bnaya jisse hmm private variable num and cost ko access krr sken
 
void putdata(void)  // getdata input lene k liye and putdata outprint krane k liye
{

cout<<"num is="<<num<<"\n";//and hmne putdata ko clasds k inside m define kiya h
cout<<"cost is="<<cost<<"\n";
}
};
void item::getdata(int a,float b) // putdata ko hmne class k bahr define krke value ko initialise kiya h
{
num=a;
cost=b;
}
int main()
{
int a;
float b;
item x,y;  // main m two object bnaya x,y and phir data ko access kiya h
cout<<"enter number and cost";
cin>>a>>b;
cout<<"object x ,y is"<<"\n";
x.getdata(a,b);
x.putdata();
y.getdata(10,205.3);
y.putdata();
return(0);
}
