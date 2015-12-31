#include<stdio.h>

main()
{
	int c;
	short lx;
	lx = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (lx==0)
			{
				putchar(c);
				lx = 1;
			}
			if (lx == 1)
			{
				;
			}
		}
		else
		{
			putchar(c);
			lx = 0;
		}
	}
}