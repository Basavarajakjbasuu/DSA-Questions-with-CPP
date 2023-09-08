#include<iostream>
using namespace std;
 
int main() {

  int num = 2;

  // MultiPly by two
  cout << (num << 1) << endl; //4

  // Power of 2
  for (int i = 1; i < 10; i++)
  {
    cout << (num << i) << endl;

    /*
      4
      8
      16
      32
      64
      128
      256
      512
      1024
    */
  }
  
  return 0;
}