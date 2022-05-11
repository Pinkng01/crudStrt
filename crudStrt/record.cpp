#include "record.h"

void record(string wordtR,string inttor, string fileName)
{
	fstream recFile;
	srand(time(NULL));
	int idtor;
	idtor = rand() % 1000+23;
	recFile.open(fileName, ios::app);
	if (!recFile.is_open())
	{
		printf("File opening error!");
		exit(NULL);
	}
	recFile <<"StudentsName:" << wordtR<<"/StudentsAge:"<<inttor<<"/Id:"<< idtor<<endl;
	recFile.close();
}
