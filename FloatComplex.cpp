//Syed Khawaja Faheem Mahmood (241551267)
//including FloatComplex.h file to acesses declared member function of class FloatComplex
#include "FloatComplex.h"
#include <iostream>
using namespace std;
//defining constructor
FloatComplex::FloatComplex(float real, float imaginary)
    : IntComplex(static_cast<int>(real), static_cast<int>(imaginary)) {
    floatReal = real;
    floatImaginary = imaginary;
}
//Overloading + operator
FloatComplex FloatComplex::operator+(const FloatComplex& other) const {
    float sumReal = floatReal + other.floatReal;
    float sumImaginary = floatImaginary + other.floatImaginary;
    return FloatComplex(sumReal, sumImaginary);
}
//Overloading - operator
FloatComplex FloatComplex::operator-(const FloatComplex& other) const {
    float diffReal = floatReal - other.floatReal;
    float diffImaginary = floatImaginary - other.floatImaginary;
    return FloatComplex(diffReal, diffImaginary);
}
//Overloading * operator
FloatComplex FloatComplex::operator*(const FloatComplex& other) const {
    float mulReal = floatReal * other.floatReal - floatImaginary * other.floatImaginary;
    float mulImaginary = floatReal * other.floatImaginary + floatImaginary * other.floatReal;
    return FloatComplex(mulReal, mulImaginary);
}
//Overloading / operator
FloatComplex FloatComplex::operator/(const FloatComplex& other) const {
    float divisor = other.floatReal * other.floatReal + other.floatImaginary * other.floatImaginary;
    float divReal = (floatReal * other.floatReal + floatImaginary * other.floatImaginary) / divisor;
    float divImaginary = (floatImaginary * other.floatReal - floatReal * other.floatImaginary) / divisor;
    return FloatComplex(divReal, divImaginary);
}
//defining display function
void FloatComplex::display() const {
    std::cout << floatReal;
    if (floatImaginary >= 0) {
        cout << " + " << floatImaginary << "i"<<endl;
    } else {
        cout << " - " << -floatImaginary << "i"<<endl;
    }
}
