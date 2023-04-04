/**
 * ID:
 * Name: Sharon
 * Last Name: Mwale
 * Course: Secure Programming
 * Program: Computer Science
 * Term: 2
 * Year: 3rd
 * Issued: 1/April/2023
 * filename: animal.h & animal.cpp
 */

#include <iostream>
#include <stdio.h>
#include <string>

// checks if the numbers are of string type or not
bool isNumberString(const std::string &s)
{
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}

/**
 * main - entry point
 * @ccNumber - string variable (Account number)
 * Return - Always Success (0)
 */
int main()
{
    std::string ccNumber;
    std::cout << "This program uses the Lunh Algorithm to validate a CC number." << std::endl;
    std::cout << "You can enter 'exit' anytime to quit." << std::endl;

    while (true)
    {
        std::cout << "Please enter a CC number to validate: ";
        std::cin >> ccNumber;

        if (ccNumber == "exit")
            break;
        else if (!isNumberString(ccNumber))
        {
            std::cout << "Bad Input!\n";
            continue;
        }

        int len = ccNumber.length();
        int doubleEvensum = 0;

        /**
         * Step 1 is to double every second digit, starting from the right. If it
         * result in a two digit number, add both the digits to obatin a single
         * digit number. Finally, sum all the answers to obation `doubleEvenSum`
         */

        for (int i = len - 2; i >= 0; i = i - 2)
        {
            int dbl = ((ccNumber[i] - 48) * 2);
            if (dbl > 9)
            {
                dbl = (dbl / 10) * (dbl % 10);
            }
            doubleEvensum += dbl;
        }
        /**
         * Step 2 is to add every odd placed digit from the right to the value `doubleEvenSum`
         */
        for (int i = len - 1; i >= 0; i = i - 2)
        {
            doubleEvensum += (ccNumber[i] - 48);
        }
        /**
         * Step 3 is to check if the final `doubleEvenSum` is a multipler of 10.
         * If yes, it is a valid CC Number. Otherwise, Not.
         */
        std::cout << (doubleEvensum % 10 == 0 ? "valid!" : "Invalid!") << std::endl;
        continue;
    }
    return (0);
}
