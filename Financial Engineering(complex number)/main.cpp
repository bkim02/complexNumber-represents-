//
//  main.cpp
//  Financial Engineering(complex number)
//
//  Created by kimbeom-cheol on 2017. 7. 11..
//  Copyright © 2017년 kimbeom-cheol. All rights reserved.
//
// In this programming I have used bit shift operator overloading. And I've used basic algebra for complex number in cases of the plus and minus //


#include <iostream>
#include "complexNumber.h"

using namespace std;
using namespace placeholders;


int main() {
  
  
    cout<<"this is the basic complex number representation program"<<endl;
    
    complexNumber c(2.0,3.0);
    complexNumber c1=c;
    complexNumber c4(1.0,4.0);
    complexNumber c2;
    c2=c;
    cout<<c2<<c4<<endl;
    cout<<c1+c2<<endl;
    
    complexNumber c5(5.0,2.0);
    c5=c2+4.0;
    cout<<c5<<endl;
    return 0;
}
