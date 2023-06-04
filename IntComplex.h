//Syed Khawaja Faheem Mahmood (241551267)
#ifndef INTCOMPLEX_H
#define INTCOMPLEX_H
//creating class IntComplex for integer complex numbers
class IntComplex {
private:
    //real number (integer)
    int real;
    //imaginary number (integer)   
    int imaginary;  

public:
    //declaring constructor
    IntComplex(int real, int imaginary);

    //declaring Overloading, +, -, * / operators
    IntComplex operator+(const IntComplex& other) const;
    IntComplex operator-(const IntComplex& other) const;
    IntComplex operator*(const IntComplex& other) const;
    IntComplex operator/(const IntComplex& other) const;

    //declaring displaying function 
    void display() const;
};

#endif
