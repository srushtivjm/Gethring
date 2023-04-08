#include<stdio.h>
int add(int element[])
{
	int i,n,sum=0;
	for(i=0;element[i]!=NULL;i++)
	{
	      	
		sum=sum+element[i];
	}
	printf("Addition of elements %d",sum);
	return sum;

}
main()
{
	int a[50],i,n;
	printf("Enter value size of array=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 printf("a[%d]",i);
    	scanf("%d",&a[i]);
 
	}

	add(a);
}
