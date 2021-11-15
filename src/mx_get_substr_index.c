
   
#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
	int index = 0;

	if (!str || !sub) {
		return -2;
	}

	while (*str != '\0') {
		if (mx_strncmp(str, sub, mx_strlen(sub)) == 0) {
			return index;
		}
		index++;
		str++; 
	}
	return -1;
}
