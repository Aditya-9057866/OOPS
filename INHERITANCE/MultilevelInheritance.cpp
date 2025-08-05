// Multilevel Inheritance
#include<bits/stdc++.h>
using namespace std;
class Person{
  protected:
    string name;
    public:
    void introduce(){
      cout << "hello my name is :" << name << endl;
    }
};
class Employee:public Person{
  protected:
    int salary;
    public:
    void monthly_sal(){
      cout << "My salary is" << salary << endl;
    }
};
class Manager:public Employee{
  public:
    string dep;
    // constructor
    Manager(string name,int salary,string dep){
      this->name = name;
      this->salary = salary;
      this->dep = dep;
    }
    void work(){
      cout << "I am in the department" << dep << endl;
    }
};
int main(){
  Manager A("adi", 200, "Tech");
  A.work();
  A.monthly_sal();
  A.introduce();
}