#include<bits/stdc++.h>
using namespace std;
class Customer{
  
  string name;
  int acc;
  int bal;

  public:
//  def constructor
  Customer(){
    name = "Adi";
    acc = 5;
    bal = 100;
  }
  // parameterised const.
  // Customer(string a,int b,int c){
  //   name = a;
  //   acc = b;
  //   bal = c;
  // }
  // or
  Customer(string name,int acc,int bal){
   this-> name = name;
    this->acc = acc;
    this->bal = bal;
  }
  // Const overloading
  Customer(string a,int b){
    name = a;
    acc = b;
    
  }
  // Inline const.
  // inline Customer(string a, int b, int c) : name(a), acc(b), bal(c){
   
  // };
  // copy const
  Customer(Customer &B){
    name = B.name;
    acc = B.acc;
    bal = B.bal;
  }
  void display(){
    cout << name <<" "<<acc<<" "<< bal << endl;
  }
};
int main(){

  Customer A1;
  Customer A2("parv", 10, 2000);
  Customer A3("nepali", 15);
  // copy const by def;
  // copy const
  Customer A4(A2);
// or
  Customer A5;
// assignment operator
  A5 = A2;
  A5.display();

  A1.display();
  A2.display();
  A3.display();
  A4.display();

}