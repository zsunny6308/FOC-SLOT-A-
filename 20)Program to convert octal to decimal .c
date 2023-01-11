#include <stdio.h>
#include <math.h>
long long od(int on);
int main() 
{
    int on;
    printf("Enter an octal number: ");scanf("%d", &on);printf("%d in octal = %lld in decimal", on, od(on));
    return 0;
}
long long od(int on) 
{
    int dn = 0, i = 0;while(on != 0) 
	{
        dn += (on%10) * pow(8,i);++i;on/=10;
    }
    i = 1;
    return dn;
}
