#include <iostream>
#include <cstring>

class Calculator
{
private:

    double num1;
    double num2;

public:
    double add()
        {
            return (num1 + num2);
        }
    double multiply() //- метод должен возвращать результат перемножения num1 и num2
        {
            return (num1 * num2);
        }

    double subtract_1_2()
        {
            return (num1 - num2);
        }

    double subtract_2_1()
        {
            return (num2 - num1);
        }

    double divide_1_2()
    {
        return (num1 / num2);
    }

    double divide_2_1()
    {
        return (num2 / num1);
    }

    bool set_num1(double num1)
	{
		if (num1 == 0) return false;
		this->num1 = num1;
		return true;
	}
	bool set_num2(double num2)
	{
		if (num2 == 0) return false;
		this->num2 = num2;
		return true;
	}
       // double get_num1() { return num1; } // геттер
       // void set_num1 (int value) { if (value != 0) num1 = value; } //сеттер

       // double get_num2() { return num1; } // геттер
       // void set_num2 (int value) { if (value != 0) num1 = value; } //сеттер

        Calculator (){};

};

int main(int argc, char** argv)
{

    Calculator calc{};

    double a{};
    double b{};
    double res{};


do {
  do
		{
			std::cout << "Enter num1: ";
			std::cin >> a;
			res = calc.set_num1(a);
			if (!res)
			{
				std::cout << "ERROR INPUT!\n";
			}
		} while (!res);
		do
		{
			std::cout << "Enter num2: ";
			std::cin >> b;
			res = calc.set_num2(b);
			if (!res)
			{
				std::cout << "ERROR INPUT!\n";
			}
		} while (!res);


    std::cout << "num1 + num2 = " << calc.add() << std::endl;
    std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
    std::cout << "num2 - num1 = " << calc.subtract_2_1()<< std::endl;
    std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
    std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
    std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
}while(true);

    return EXIT_SUCCESS;
}
