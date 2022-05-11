#pragma once
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void linereplacer(string filename, string linetoreplace, string theneededline);
string searchStrReturn(string fileName, string strToSearch);
string strEditor(string filename, string strtoedit, string wordtoreplace, string theneededword);