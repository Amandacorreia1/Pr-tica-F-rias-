#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\n\t\t\t\tMostrar os números digitados em ordem crescente.\n");
	float v[10];
	float aux = 0;
	
	for(int i=0; i<10; i++){
		printf("Digite os números: ");
		scanf("%f", &v[i]);
	
}
	for(int x=0; x<10; x++){
		
		for(int y=x; y<10; y++){
			if(v[x] > v[y]){
				
			aux = v[x];
			v[x] = v[y];
			v[y] = aux; 	
		
		}
	
	}
		
		
}

    for(int i=0; i<10; i++){
		printf(" \n A ordem crescente é:%.2f\t",v[i]);
	}
	

	return 0;
}
