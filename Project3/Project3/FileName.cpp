#include <iostream>
using namespace std;

/// <summary>
/// Вычисляет расстояние по скорости и времени
/// </summary>
/// <param name="s">Скорость</param>
/// <param name="t">Время</param>
/// <returns>Пройденное расстояние в километрах</returns>
/// <remarks>Если скорость или время меньше 0, возвращает -1</remarks>
/// <remarks>calculator(120, 4) возвращает 480</remarks>
double calculator(double s, double t)
{
    if (s < 0 || t < 0)
    {
        return -1;
    }

    return (s * t);
}

int main()
{
    setlocale(0, "");
    double d = calculator(120, 4);
    cout << "Расстояние = " << d << " км" << endl;
    return 0;
}