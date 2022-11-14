#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char str[100];
    printf("Enter String: ");
    gets(str);
    while(str[i] != '\0')
        i++;
    printf("String Len Is: %d", i);    
    return 0;
}