#include<iostream>
#include<cstring>
using namespace std;

class student
{
int rollno;
char name[20];

public:
student(int rno,int sname){
       rollno=rno;
       name=sname;
       }
void display(){
     cout<<"rollno:"<<rollno
     cout<<"\nname:"<<name;
     }
};

class astst:public student
{
float ph,hs,en,as;
astst(int rno, int sname, float p, float h, float e, float a):student(rno, sname)
     {
      ph=p;hs=h;en=e;as=a;
     }

void display()



};
