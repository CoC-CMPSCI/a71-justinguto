#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int makearray(int number[])
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> sizeDist(10, 20);
    uniform_int_distribution<int> valueDist(0, 99);

    int count = sizeDist(gen);

    for (int i = 0; i < count; i++)
    {
        number[i] = valueDist(gen);
    }

    return count;
}

void bubble(int number[], int last)
{
    for (int i = 0; i < last - 1; i++)
    {
        if (number[i] > number[i + 1])
        {
            int temp = number[i];
            number[i] = number[i + 1];
            number[i + 1] = temp;
        }
    }
}

void printout(int number[], int last)
{
    for (int i = 0; i < last; i++)
    {
        cout << number[i] << "\t";
    }

    cout << endl;
}
