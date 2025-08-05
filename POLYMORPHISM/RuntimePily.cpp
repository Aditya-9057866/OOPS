// this is the case when the fun is decided at the compile time here we are not using virtual fun

// #include<bits/stdc++.h>
// using namespace std;
//   class Animal{
//     public:
//     void speak(){
//       cout << "huHU";
//     }
//   };
//   class Dog:public Animal{
//     public:
//     void speak(){
//       cout << "Bark";
//     }
//   };
// int main(){
//     Animal *p;
//     p = new Dog();
//     p->speak();
// }


// in this case it is decided at run time that the obj fun will be called
#include<bits/stdc++.h>
using namespace std;
class Animal{
  public:
 virtual void speak(){
    cout << "HUHU";
  }
};
class Dog:public Animal{
  public:
  void speak(){
    cout << "Bark";
  }
};
int main(){
  Animal *p;
  p = new Dog();
  p->speak();
}