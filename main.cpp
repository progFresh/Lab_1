#include <iostream>
                                                                                            //include conio.h +_getch();
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    short equationType = 0;
    string quit;

    do {
        cout << "\033[2J\033[1;1H";                                                                     // System("cls")
        setlocale(LC_ALL, "Russian");
        cout << "введите порядок уравнения (2,3 или 4)" << endl;
        if (!(cin >> equationType)) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "неверный ввод" << endl;
        }
        // TO DO functions and DEFAULT
        cout << "для выхода введите y" << endl;
    } while(cin >> quit && quit != "y");

    return 0;
}