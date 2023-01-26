#include<iostream>
using namespace std;
class A;
class B
{    
    public:
    
      void xyz(A &);
};
class A
{  
   int x;
   public:
      void set(int a)
      {
        x=a;
      }
      friend void B::xyz(A &ob);
};
void B::xyz(A &ob)
{
    ob.x=10;
    cout<<"Object of A="<<ob.x<<endl;
}
int main()
{
    A ob1;
    B ob2;
    ob1.set(1000);
    ob2.xyz(ob1);
    return 0;

}
