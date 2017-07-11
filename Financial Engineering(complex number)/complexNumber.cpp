//
//  complexNumber.cpp
//  Financial Engineering(complex number)
//
//  Created by kimbeom-cheol on 2017. 7. 11..
//  Copyright © 2017년 kimbeom-cheol. All rights reserved.
//

#include <stdio.h>
#include "complexNumber.h"




ostream &operator<<(ostream& out,const complexNumber &c){
    out<<c.getReal()<<"+"<<c.getImaginary()<<"i"<<endl;
    return out;
};

//Specified the Plus operators
complexNumber operator+(const complexNumber& c1,const complexNumber& c2){
    
    return complexNumber(c1.getReal()+c2.getReal(),c1.getImaginary()+c2.getImaginary());
};

complexNumber operator+(const complexNumber& c1,double d){
    return complexNumber(c1.getReal()+d,c1.getImaginary());
};
complexNumber operator+(double d, const complexNumber& c1){
    return complexNumber(d+c1.getReal(),c1.getImaginary());
};



//Specified Munus operators

complexNumber operator-(const complexNumber& c1,const complexNumber& c2){
    
    return complexNumber(c1.getReal()-c2.getReal(),c1.getImaginary()-c2.getImaginary());
};

complexNumber operator-(const complexNumber& c1,double d){
    return complexNumber(c1.getReal()-d,c1.getImaginary());
};
complexNumber operator-(double d, const complexNumber& c1){
    return complexNumber(d-c1.getReal(),c1.getImaginary());
};




//this is the ordinary constructor with two arguments, which is real and imaginary value
complexNumber::complexNumber(double real, double imaginary): real(real), imaginary(imaginary){
    
}
complexNumber::complexNumber(const complexNumber& other){
    cout<<"conpy constructor running"<<endl;
    real=other.real;
    imaginary=other.imaginary;
}
const complexNumber &complexNumber::operator=(const complexNumber& other){
    cout<<"assignment operator running"<<endl;
    real=other.real;
    imaginary=other.imaginary;
    
    
    return *this;
};
