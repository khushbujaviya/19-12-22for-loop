//print sum 1 to n using for loop

#include<stdio.h>
main()
{
	int a;
	int n;
	int sum=0;
	
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		sum+=a;
	}
	printf("%d",sum);
}
