#include <stdio.h>
#include <string.h>

/* prints the nth characters in the string specified by argv[1], all n are taken from stdin and must be whitespace delimited */
int main(int argc, char **argv)
{
	if (argc != 2) {
		fprintf(stderr, "usage: %s n *s\n",argv[0]);
		return -1;
	}
	char *s = argv[1];
	int max = strlen(s);

	int n;	/* from input */
	char c;/* for whitespace */
	while (scanf("%d%c", &n, &c) > 0) {
		if (n <= max)
			printf("%c%c", s[n - 1], c);
	}
	return 0;
}
