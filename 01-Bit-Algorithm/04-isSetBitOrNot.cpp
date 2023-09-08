#include<iostream>
using namespace std;
 
/*
  Checking if the bit at nth position is Set or Unset

  9 -> 01101 pos 3 (0Th based idx)t
        -
      at this 3rd position bit 1
*/ 

bool isSetBit(int &num, int pos) {

  /*
    first set a bit 1 at given postion 

    Apply bitwise AND to NUM

        9 -> 01101         -> 01000

              01101
            & 01000
              -----
              01000  
  */
  return num & (1 << pos);
}
int main() {

  int num = 11, pos = 3;

  cout << isSetBit(num, pos) << endl;
  return 0;
}