#include <iostream>


class Counter
{
private:
    int counter{};

public:
   Counter()
    {

        counter = 1;
    }

    Counter(int a)
    {

        counter = a;
    }

    int get_counter() {return counter;}
    void set_counter(int value) { if (value != 0) counter = value; }

    void increment()
    {

        counter += 1;
    }
   void decrement()
    {

        counter -= 1;
    }


};

int main(int argc, char** argv)
{
    std::string answer{};
    std::cout << "Need initializing? yes/no: ";
    std::cin >> answer;

    Counter c;

    if (answer == "yes")
        {
            int starting_value;
            std::cout << "Enter starting value: ";
            std::cin >> starting_value;
            c = Counter(starting_value);
        }
    else
        {
            c = Counter();
        }

        std::cout << std::endl;

        char user_command{};

    do {

        std::cout << "Enter user command ('+', '-', '=' or 'x'): ";
        std::cin >> user_command;

        switch (user_command)
        {
            case '+' : c.increment(); break;
            case '-' : c.decrement(); break;
            case '=' : std::cout << c.get_counter();  std::cout << std::endl; break;
            case 'x' : std::cout << "Goodbye!"; std::cout << std::endl; break;
            default: break;
        }

    } while(user_command != 'x');

   /*  if (answer == "No")
    {
        Counter c;

   char user_command{};

    do

        {


        std::cout << "Enter user command ('+', '-', '=' or 'x'): ";
        std::cin >> user_command;

        switch (user_command)
        {
            case '+' : c.increment(); break;
            case '-' : c.decrement(); break;
            case '=' : std::cout << c.get_counter();  std::cout << std::endl; break;
            case 'x' : std::cout << "Goodbye!"; std::cout << std::endl; break;
            default: break;
        }

    }while(user_command != 'x');*/




    return EXIT_SUCCESS;
}
