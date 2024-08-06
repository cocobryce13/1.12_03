#include<iostream>
#include<string>
#include<fstream>

int main()
{
    setlocale(LC_ALL, "rus");
    std::fstream fin("out.txt");
    int number;
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    int* arr = new int[size];

    if (!(fin.is_open()))
    {
        std::cout << "Not Open";
        return 11111;
    }

    fin << size;
    fin << "\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        fin << arr[i];
    }

    delete[] arr;
    fin.close();

    std::cout << "\n\n\n";

    return 0;
}