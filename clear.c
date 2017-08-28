#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE * f = fopen("/dev/text", "r");
	while(fgetc(f) != eof){
		printf("\x08");
	}
	fclose(f);
	return 0;
}
