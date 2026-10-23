#include <iostream>
#include "List.h"
#include <random>

/*
    Anthony Diaz / adiaz6040@sdsu.edu
    CS 210 / Scovil
    Assignment 5 - List Behavior Modification
*/
int randomNumberGenerator() {
    // A RNG (Random Number Generator) To showcase the
    // robustness and safety of the program.
    random_device rnd;
    mt19937 gen(rnd());
    uniform_int_distribution<int> distribution(0,99);

    return distribution(gen);
}

string author () {
    string name = "Anthony Diaz | 134646574";
    return name;
}

void print_List(const A5ListADia<int> & numbers) {
    for (auto itr = numbers.begin(); itr != numbers.end(); ++itr) {
        cout << *itr << " " << endl;
    }
}

int main() {
    cout << author() << endl;
    A5ListADia<int> numbers1;

    cout << "This is the original list" << endl;

    for (int i = 1; i <= 5; i++) {
        numbers1.push_back(randomNumberGenerator());
   }
    print_List(numbers1);

    cout << "Now I am going to insert 4" << endl;

    numbers1.insert_at(4,4);
    print_List(numbers1);

    cout << "Now I am going to remove 4" << endl;

    numbers1.remove_at(4);

    print_List(numbers1);


    return 0;

}