#include <stdio.h>

int main(void) {
  int a = 1, b = 1;
  int a_post, pre_b;
  
  a_post = a++;
  pre_b = ++b;
  printf("a a_post b pre_b \n");
  printf("%1d  %5d  %5d  %5d\n", a, a_post, b, pre_b);


  int two = 2;
  int three = 3;
  int nextnum = (two + three++) * 6 + (two + three++) * 6;
  // 2 + 3 * 6 = 30 + 2+4 * 6 = 30 + 36
  printf("current nextnum is %d\n", nextnum);
  return 0;
}