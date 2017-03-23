// Freeman Dyson cipher?

// Caesar cipher shift.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	// Count num chars in file
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

	// Create array of size count to store all chars
	char *array = malloc(sizeof(char) * count);

	// Store text file into array
	FILE *file2;
	file2 = fopen("cipher3.txt", "r");
	if (file2) {
		for (int i = 0; i < count; i++) {
			fscanf(file2, "%c", &array[i]);
		}
		fclose(file2);
	}

	// TEST IF ARRAY SCANNED CORRECTLY
	// for (int j = 0; j < count; j++) {
	// 	printf("%c", array[j]);
	// }

	

	return EXIT_SUCCESS;
}
