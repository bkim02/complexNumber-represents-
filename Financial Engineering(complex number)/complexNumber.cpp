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
