#include<bits/stdc++.h>
using namespace std;
// Class
class Student
{
  public:
  // attributes
    int id;
    int age;
    string name;
    int roll_no;

// constructor
// def const
Student(){
  cout << "default constructor called"<<endl;
}
// parametrised const.
Student(int id,int age,string name,int roll_no){
  cout << "Parameterised const called"<<endl;
  this->id = id;
  this->name = name;
  this->age = age;
  this->roll_no = roll_no;
}


    // behaviour
    void study(){
      cout << this->name<<" studying"<<endl;
    }


    void sleep(){
      cout << this->name<<" sleeping"<<endl;
    }

    void bunk(){
      cout << this->name<<" bunking"<<endl;
    }


    ~Student(){
      cout << "def dest called" << endl;
    }
};
int main(){
  // Student A;
  // A.name = "adi";
  // A.id = 1;
  // A.roll_no = 12;
  // A.age = 22;
  // A.study();
  // A.sleep();
  Student A(1, 15, "adi", 6);
  return 0;
}