#include <stdio.h>
#include "main.h"


/**
 *jack_bauer- Print time format
 *
 *Return: Nothing
 *
 */

void jack_bauer(void)
{
	int i = 0;

	while (i <= 23)
	{
		int j = 0;

		while (j <= 59)
		{
			if (i <= 9)
			{
				printf("0%d:", i);

				if (j <= 9)
				{
					printf("0%d\n", j);
				}
				else
				{
					printf("%d\n", j);
				}
			}
			else
			{
				printf("%d:", i);
				if (j <= 9)
				{
					printf("0%d\n", j);
				}
				else
				{
					printf("%d\n", j);
				}
			}
		j++;
		}
	i++;
	}
}

