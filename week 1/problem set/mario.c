#include <cs50.h>
#include <stdio.h>

int main(void) {
    int height = 0;
    do {
        height = get_int("Altura: "); //4
    } while (height < 1 || height > 8);

    int pos = height;

    // Navega no eixo vertical
    for (int y = 1; y <= height; y++) {

        // Cria o lado esquerdo da piramide
        for (int a = 1; a <= pos; a++) {
            if (a > (height - y)) {
                for(int b = 0; b < y; b++) {
                    printf("#");
                }
            } else {
                printf(" ");
            }
        }
        printf("  ");

        // Cria o lado direito da piramide
        for (int a = 0; a < y; a++) {
            printf("#");
        }

        pos--;
        printf("\n");
    }
}