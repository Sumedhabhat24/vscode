#include<iostream>
#include<cstring>
using namespace std;
class student

{
  int roll_no;
  char *name;
  public:
        static int i;
        student()
        {
            cout<<"Enter the rollno\n";
            cin>>roll_no;
            name=new char[30];
            cout<<"Enter the name:\n";
            cin>>name;
            i++;
        }
        student(int rn,char *n)
        {
            roll_no=rn;//this->roll-no=rn;
            name=new char[30];//this->name=new char[30];
            strcpy(name,n);
            i++;
        }
        void display()
        {
            cout<<"Student details are\n";
            cout<<"Rollno:"<<roll_no<<endl;
            cout<<"Name:"<<name<<endl;
        }
        ~student()
        {
            cout<<"Object "<<i--<<"destroyed\n";
            delete [] name;
            name=NULL;
        }
};
int student ::i=0;
int main()
{  char name1[]="Ranganath",name2[]="Shreedhar";
   student s1,s2(2,name1),s3(11,name2);
   s1.display();
   s2.display();
   s3.display();
   return 0;
}