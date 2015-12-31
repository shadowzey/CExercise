#include<stdio.h>

#define OUTSPACE 0
#define INSPACE 1

main()
{
	int state, c;
	state = OUTSPACE;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == OUTSPACE)
			{
				putchar('\n');
				state = INSPACE;
			}
		}
		else
		{
			putchar(c);
			state = OUTSPACE;
		}

	}
}