// Heirarchial Inheritance
#include<bits/stdc++.h>
using namespace std;

class Human{
protected:
  int age;
  string name;
  public:
  
  void work(){
    cout << "I am working"<<endl;
  }
  void display(){
    cout << name << " " << age << endl;
  }
};
class Student:public Human{
  int roll, fees;
  public:
  Student(string name,int age,int roll,int fees){
    this->name = name;
    this->age = age;
    this->roll = roll;
    this->fees=fees;
  }
  void display(){
    cout << name << " " << age << " " << roll << ' ' << fees << endl;
  }
};
class Teacher:public Human{
  int sal;
  public:
   Teacher(int sal,string name,int age){
     this->sal = sal;
     this->name = name;
     this->age = age;
   }
    void display(){
    cout << name << " " << age << " " << sal <<  endl;
  }
};
int main(){
  Student A("adi", 26, 32, 99);
  A.work();
  A.display();
  Teacher T(99,"mohit", 23);
  T.display();
}

// display function of child class will run first then the parent class if present in child class