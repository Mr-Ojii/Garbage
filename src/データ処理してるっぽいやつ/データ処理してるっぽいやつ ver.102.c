#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i = 0;
	int j = 0;
	srand((unsigned int) time(NULL));

	while(1){
		for (i = 0; i < 8; i++) {
			for (j = 0; j < 8; j++) {
				printf("%d", (int)rand() % 2);
			}
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}
