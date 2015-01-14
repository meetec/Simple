
#include <stdio.h>
int main()
{
	int n,i, S;
	printf("Input natural number n: \n");
	scanf("%d",&n);
	S=0;
	i=0;
	while(i<=n)
	{
	S+=i;
	i++;
	}
	printf("Sum of first n nubers is %d\n",S);
}