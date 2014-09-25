#include <stdio.h>

int f_maximum(int mnozina[]) {

    int maximalni = 0;
    for (int x = 0; x < 10; x++) {
        if (mnozina[x] > maximalni) {
            maximalni = mnozina[x];
        }
    }

    return maximalni;

}

int main()
{

    int x = 10;

    int mnozina[x] = {1, 15, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        if (mnozina[i]%2 == 0) {
            printf("%d\n", mnozina[i]);
        }
    }

    printf("%d", f_maximum(mnozina));

    return 0;

}
