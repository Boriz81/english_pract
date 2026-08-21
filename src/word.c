#include "../include/word.h"
#include <stdio.h>
#include <string.h>

// Реализация функции инициализации слова
void init_word(Word *w, int id, const char *eng, const char *rus) {
    w->id = id;
    strcpy(w->english, eng);
    strcpy(w->russian, rus);
}

// Реализация функции вывода слова
void print_word(const Word *w) {
    printf("Слово %d\n", w->id);
    printf("Английский: %s\n", w->english);
    printf("Русский: %s\n", w->russian);
    printf("---\n");
}
