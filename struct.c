 #include <stdio.h>
struct result{
    char name[20];
    int roll;
    float marks;
    
}a;
int main()
{   
    printf("enter details");
    scanf("%d ",&a.roll);
    scanf(" %s ",&a.name);
    scanf(" %f",&a.marks);
    printf("%d %s %f",a.roll,a.name,a.marks);
  
}
