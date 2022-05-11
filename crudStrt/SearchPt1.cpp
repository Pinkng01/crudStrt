#include "SearchPt1.h"


void searchStr(string fileName, string strToSearch) {
	ifstream filetoopen;
	string word;
	filetoopen.open(fileName, ios::in);
	if (!filetoopen.is_open()) {
		cout << "File opening error!";
		exit(0);
	}
	while (!filetoopen.eof())
	{
		filetoopen >> word;
		if (word.find(strToSearch) != string::npos){
			cout << "Found:  ";
			cout << word << endl;
		}
		else
		{
			cout << "There is no record with such name/age/id!" << endl;
		}
			
		
	}
	filetoopen.close();

}