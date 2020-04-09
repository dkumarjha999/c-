#include<iostream>
using namespace std;
class person
{
private:
char name[30];
int age;
public:
void getdata(void);
void show(void);
};
void person::getdata(void)
{
cout<<"enter name"<<"\n";
cin>>name;
cout<<"enter age"<<"\n";
cin>>age;
}
void person::show(void)
{
cout<<"name and age are"<<"\n"<<name<<"\n"<<age<<"\n";
}
int main()
{
person p;
p.getdata();
p.show();
return(0);
}
