#include<iostream>

using namespace std;

class Time{
//store time int value
int hour, min, sec;

public:
Time(){}

/*
param: hours, minutes, seconds
       the flag mode sets time mode 
       either 24hrs or 12 hrs
ret: no return type
desc: by default time 00:00:00
      in 24 hrs format
*/
void setTime(int h , int m , int s )
{
   //checks hour
   if(h>=0 && h<24){
   hour=h;
  }
   else
  {
    throw "hours should be <int> between 0 and 23";
  }

   //checks min
   if(m>=0 && h<60){
   min=m;
  }
   else
  {
    throw "minute should be <int> between 0 and 59";
  }

  //checks second
 if(s>=0 && s<60){
   sec=s;
  }
   else
  {
    throw "second should be <int> between 0 and 59";
  }
}

/*
info: friend function to display 
      overloading '<<' 
param: time class obj
ret: no return type
desc: displays the time
      in 24 hrs format
*/
friend ostream& operator<<(ostream &out, const Time &t){

  out<<t.hour<<":"<<t.min<<":"<<t.sec<<" hh:mm:ss ";
  return out;
}


/*info increase time by 1 second*/

void operator++(int)
{
  if(sec==59)
     {
       sec=0;
       if(min==59)
          {
           min=0;
           if(hour==23)
             {
              hour=0;
              }
          else
               hour+=1;
          }
        else
             min+=1;        
      }
   else
      sec+=1;     
    
}

/*info decrease time by 1 second*/

void operator--(int)
{
  if(sec==0)
     {
       sec=59;
       if(min==0)
          {
           min=59;
           if(hour==0)
             {
              hour=23;
              }
            else
               hour-=1;
          }
        else
             min-=1;
       }
   else
      sec-=1;
 
}
};

int main()
{
Time t;
int hour, min, sec;


cout<<"enter time to set:"
    <<"\n(by default clock is 24hrs"
    <<" enter hour,min and second):";
cin>>hour>>min>>sec;

try
{ 
t.setTime(hour,min,sec);

cout<<"time is set "<<t<<"\n";
t++;
cout<<"time is incremented by 1 second "<<t<<"\n";
t--;
cout<<"time is decremented by 1 second "<<t<<"\n";
}
catch(const char* e){
    cout<<"exception caught:"<<e<<"\n";
}
return 0;
}
