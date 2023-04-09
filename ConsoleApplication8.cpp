// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

struct person
{
    std::string name;
    int numer;
    double count;

};

void izm_count(person * p, double izm_count)
{
    p->count = izm_count;
}

int main()


{
    setlocale(LC_ALL, "rus");
    std::string name;
    int numer;
    double count;
    setlocale(LC_ALL, "rus");
    setlocale(LC_CTYPE, "Rus");
    person client1;
    std::cout << "Введите номер счёта:";
    std::cin >> numer;
    std::cout << std::endl;
    client1.numer = numer;
    std::cout << "Введите имя владельца:";
    std::cin >> name;
    std::cout << std::endl;
    client1.name = name;
    std::cout << "Введите баланс:";
        std::cin >> count;
        std::cout << std::endl;
        izm_count(&client1, count);
        std::cout << "Введите новый баланс:";
        std::cin >> count;
        std::cout << std::endl;
        izm_count(&client1, count);
        std::cout << "Ваш счёт:" <<" "<<client1.name<<", "<<client1.numer<<", "<<client1.count << std::endl;
        std::cout << name << std::endl;
        return 0;





}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
