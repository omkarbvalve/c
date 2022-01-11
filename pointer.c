
#include <stdio.h>
#define n 10
int main()
{
    //pointers
  int a=10;
  printf("%d\n",a);
  printf("%p\n",&a);
  int * po;
  po=&a;
   printf("%p\n",po);
   //indirection and dereferencing
   printf("%d\n",*po);
   *po=20;
   printf("%d\n",a);
}
