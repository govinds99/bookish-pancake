#include<stdio.h>

int main(){
	int c = getchar();
	while(c != EOF){
		printf("%c", c);
		c = getchar();
	}
	printf("\n");
	return 0;
}
