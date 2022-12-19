//print fac 1 to n using for loop

#include<stdio.h>
main()
{
	int a;
	int n;
	int fac=1;
	
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		fac*=a;
	}
	printf("%d",fac);
}
