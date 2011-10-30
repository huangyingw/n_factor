#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

int isNFactored(int value, int n)
{
  return 0;
}

int main() 
{
  cout<<isNFactored(14,2)<<endl;//14 has two factors, 2 and 7
  cout<<isNFactored(18,5)<<endl;//18 does not have 5 factors, it only has four (2, 3, 6 and 9)
  cout<<isNFactored(25,2)<<endl;//25 = 5*5 but we are only interested in distinct factors so the 5 is only counted once.
  cout<<isNFactored(36,7)<<endl;//36 has seven factors (2, 3, 4, 6, 9, 12, 18). Note that 6 is counted only once.
  cout<<isNFactored(7,0)<<endl;//all prime numbers are 0-factored
  cout<<isNFactored(-5,3)<<endl;//the value must be greated than 0
  return 0;
}
