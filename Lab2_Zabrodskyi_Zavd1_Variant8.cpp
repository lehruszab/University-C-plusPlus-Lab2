#include <iostream>
#include <string>  
using namespace std;


class A
{
public:
    string name;
    string type;
    int size;
    string date;
    string atribut;
public:
    A() // конструктор без параметров
    {
        name = " ";
        type = " ";
        size = 0;
        date = " ";
        atribut = " ";
    }
    
    A(string nn, string tt, int ss, string dd, string aa) // конструктор с параметрами
    {
        name = nn;
        type = tt;
        size = ss;
        date = dd;
        atribut = aa;
    }
    
    
    void Print_object() // вывод на экран
    {
    cout << name <<" "<< type <<" "<< size << " " << date<<" "<< atribut << endl;
    }
    
    
    void setA() // с помощью этого метода изменим начальные значения 
    {
        cout << "Введите name:";
        cin >> name;
        cout << "Введите type: ";
        cin >> type;
        cout << "Введите size: ";
        cin >> size;
        cout << "Введите date: ";
        cin >> date;
        cout << "Введите atribut: ";
        cin >> atribut;
    }
    
    ~A() // деструктор для удаления обьктов 
    {
        cout << "Деструктор сработал" << endl;
    }
    
    
};


int main()
{
    A obj1; // вызываем конструктор без параметров и создаем 1 обькт 
    A obj2("name", "type", 1024, "date", "atribut"); //  вызываем конструктор с параметрами и создаем 2 обькт 
    obj2.Print_object(); // выводим 2 обькт на екран
    obj2.setA(); // изменяим 2 обькт
}