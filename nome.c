#include <stdio.h>

int main(){
	printf("Meu Nome");

	int v[] = [4 2 5 1 9 7 8 0 3 6];
	int i, j;

	for(i=0; i<10; i++) {
		for(j=i; j<10; j++) {
			if(v[j] > v[j+1]) {
			
				int a = v[j];
				v[j] = v[j+1];
				v[j+1] = v[j];
			}
		}
	}

	return 0;
}
