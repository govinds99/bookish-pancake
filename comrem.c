#include<stdio.h>
/* Multiline comment check
failed. */
int main(){
	int inp = getchar();
	while (inp != EOF){
		if (inp == '/') {
			inp = getchar();
			if (inp == '/') {
				while (inp != '\n')
					inp = getchar();
				printf("\n");
			}
			else if (inp == '*') {
				inp = getchar();
				while (inp != '*')
					inp = getchar();
				inp = getchar();
			}
			else
				printf("%c%c", '/', inp);
		}
		else
			printf("%c", inp);
		inp = getchar();
	}
	//This should not be here
	printf("\n");
	return 0;
}