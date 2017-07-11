//
//  main.cpp
//  Financial Engineering(complex number)
//
//  Created by kimbeom-cheol on 2017. 7. 11..
//  Copyright © 2017년 kimbeom-cheol. All rights reserved.
//
// In this programming I have used bit shift operator overloading.

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
    
    
    return 0;
}
