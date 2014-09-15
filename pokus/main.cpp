#include <stdio.h>

int main() {

    printf("1 pro caru, 2 pro ctverec: ");
    int volba;
    scanf("%d", &volba);

    switch (volba) {
        case 1:
            int volba2;
            int volba3;
            printf("vodorovne 1, svisle 2: ");
            scanf("%d", &volba2);
            printf("kolik hvezdicek: ");
            scanf("%d", &volba3);
            switch (volba2) {
            case 1:
                for (int i=0; i<volba3; i++) {
                    printf("*");
                }
                break;
            case 2:
                for (int i=0; i<volba3; i++) {
                    printf("*\n");
                }
                break;
            }
            break;
        case 2:
            int volba4;
            printf("kolik hvezdicek v delce strany: ");
            scanf("%d", &volba4);
            for (int i=0; i<volba4; i++) {
                for (int i=0; i<volba4; i++) {
                    printf("*");
                }
                printf("\n");
            }
            break;
    }

    return 0;

}
