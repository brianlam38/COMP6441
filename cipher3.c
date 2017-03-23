/*	Caesar Cipher encryption tool
 *	
 *	This program reads in a text file, shifts characters
 *	depending on the shift# that the user selects and then
 *	returns the encrypted text.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[]) {

	// Shift val
	int shift;
	scanf("%d\n", &shift);
	printf("Shift value = %d\n", shift);

	// Count num chars in text file
	char c;
	FILE *file;
	file = fopen("cipher3.txt", "r");
	while ((c = getc(file)) != EOF) {
		char temp = c + shift;
		putchar(temp);
	}

	return EXIT_SUCCESS;
}
