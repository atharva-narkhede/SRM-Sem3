#include<stdio.h>
#include<math.h>
#include<time.h>

int prime(int n)
{
    int count=1, flag, i=2, j;
	 
	 while(count <= n)
	 {
		  flag = 0;
		  for(j=2; j <= sqrt(i); j++)
		  {
			   if(i%j==0)
			   {
			    flag=1;
			    break;
			   }
		  }
		  if(flag==0)
		  {
			   printf("%d ",i);
			   count++;
		  }
		  i++;
	 }
}

int main()
{
	 int n;
	 printf("Enter how many prime numbers:");
	 scanf("%d", &n);
     clock_t begin=clock();
	 prime(n);
     clock_t end=clock();
    double time_spent=(double)(end-begin) / CLOCKS_PER_SEC;
    printf("\nTime Taken = %f",time_spent);
	 return 0;
}