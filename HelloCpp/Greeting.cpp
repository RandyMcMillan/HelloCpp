//
//  Greeting.cpp
//  HelloCpp
//
//  Created by Rico Zuniga on 16/02/2016.
//  Copyright © 2016 Sitepoint. All rights reserved.
//

#include "Greeting.hpp"

Greeting::Greeting() {
    greeting = "Hello C++!";
}

std::string Greeting::greet() {
    return greeting;
}
