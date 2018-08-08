/*assignment-12*/
#include<iostream>
#include<cmath>
using namespace std;

double  my_sqrt(double x);

/*
@auth:rofi
 2-11-2017
param:a number
ret :square root 
desc:used to calculate square root
     raise exception if number is 
     negative
*/
double  my_sqrt(double x){
 if(x<0.0){
  throw "negative number";
  }
  return sqrt(x);
}


/*
driver code
*/

int main()
{
double x;
cout<<"enter a number to find:";
cin>>x;
try{
   cout<<"the square root is:"<<my_sqrt(x)<<"\n";
   }
catch(const char* e){
    cout<<"exception:"<<e<<"\n";
   }
return 0;
}
