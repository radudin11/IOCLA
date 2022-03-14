#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};

    (void) v;
    //printf("%d\n",sizeof(v));
    printf("%s", "din 4 in 4\n");
    for (int* i = v; i -(int*) v < sizeof(v) / sizeof(int) ; i++)
        printf("Adresa: %p, valoare: %x\n", i, *i);
    printf("%s", "din 2 in 2\n");
    for (short* i = (short*)v; i-(short*)v < sizeof(v) / sizeof(short); i++)
        printf("Adresa: %p, valoare: %hx\n", i, *i);
    printf("%s", "din 1 in 1\n");
    for (char* i = (char*)v; i-(char*)v < sizeof(v) / sizeof(char); i++)
        printf("Adresa: %p, valoare: %hhx\n", i, *i);

    return 0;
}
