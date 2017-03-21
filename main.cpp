#include <iostream>
#include <cstdio>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    short equationType = 0;
    string quit;
    do {
        setlocale(LC_ALL, "Russian");
        cout << "введите порядок уравнения (2,3 или 4)" << endl;
        if (!(cin >> equationType)) {
            cout << "неверный ввод" << endl;
        }
        cout << "для выхода введите y" << endl;
    } while(cin >> quit && quit != "y");
    return 0;
}