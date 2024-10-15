//Jefferson Zheng
//October 15, 2024
//Lab 6

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    //Variables (Files, Integers, Characters, and Strings)
    ifstream inputFile;
    ofstream outputFile;
    int integer1, integer2;
    char character1;
    string string1;

    //Open Files as Variables
    inputFile.open("inData.txt");
    outputFile.open("outData.txt");

    //Takes Values from inData.txt
    inputFile >> integer1 >> integer2 >> character1 >> string1;
    //Outputs Values (Modified) to outData.txt
    outputFile << integer1 + integer2 << "\n" << char(int(character1) + 1) << "\n" << string1;

    //Closes Files
    inputFile.close();
    outputFile.close();

    //Exits Successfully
    return 0;
}
