#include "circle.h"

circle::circle()
{

}
//Конструктор
circle::circle(double r)
{
    this->r = r;
    d = 0;
}

//Обработка данных
void circle::workCircle()
{
    d = r * 2;
    area = 3.14 * pow(r, 2);
    perimeter = 3.14 * 2 * r;
}

//Вывод диаметра
double circle::getD()
{
    return d;
}