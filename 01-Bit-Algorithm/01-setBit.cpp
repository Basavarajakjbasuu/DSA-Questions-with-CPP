#include<iostream>
using namespace std;

/*
  How to set a bit in the given position

  Ex.
    12 -> 01100 pos 1 (0-th Index)
          
          01110 => 14
*/

void setBit(int &num, int pos) {

  /*
    Approach
      first set a bit at given position from by left shift one at given postion

      then Apply logical OR to setBit- So if a given Postion bit as 1 then also it will set to 1 

      else Set to 1 if at as 0
  */
  num = num | (1 << pos);
}

int main() {

  int num = 12, pos = 1;
  setBit(num, pos);
  cout << (int)(num) << endl; // 11
  return 0;
}