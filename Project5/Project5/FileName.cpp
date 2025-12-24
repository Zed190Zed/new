#include <iostream>
#include <vector>

using namespace std;

class MultiplicationTableGenerator {
private:
    int number;
    int size;
    vector<int> table;

public:
    MultiplicationTableGenerator() : number(0), size(0) {}

    void setNumber(int n) {
        number = n;

    }

    void generateTable(int upTo) {
        size = upTo;

        for (int i = 1; i <= size; ++i) {
            table.push_back(number * i);
        }
    }

    void printTable() {
        cout << "Таблица умножения на " << number << ":" << endl;

        for (int i = 0; i < table.size(); ++i) {
            cout << number << " * " << (i + 1) << " = " << table[i] << endl;
        }
    }

    vector<int> getTable()
    {
        return table;
    }
};

int main() {
    setlocale(0, "");

    int num, size;
    MultiplicationTableGenerator generator;

    cout << "Введите число: ";
    cin >> num;

    cout << "Введите размер таблицы: ";
    cin >> size;

    generator.setNumber(num);
    generator.generateTable(size);
    generator.printTable();
    system("pause");
    return 0;
}
