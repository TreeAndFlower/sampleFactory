//
//  main.cpp
//  
//
//  Created by 慕寒 on 2020/5/23.
//

#include <stdio.h>
#include <string>
#include <iostream>

#include "sampleFactory.h"
using namespace std;

int main()
{
    double theVal = 0;
    ExecuteCalculate calData;
    bool theRet =calData.calculateData(5.0, 6.0, "+", theVal);
    cout << " 5.0 + 6.0 = " << theVal <<endl;
    
    theRet =calData.calculateData(5.0, 6.0, "-", theVal);
    cout << " 5.0 - 6.0 = " << theVal <<endl;
    
    theRet =calData.calculateData(5.0, 6.0, "*", theVal);
    cout << " 5.0 * 6.0 = " << theVal <<endl;
    
    theRet =calData.calculateData(5.0, 6.0, "/", theVal);
    cout << " 5.0 / 6.0 = " << theVal <<endl;
    
    return 0;
}
