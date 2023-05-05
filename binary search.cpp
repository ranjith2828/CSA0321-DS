#include<stdio.h>
main()
{
	int a[100],i,se,n,f,l,m;
	printf("enter the number of elements in array");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search element");
	scanf("%d",&se);
	f=0;
	l=n-1;
	m=(f+l)/2; 
      if (a[m] < se)
      {
	  
         f= m+1;  
	}
      else if (a[m] == se) 
	  {
         printf("Element found at index %d.\n",m);
      }
      else if(a[m]>se)
      {
	  
         l= m - 1;
 
      m = (f + l)/2;
   }

   else
   {
   
      printf("Element Not found in the list."); 
}
return 0;
}
