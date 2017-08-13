#include<stdio.h>
int prime(int x)
{
	if(x <= 1)
		return 0;
	int i,j = x/2;
	for(i = 2; i<j; i++)
	{
		if(x%i == 0)
			return 0;
	}
	return 1;
}



int main()
{
	int num;
	printf("please input the integer: \n");
	int i;
	
	scanf("%d", &num);
	for(i = 2; i<=num; i++)
		if(prime(i))
			printf("%d\n", i);


	return 0;
}
