#include <stdio.h>

int main()
{   
    int num;
    int fact=1;
   //code to find factorial of given number
   printf("enter the number\n");
   scanf("%d",&num);
   while(num >=1){
       fact *=num;
       num--;
       
   }
   printf("%d",fact);
}
