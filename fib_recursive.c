#include <stdio.h>
int fib(int );


int main()
{   int r,i;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        printf("%d",fib(i));
    }
    
  
   
}
int fib(int x){
    if(x<=2){
        return 1;
        
    }
    return (fib(x-1)+fib(x-2) );
}
