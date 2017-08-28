#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE * f = fopen("/dev/text", "r");
	while(!feof(f)){
		fgetc(f);
		printf("\x08");
	}
	fclose(f);
	return 0;
}
