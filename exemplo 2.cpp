#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\n\t\t\t\tSubstituir os valores pares por 1 e os impares por -1.");
	int v[10];
	
	printf("\n\n");
	
	for(int i=0; i<10; i++){
		printf("Informe os valores: ");
		scanf("%d", &v[i]);
	}
	
	for(int i=0; i<10; i++){
		
		if(v[i]%2 == 0){
			
			v[i]=1;
			
		}else{
			
			v[i]= -1;
		}
	}
	
	printf("\nSubstituindo os valores:\n");
	
	for(int i=0; i<10; i++){
		printf("%d\t", v[i]);
	}
	

	return 0;
}
