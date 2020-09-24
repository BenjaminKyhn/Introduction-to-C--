#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

string toLowerCase(string word){
    string newWord = "";

    for (int i = 0; i < word.length(); i++){
        newWord += (char)tolower(word[i]);
    }

    return newWord;
}

bool isIsogram(string word){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    //Convert the word to lowercase before comparing each character
    word = toLowerCase(word);

    for (int i = 0; i < word.length(); i++){
        // string::npos is a constant number 4294967295 that represents not found
        if (alphabet.find(word[i]) != string::npos){
            alphabet.erase(remove(alphabet.begin(), alphabet.end(), word[i]), alphabet.end());
        }
        else
            return false; 
    }
    return true;
}

void printResult(string word){
    if (isIsogram(word) == true){
        cout << word + " is an isogram\n";
    }
    else{
        cout << word + " has repeating letters and is not an isogram\n";
    }
}

int main(){
    string word;

    cout << "Enter a word to check if it's an isogram: \n";
    cin >> word;
    
    //Print the result of isIsogram(word) to the console
    printResult(word);
        
    return 0;
}
