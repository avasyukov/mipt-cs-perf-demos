#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define LEN 1000*10
#define RUN 1

void lower(char *s)
{
	int i;
	for (i = 0; i < strlen(s); i++){
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] -= ('A' - 'a');
		}
	}
}

int main()
{
	char* s = (char*)malloc(LEN*sizeof(char));
	int c;
	for(c = 0; c < LEN-1; c++) {
		s[c] = 'a';
	}
	s[LEN] = '\0';
	int i;
	for(i = 0; i < RUN; i++) {
		lower(s);
	}
	return 0;
}
