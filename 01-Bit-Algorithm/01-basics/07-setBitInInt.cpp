#include<iostream>
using namespace std;

int countSetBits(int num) {

  /*
    num = 10
                      count = 0
      1010  => 10
    & 1001  => 9
      ----            count = 1
      1000  => 8
    & 0111  => 7
      ----
      0000
                      count = 2
  */
  int count = 0;
  while(num) {

    // count += num & 1;

    // num  >>=  1;

    num &= (num - 1);
    count++;
  }

  return count;
}

int main() {

  int num = 15;

  cout << countSetBits(num) << endl;
  return 0;
}