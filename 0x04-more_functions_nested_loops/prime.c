#include <stdio.h>
#include <math.h>
int main(){
	long long int n = 612852475143;
	long long int i;

	while (n % 2 == 0) {
	        n = n / 2;
	}

	 for (i = 3; i <= sqrt(n); i = i + 2) {
	 	while (n % i == 0) {
			n = n / i;
		}
	 }
	 
	 printf("%lld\n", n);
	 return 0;
}
