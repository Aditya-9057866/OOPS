#include <bits/stdc++.h>
using namespace std;
class Customer
{
  string name;
  int acc, bal;

  static int total_customer;
  static int tot_bal;

public:
  Customer(string name, int acc, int bal)
  {
    this->name = name;
    this->acc = acc;
    this->bal = bal;
    total_customer++;
    tot_bal += bal;
  }
  // static memeber fun
  static void accesStatic()
  {
    cout << total_customer << endl;
    cout << tot_bal << endl;
  }
  void deposit(int amount)
  {
    if (amount > 0)
    {
      bal += amount;
      tot_bal += amount;
    }
  }
  void withdraw(int amount)
  {
    if (amount <= bal && amount > 0)
    {
      bal -= amount;
      tot_bal -= amount;
    }
  }
  void display()
  {
    cout << name << " " << acc << " " << bal << " " << total_customer << endl;
  }
};
int Customer::total_customer = 0;
int Customer::tot_bal = 0;
int main()
{
  Customer A1("adi", 1, 100);
  Customer A2("parv", 2, 100);
  // A2.display();
  Customer A3("nepali", 3, 100);
  // A3.display();
  A1.deposit(200);
  A1.withdraw(50);
  Customer::accesStatic();
  A1.display();

}