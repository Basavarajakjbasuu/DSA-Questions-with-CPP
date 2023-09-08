#include<iostream>
using namespace std;
 
/*
   How to unset/clear a bit at n’th position in the number 

   Ex.
      7 -> 0111 pos 2 (0 based index)

        0011=> 3
*/ 

void clearBit(int &num, int pos) {

  /*
    Approach

    first set a bit at givin postion and negate it so at that
    given postion bit will 0 then rest will 1

      pos = 2
      (1 << pos) => 0100 => ~(0100) => 1011
    Apply Bitwise and & to bits
    num 7
                    0111
                  & 1011
                    ----
                    0011 -> 3
  */
  num = num & (~(1 << pos));
}
int main() {

  int num = 7, pos = 2;
  clearBit(num, pos); //3

  cout << (int)(num) << endl;
  return 0;
}