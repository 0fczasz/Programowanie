// FirstInheritanceConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class C
{
    private;
    int fieldA;
};

class A
{
private:
   // int fieldA;
public:
    A()
    {
        fieldA = 5;
    }
    /*int GetFieldA()
    {
        return fieldA;
    }
    */
    void ShowInfo()
    {
        std::cout << "Informacja na temat klasy A\n";
        std::cout << "Field A = " << fieldA << "\n";
    }
};


class B
{
private:
   // int fieldA;
    int fieldB;
public:
    B()
    {
       // fieldA = 5;
        fieldB= 5;

    }
    /*int GetfieldA()
    {
        return fieldA;
    }
    */
    int GetfieldB()
    {
        return fieldB;
    }

    void ShowInfo()
    {
        std::cout << "Informacja na temat klasy A\n";
        std::cout << "Field A = " << fieldA << "\n";
        std::cout << "Field B = " << fieldB << "\n";
    }
};
int main()
{

}

