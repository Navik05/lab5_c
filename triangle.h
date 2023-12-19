#pragma once
#include "figure.h"

class triangle : public figure
{
    friend int view(triangle& three);
    double sides[N];
public:
    triangle();
    triangle(double sides[]);
    void workTriangle();
};