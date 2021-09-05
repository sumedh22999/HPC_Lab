#include <omp.h>
#include <stdio.h>

int main() {
	
	

	#pragma omp parallel  
	printf("Hello  World ....from thread id  #%d\n",omp_get_thread_num());


	return 0;
}
