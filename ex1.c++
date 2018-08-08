#include<iostream>
using namespace std;
class triangle
{
float a,b,c;
public:
triangle(float t1,float t2,float t3)
{
 a=t1;
 b=t2;
 c=t3;
}
friend int is_triangle (triangle t)
{
return(t.a+t.b>t.c && t.b+t.c>t.a && t.a+t.c>t.b);
}
int is_iso()
{
  return((a==b)||(b==c)||(c==a));
}
int is_equi()
{
if(is_iso())
 if((a==b)&&(a==c))
 return 1;
 return 0;
 }
};
int main()
{
triangle t (12,12,12);
if (is_triangle(t))
{
 t.is_iso()? cout<< "\n triangle is isoceles \n":
             cout<< "\n triangle is not isoceles \n";
 t.is_equi()? cout<< "\n triangle is equilateral \n":
              cout<< "\n triangle is not equilateral \n";
}
else
   cout<< "\n sides donot form a traiangle \n";
return 0;
}


