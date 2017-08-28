#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, i;
	FILE * f = fopen("/dev/text", "r");
	
	// 'fgetc(f) != EOF' advances the stream, whereas feof does not
	
	while(fgetc(f) != EOF){
		a++;
	}
	fclose(f);
	
	// originally I had the printf \b in the fgetc while loop, but that  
	// caused some errors, as you're technically writing to /dev/text
	
	for(int i = 0; i <= a; i++){
		printf("\x08");
	}
	return 0;
}
