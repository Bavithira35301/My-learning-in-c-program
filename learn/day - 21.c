//basic reverse a string program
#include <stdio.h>

int main()
{
    char str[50];
    int i=0;

    printf("Enter a string: ");
    scanf("%s",str);

    while(str[i] != '\0')
        i++;

    printf("Reversed string: ");

    for(i=i-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}