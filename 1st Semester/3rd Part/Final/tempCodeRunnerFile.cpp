#include <bits/stdc++.h>
using namespace std;

pair<string, int> word_count(const string& sentence) {
    map<string, int> wordCount;
    string most_word;
    int max_count = 0;
    int first_index = sentence.length();

    stringstream ss(sentence);
    string word;
    int index = 0;

    while (ss >> word) {
        wordCount[word]++;
        if (wordCount[word] > max_count) {
            max_count = wordCount[word];
            most_word = word;
            first_index = index;
        }
        else if (wordCount[word] == max_count && index < first_index) {
            most_word = word;
            first_index = index;
        }
        index++;
    }

    return { most_word, max_count };
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string sentence;
        getline(cin, sentence);

        pair<string, int> result = word_count(sentence);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
