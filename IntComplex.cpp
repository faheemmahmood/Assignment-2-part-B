//Syed Khawaja Faheem Mahmood (241551267)
//including IntComplex.h file to acesses declared member function of class IntComplex
#include "IntComplex.h"
#include <iostream>
using namespace std;
//defining Constructor
IntComplex::IntComplex(int real, int imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}
//Overloading + operator
IntComplex IntComplex::operator+(const IntComplex& other) const {
    int newReal = real + other.real;
    int newImaginary = imaginary + other.imaginary;
    return IntComplex(newReal, newImaginary);
}
//Overloading - operator
IntComplex IntComplex::operator-(const IntComplex& other) const {
    int newReal = real - other.real;
    int newImaginary = imaginary - other.imaginary;
    return IntComplex(newReal, newImaginary);
}
//Overloading * operator
IntComplex IntComplex::operator*(const IntComplex& other) const {
    int newReal = (real * other.real) - (imaginary * other.imaginary);
    int newImaginary = (real * other.imaginary) + (imaginary * other.real);
    return IntComplex(newReal, newImaginary);
}
//Overloading / operator
IntComplex IntComplex::operator/(const IntComplex& other) const {
    int divisor = (other.real * other.real) + (other.imaginary * other.imaginary);
    int newReal = ((real * other.real) + (imaginary * other.imaginary)) / divisor;
    int newImaginary = ((imaginary * other.real) - (real * other.imaginary)) / divisor;
    return IntComplex(newReal, newImaginary);
}
//defining display function
void IntComplex::display() const {
    std::cout << real;
    if (imaginary >= 0) {
        cout << " + " << imaginary << "i"<<endl;
    } else {
        cout << " - " << -imaginary << "i"<<endl;
    }
}
