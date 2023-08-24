#include "FileCreator.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

FileCreator::FileCreator(string name) 
{
	this->MyFile.open(name);
}
void FileCreator::WriteHeader()
{
	this->MyFile << "Store, January, February, March, April, Total" << endl;
}

void FileCreator::WriteFile(string s, double m1, double m2, double m3, double m4, double total)
{
	this->MyFile << s << ", " << m1 << ", " << m2 << ", " << m3 << ", " << m4  << ", " << total << endl;
}

void FileCreator::CloseFile() 
{
	this->MyFile.close();
}
