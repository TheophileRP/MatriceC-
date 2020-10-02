//
//  main.cpp
//  NeuralNet
//
//  Created by Theophile Rousic--Plantec on 19/08/2020.
//  Copyright © 2020 Trompette. All rights reserved.
//

#include <iostream>
#include "matrice.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Matrix m(4 ,10 , 2.0);
    m.print();
    
    Matrix result2(5,9);
    
    result2.print();
    
    return 0;
}
