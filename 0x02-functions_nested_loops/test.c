#include <stdio.h>

int main(){
	int i = 0, j;
	while (i < 10){
			j = 'a';
			while (j <= 'z'){
			putchar(j);
			j++;
			}
		i++;
		putchar('\n');
	}
	return 0;
}
