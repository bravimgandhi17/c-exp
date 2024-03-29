#include <iostream>
#include<math.h>
using namespace std;
class Employee 
{
public:
    virtual double calculateSalary()  = 0; 
};


class FullTimeEmployee : public Employee
 {
private:
    double basicsalary;

public:
    FullTimeEmployee(double b)
    {
        basicsalary=b;
    } 

    double calculateSalary() 
     {
         return basicsalary;
    }
};


class PartTimeEmployee : public Employee
 {
private:
    double hoursWorked;
    double hourlyRate;

public:
    PartTimeEmployee(double hours, double rate) 
    {
        hoursWorked=hours;
        hourlyRate=rate;
    }

    double calculateSalary() 
    {
        return hoursWorked * hourlyRate;
    }
};


class Manager : public Employee 
{
private:
    double basicsalary;
    double bonus;

public:
    Manager(double sal, double bn) 
    {
        basicsalary=sal;
        bonus=bn;
    }
     

    double calculateSalary() 
     {
        
        return basicsalary + bonus;
    }
};

int main() 
{
    FullTimeEmployee obj1(30000.0);
    PartTimeEmployee obj2(20.0, 250.0); 
    Manager obj3(65000.0, 8000.0); 

    cout << "Full-time Employee Salary: " << obj1.calculateSalary() << endl;

    cout << "Part-time Employee Salary: " << obj2.calculateSalary() << endl;
    cout << "Manager Salary: " << obj3.calculateSalary() << endl;

    return 0;
}
