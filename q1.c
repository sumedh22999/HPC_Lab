#include <omp.h>
#include <stdio.h>


void sort(int a[],int n)
	{
		int i,j,tmp;
		for ( i=0;i<n-1;i++)
			{
				for ( j=0;j<n-i-1;j++)
					{
						if (a[j]>a[j+1])
							{
								 tmp=a[j];
								a[j]=a[j+1];
								a[j+1]=tmp;
							}
					}
			}
	}
	
	void sort_des(int a[],int n)
	{
		
		int i,j,tmp;
		for ( i=0;i<n-1;i++)
			{
				for ( j=0;j<n-i-1;j++)
					{
						if (a[j]<a[j+1])
							{
								 tmp=a[j];
								a[j]=a[j+1];
								a[j+1]=tmp;
							}
					}
			}
	}

int main() {
	
	int n,i,sum=0,cons=100;
	scanf("%d",&n);
	
	
	int *a=(int *)malloc(sizeof (int)*n);
	int *b=(int *)malloc(sizeof (int )*n);
	
	for ( i=0;i<n;i++)scanf("%d",&a[i]);
	for ( i=0;i<n;i++)scanf("%d",&b[i]);
	
 
	
	
	
	sort(a,n);
	sort_des(b,n);
	
		#pragma omp parallel  for default (none) shared (sum,a,b,n)
	for (i=0;i<n;i++)
		sum=sum+(a[i]*b[i]);

	printf("%d",sum);
	


	
	return 0;
}
