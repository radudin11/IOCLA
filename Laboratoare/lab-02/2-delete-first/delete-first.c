#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern) {
	static char aux[100];
	strcpy(aux, s);
	int size  = strlen(pattern);
	for(char *p = aux; *p; p++){
		int si = 0;
		while(si < size) {
			if(*(p+si) != *(pattern + si))
				break;
			si++;
		}
		if(si == size) {
			strcpy(p, p+size);
			return aux;
		}
	}
	return aux;
}

int main(){
	char *s = "reAna a me";
	char *pattern = "Ana";

	(void) s;
	(void) pattern;

	// Decomentati linia dupa ce ati implementat functia delete_first.
	 printf("%s\n", delete_first(s, pattern));

	return 0;
}

