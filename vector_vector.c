#include <omp.h>
#include <stdio.h>

int main() {

	int n,i,constant =100;
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) scanf("%d",&b[i]);
	
	#pragma omp parallel for default(none) shared(a,b,c,n) private(i) firstprivate(constant )
	
		for(i=0;i<n;i++) {
				c[i] = a[i] + b[i];
				constant++;
		}
		
	
	
	printf("\n Value of constant  Remains unchanged %d \n",constant );
	for( i=0;i<n;i++)
		printf("%d ",c[i]);
}

