#include <stdio.h>

int main(){
	
	int a1, a2, a3;
	int n, i;
	
	printf("WadaJu Software Solutions\n");
	printf("Série de Fibonacci\n");
	printf("Fibonacci Serie\n");
	
	printf("Quanto termos terá a série: ");
	scanf("%d",&n);
	
				a1 = 0; a2 = 0; a3 = 1; i=1;
				
					printf("%d \n",a1);
					
					while (i != n){
					i = i + 1;
					a1 = a2 + a3;
					printf("%d \n",a1);
					a3 = a2;
					a2 = a1; 
					}
			    
			    
			    
		printf("\n");		
	
	
	return 0;
	}
