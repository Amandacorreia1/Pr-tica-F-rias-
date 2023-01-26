#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\n\t\t\t\tInformar os números pares de 10 valores digitados.\n");
	int v[10];
	
	printf("\n\n");
	
	for(int i=0; i<10; i++){
		printf("Informe os valores: ");
		scanf("%d", &v[i]);
		
	}
	printf("\n\n  Os números pares são: ");	
	for(int i=0; i<10; i++){
		if(v[i] % 2 ==0){
			printf("%d\t", v[i]);
		}
	}
	

	return 0;
}
