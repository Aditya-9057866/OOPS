// Function overloading
#include<bits/stdc++.h>
using namespace std;
class Area{
  public:
  int calArea(int r){   //circle
    return 3.14 * r * r;
  }
  int calArea(int l,int b){ //rectangle
    return l * b;
  }
};
int main(){
  Area A, B;
  cout << A.calArea(4) << endl;

  cout<<B.calArea(4,5)<<endl;
}