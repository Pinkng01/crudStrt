#include "erase.h"

void Lneraser(string filename,string linetoE) {
	string line;
	ifstream fin;
	fin.open(filename);
	ofstream temp;
	temp.open("temp.txt");
	while (getline(fin, line)) {
		if (line != linetoE)
			temp << line << endl;
	}
	temp.close();
	fin.close();
	const char* p = filename.c_str();
	remove(p);
	rename("temp.txt", p);
}