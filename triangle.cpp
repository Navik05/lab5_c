#include "triangle.h"

triangle::triangle()
{
    for (int i = 0; i < N; i++)
        this->sides[i] = 0;
}

//Конструктор
triangle::triangle(double sides[])
{
	for (int i = 0; i < N; i++)
		this->sides[i] = sides[i];
}

//Обработка данных
void triangle::workTriangle()
{
    double p;
    perimeter = sides[0] + sides[1] + sides[2];
    p = perimeter / 2;
    area = sqrtf(p * (p - sides[0]) * (p - sides[1]) * (p - sides[2]));
    if (area == 0)
    {
        throw "Такого треугольника не существует";
    }
}