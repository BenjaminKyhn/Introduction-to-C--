#include <iostream>
#include <string>
using namespace std;

void toLowercase(string word);
void toLowercase(string *ptr);

int main(){
    // A String without a pointer
    string word1 = "CHERNOBYL";

    // A string that also has a pointer
    string word2 = "CHERNOBYL";
    string* ptr = &word2;

    // Call the toLowercase function by passing a copy of word1 as parameter
    toLowercase(word1);

    // Call the toLowercase function by passing the reference to word2 as parameter
    toLowercase(ptr);

    // Observe that word1 hasn't changed
    cout << word1 << "\n";

    // Observe that word2 has changed
    cout << word2 << "\n";
}

void toLowercase(string word){
    string newWord = "";

    for (int i = 0; i < word.length(); i++){
        newWord += (char)tolower(word[i]);
    }

    word = newWord;
}

void toLowercase(string *ptr){
    // *ptr isn't a string, so we can't call string functions on it
    // Therefore we create a new string variabel from *ptr so we can call string functions like length()
    string word = *ptr;
    string newWord = "";

    for (int i = 0; i < word.length(); i++){
        newWord += (char)tolower(word[i]);
    }

    *ptr = newWord;
}