/*program for experiment no3 and exp no.6*/
#include<iostream>
#include<cmath>

using namespace std;

class complex{
float real, imag;

public:
complex(){}
complex(float m){
 real=imag=m;
}
complex(float real,float imag){
  this->real=real;
  this->imag=imag;
}

/*functions for assignment no.3*/
float rpart(){
  return real;
}

float ipart(){
  return imag;
}

complex add(complex c){
  return complex(real+c.real,imag+c.imag);
}

complex mult(complex c){
  return complex(real*c.real-imag*c.imag, real*c.imag-imag*c.real);
}

/*functions for assignment no.6*/
friend istream& operator>>(istream &in,complex &c){
  in>>c.real>>c.imag;
  return in;
} 

friend ostream & operator<<(ostream &out,const complex &c){
  if(c.imag<0){
    out<<c.real<<"i-"<<fabs(c.imag)<<"j";    
  }
  else
  {
    out<<c.real<<"i+"<<c.imag<<"j";
  }
  return out;
} 

complex operator+(complex c){
  return complex(real+c.real,imag+c.imag);
}

complex operator*(complex c){
  return complex(real*c.real-imag*c.imag, real*c.imag-imag*c.real);
}
void operator-(void){
  real=-real;
  imag=-imag;
}

};

int main()
{
/*driver code for ex3*/
complex c1,c2(1,2),c3(2,3),c4;
cout<<"c2="<<c2.rpart()<<"i+"<<c2.ipart()<<"j\n";
cout<<"c3="<<c3.rpart()<<"i+"<<c3.ipart()<<"j\n";
c1=c2.add(c3);
cout<<"c2+c3="<<c1.rpart()<<"i+"<<c1.ipart()<<"j\n";
c4=c2.mult(c3);
cout<<"c2*c3="<<c4.rpart()<<"i+"<<c4.ipart()<<"j\n";

/*driver code for ex6*/
complex c5,c6,c7,c8;
cout<<"enter complex numbers c1 and c2";
cin>>c5>>c6;
cout<<"\nc5="<<c5<<"\nc6="<<c6
    <<"\nc5+c6="<<c5+c6
    <<"\nc5*c6="<<c5*c6;
    -c5;
cout<<"\n-c5="<<c5
    <<"\n";
return 0;
}

