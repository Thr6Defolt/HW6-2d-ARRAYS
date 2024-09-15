
#include <iostream>
#include <conio.h>

int main()
{
    //task1 

    /*
    const int Hight = 5;
    const int Wight = 5;
    int massiv[Hight][Wight];
    int sum = 0;

    for (int i = 0; i < Hight; ++i)
    {
        for (int y = 0; y < Wight; ++y)
        {
            massiv[i][y] = rand() % 20;
            std::cout << massiv[i][y] << " ";
            sum += massiv[i][y];
        }
        std::cout << "\n";
    }
    std::cout << "Suma " << sum;
    std::cout << "Crednie " << sum / 20;
    */

    //task2

    /*
    const int Hight = 5;
    int massiv[Hight][Hight];
    int sum = 0;
    int sumSecond = 0;

    for (int i = 0; i < Hight; ++i)
    {
        for (int y = 0; y < Hight; ++y)
        {
            massiv[i][y] = rand() % 20;
            std::cout << massiv[i][y] << " ";
        }
        std::cout << "\n";
    }

    for (int x = 0; x < Hight;++x)
    {
        sum += massiv[x][x];
        sumSecond += massiv[x][Hight - x - 1];
    }
    std::cout << "Suma " << sum;
    std::cout << "Suma second " << sumSecond;
    */

    //task3

    /*
    const int Hight = 5;
    const int Wight = 5;
    int massiv[Hight][Wight];
    int countNegativ = 0;
    int countPositiv = 0;
    int countZero = 0;

    for (int i = 0; i < Hight; ++i)
    {
        for (int y = 0; y < Wight; ++y)
        {
            massiv[i][y] = rand() % 20 - 10;
            std::cout << massiv[i][y] << " ";
            if (massiv[i][y] == 0)
            {
                ++countZero;
            }
            else if (massiv[i][y] >0)
            {
                ++countPositiv;
            }
            else
            {
                ++countNegativ;
            }
        }
        std::cout << "\n";
    }
    std::cout << "Negativ " << countNegativ;
    std::cout << "Positiv " << countPositiv;
    std::cout << "Zero " << countZero;
    */

    //task4

    /*
    const int Hight = 5;
    const int Wight = 5;
    int massiv[Hight][Wight];

    for (int i = 0; i < Hight; ++i)
    {
        for (int y = 0; y < Wight; ++y)
        {
            massiv[i][y] = rand() % 20;
            std::cout << massiv[i][y] << " ";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < Hight; ++i)
    {
        int sum = 0;
        for (int y = 0; y < Wight; ++y)
        {
            sum += massiv[i][y];
        }
        std::cout << "Ctroka " << i+1 << " " << sum;
    }

    for (int i = 0; i < Wight; ++i)
    {
        int sum = 0;
        for (int y = 0; y < Hight; ++y)
        {
            sum += massiv[y][i];
        }
        std::cout << "Stolbec " << i + 1 << " " << sum;
    }
    */

    //task5
    
    /*
    const int Hight = 5;
    const int Wight = 5;
    int massiv[Hight][Wight];

    for (int i = 0; i < Hight; ++i)
    {
        for (int y = 0; y < Wight; ++y)
        {
            massiv[i][y] =10*i+y;
            std::cout << massiv[i][y] << " ";
        }
        std::cout << "\n";
    }
    */

    //task9

    /*
    const int Hight = 5;
    const int Wight = 6;
    int massiv[Hight][Wight];
    int number = 1;

    for (int i = 0; i < Hight; ++i)
    {
        for (int y = 0; y < Wight; ++y)
        {
            massiv[i][y] = number;
            std::cout << massiv[i][y] << " ";
            ++number;
        }
        std::cout << "\n";
    }
    */

    //task10

    // У меня тут не сосвсемполучилось. И я не понимаю почиму в логике вроде все правильно
    // Но выходит 
    // 1 2 3 4 5 6
    //13 12 11 10 9 8
    //13 14 15 16 17 18
    //25 24 23 22 21 20
    //25 26 27 28 29 30
    const int Hight = 5;
    const int Wight = 6;
    int massiv[Hight][Wight];
    int number = 1;

    for (int i = 0; i < Hight; ++i)
    {
        for (int y = 0; y < Wight; ++y)
        {
            if (i % 2 == 0)
            {
                massiv[i][y] = number;
                std::cout << massiv[i][y] << " ";
                ++number;
            }
            else
            {
                massiv[i][y] = number;
                std::cout << massiv[i][y] << " ";
                --number;
            }
        }
        std::cout << "\n";
        number += 6;
    }
}
