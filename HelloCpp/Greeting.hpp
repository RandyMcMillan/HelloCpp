//
//  Greeting.hpp
//  HelloCpp
//
//  Created by Rico Zuniga on 16/02/2016.
//  Copyright © 2016 Sitepoint. All rights reserved.
//

#ifndef Greeting_hpp
#define Greeting_hpp

#include <stdio.h>
#include <string>

class Greeting {
    std::string greeting;
public:
    Greeting();
    std::string greet();
};


#endif /* Greeting_hpp */
