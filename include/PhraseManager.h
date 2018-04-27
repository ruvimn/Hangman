#ifndef PHRASEMANAGER_H
#define PHRASEMANAGER_H

#include <string>
using namespace std;

class PhraseManager {
    public:
        PhraseManager();

        void generate_phrase();

    private:
        int get_number_of_words(void);
        string get_random_word(void);

        string generated_phrase;
};

#endif // PHRASEMANAGER_H
