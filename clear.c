#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, i;
	FILE * f = fopen("/dev/text", "r");
	while(!feof(f)){
		fgetc(f);
		a++;
	}
	fclose(f);
	for(i = 0; i <= a; i++){
		printf("\x08");
	}
	return 0;
}
