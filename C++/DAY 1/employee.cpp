//Program that calculate and display weekely salary for an employee with overtime

#include<iostream>
#include <iomanip>
using namespace std;

class Employee{
    private:
        double hourlyRate;
        int  regularRate;
        int overtimeHours;
//constructor to initialize employee
    public:
        Employee(double rate,int reghour,int ovTime){
            hourlyRate= rate;
            regularRate =reghour;
            overtimeHours=ovTime;
        }
// methods to calculate weekely hours

double calculateWeeklySalary(){
    double regularSalary = regularRate * hourlyRate;
    double overtimerate= hourlyRate *1.5;
    double overtimeSalary = overtimeHours * overtimerate;

    return regularSalary + overtimeSalary;
}
};

int main (){

// create object of employee
    Employee emp(25,40,13);
    double weeklySalary=emp.calculateWeeklySalary ();
    cout << "The employee's weekly salary is: $" << weeklySalary << endl;

    return 0;
}