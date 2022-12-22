/*	0
	01
	010
	0101
	01010 */
	
	#include<stdio.h>
main()
{
	int i,j;
	
	for(i=2;i<=6;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(j%2==0)
			{
				printf(" 0");
			}
			else
			{
				printf(" 1");
			}
		}
			printf("\n");
	}	
}
