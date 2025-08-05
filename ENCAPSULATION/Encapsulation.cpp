#include<bits/stdc++.h>
using namespace std;
class Student{
  // by default access modifier is private
  
   string name;
  int age, roll;
  string grade;
  // Fun getter and setter
  public:
  void setname(string s){
    name = s;
  }
  void setage(int a){
    age = a;
  }
  void setroll(int r){
    roll = r;
  }
  void setgarde(string g){
    grade = g;
  }
  void getname(){
    cout << name << endl;
  }
  void getage(){
    cout << age << endl;
  }
  void getroll(){
    cout << roll << endl;
  }
  void getgrade(){
    cout << grade << endl;
  }
};
int main(){
  Student S1;
  S1.setname("Adi");
  S1.setage(22);
  S1.setroll(12);
  S1.setgarde("A+");
  S1.getname();
  S1.getage();
  S1.getroll();
  S1.getgrade();
}
// encapsulation