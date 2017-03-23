/*	Caesar Cipher encryption tool
 *	
 *	This program reads in a text file, shifts characters
 *	depending on the shift# that the user selects and then
 *	returns the encrypted text.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	// Count num chars in text file
	char c;
	int count = 0;
	FILE *file1;
	file1 = fopen("cipher3.txt", "r");
	if (file1) {
		while ((c = getc(file1)) != EOF) {
			count++;
		}
		fclose(file1);
	}
	printf("Number of chars = %d\n", count);

	// Create an array to store text
	char *array = malloc(sizeof(char) * count);
	assert(array != NULL);

	// Store text into array
	FILE *file2;
	file2 = fopen("cipher3.txt", "r");
	if (file2) {
		for (int i = 0; i < count; i++) {
			fscanf(file2, "%c", &array[i]);
		}
		fclose(file2);
	}

	// Encryption based on shift#
	int shift;
	scanf("Enter in your shift #:%d\n", &shift);
	for (int k = 0; k < count; k++) {
		array
	}

	// Free array memory
	free(array);

	return EXIT_SUCCESS;
}
