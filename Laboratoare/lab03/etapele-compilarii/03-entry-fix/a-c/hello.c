#include <stdio.h>

//#define main() my_main()

static void hi(void)
{
	puts("Hi!");
}

static void bye(void)
{
	puts("Bye!");
}

int main(void)
{
	hi();
	bye();
}
