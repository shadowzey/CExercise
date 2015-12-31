#include<stdio.h>

main()
{
	int n;
	long dc;
	dc = 0;
	while ( (n = getchar()) != EOF)
	{
		if (n=='\n' || n=='\t' || n==' ')
		{
			++dc;
		}
	}
	printf("%ld", dc);
}