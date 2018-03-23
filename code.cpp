#include<iostream>
class person
{
  char name[100];
  int age;
public:
  virtual void getdata();
  virtual void putdata();

};
class professor::public person
{
  int publications;
  int cur_id;
public:
  void getdata()
  {
    cout<<"enter the name of the prof";
    cin>>name;
    cout<<"enter age";
    cin>>age;
    cout<<"enter publications";
    cin>>publications;
  }
  void putdata()
  {

    cout<<"\nname of the prof is  :"<<name;
    cout<<"\nhis/her age :"<<age;
    cout<<"\n publication is :"<<publications;

  }
};
class student :: public person
{
  int marks[5];
  int cur_id;
public:
  void getdata()
  {
    cout<<"\nenter name";
    cin>>name;
    cout<<"\nenter age";
    cin>>age;
int i;
    for(i=0;i<5;i++)
    {
      cout<<"marks"<<i+1<<"is :";
      cin>>marks[i];
    }
  }
  void putdata()
  {
    int i, sum=0;
    for(i=0;i<5;i++)
    {
      sum=sum+marks[i];
    }
cout<<"cur_id";
    cout<<"name of student"<<name;
    cout<<"age of student "<<age;
    cout<<"sum of marks"<<sum;

  }
}
