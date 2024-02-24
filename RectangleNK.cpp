// Написать функцию, выводящую на экран прямоугольник с высотой N и шириной K.
//

#include <iostream>
#include <windows.h>
using namespace std;

void DrawRectangle(int N, int K) {
    char height = '|', width = '-';

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (i == 0 || i == N - 1) {
                cout << width;
            }
            else {
                if (j == 0 || j == K - 1) {
                    cout << height;
                }
                else {
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int Height = 0, Width = 0;
    cout << "Для отображения прямоугольника введите высоту и ширину : ";
    cin >> Height >> Width;

    DrawRectangle(Height, Width);
}

