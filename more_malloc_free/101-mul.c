#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_DIGITS 10000

int multiply(char *num1, char *num2, int len1, int len2, char *result);
int validate_number(char *str, int len);

int main(int argc, char **argv) {
	if (argc != 3) {
		printf("Error\n");
		return 98;
	}

	int len1 = strlen(argv[1]);
	int len2 = strlen(argv[2]);

	if (!validate_number(argv[1], len1) || !validate_number(argv[2], len2)) {
		printf("Error\n");
		return 98;
	}

	char result[MAX_DIGITS];
	int len = multiply(argv[1], argv[2], len1, len2, result);

	printf("%.*s\n", len, result);

	return 0;
}

int multiply(char *num1, char *num2, int len1, int len2, char *result) {
	int i, j, carry, digit;
	int res[MAX_DIGITS] = {0};

	for (i = len1 - 1; i >= 0; i--) {
		carry = 0;

		for (j = len2 - 1; j >= 0; j--) {
			digit = (num1[i] - '0') * (num2[j] - '0') + carry + res[i + j + 1];
			carry = digit / 10;
			res[i + j + 1] = digit % 10;
		}

		res[i + j + 1] = carry;
	}

	for (i = 0; i < len1 + len2; i++) {
		if (res[i] != 0) {
			break;
		}
	}

	int k = 0;

	for (; i < len1 + len2; i++, k++) {
		result[k] = res[i] + '0';
	}

	result[k] = '\0';

	return k;
}

int validate_number(char *str, int len) {
	int i;

	for (i = 0; i < len; i++) {
		if (!isdigit(str[i])) {
			return 0;
		}
	}

	return 1;
}
