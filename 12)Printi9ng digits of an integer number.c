#include <stdio.h>
#define MAX 100
void printDigit(int N)
{
	int arr[MAX];
	int i = 0,j,r;
	while(N != 0) {
		r = N % 10;
		arr[i] = r;
		i++;
		N = N / 10;
	}
	for(j = i -1; j > -1; j--) {
		printf("%d \n", arr[j]);
	}
}
int main()
{
	int N;
	printf("Enter The Number: ");
	scanf("%d",&N);
	printfDigit(N);
	return 0;
	
}
