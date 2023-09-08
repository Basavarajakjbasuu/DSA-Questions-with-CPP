#include<iostream>
using namespace std;

int position_of_rightMostBit(int num) {

  if(num == 0 )
    return 0;

  int position = 1, mask = 1;

  while (!(num & mask))
  {
    mask <<= 1;
    position++;
  }

  return position;
}

int main() {

  cout << position_of_rightMostBit(9) << endl;
  return 0;
}