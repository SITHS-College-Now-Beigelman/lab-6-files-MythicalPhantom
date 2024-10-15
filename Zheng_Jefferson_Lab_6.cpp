//Jefferson Zheng
//October 15, 2024
//Lab 6

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    ifstream inputFile;
    ofstream outputFile;
    int integer1, integer2;
    char character1;
    string string1;

    inputFile.open("inData.txt");
    outputFile.open("outData.txt");


    inputFile >> integer1 >> integer2 >> character1 >> string1;
    outputFile << integer1 + integer2 << "\n" << int(character1) + 1 << "\n" << string1;

    inputFile.close();
    outputFile.close();

    return 0;
}
