#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	/* TODO */
	(void) str;
	int len = 0;

	char* addr_start = str;
	char *addr_fin = NULL;

	for (addr_fin = str; *addr_fin != 0; addr_fin++);
	
	len = addr_fin - addr_start;
	return len;
}

void equality_check(const char *str)
{
	/* TODO */
	(void) str;
	int len = my_strlen(str);
	for (int i = 0; i < len; i++) {
		int i_toCompare = (i + (1 << i)) % len;
		if (!(*(str + i) ^ (*(str + i_toCompare)))) {
			printf("Address of %c: %p, is equal to: %c, %p\n", *(str+i), (str+i), *(str+i_toCompare), (str + i_toCompare));
		}
	}
}

int main(void)
{
	/* TODO: Test functions */

	// test my_strlen
	char* sir = "ababababacccbacbacbacbacbabc";
    printf("length = %d", my_strlen(sir));
	equality_check(sir);
    return 0;
}

