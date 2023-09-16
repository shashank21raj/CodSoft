#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;

int countWordsInFile(const string &filename)
{
    ifstream inputFile(filename);
    if (!inputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return -1;
    }

    string line;
    int wordCount = 0;

    while (getline(inputFile, line))
    {
        stringstream ss(line);
        string word;
        while (ss >> word)
        {
            wordCount++;
        }
    }

    return wordCount;
}

int main()
{
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    int count = countWordsInFile(filename);

    if (count >= 0)
    {
        cout << "Number of words in the file: " << count << endl;
    }

    return 0;
}
