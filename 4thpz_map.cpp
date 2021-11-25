#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main() {

    map <string, int> mapp;
    string text;
    string word;

    cout << "Enter text: " << endl;

    getline(cin, text);
    stringstream ss(text);

    while (getline(ss, word, ' '))
    {
        if (mapp.find(word) == mapp.end())
        {
            mapp.emplace(word, 1);
        }
        else
        {
            mapp[word] ++;
        }
    }
    mapp.erase("");
    auto iter = mapp.begin();
    cout << endl;
    for (int i = 1; iter != mapp.end(); i++, iter++)
    { 
        cout << i <<  "   " << iter->first << " - " << iter->second << endl;            
    }

    return 0;
}