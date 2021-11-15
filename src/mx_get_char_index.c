#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
	int index = 0;

	if (!str) {
		return -2;
	}

	while (*str != '\0') {
		if (*str == c) {
			return index;
		}
		index++;
		str++; 
	}
	return -1;
}
