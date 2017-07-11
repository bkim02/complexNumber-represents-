//
//  complexNumber.h
//  Financial Engineering(complex number)
//
//  Created by kimbeom-cheol on 2017. 7. 11..
//  Copyright © 2017년 kimbeom-cheol. All rights reserved.
//

#ifndef complexNumber_h
#define complexNumber_h
#include <iostream>

using namespace std;

class complexNumber{
private:
    double real;
    double imaginary;
    
    
public:
    //this is the defulat constructor in c++11
    complexNumber()=default;
    
    //this is the ordinary constructor with two arguments, which is real and imaginary value
    complexNumber(double real, double imaginary);
    
    //this is the copy constructor
    complexNumber(const complexNumber& other);
    
    
    //this is the assignment operator
    const complexNumber &operator=(const complexNumber& other);
    
    //By rule of three, distructor must be made
    ~complexNumber(){
        
    }
    double getReal() const{
        return real;
    }
    double getImaginary() const{
        return imaginary;
    }
};
ostream &operator<<(ostream& out,const complexNumber &c);
#endif /* complexNumber_h */
