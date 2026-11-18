
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void displayPersonInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person
{
public:
    int employeeId;
    double salary;

    void displayEmployeeInfo()
    {
        displayPersonInfo();

        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.name = "Prottay";
    e1.age = 21;
    e1.employeeId = 193;
    e1.salary = 35000;

    cout << "Employee Information:" << endl;

    e1.displayEmployeeInfo();

    return 0;
}
