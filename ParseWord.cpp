// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: Gets a sentence and displays each word on a new line

#include <list>
#include <array>
#include <iomanip>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stof;
using std::array;
using std::list;


// takes the sentence and puts each word into a list
list<string> ParseWord(string sentence) {
    list<string> words;
    string word = "";

    // goes through each letter in the sentence
    for (char letter : sentence) {
        // when it reaches a space it will put the word into the list
        if (letter == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += letter;
        }
    }
    // Pushes the final word into the list because there probably wont be a
    // space after it
    words.push_back(word);


    return words;
}



int main() {
    string str;
    cout << "Enter a sentence to be parsed: ";
    getline(cin, str);

    list<string> parsed;

    parsed = ParseWord(str);

    // goes through the list and displays  the words
    for (string word : parsed) {
        cout << word << endl;
    }
}
