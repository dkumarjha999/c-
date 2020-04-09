
// name: deepak kumar jha ,  cs B  , roll- 103

#include<iostream>
using namespace std;

class student
{
protected:
char name[30];
int d,m,y,no;
public:
void getdata()
{
cout<<" enter student name\n";
cin>>name;
cout<<" enter dob in day,mon,year\n";
cin>>d>>m>>y;
cout<<" enter roll num \n";
cin>>no;
}

 virtual void dispresult()
{
cout<<" student details are \n";
cout<<" name  = "<<name<<"\n dob = "<<d<<"/"<<m<<"/"<<y<<"\n roll number = "<<no<<"\n";
}

};

class ug:public student
{
protected:
int m[6];
char dept[20];
public:
void getmark()
{
cout<<" enter department\n";
cin>>dept;
cout<<" enter marks in 6 subject\n";
for(int i=0;i<6;i++)
{cin>>m[i];}

}

void dispresult()
{
int p=50,c=0;
cout<<" ug student \n";
cout<<" department = "<<dept<<"\n";
cout<<" merks in 6 subjects are \n ";
for(int i=0;i<6;i++)
{
cout<<m[i]<<"\n";
if(m[i]>=p)
{c++;}
}

if(c==6)
{cout<<" congrats you are pass \n";}
else
{cout<<"sorry you failed\n";}

}
};

class pg:public student
{
protected:
int m[6];
char dept[20];
public:
void getmark()
{
cout<<" enter department\n";
cin>>dept;
cout<<" enter marks in 6 subject\n";
for(int i=0;i<6;i++)
{cin>>m[i];}

}

void dispresult()
{
int p=50,c=0;
cout<<" pg student \n";
cout<<" department = "<<dept<<"\n";
cout<<" merks in 6 subjects are \n ";
for(int i=0;i<6;i++)
{
cout<<m[i]<<"\n";
if(m[i]>=p)
{c++;}
}

if(c==6)
{cout<<" congrats you are pass \n";}
else
{cout<<"sorry you failed\n";}

}
};

int main()
{
student *s,st;
ug u;
pg p;

int ch;
cout<<" enter 1 for ug student\n enter 2 for pg student\n enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:
{
s=&st;
s->getdata();
s=&u;
u.getmark();

s=&st;
s->dispresult();
s=&u;
s->dispresult();
}break;

case 2:
{
s=&st;
s->getdata();
s=&p;
p.getmark();

s=&st;
s->dispresult();
s=&p;
s->dispresult();
}break;

}
return 0;
}


/*
 enter 1 for ug student
 enter 2 for pg student
 enter your choice
1
 enter student name
deepak
 enter dob in day,mon,year
2 4 4000
 enter roll num 
32
 enter department
it
 enter marks in 6 subject
67
89
99
78
67
87
 student details are 
 name  = deepak
 dob = 2/4/4000
 roll number = 32
 ug student 
 department = it
 merks in 6 subjects are 
 67
89
99
78
67
87
 congrats you are pass 
deepak@deepak-Lenovo-ideapad-320-15IKB:~/Desktop$ g++ 1.cpp
deepak@deepak-Lenovo-ideapad-320-15IKB:~/Desktop$ ./a.out
 enter 1 for ug student
 enter 2 for pg student
 enter your choice
1
 enter student name
deepak
 enter dob in day,mon,year
5
2
99
 enter roll num 
23
 enter department
cs
 enter marks in 6 subject
45
79
89
90
78
68
 student details are 
 name  = deepak
 dob = 5/2/99
 roll number = 23
 ug student 
 department = cs
 merks in 6 subjects are 
 45
79
89
90
78
68
sorry you failed
deepak@deepak-Lenovo-ideapad-320-15IKB:~/Desktop$ g++ 1.cpp
deepak@deepak-Lenovo-ideapad-320-15IKB:~/Desktop$ ./a.out
 enter 1 for ug student
 enter 2 for pg student
 enter your choice
2
 enter student name
raman
 enter dob in day,mon,year
3 5 7899
 enter roll num 
12
 enter department
cs
 enter marks in 6 subject
67 
78
89
79
97
68
 student details are 
 name  = raman
 dob = 3/5/7899
 roll number = 12
 pg student 
 department = cs
 merks in 6 subjects are 
 67
78
89
79
97
68
 congrats you are pass 
*/
