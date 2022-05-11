#include "edit.h"

string searchStrReturn(string fileName, string strToSearch)
{
	
	ifstream filetoopen;
	string word;
	filetoopen.open(fileName, ios::in);
	if (!filetoopen.is_open()) {
	exit(0);
	}
	while (!filetoopen.eof())
	{
		filetoopen >> word;
		if (word.find(strToSearch) != string::npos) {
		}


	}
filetoopen.close();
return word;
}



string strEditor(string filename, string strtoedit,string wordtoreplace,string theneededword)
{
	fstream editfile;
	editfile.open(filename);
	if (!editfile.is_open())
	{
		exit(NULL);
	}
	while (strtoedit.find(strtoedit) != string::npos)
		strtoedit.replace(strtoedit.find(wordtoreplace), 3, theneededword);
	return strtoedit;


}


void linereplacer(string filename, string linetoreplace, string theneededline)
{
	ifstream filein(filename);
	ofstream fileout("temp.txt");
	if (!filein || !fileout)
	{
		cout << "Error opening files!" << endl;
		exit(NULL);
	}

	string strTemp;
	bool found = false;
	while (filein >> strTemp)
	{
		if (strTemp == linetoreplace) {
			strTemp = theneededline;
			found = true;
		}
		strTemp += "\n";
		fileout << strTemp;
		if(found) break;
	}
	const char* p = filename.c_str();
	remove(p);
	rename("temp.txt", p);
}
