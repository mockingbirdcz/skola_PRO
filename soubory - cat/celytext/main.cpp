#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char zdroj_name[50];
    char cil_name[50];
    while(1) {
        printf("nazev zdrojoveho souboru: ");
        scanf("%s", zdroj_name);
        strcat(zdroj_name, ".txt");
        FILE * zdroj = fopen(zdroj_name, "rt");
        if(zdroj == NULL) {
            printf(":( soubor %s neexistuje, zadejte znovu\n", zdroj_name);
        } else {
            printf("nazev ciloveho souboru: ");
            scanf("%s", cil_name);
            strcat(cil_name, ".txt");
            FILE * cil = fopen(cil_name, "rt");
            if(cil == NULL) {
                printf("soubor %s neexistuje, bude vytvoren\n", cil_name);
            }
            cil = fopen(cil_name, "wt");
            char radek[200];
            while(fscanf(zdroj, " %[^\n]", radek) != EOF) {
                fprintf(cil, "%s\n", radek);
            }
            printf(":) kopirovani probehlo uspesne\n");
            fclose(zdroj);
            fclose(cil);
            break;
        }
    }
    return 0;
}
