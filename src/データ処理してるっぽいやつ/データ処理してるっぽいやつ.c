#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){
int i=0;
srand(time);
i=8;
while(!(kbhit())){
if (i==71){
printf("\n");
i=0;
}else{
if (i==8 || i==17 || i==26 || i==35 || i==44 || i==53 || i==62){printf(" ");
}else{
printf("%d",rand()%2);
}
i=i++;
}
}
return 0;
}
