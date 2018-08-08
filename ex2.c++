#include<iostream>
using namespace std;
struct emplyoee
{
 int empno;
 char ename[20];
 float basic,hra,da;
};
float calculate (emplyoee *e)
 {
 return ((e->basic)+(e->hra)+(e->da));
 }
emplyoee* getdata()
 {
 emplyoee *e;
 e=new emplyoee;
 cout<<"\n enter empno:";
 cin>>e->empno;
 cout<<"\n enter empname \n";
 cin>>e->ename;
 cout<<"\n enter basic,hra,da:";
 cin>>e->basic
     >>e->hra
     >>e->da;
return e;
}
void display(emplyoee *e)
{
 cout<<"\n empno: "<<e->empno
     <<"\n empname: "<<e->ename
     <<"\n basic pay: "<<e->basic
     <<"\n hra :"<<e->hra
     <<"\n da :"<<e->da
     <<"\n grose salary :"<< calculate(e) 
     <<"\n";
}
int main()
{
 emplyoee *e;
 e=getdata ();
 display(e);
 return 0;
}

 
