#include<iostream>
using namespace std;
//template<class T>
class COMPLEX
{
    int real,img;
    public:
    COMPLEX()
    {
        real=img=0;
    }
    COMPLEX(int x,int y)
    {
        real=x;img=y;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};
template<class T>
void swap1(T &x,T &y)
{   T z;
    z=x;
    x=y;
    y=z;
}
int main()
{   COMPLEX c1(10,20),c2(50,100);
    int x=10,y=20;
    float a=100.5,b=200.2;
    cout<<"Before swapping\n";
    cout<<"X="<<x<<endl<<"Y="<<y<<endl;
    swap1(x,y);
    cout<<"After swapping\n";
    cout<<"X="<<x<<endl<<"Y="<<y<<endl;
    cout<<"Before swapping\n";
    cout<<"A="<<a<<endl<<"B="<<b<<endl;
    swap1(a,b);
    cout<<"After swapping\n";
    cout<<"A="<<a<<endl<<"B="<<b<<endl;
    cout<<"Before swapping\n";
    c1.display();
    c2.display();
    swap1(c1,c2);
    cout<<"After swapping\n";
    c1.display();
    c2.display();
    return 0;

}
