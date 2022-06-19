#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[3][4] = {{5,-2,-3,4},{4,-5,6,-7},{1,3,-8,3}};
  int a=tab[1][-3]; //a= -2
  int b=tab[2][-2]; //a= -2 ,b= 6
  a=b++; //a= 6 ,b= 7
  b=a*3;  //a= 6 ,b= 18
  a=(b+=3)-7;  //a= 14 ,b= 21
  b=**((tab)+2); //a= 14 ,b= 1
  ++a; //a= 15 ,b= 1
  return 0;
}

