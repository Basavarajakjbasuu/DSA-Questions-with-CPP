#include<iostream>
using namespace std;
 
/*
  Toggling a bit at nth position 

  Ex.
      9 -> 01001 pos = 2

           01101 => 13
*/ 
void toggleBit(int &num, int pos) {

  /*
    Approach

    set 1 at given position
    then Apply XOR gate to num and setBit

      num = 9 pos = 2 
    (1 << 2) -> 0100

                01001
              ^ 00100
                -----
                01101 
  */
  num = num ^ (1 << pos);
}

int main() {

  int num = 9, pos = 2;

  toggleBit(num, pos);
  cout << (int)(num) << endl; //13

  return 0;
}