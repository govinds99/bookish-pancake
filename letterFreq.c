#include<stdio.h>

int main(){
	int arr_in[26], inp;
	int i, x;
	for (i = 0; i < 26; i++){
		arr_in[i] = 0;
	}
	inp = getchar();
	while (inp != EOF){
		if (inp >= 'A' && inp <= 'Z')
			++arr_in[inp - 'A'];
		else if (inp >= 'a' && inp <= 'z')
			++arr_in[inp - 'a'];
		inp = getchar();
	}
	for (i = 0; i < 26; i++){
		arr_in[i] = arr_in[i];
	}
	printf("\n");
	for (i = 0; i < 26; i++){
		x = arr_in[i];
		printf("%c (%2d) : ", 'A' + i, x);
		while (x > 0){
			printf("*");
			x--;
		}
		printf("\n" );
	}
	printf("\n" );
	return 0;
}