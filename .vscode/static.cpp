#include<bits/stdc++.h>
using namespace std;
class Customer{
  string name;
  int acc, bal;
  static int total_customer;

public:
  Customer(string name,int acc,int bal){
    this->name = name;
    this->acc = acc;
    this->bal = bal;
    total_customer++;
  }
  void display(){
    cout << name << " " << acc << " " << bal << " " << total_customer << endl;
  }
};
int Customer::total_customer = 0;
int main(){
  Customer A1("adi", 1, 100);
  Customer A2("parv", 2, 1000);
  A1.display();
  A2.display();
  Customer A3("nepali", 3, 10000);
  A3.display();
}