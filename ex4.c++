#include<iostream>
#include<math.h>
using namespace std;
class point
{
	float xordinate,yordinate;
	public:
point()
{
xordinate=0;
yordinate=0;
}
point (float x)
{
xordinate=yordinate=x;
}
point (float x,float y)
{
xordinate=x;
yordinate=y;
}
float dist()
{
return (sqrt(pow(xordinate,2)+pow(yordinate,2)));
}
float slope()
{
return (yordinate/xordinate);
}
friend float len(point p1,point p2);
};
float len(point p1,point p2)
{
float x,y;
x= p1.xordinate-p2.yordinate;
y= p1.yordinate-p2.yordinate;
return (sqrt(x*x + y*y));
}
int main()
{
point p1,q(4),p(4,3);
cout<<"\n....p(4,3)....\n";
cout<<"\n distance from origin"<<p.dist()<<"\n";
cout<<"\n distance p(4,3) and q(4,4)"
    <<len(p,q)
    <<"\n";
cout<<"\n.............\n";
return 0;
}
