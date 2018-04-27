#include "PhraseManager.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

vector<string> word_list = {
    "hello",
    "world",
    "never",
    "says",
    "hi",
    "back"
};

PhraseManager::PhraseManager() {
    srand(time(nullptr));
    generate_phrase();
}

void PhraseManager::generate_phrase() {
    int number_of_words_in_phrase = get_number_of_words();

    for(int i = 0; i < number_of_words_in_phrase; i++)
        generated_phrase += get_random_word() + " ";

    cout << generated_phrase << endl;
}

int PhraseManager::get_number_of_words(void) {
    int lowest_number_of_words=1;
    int highest_number_of_words=5;

    return lowest_number_of_words + (rand() % highest_number_of_words);
}

string PhraseManager::get_random_word() {
    return word_list[rand()%word_list.size()];
}
