#include<stdio.h>
main()
{
	int i;
	int j;
	int cnt=1;

	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf(" %d",cnt);
			cnt++;
		}

			printf("\n");
	}

}

