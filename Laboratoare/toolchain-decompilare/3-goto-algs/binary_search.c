#include <stdio.h>

int main(void)
{
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = 0; /* 15 */
	int start = 0;
	int end = sizeof(v) / sizeof(int) - 1;

	/* TODO: Implement binary search */
	(void) dest;
	(void) start;
	(void) end;
	int mid;
do_mid:
	mid = (start + end) / 2;
	

	if(dest == v[mid])
		goto end;
	if(dest > v[mid])
		goto search_right;
	if(dest < v[mid])
		goto search_left;

search_right:
	start = mid + 1;
	if (end < start)
		goto err;

	goto do_mid;

search_left:
	end = mid-1;
	if (end < start)
		goto err;

	goto do_mid;
end:
	printf("Pozitia elem %d este %d\n", dest, mid);
err:
	printf("Nu s-a gasit elementul\n");

}
