#pragma once
#define N 3
#include <math.h>

class figure
{
protected:
    double area;
    double perimeter;
    static int type;
public:
    double getArea();
    double getPerimeter();
    static void setType(int e);
    static int getType();
    figure();
    ~figure();
};