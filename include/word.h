#ifndef WORD_H
#define WORD_H

// Структура для хранения слова
typedef struct {
    int id;
    char english[50];
    char russian[100];
} Word;

// Объявления функций (прототипы)
void init_word(Word *w, int id, const char *eng, const char *rus);
void print_word(const Word *w);

#endif
