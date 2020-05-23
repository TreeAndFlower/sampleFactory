//
//  sampleFactory.cpp
//  
//
//  Created by 慕寒 on 2020/5/23.
//

#include "sampleFactory.h"

baseCalculate::baseCalculate()
{

}

baseCalculate::~baseCalculate()
{
    
}

Add::Add()
{
    
}

Add::~Add()
{
    
}

double Add::getResult(double numA, double numB)
{
    double ret = numA + numB;
    return ret;
}

Sub::Sub()
{
    
}

Sub::~Sub()
{
    
}

double Sub::getResult(double numA, double numB)
{
    double ret = numA - numB;
    return ret;
}

Multi::Multi()
{
    
}

Multi::~Multi()
{
    
}

double Multi::getResult(double numA, double numB)
{
    double ret = numA * numB;
    return ret;
}

Div::Div()
{
    
}

Div::~Div()
{
    
}

double Div::getResult(double numA, double numB)
{
    double ret = numA / numB;
    return ret;
}


ExecuteCalculate::ExecuteCalculate()
{
    
}

ExecuteCalculate::~ExecuteCalculate()
{
    
}

bool ExecuteCalculate::calculateData(double numA, double numB, string strSign, double& theValue)
{
    theValue = 0;
    if("+" == strSign)
        the_base_cal = new Add();
    else if("-" == strSign)
        the_base_cal = new Sub();
    else if("*" == strSign)
        the_base_cal = new Multi();
    else if("/" == strSign)
        the_base_cal = new Div();
    else
        return false;
    
    theValue = the_base_cal->getResult(numA, numB);
    return true;
}
