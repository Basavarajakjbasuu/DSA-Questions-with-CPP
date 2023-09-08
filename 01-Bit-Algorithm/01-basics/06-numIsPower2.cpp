#include<iostream>
using namespace std;

/**
 * How to know if a number is a power of 2?
*/
bool isNumberPower2(int num) {
  /*
    If a number N is a power of 2, then the bitwise AND of N and N-1 will be 0. But this will not work if N is 0.
  */
  return num > 0  && (num & (num - 1)) == 0;
}

int main() {

  cout << isNumberPower2(256) << endl;
  return 0;
}