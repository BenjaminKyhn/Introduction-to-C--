#include <iostream>
#include <string>
using namespace std;

void passByValue(string word);
void passByReference(string *ptr);

int main(){
    // A String without a pointer
    string word1 = "Chernobyl";

    // A string that also has a pointer
    string word2 = "Chernobyl";
    string* ptr = &word2;

    // Apply transformation to the words
    passByValue(word1);
    passByReference(ptr);

    cout << word1 << "\n";
    cout << word2 << "\n";
}

void passByValue(string word){
    word = "Transformed word";
}

void passByReference(string *ptr){
    *ptr = "Transformed word";
}