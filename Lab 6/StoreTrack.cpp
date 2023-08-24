#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> 
#include "FileCreator.h"

using namespace std;

int main()
{
	ofstream data;
	string filename;
	cout << "When Entering Filename, ADD '.csv' at the end of your name!!!!!" << endl;
	cout << "Enter Filename: ";
	cin >> filename;

	FileCreator store(filename);
	string StoreName; 
	double JanSales, FebSales, MarSales, AprSales, TotaSales;
	store.WriteHeader();

	for (int i = 0; i < 5;i++ )
	{
		cout << "Enter Name of StoreTrack Store # ";
		cin >> StoreName;
		cout << "Enter total sales for month # 1: " ;
		cin >> JanSales;
		cout << "Enter total sales for month # 2: ";
		cin >> FebSales;
		cout << "Enter total sales for month # 3: ";
		cin >> MarSales;
		cout << "Enter total sales for month # 4: ";
		cin >> AprSales;
		TotaSales = JanSales + FebSales + MarSales + AprSales;
		store.WriteFile(StoreName, JanSales, FebSales, MarSales, AprSales, TotaSales);
	}

	store.CloseFile();

}

