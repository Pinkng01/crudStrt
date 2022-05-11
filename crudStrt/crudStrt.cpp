#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include "SearchPt1.h"
#include "record.h"
#include "showAllr.h"
#include "edit.h"
#include "erase.h"
using namespace std;


int main()
{
	
	return 0;
}

void startup(){
	string filename, wordname, wordname2;
	filename = "database.txt";
	int choice=1;
	while (0!=choice) {
		cout << "Simple CRUD v1.1" << endl;
		cout << "1.create a new record" << endl;
		cout << "2.show all records" << endl;
		cout << "3.search for a record " << endl;
		cout << "4.edit a record" << endl;
		cout << "5.delete a record" << endl;
		cout << "6.exit" << endl;
		cin >> choice;
		system("pause");
		switch (choice) {
		case 1:
			cout << "Type name and surname of the student with underscores (_)"<<endl;
			cout << "example: Valerka_Sunstrike:" << endl;
			cin >> wordname;
			cout <<"Type the age of the student(without empty space, this will cause an error)" << endl;
			cin >> wordname2;
			record(wordname, wordname2, filename);
			break;
		case 2:
			showAllRecords(filename);
			break;
		case 3:
			showAllRecords(filename);
			cout << "Type a name/age/id of the record you want to find:" << endl;
			cin >> wordname;
			searchStr(filename,wordname);
			break;
		case 4:
			string stringforchanging;
			string	editstring;
			showAllRecords(filename);
			cout <<"Type the name/id/age of the record you want to edit" << endl;
			cin >> wordname;
			cout << "Type the word you want to replace the word1 with" << endl;
			cin >> wordname2;
			stringforchanging = searchStrReturn(filename,wordname);
			editstring = strEditor(filename,stringforchanging,wordname,wordname2);
			linereplacer(filename,stringforchanging,editstring);
			system("cls");
			showAllRecords(filename);
			break;
		case 5:
			string lntoerase;
			cout << "Type a name/id/age of the record you want to remove from list" << endl;
			cin >> wordname;
			lntoerase = searchStrReturn(filename,wordname);
			Lneraser(filename,lntoerase);
			system("cls");
			showAllRecords(filename);
			break;
		case 6:
			exit(NULL);
		};
	}




}

