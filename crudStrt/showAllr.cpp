#include "showAllr.h"



void showAllRecords(string filename)
{
	fstream dbFile(filename,ios::in);
	string line;
	if (!dbFile.is_open())
	{
		printf("File opening error!");
		exit(NULL);
	}
	while (!dbFile.eof())
	{
		dbFile>>line;
		cout << line << endl;
	}
	dbFile.close();
}
