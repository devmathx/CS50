// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replace(string text);

int main(int argc, string argv[])
{
    if (argc < 2) {
        printf("Erro, argumento faltando!\n");
        return -1;
    }

    replace(argv[1]);
}

void replace(string text) {
    // Descapitalizar a frase
    text[0] = tolower(text[0]);

    for (int i = 0, len = strlen(text); i < len; i++) {
        switch (text[i]) {
            case 'a':
                printf("%c", '6');
                break;
            case 'e':
                printf("%c", '3');
                break;
            case 'i':
                printf("%c", '1');
                break;
            case 'o':
                printf("%c", '0');
                break;
            default:
                printf("%c", text[i]);
                break;
        }
    }
    printf("\n");
}
