#include <iostream>
using namespace std;

class Person
{
protected:
  char name[100];
  int age;
public:
  virtual void putdata()=0;
  virtual void getdata()=0;
};

class Professor:public Person
{
protected:
  int publications;
  static int cur_id;
public:
  Professor()
  {
    cur_id++;
  }
  void getdata()
  {
    cin>>name>>age>>publications;
  }
  void putdata()
  {
    cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
  }
};

int Professor::cur_id=0;

class Student:public Person
{
protected:
  int marks[5];
  static int cur_id;
public:
  Student()
  {
    cur_id++;
  }
  void getdata()
  {
    cin>>name>>age;
    for(int i=0;i<5;i++)
    {
      cin>>marks[i];
    }
  }
  void putdata()
  {
    int sum=0;
    for(int i=0;i<5;i++)
    {
      sum = sum + marks[i];
    }
    cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id<<endl;
  }
};

int Student::cur_id=0;

int main()
{
  int t,ch;
  Person *bp;
  cin>>t;
  while(t--)
  {
    cin>>ch;
    if(ch==1)
    {
      Professor p;
      bp=&p;
      bp->getdata();
      bp->putdata();
    }
    else if(ch==2)
    {
      Student s;
      bp=&s;
      bp->getdata();
      bp->putdata();
    }
  }
  return 0;
}
