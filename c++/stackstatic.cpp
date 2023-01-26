#include<iostream>
using namespace std;
class STACK
{
   private:
            
                int top;
                int stack[30];

    public:
    static int i;
       STACK()

    {
      top=-1;
      cout<<"Enter the element to be pushed:\n";
      cin>>stack[(++top)];
      i++;
    }
    void pop()
     {
        cout<<"Popped element is="<<stack[(top--)]<<endl;
     }
     ~STACK()
        {
            cout<<"Object "<<i--<<"destroyed\n";
       }
};
int STACK ::i=0;
int main()
{
    STACK s1,s2,s3,s4;
    s4.pop();
    s3.pop();
    s2.pop();
    s1.pop();

    return 0;

}


