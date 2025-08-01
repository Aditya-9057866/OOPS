#include<bits/stdc++.h>
using namespace std;
class Student{
  // by default access modifier is private
  public:
   string name;
  int age, roll;
  string grade;
};
int main(){
  Student S1;
  S1.name = "Adi";
  S1.age = 10;
  S1.roll = 12;
  S1.grade = "A++";
  cout << S1.name;
}