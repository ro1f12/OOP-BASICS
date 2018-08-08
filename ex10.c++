#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;


class student
{
int rollno;
sname char[20];
public:
student(int rollno,char *s)
{
this.rollno = rollno;
this.sname = s;
}
void display()
{
cout<<"roll no"<<rollno
    <<"\nname"<<sname;
}
};


class artsst:public student
{
float ph,hs,en,as;
public:
takedata(int rno, char *name, float p, float h,float e, float a):student(rno, name)
{
ph=p;
hs=h;
en=e;
as=a;
}




};
