#include<iostream>
#include<cmath>


using namespace std;


class figure
{
public:
virtual void display()=0;
virtual void get()=0;
virtual float area()=0;
virtual float perimeter()=0;
};

class circle:public figure
{
float radius;
public:
void get(){
cout<<"\n enter the radius:";
cin>>radius;
}

void display(){
cout<<"\n the circle has radius:"<<radius;        
cout<<"\n the circle has area"<<area();        
cout<<"\n the circle has perimeter:"<<perimeter();        
}

float area(){
return M_PI*radius*radius;
}

float perimeter(){
return 2*M_PI*radius;
}
};


class rectangle:public figure
{
float length,breadth;
public:
void get(){
cout<<"\n enter the length and breadth :";
cin>>length>>breadth;
}

void display(){
cout<<"\n the rectangle has length: "<<length
       <<" breadth: "<<breadth;
cout<<"\n area:"<<area();
cout<<"\n perimeter:"<<perimeter();
}

float area(){
return length*breadth;
}

float perimeter(){
return 2*(length+breadth);
}
};


int main()
{
figure *f ;
circle c;
f=&c;
cout<<"\n for a circle";
f->get();
f->display();
cout<<"\n\n\n for a rectangle";
rectangle r;
f=&r;
f->get();
cout<<f->area();
f->display();
cout<<"\n";
return 0;
}


