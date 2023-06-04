//Syed Khawaja Faheem Mahmood (241551267)
#ifndef FLOATCOMPLEX_H
#define FLOATCOMPLEX_H
//including IntComplex for inheritance
#include "IntComplex.h"
//creating class FloatComplex for Float complex numbers
class FloatComplex : public IntComplex {
private:
    //real number (float)
    float floatReal;
    //imaginary number (float)   
    float floatImaginary;

public:
    //declaring constructor
    FloatComplex(float real, float imaginary);
    //declaring Overloading, +, -, * / operators
    FloatComplex operator+(const FloatComplex& other) const;
    FloatComplex operator-(const FloatComplex& other) const;
    FloatComplex operator*(const FloatComplex& other) const;
    FloatComplex operator/(const FloatComplex& other) const;
    //declaring displaying function
    void display() const;
};

#endif
