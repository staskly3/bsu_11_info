    #include <iostream>
#include <iomanip>
#include <windows.h>

int main()
{
    using namespace std;
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int c1 = 40, c2 = 40, c3 = 40, c4 = 80;
    cout << left << setw(47) << "ФАМИЛИЯ" << setw(43) << "ИМЯ" << setw(48) << "ОТЧЕСТВО" << setw(c4) << "ИНФО" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "" << setw(c2) << "" << setw(c3) << "" << setw(c4) << "" << endl;
    cout << left << setw(c1) << "Свидерский" << setw(c2) << "Владислав" << setw(c3) << "Александрович" << setw(c4) << "Премиальные шоколадки хочу" << endl;
    cout << left << setw(46) << "Кыбик" << setw(49) << "Станислав" << setw(53) << "Александрович" << setw(c4) << "хочу работать программистом как ML-инженер" << endl;
    cout << left << setw(46) << "Бурый" << setw(49) << "Валентин" << setw(53) << "Николаевич" << setw(c4) << "C++? А почему бы и нет?" << endl;
    cout << left << setw(46) << "Цивако" << setw(49) << "Глеб" << setw(53) << "Александрович" << setw(c4) << "хочу научиться вручную управлять памятью компьютера" << endl;
    cout << left << setw(46) << "Змурщик" << setw(49) << "Константин" << setw(53) << "Дмитриевич" << setw(c4) << "прикольно" << endl;
    cout << left << setw(46) << "Гулин" << setw(49) << "Александр" << setw(53) << "Иванович" << setw(c4) << "ртуть" << endl;
    
    return 0;
}
