#include<iostream>
using namespace std;
class complex
{
private: float real, img;

public:

complex(float r=0, float im=0)
{
real=r; img=im;
}
friend ostream & operator <<( ostream &out, const complex &c);
friend istream & operator >>(istream &in, complex &c);
};

  ostream & operator <<( ostream &out, const complex &c)
{
out<< c.real<<"+i"<<c.img<<"\n\n";
return out;
}

istream & operator >>(istream &in, complex &c)
{
cout<<" enter real ang imaginary part of complex number\n\n";
in>>c.real>>c.img;
return in;
}

int main()
{
complex c1;
cin>>c1;
cout<<" complex number is\n\n";
cout<<c1;;

return 0;
}
