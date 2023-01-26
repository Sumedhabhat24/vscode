#include<iostream>
using namespace std;
class COMPLEX
{
    private: int real;
             int img;
    public:
     COMPLEX()
   {
      real=0;
      img=0;
   }
   COMPLEX(int r,int i)
      {
         real=r;
         img=i;
      }
		void initialize()
   		{
   			cout<<"Enter the real part"<<endl;
  			   cin>>real;
			   cout<<"Enter the imaginary part"<<endl;
  			    cin>>img;
            return;
  		}

		void add(COMPLEX c1,COMPLEX c2);
   		void subtract(COMPLEX,COMPLEX);
 		void display();
      ~COMPLEX()
      {
         cout<<"NOTHING TO DESTROY"<<endl;
      }
};
void COMPLEX::add(COMPLEX c1,COMPLEX c2)
{ 
   real=c1.real+c2.real;
   img=c1.img+c2.img;
  return;
}
void COMPLEX::subtract(COMPLEX c1,COMPLEX c2)
{
   real=c1.real-c2.real;
   img=c1.img-c2.img;
   return;
}

void COMPLEX::display()
{
  if(img>=0)
   cout<<real<<"+i"<<img<<endl;
  else
   cout<<real<<"-i"<<-(img)<<endl;
}
int main()
{
 COMPLEX c1(2,3),c2(5,5),c3,c4,c5;
 system("clear");
cout<<"Enter the first complex number"<<endl;
cout<<"Enter the second complex number"<<endl;

c3.add(c1,c2);
c4.subtract(c1,c2);
c1.display();
c2.display();
c3.display();
c4.display();
c5.initialize();
c5.display();
return 0;
}
