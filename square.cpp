#include "square.h"

square::square()
{

}
//Конструткор
square::square(double a)
{
    this->a = a;
    diagonal = 0;
}

//Обработка данных
void square::workSquare()
{
    diagonal = sqrt(2) * a;
    area = pow(a, 2);
    perimeter = a * 4;
}

//Вывод диагонали
double square::getDiagonal()
{
    return diagonal;
}