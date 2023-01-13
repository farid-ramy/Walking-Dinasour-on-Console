#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;



void dino1(int i) {
    cout << setw(i + 11) << "" << "XXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XX" << " " << "XXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXX" << endl;
    cout << setw(i + 9) << "" << "XXXXXX" << endl;
    cout << setw(i) << "" << "X" << "       " << "XXXXXXX" << endl;
    cout << setw(i) << "" << "X" << "      " << "XXXXXXXXXX" << endl;
    cout << setw(i) << "" << "XX" << "    " << "XXXXXXXXX" << " " << "X" << endl;
    cout << setw(i) << "" << "XXX" << "  " << "XXXXXXXXXX" << endl;
    cout << setw(i) << "" << "XXXXXXXXXXXXXXX" << endl;
    cout << setw(i) << "" << "XXXXXXXXXXXXXX" << endl;
    cout << setw(i + 1) << "" << "XXXXXXXXXXXXX" << endl;
    cout << setw(i + 2) << "" << "XXXXXXXXXXX" << endl;
    cout << setw(i + 3) << "" << "XXXXXXXXX" << endl;
    cout << setw(i + 4) << "" << "XXXXXXX" << endl;
    cout << setw(i + 5) << "" << "XXX" << " " << "XX" << endl;
    cout << setw(i + 5) << "" << "XX" << "   " << "X" << endl;
    cout << setw(i + 5) << "" << "X" << "    " << "X" << endl;
    cout << setw(i + 5) << "" << "XX" << "   " << "XX" << endl;
}

void dino2(int i) {
    cout << setw(i + 11) << "" << "XXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XX" << " " << "XXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXX" << endl;
    cout << setw(i + 9) << "" << "XXXXXX" << endl;
    cout << setw(i) << "" << "X" << "       " << "XXXXXXX" << endl;
    cout << setw(i) << "" << "X" << "      " << "XXXXXXXXXX" << endl;
    cout << setw(i) << "" << "XX" << "    " << "XXXXXXXXX" << " " << "X" << endl;
    cout << setw(i) << "" << "XXX" << "  " << "XXXXXXXXXX" << endl;
    cout << setw(i) << "" << "XXXXXXXXXXXXXXX" << endl;
    cout << setw(i) << "" << "XXXXXXXXXXXXXX" << endl;
    cout << setw(i + 1) << "" << "XXXXXXXXXXXXX" << endl;
    cout << setw(i + 2) << "" << "XXXXXXXXXXX" << endl;
    cout << setw(i + 3) << "" << "XXXXXXXXX" << endl;
    cout << setw(i + 4) << "" << "XXXXXXX" << endl;
    cout << setw(i + 5) << "" << "XXX" << " " << " XXXX" << endl;
    cout << setw(i + 5) << "" << "XX" << endl;
    cout << setw(i + 5) << "" << "X" << endl;
    cout << setw(i + 5) << "" << "XX" << endl;
}


void dino3(int i) {
    cout << setw(i + 11) << "" << "XXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XX" << " " << "XXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXX" << endl;
    cout << setw(i + 10) << "" << "XXXXXXXX" << endl;
    cout << setw(i + 9) << "" << "XXXXXX" << endl;
    cout << setw(i) << "" << "X" << "       " << "XXXXXXX" << endl;
    cout << setw(i) << "" << "X" << "      " << "XXXXXXXXXX" << endl;
    cout << setw(i) << "" << "XX" << "    " << "XXXXXXXXX" << " " << "X" << endl;
    cout << setw(i) << "" << "XXX" << "  " << "XXXXXXXXXX" << endl;
    cout << setw(i) << "" << "XXXXXXXXXXXXXXX" << endl;
    cout << setw(i) << "" << "XXXXXXXXXXXXXX" << endl;
    cout << setw(i + 1) << "" << "XXXXXXXXXXXXX" << endl;
    cout << setw(i + 2) << "" << "XXXXXXXXXXX" << endl;
    cout << setw(i + 3) << "" << "XXXXXXXXX" << endl;
    cout << setw(i + 4) << "" << "XXXXXXX" << endl;
    cout << setw(i + 5) << "" << "XX " << " " << "XX" << endl;
    cout << setw(i + 5) << "" << " " << "XX  " << "X" << endl;
    cout << setw(i + 5) << "" << " " << "    " << "X" << endl;
    cout << setw(i + 5) << "" << "  " << "   " << "XX" << endl;
}

int main()
{
    int i = 1;
    int speed = 200;

    while (true)
    {
        dino1(i);
        Sleep(speed);
        system("CLS");
        i++;
        dino2(i);
        Sleep(speed);
        system("CLS");
        i++;
        dino3(i);
        Sleep(speed);
        system("CLS");
        i++;

        if (i == 100)
            i = 1;
    }

}

