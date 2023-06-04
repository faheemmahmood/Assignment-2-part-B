#include <iostream>
#include <cstdlib>
#include "IntComplex.h"
#include "FloatComplex.h"
using namespace std;
int main(int argc, char* argv[]) {
    if (argc != 9) {
        cout << "Invild arguments\n";
        return 1;
    }
    // storing command line arguments to variables
    int intReal1 = atoi(argv[1]);
    int intImaginary1 = atoi(argv[2]);
    int intReal2 = atoi(argv[3]);
    int intImaginary2 = atoi(argv[4]);
    float floatReal1 = atof(argv[5]);
    float floatImaginary1 = atof(argv[6]);
    float floatReal2 = atof(argv[7]);
    float floatImaginary2 = atof(argv[8]);

    // Creating objects of IntComplex and FloatComplex classes
    IntComplex intComplex1(intReal1, intImaginary1);
    IntComplex intComplex2(intReal2, intImaginary2);
    FloatComplex floatComplex1(floatReal1, floatImaginary1);
    FloatComplex floatComplex2(floatReal2, floatImaginary2);
    //dipslaying integer complex numbers
    cout<<"Integer complex numbers are: "<<endl;
    intComplex1.display();
    intComplex2.display();
    //displaying float complex numbers
    cout<<"Float complex numbers are: "<<endl;
    floatComplex1.display();
    floatComplex2.display();

    //Performing addition,substration, multiplication, division on integer complex numbers
    IntComplex IntAddition = intComplex1 + intComplex2;
    IntComplex IntSubstration = intComplex1 - intComplex2;
    IntComplex IntMultiplication = intComplex1 * intComplex2;
    IntComplex IntDivision = intComplex1 / intComplex2;
    //Performing addition,substration, multiplication, division on float complex numbers
    FloatComplex FloatAddition = floatComplex1 + floatComplex2;
    FloatComplex FloatSubstration = floatComplex1 - floatComplex2;
    FloatComplex FloatMultiplication = floatComplex1 * floatComplex2;
    FloatComplex FloatDivision = floatComplex1 / floatComplex2;
    //dispalying results for integer complex number operations
    cout<<"INTERGER COMPLEX NUMBER RESULTS\n"<<endl;
    cout << "Complex Integer Addition: ";
    IntAddition.display();
    cout << endl;

    cout << "Complex Integer Subtraction: ";
    IntSubstration.display();
    cout << endl;

    cout << "Complex Integer Multiplication: ";
    IntMultiplication.display();
    cout << endl;

    cout << "Complex Integer Division: ";
    IntDivision.display();
    cout << endl;
    //dispalying results for integer complex number operations  
    cout<< "FLOAT COMPLEX NUMBER RESULTS \n"<<endl;
    cout << "Float Complex Addition: ";
    FloatAddition.display();
    cout << endl;
    cout << "Float Complex Subtraction: ";
    FloatSubstration.display();
    cout << endl;
    cout << "Float Complex Multiplication: ";
    FloatMultiplication.display();
    cout << endl;
    cout << "Float Complex Division: ";
    FloatDivision.display();
    cout << endl;
    //end
    return 0;
}
