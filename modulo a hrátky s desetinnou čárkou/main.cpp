#include <stdio.h>

int main()
{

    int cislo;
    scanf("%d", &cislo);
    int soucet = 0;

    while (cislo > 0) {
        soucet = soucet + cislo%10;
        cislo = cislo / 10;
    }

    printf("%d\n", soucet);

    return 0;

}
