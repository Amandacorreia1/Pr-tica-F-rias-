#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("\t\t\t Ler 10 números inteiros e imprimir os números pares  de trás pra frente.\n\n\n");
	
	int v[10];

	
	for(int i=0; i<10; i++){
		printf("Informe os valores: ");
		scanf("%d", &v[i]);
		
	}
	printf("\n\t\t\tValores pares de trás pra frente.\n\n");
	
	for(int i=9; i>=0; i--){
		if(v[i] % 2 == 0){
			
			printf("%d\t", v[i]);
		}
	}

	
	return 0;
}
