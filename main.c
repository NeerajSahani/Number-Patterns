#include <stdio.h>
main()
{

	int i, n, rem, rev = 1, k, j, q = 11;
	printf("Enter the number :");
	scanf("%d", &n);
	while (n > 0)
	{
		k = n % 10;
		rev = rev * 10 + k;
		n = n / 10;
	}
	while (rev > 10)
	{
		rem = rev % 10;
		switch (rem)
		{
		case 1:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (j <= q / 2 && j == (q / 2) - i || i == q || j == (q + 1) / 2)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 2:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (i == q || i == 1 || i <= (q + 1) / 2 && j == q || i >= (q + 1) / 2 && j == 1 || i == (q + 1) / 2)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 3:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (i == 1 || j == q || i == q || i == (q / 2) + 1)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 4:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (j == q || i <= (q + 1) / 2 && j == 1 || i >= (q + 1) / 2 && j == q || i == (q + 1) / 2)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 5:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (i == q || i == 1 || i <= (q + 1) / 2 && j == 1 || i >= (q + 1) / 2 && j == q || i == (q + 1) / 2)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 6:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (j == 1 || i == q || i == 1 || j == 1 || i <= (q + 1) / 2 && j == 1 || i >= (q + 1) / 2 && j == q || i == (q + 1) / 2)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 7:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (i == 1 || j == (q - i) + 1)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 8:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (i == 1 || j == 1 || j == q || i == q || i == (q / 2) + 1)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 9:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (i == 1 || i == q || j == q || i <= (q + 1) / 2 && j == 1 || i >= (q + 1) / 2 && j == q || i == (q + 1) / 2)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 0:
			for (i = 1; i <= q; i++)
			{
				for (j = 1; j <= q; j++)
				{
					if (i == 1 || j == 1 || j == q || i == q)
						printf("#");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		} //End of switch
		rev /= 10;
		printf("\b");
	} // End of while
	return 0;
}
