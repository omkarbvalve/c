#include <stdio.h>
#define n 10
int main()
{
    //two dimensional array;
    int a[n][n],i,j,m;
    printf("enter no");
    scanf("%d",&m);
    for(i=1;i<=10;i++){
        for(j=1;j<=m;j++){
        printf("%d\t",i*j);
    }
    printf("\n");
    }
}
