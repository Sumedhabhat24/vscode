#include<iostream>
using namespace std;
void fnarea(int r);
void fnarea(int l,float w);
void fnarea(int b,int h);
int main()
{
   int r=10,l=5,b=8,h=5;
   float w=9.5;
   fnarea(r);
   fnarea(l,w);
   fnarea(b,h);
}
void fnarea(int r)
{
  cout<<"Area of circle="<<3.142*r*r<<endl;
  return;
}
void fnarea(int l,float w)
{
  cout<<"Area of rectangle="<<l*w<<endl;
  return;
}
void fnarea(int b,int h)
{
  cout<<"Area of traingle="<<0.5*b*h<<endl;
}
