#include <iostream>
#include <cmath>

class ComplexNumber{
    private: 
        int real; 
        int imaginary; 

    public:
        ComplexNumber(int real, int imaginary){
            this->real = real; 
            this->imaginary = imaginary; 
        };
    
        double getMagnitude(){
            return sqrt(this->real * this->real + this->imaginary * this->imaginary);
        };
};