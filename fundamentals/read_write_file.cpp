#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    reverse(input.begin(), input.end());
    // Write to file
    ofstream outFile("output.txt");
    outFile << input;
    outFile.close();
    // Read from file and print
    string fileContent;
    ifstream inFile("output.txt");
    getline(inFile, fileContent);
    cout << "String from file: " << fileContent << endl;
    inFile.close();
    return 0;
}
