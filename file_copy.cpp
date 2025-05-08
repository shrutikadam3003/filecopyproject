#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
 {
    ofstream inputFile("input.txt");
    if (!inputFile) {
        cout << "Failed to create input.txt" << endl;
        return 1;
    }

    inputFile << "Hello SE E&TC\n";
    inputFile << "Welcome in OOPS Lab.\n";
    inputFile << "roll no:26\n";
    inputFile << "ENTC student\n";
    inputFile << "B2 batch\n";
    inputFile.close();

    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if (!inFile || !outFile) {
        cout << "Failed to open files for copying!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        outFile << line << endl;
    }

    inFile.close();
    outFile.close();

    cout << "Content copied from input.txt to output.txt successfully!" << endl;

    return 0;
}


