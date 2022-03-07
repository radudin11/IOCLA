#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{
	/* TODO */

	char *start = s;
	char *end = NULL;
	for (end = s; *end != '\0'; end++);
	end--;
	while(end > start) {
		printf("end = %p, start = %p\n	", end, start);
		char aux = *end;
		*end = *start;
		*start = aux;
		start++;
		end--;
	}
}

int main()
{
	/* TODO: Test function */
	char sir[20] = "AnaAreMere";
	mirror(sir);
	printf("%s\n", sir);

	return 0;
}

