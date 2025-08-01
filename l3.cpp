// dynamic allocation
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
  Student *S=new Student;
  (*S).name = "Adi";
  (*S).age = 10;
  (*S).roll = 12;
  (*S).grade = "A++";
  cout << S->name;
}