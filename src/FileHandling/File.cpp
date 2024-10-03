#include <iostream>
#include <fstream>
using namespace std;

void writeContent(string filename, string content){
  ofstream file(filename);
  file << content;
  file.close();

  printf("Successfully writing content to %s\n", filename.c_str());
}

string readContent(string filename) {
  ifstream inputFile(filename); // Replace with your file name

  if (!inputFile) {
    cerr << "Unable to open file";
    throw 1;
  }

  string line;
  string content = "";

  while (getline(inputFile, line)) {
    content += "\n" + line;
  }
  inputFile.close();
  return content;
}