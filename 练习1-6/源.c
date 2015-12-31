#include<stdio.h>

main()
{
	int c;
	while (1)
	{
		c = getchar();
		if (c == EOF)
		{
			printf("0\n");
			printf("EOF=%d\n", c);
		}
		if (c != EOF)
		{
			printf("1\n");
		}
	}
}