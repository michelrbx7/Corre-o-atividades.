#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int i, num, posi = 0, neg = 0;
    float soma = 0, media = 0;

    do {
        printf("Digite valores (digite 0 para encerrar):\n");
        scanf("%d", &num);

        if (num > 0) {
            posi++;
        } else if (num < 0) {
            neg++;
            soma += num;
        }
    } while (num != 0);

    
    if (posi + neg > 0) {
        media = soma / (posi + neg);
    }

    printf("O total de positivos �: %d\n", posi);
    printf("O total de negativos �: %d\n", neg);
    printf("A M�dia dos n�meros inseridos �: %.1f\n", media);

    return 0;
}

