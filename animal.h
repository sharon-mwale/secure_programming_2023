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
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

// Animal Interface
class Animal
{
    friend std::ostream &operator<<(std::ostream &out, Animal &oparand);

public:
    virtual void print_info(std::ostream &out) = 0;
    // change nothing above this
    // your code goes below this
};

#endif // ANIMAL_H
