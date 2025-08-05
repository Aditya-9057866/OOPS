// Multiple Inheritance
#include<bits/stdc++.h>
using namespace std;
class Engineer{
  public:
    string spec;
    void work(){
      cout << "I have specialization in " << spec << endl;
    }
};
class Youtuber{
  public:
    int subs;
    void content(){
      cout << "I have subs base of " << subs << endl;
    }
};
class Teacher:public Engineer,public Youtuber{
  public:
    string name;
    Teacher(string name,string spec,int subs){
      this->name = name;
      this->spec = spec;
      this->subs = subs;
    }
    void showcase(){
      cout << "My name is " << name << endl;
      work();
      content();
    }
};
int main(){
  Teacher T("adi", "CSE", 9000);
  T.showcase();
}