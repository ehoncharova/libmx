#include "libmx.h"

char *mx_strstr(const char *s1, const char *s2) {
	char start = *s2;
	char *ret;
	int c = mx_strlen(s1);
	for (int i = 0; i < mx_strlen(s1); i++) {
		if(mx_strncmp(mx_strchr(s1, start), s2, mx_strlen(s2)) == 0) {
			ret = mx_strchr(s1, start);
			i = c;
	}
		else
			ret = NULL;
			s1++;
	}
	return ret;
}
