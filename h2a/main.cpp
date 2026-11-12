#include <iostream>
#include "car.h"
#include "Rectangle.h"
#include "student.h"
#include <memory>   // smart pointer
using namespace std;

int main()
{
    //Car-luokka
    Car car("Volvo", "XC40", 2020);
    car.printData();

    //Rectangle-luokka
    Rectangle* r = new Rectangle();
    r->setWidth(5.0);
    r->setHeight(3.0);
    cout<<"Area: "<<r->getArea()<<endl;
    cout << "Circumference: " << r->getCircum() << endl;
    delete r;
    r=nullptr;

    //Student-luokka
    unique_ptr<Student> student=make_unique<Student>("Anna kallio", 1, 4.5);
    student->setName("Anna kallio");
    student->setStudentNumber(0001);
    student->setAverage(4.5);

    cout << "Student:" << endl;
    cout << "Name: " << student->getName() << endl;
    cout << "StudentNumber: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;

    return 0;
}
