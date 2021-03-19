//
//  main.cpp
//  FMCCcodingexercise
//
//  Created by Pooja Balani on 3/15/21.
//

#include <iostream>
using namespace std;
#include "xcode_redirect.hpp"

int main(int argc, char * argv[]) {
    ios_base::sync_with_stdio(false);
    xcode_redirect(argc, argv);
    
    std::cout << "Enter an integer: " << endl;
    int input;
    std::cin >> input;
    
    if(input % 3 == 0 && input % 5 != 0){
        std::cout << "Mustang" << endl;
    }
    else if(input % 5 == 0 && input % 3 != 0){
        std::cout << "Bronco" << endl;
    }
    else if(input % 3 == 0 && input % 5 == 0){
        std::cout << "MustangBronco" << endl;
    }
    else {
        std::cout << input << endl;
    }
}
