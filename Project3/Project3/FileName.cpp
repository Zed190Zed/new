#include <iostream>
using namespace std;

/// <summary>
/// Вычисляет расстояние по скорости и времени
/// </summary>
/// <param name="speed">Скорость</param>
/// <param name="time">Время</param>
/// <returns>Пройденное расстояние в километрах</returns>
/// <remarks>Если скорость или время меньше 0, возвращает -1</remarks>
/// <remarks>distance_calc(120, 4) возвращает 480</remarks>
double distance_calc(double speed, double time)
{
    if (speed < 0 || time < 0)
    {
        return -1;
    }

    return (speed * time);
}

int main()
{
    setlocale(0, "");
    double distance = distance_calc(120, 4);
    cout << "Расстояние = " << distance << " км" << endl;
    return 0;
}
