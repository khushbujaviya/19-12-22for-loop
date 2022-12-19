// print odd no form 1 to n using for loop


#include<stdio.h>
main()
{
	int a=1;
	int n;
	
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		if(a%2!=0)
		{
			printf("%d\n",a);
		}
	}
}
	
