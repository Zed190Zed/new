#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void BestHoliday(string& holiday)
{

    ofstream fout("Holiday.txt");
    fout << holiday << endl;
    fout.close();

}

void BackgroundСolor(const string& color)
{
    if (color == "red")
    {
        system("color 4F");
    }
    else if (color == "blue")
    {
        system("color 1F");
    }
    else if (color == "green")
    {
        system("color 2F");
    }
    else if (color == "yellow")
    {
        system("color 6F");
    }
    else if (color == "white")
    {
        system("color 7F");
    }
    else
    {
        system("color 0F"); // по умолчанию
    }
    ofstream fout("Holiday.txt", ios::app);
    fout << color << endl;
    fout.close();
}

int main()
{
    setlocale(0, "");
    string holiday, color;

    ifstream fin("Holiday.txt"); // создание файла

    if (fin.is_open())
    {
        getline(fin, holiday);
        getline(fin, color);
        fin.close();
        BackgroundСolor(color);

        cout << "Текущие данные: " << endl;
        cout << "Ваш праздник : " << holiday << endl;
        cout << "Ваш цвет: " << color << endl;

        char choice;
        cout << "\nХотите изменить данные? (y/n): ";
        cin >> choice;
        cin.ignore();

        if (choice == 'y' || choice == 'Y')
        {

            cout << "\nВведите новый праздник: ";
            getline(cin, holiday);
            cout << "\nВведите цвет (red, blue, green, yellow, white): ";
            getline(cin, color);

            ofstream fout("Holiday.txt");
            if (fout.is_open())
            {
                fout << holiday << endl << color << endl;
                fout.close();
                cout << "Данные обновлены!" << endl;
            }
        }
    }
    else
    {
        cout << "Файл не найден, введите цвет и праздник: \n";
        cout << "\nВведите новый праздник: ";
        getline(cin, holiday);
        cout << "\nВведите цвет (red, blue, green, yellow, white): ";
        getline(cin, color);
    }
    BackgroundСolor(color);

    return 0;
}
