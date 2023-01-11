#include <stdio.h>
int main() 
{
    int on[10], number, i, j;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    for(i = 0; number > 0; i++)
    {
        on[i] = number % 8;
        number = number / 8;
    }
    printf("\n Octal Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)  
    {
        printf("%d", on[j]);
    }
    return 0;
}
