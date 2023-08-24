#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class FileCreator
{
public: 
	FileCreator(string);
	void WriteFile(string, double, double, double, double, double);
	void WriteHeader();
	void CloseFile();

private:
	ofstream MyFile;	

};

