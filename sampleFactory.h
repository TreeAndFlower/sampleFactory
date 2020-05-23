//
//  sampleFactory.h
//  
//
//  Created by 慕寒 on 2020/5/23.
//

#ifndef sampleFactory_h
#define sampleFactory_h

#include <stdio.h>
#include <string>
using namespace std;


class baseCalculate{
public:
    baseCalculate();
    ~baseCalculate();

    virtual double getResult(double numA, double numB)=0;
};

class Add:public baseCalculate{
public:
    Add();
    ~Add();
    
    double getResult(double numA, double numB);
};

class Sub:public baseCalculate{
public:
    Sub();
    ~Sub();
    
    double getResult(double numA, double numB);
};

class Multi:public baseCalculate{
public:
    Multi();
    ~Multi();
    
    double getResult(double numA, double numB);
};

class Div:public baseCalculate{
public:
    Div();
    ~Div();
    
    double getResult(double numA, double numB);
};

class ExecuteCalculate{
public:
    ExecuteCalculate();
    ~ExecuteCalculate();
    
    bool calculateData(double numA, double numB, string strSign, double& theValue);
    
private:
    baseCalculate* the_base_cal;
};

#endif /* sampleFactory_h */
