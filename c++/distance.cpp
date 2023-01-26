/*C++ program which contain class called distance -inch,feet do the following operations:
initialization of two objects
addition of two distances
subtraction of two dist
displaying initialization,addition,subtraction*/
#include<iostream>
using namespace std;
class DISTANCE
{
  private: float inch;
  	   float feet;
  public: void initialize()
          {
   		  cout<<"Enter the inch part"<<endl;
    		  cin>>inch;
		     cout<<"Enter the feet part"<<endl;
		     cin>>feet;
          }
      	void add(DISTANCE,DISTANCE);
        void sub(DISTANCE,DISTANCE);
        void display();
};
void DISTANCE::add(DISTANCE d1,DISTANCE d2)
{
   inch=d1.inch+d2.inch;
   feet=d1.feet+d2.feet;
   return;
}
void DISTANCE::sub(DISTANCE d1,DISTANCE d2)
{
   inch=d1.inch-d2.inch;
   feet=d1.feet-d2.feet;
   return;
}
void DISTANCE::display()
{
  cout<<feet+(inch/12)<<endl;
}
int main()
{
 DISTANCE d1,d2,d3,d4;
 system("clear");
cout<<"Enter the first distance"<<endl;
d1.initialize();
cout<<"Enter the second distance"<<endl;
d2.initialize();
d3.add(d1,d2);
d4.sub(d1,d2);
d1.display();
d2.display();
d3.display();
d4.display();
return 0;
}

