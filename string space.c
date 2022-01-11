#include <stdio.h>
#include<string.h>

int main()
{   
    //calculate number of time character in a given word
    char s[20];
    int count=0,i=0;
    printf("enter the string\n");
    gets(s);
    printf("%s",s);
    while(s[i]!='\0'){
        if(s[i]==' '||s[i]=='\n'||s[i]=='\t'){
            count++;
            
        }
        i++;
    }
    printf(" total number of words in string are %d",count);
}
