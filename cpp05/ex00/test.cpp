#include <iostream>
#include <stdexcept>

using namespace std;

int AddPositiveIntegers(int a, int b)
{
    if (a < 0 || b < 0)
        throw std::invalid_argument("AddPositiveIntegers arguments must be positive");

    return (a + b);
}

int main()
{
    try
    {
        cout << AddPositiveIntegers(1, 2); //exception
    }

    catch (std::invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }

    return 0;
}