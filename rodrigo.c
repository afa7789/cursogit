#include<stdio.h>
void selection_sort(int num[], int tam) { 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++){
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min])
           min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
}

int main() {
	printf("rodrigo\n");
	int i;
	int vetor[10];
	for(i = 0;i<10;i++){
		scanf("%d",&vetor[i]);
	}
	selection_sort(vetor,10);
	return 0;
}
