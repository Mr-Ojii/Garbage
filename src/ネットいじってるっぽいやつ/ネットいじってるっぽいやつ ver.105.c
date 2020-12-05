#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	struct timespec ts;
	ts.tv_sec=0;
	int kuri;

	srand((unsigned int)time(NULL));

	int suuti[]={rand()%255+1,rand()%255+1,rand()%255+1,rand()%255+1};

	int pasent=0;

	while(1){

		kuri=0;
		pasent=pasent+rand()%10;
		if (pasent>=100) {
			pasent=100;
		}
		printf("\r%3d.%3d.%3d.%3d %03d%%Š®—¹ |",suuti[0],suuti[1],suuti[2],suuti[3],pasent);
		while(!(kuri>=pasent/5)){
				printf("%%");
				kuri++;
		}
		while(!(20-kuri==0)){
			printf("-");
			kuri++;
		}
		printf("|");
		ts.tv_nsec=(rand()%250+1)*1000000;		
		nanosleep(&ts,NULL);
		if (pasent==100){
			printf("\n\n");
			suuti[0]=rand()%255+1;
			suuti[1]=rand()%255+1;
			suuti[2]=rand()%255+1;
			suuti[3]=rand()%255+1;
			pasent=0;
		}
	}
	printf("\n");
	printf("Canceled\n");
	return 0;
}
