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
}

int main(void)
{
	/* TODO: Test functions */

	// test my_strlen
	char* sir = "123";
    printf("%d", my_strlen(sir));
    return 0;
}

