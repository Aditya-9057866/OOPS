// Single level inheritance
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
int main(){
  Student A("adi", 26, 32, 99);
  A.work();
  A.display();
}

// display function of child class will run first then the parent class if present in child class