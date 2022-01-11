#include <stdio.h>
int add(int ,int );
void msg();
void update(int*);

int main()
{
   //pass by value
   int a=10,b=20,c;
   c=add(a,b);
   printf("%d \n",c);
   msg();
   //pass by reference
   update(&c);
   printf("%d \n",c);
   
}
int add(int x,int y){
    return x+y;
}
void msg(){
    printf("\a function completed\n");
}
void update(int *z){
    //dereferencing
    *z=100;
}
