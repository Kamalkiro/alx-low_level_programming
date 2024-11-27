#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i = strlen(argv[1]), var10 = 0, j;
	char a, b, c, d, e, f;
	char *smia = argv[1], *var_58 = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	if (!smia)
		return 0;
	a = (char)(var_58[((i ^ 59) & 63)]);
	for (j = 0; j < i; j++)
		var10 += *(argv[1] + j);
	var10 = (var10 ^ 79) & 63;
	b = (char)(var_58[var10]);
	var10 = 1;
	for (j = 0; j < i; j++)
		var10 *= *(argv[1] + j);
	var10 = (var10 ^ 85) & 63;
	c = (char)(var_58[var10]);
	var10 = *argv[1];
	for (j = 0; j < i; j++)
		if (var10 < argv[1][j])
			var10 = argv[1][j];
	srand(var10 ^ 14);
	j = rand();
	var10 = (j & 63);
	d = (char)(var_58[var10]);
	var10 = 0;
	for (j = 0; j < i; j++)
		var10 += argv[1][j] * argv[1][j];
	var10 = (var10 ^ 239) & 63;
	e = (char)(var_58[var10]);
	i = *argv[1];
	var10 = 0;
	for (j = 0; j < i; j++)
		var10 = rand();
	var10 = (var10 ^ 229) & 63;
	f = (char)(var_58[var10]);
	printf("%c%c%c%c%c%c\n", a, b, c, d, e, f);
	return 0;
}