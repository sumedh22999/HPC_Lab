#include <omp.h>
#include <stdio.h>

int main() {

	int n,i;
	scanf("%d",&n);
	
	int a[n],c[n];
	
	for( i=0;i<n;i++) scanf("%d",&a[i]);
	
	int num;
	scanf("%d",&num);
		
	#pragma omp parallel  
	{
		
	
		for( i=0;i<n;i++)
			c[i] = a[i] + num;
			
	}
	
	for( i=0;i<n;i++)
		printf("%d ",c[i]);
		
		return 0;
}
