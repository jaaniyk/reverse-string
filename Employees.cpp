// Employees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;
class Employee {
public:
	int Id;
	string Name;
	string Address;
	Employee() {

	}
	Employee(int id, string name, string address) {
		Id = id;
		Name = name;
		Address = address;
	}

};
void AddNewEmployee(Employee emp, string csv) {
	ofstream fos;
	fos.open(csv, ios::app);
	fos << emp.Id << "," << emp.Name << "," << emp.Address<< endl;
	fos.close();
}
void readFromFile(string filename) {
	ifstream fIn;
	string line = "";
	fIn.open(filename);
	while (fIn) {
		getline(fIn, line);//getLine method reads a line from the Inputstream and puts the data into the line object. 
		cout << line << endl;//Display the line...
	}
	fIn.close();
}


void writeToFile(string filename) {
	ofstream oFs;
	string line = "";
	oFs.open(filename, ios::app);//app means appending a file...
	while (oFs) {
		getline(cin, line);
		if (line == "end") {
			break;
		}
		oFs << line << endl;
	}
	oFs.close();
}


int main()
{
	string file = "D:/New folder/MOCK_DATA.csv";
	writeToFile(file);

	Employee emp;
	cout << "Enter the ID" << endl;
	cin >> emp.Id;

	cout << "Enter the Name" << endl;
	cin >> emp.Name;

	cout<< "Enter the Address" << endl;
	cin >> emp.Address;
	AddNewEmployee(emp, file);
	readFromFile(file);
}
