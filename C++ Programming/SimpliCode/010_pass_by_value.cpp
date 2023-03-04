#include<iostream>
using namespace std;
void Salary_Change(int);

int main()
{
    int salary = 27000;
    Salary_Change(salary);
    cout << "Value indide main: " << salary << endl;

    return 0;
}

void Salary_Change(int salary)
{
    salary = 30000;
    cout << "Value inside function: " << salary << endl;
}