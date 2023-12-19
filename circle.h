#pragma once
#include "figure.h"

class circle : public figure
{
    double r;
    double d;
public:
    circle(double r);
    void workCircle();
    double getD();
};