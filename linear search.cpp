#include<stdio.h>
main()
{
	int a[100],i,se,n;
	printf("enter the number of elements in array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search element");
	scanf("%d",&se);
	for(i = 0; i < n; i++)
  {
     if(se== a[i])
     {
        printf("Element is found at %d index", i);
        break;
     }
  }
  if(i ==n)
     printf("Given element is not found ");
     return 0;
 }
