#include<iostream>
using namespace std;
int main()
{
   int x=100;
   float y=600.999;
   int &xRef=x;
   cout<<"x="<<x<<"\n"<<"y"<<y<<endl;
  // cout<<"Enter the value of x and y\n";
  //cin>>x;
  // cin>>y;
 // cout<<"x="<<x<<"\n"<<"y="<<y<<endl;
  cout<<"Enter x\n";
  cin>>x;
  xRef++;
 cout<<"x="<<x<<"\n"<<"y="<<y<<endl;

 return 0;
}
