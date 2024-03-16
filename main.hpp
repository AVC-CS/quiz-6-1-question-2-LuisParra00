#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

int writeFile(const string& filename) {
    ofstream ofs(filename);
    if (!ofs) {
        cout << "File Open Error\n";
        exit(0);
    }

    int employeeNum;
    cout << "Number of Employees: ";
    cin >> employeeNum;
    cin.ignore(); 

    ofs << employeeNum << endl;

    for (int i = 0; i < employeeNum; ++i) {
        int employeeID;
        string employeeName, departmentName;
        double salary;

        cout << "Employee ID: ";
        cin >> employeeID;
        cin.ignore(); 

        cout << "Employee Name: ";
        getline(cin, employeeName);

        cout << "Department Name: ";
        getline(cin, departmentName);

        cout << "Salary: ";
        cin >> salary;
        cin.ignore(); 

        ofs << employeeID << " " << employeeName << " " << departmentName << " " << salary << endl;
    }

    ofs.close();

    return employeeNum;
}

int readFile(const string& filename) {
    ifstream ifs(filename);
    if (!ifs) {
        cout << "File Open Error\n";
        exit(0);
    }

    int numEmployees;
    ifs >> numEmployees; 
    ifs.ignore(); 

    cout << left << setw(10) << "ID" << setw(20) << "Name" << setw(20) << "Department" << setw(10) << "Salary" << endl;

    double totalSalary = 0;
    for (int i = 0; i < numEmployees; ++i) {
        int employeeID;
        string employeeName, departmentName;
        double salary;

        ifs >> employeeID;
        ifs.ignore(); 

        string line;
        getline(ifs, line);

        stringstream ss(line);
        ss >> employeeName >> departmentName >> salary;

        cout << left << setw(10) << employeeID << setw(20) << employeeName << setw(20) << departmentName << setw(10) << salary << endl;

        totalSalary += salary;
    }

    double averageSalary = totalSalary / numEmployees;
    cout << "\nTotal: " << totalSalary << " Average: " << averageSalary << endl;

    ifs.close();

    return numEmployees;
}

#endif // MAIN_HPP