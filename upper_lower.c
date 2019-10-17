#include<stdio.h>
int main()
{
	char a,b;
	int c,d,f;
	printf("Enter an Alphabet ");
	scanf("%c",&a);
	c=a;
	if(65<=c && c<=90)
	{
		printf("u entered UPPER CASE CHARACTER\n");
		b=a+32;
		printf("It's LOWER CASE is: %c\n",b);
	}
	else if(97<=c && c<=122)
	{
		printf("u entered LOWER CASE CHARACTER\n");
		b=a-32;
		printf("It's UPPER CASE is: %c\n",b);
	}
	else
		printf("u didn't entered an Alphabet\n");
	return 0;
}
