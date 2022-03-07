#include <stdio.h>

void rotate_left(int *number, int bits)
{
	/* TODO */
	int mask = 1 << 30;
	while(bits) {
		int add = 0;
		if(mask & *number)
			add = 1;
		*number <<= 1;
		*number += add;
		bits--;
	}
	 
}

void rotate_right(int *number, int bits)
{
	/* TODO */
	int mask = 1 << 30;
	while(bits) {
		int add = 0;
		if(mask & *number)
			add = 1 << 30;
		*number >>= 1;
		*number += add;
		bits--;
	}

}

int main()
{
	/* TODO: Test functions */
	int a = 321421432;
	int b = 321421432;
	rotate_left(&a, 1);
	rotate_right(&b, 1);
	printf("%d %d\n", a, b);
	return 0;
}

