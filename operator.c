
#include <stdio.h>

int main()
{
printf("operator types");
//relational,equality,arithmetic,assignment,logical and bitwise
printf("relational example");
int a=10,b=20;
//ternary
int c=a>b? a:b;
printf("%d \t is greater",c );
//equality 
if(c==b){
    printf("both are equal i.e c and b\n");
    
}
 // logical 
 if(c==b && b==a){
    printf("both are equal i.e c and b\n");
    
}
else{
    printf("givencondition is not satisfactory\n");
}
//bitwise
int d =c & 001;
printf("%d",d);
}
