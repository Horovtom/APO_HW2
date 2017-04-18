#include <iostream>
#include <bits/unique_ptr.h>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

unsigned int width = 0, height = 0, maxCounter = 0;

void loadPicture(string line) {
	
	
}

int loadLine(file) {
	string number = "";
	char ch = getc(file);
	while (ch != '\n') {
		number.push_back(ch);
		ch = getc(file);
	}
	return number;
}

void loadPicture(FILE* file) {
	loadLine(file);
	string line = loadLine(file);
	width = (unsigned int) stoi(line);
	line = loadLine(file);
	height = (unsigned int) stoi(line);
	max = width * height;
	loadLine(file);
	loadPicture(loadLine(file));
}

int main(int argc, char** argv) {
	if (argc != 2) {
		cerr << "No file specified!" << endl;
		exit(EXIT_FAILURE);
	}	
	
	FILE* file;
	file = fopen(argv[1], "r");
	loadPicture(file);
	cout << "I am here!" << endl;
	
	
	return 0;
}
