#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    // Pegando os dados do texto
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Calculando o index
    float L = letters / (float)words * 100;
    float S = sentences / (float)words * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Exibindo o tipo de grade
    if (index >= 16){
        printf("Grade 16+");
    }
    else if (index < 1) {
        printf("Before Grade 1");
    }
    else {
        printf("Grade %i", index);
    }
    printf("\n");
}

int count_letters(string text) {
    int total = 0;

    for (int i = 0, len = strlen(text); i < len; i++) {
        if (isalpha(text[i])) {
            total++;
        }
    }
    return total;
}

int count_words(string text) {
    int total = 1;

    for (int i = 0, len = strlen(text); i < len; i++) {
        if (isspace(text[i])) {
            total++;
        }
    }
    return total;
}

int count_sentences(string text) {
    int total = 1, id = 0;

    for (int i = 0, len = strlen(text); i < len; i++) {
        id = (int) text[i];
        if (id == 33 || id == 46 || id == 63) {
            total++;
        }
    }
    return total - 1;
}