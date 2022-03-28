#include <stdio.h>

int main(void)
{
	int v[] = {4, 1, 2, -17, 15, 22, 6, 2};
	int max;
	int i;

	/* TODO: Implement finding the maximum value in the vector */
	i = 0;
replace:
	max = v[i];

verif:
	if(v[i] > max) {
		goto replace; 
	}
	
	if(i > 7)
		goto end;

	i++;
	goto verif;

end:
	printf("%d\n", max);
	return 0;

}
