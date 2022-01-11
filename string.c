#include <stdio.h>
#include<string.h>

int main()
{   
    //calculate number of time character in a given word
    char str[20];
    int count=0,i,j;
    printf("enter the string");
    scanf("%s",str);
    printf("%s",str);
    int s=strlen(str);
    printf("%d \t",s);
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        printf("%c is occured %d times\n",str[i],count);
        count=0;
    }
}
