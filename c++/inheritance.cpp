#include<iostream>
using namespace std;
class student
{
    protected:
    char name[20];
    int reg,age;
    public:
      student();
      ~student();
      void getsdata();
      int giveage();
};
student::student()
{

}
student::~student()
{

}
int student::giveage()
{
    return age;
}
void student::getsdata()
{
    cout<<endl<<"Name:";
    cin>>name;
    cout<<"Reg No:";
    cin>>reg;
    cout<<"Age:";
    cin>>age;
}
class ugstudent:public student
{
    private:
    int sem,fee,sti;
    public:
      ugstudent();
      ~ugstudent();
      void getugdata();
      int givesem();

};
ugstudent::ugstudent()
{

}
ugstudent::~ugstudent()
{

}
void ugstudent::getugdata()
{
    getsdata();
    cout<<"Semester:";
    cin>>sem;
    cout<<"Fee:";
    cin>>fee;
    cout<<"Stipend:";
    cin>>sti;
}
int ugstudent::givesem()
{
   return sem;
}
class pgstudent:public student
{
    private:
    int sem,fee,sti;
    public:
    pgstudent();
    ~pgstudent();
    void getpgdata();
    int givesem();
};
pgstudent::pgstudent()
{

}
pgstudent::~pgstudent()
{

}
void pgstudent::getpgdata()
{
    getsdata(); //or student::getsdata();
    cout<<"Semester:";
    cin>>sem;
    cout<<"Fee:";
    cin>>fee;
    cout<<"Stipend:";
    cin>>sti;
}
int pgstudent::givesem()
{
    return sem;
}
int main()
{
    ugstudent u[10];
    pgstudent p[10];
    int i,n,s;
    cout<<endl<<"Enter the number of students:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<endl<<"Enter the details of UG student"<<i<<endl;
        u[i].getugdata();
    }
    for(int s=1;s<=8;s++)
    {
        float sum=0;
        int flag=0,cou=0;
        for(i=1;i<=n;i++)
        if(u[i].givesem()==s)
        {
            sum=sum+u[i].giveage();
            flag=1;
            cou++;
        }
        if(flag==1)
       { 
        cout<<endl<<s<<"Semester ";
        cout<<"average age is"<<sum/cou;
       }

    }
    for(i=1;i<=n;i++)
    {
        cout<<endl<<"Enter the details";
        cout<<"of PG students"<<i<<endl;
        p[i].getpgdata();

    }
    for(s=1;s<=8;s++)
    {
        float sum=0;
        int flag=0,cou=0;
        for(i=1;i<=n;i++)
        {
            if(p[i].givesem()==s)
            {
                sum=sum+p[i].giveage();
                flag=1;
                cou++;
            }
        }
        if(flag==1)
        {
            cout<<endl<<s<<"Semester";
            cout<<"avg avg 15"<<sum/cou<<endl;
        }
        return 0;
    }
 }         