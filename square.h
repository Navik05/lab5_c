#pragma once
#include "figure.h"

class square : public figure
{
    double a;
    double diagonal;
public:
    square();
    square(double a);
    void workSquare();
    double getDiagonal();
};