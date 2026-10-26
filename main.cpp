#include <iostream>
#include "List.h"
#include <random>

/*
    Anthony Diaz / adiaz6040@sdsu.edu
    CS 210 / Scovil
    Assignment 5 - List Behavior Modification
*/

// An RNG (Random Number Generator) To showcase the
// robustness and safety of the program.
int randomNumberGenerator() {
    random_device rnd;
    mt19937 gen(rnd());
    uniform_int_distribution<int> distribution(0,99);

    return distribution(gen);
}

// A simple print list function to print
// any list.
void print_List(const A5ListADia<int> & numbers) {
    for (auto itr = numbers.begin(); itr != numbers.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
}

int main() {
    A5ListADia<int> list1;
    A5ListADia<int> list2;

    cout <<  list1.author() << endl << endl;

    for (int i = 0 ; i < 5 ; i++) {
        list1.push_back(randomNumberGenerator());
    }
    for (int i = 0 ; i < 2 ; i++) {
        list2.push_back(randomNumberGenerator());
    }

    cout << "Here is list 1:" << endl;
    print_List(list1);

    cout << endl << "Here is the insert_at(4, 3) function:" << endl;
    list1.insert_at(4, 3);
    print_List(list1);

    cout << endl << "Here is the remove_at(4) function:" << endl;
    list1.remove_at(4);
    print_List(list1);

    cout << endl << "Here is the list1.slice(1,3) function for the third list:" << endl;
    A5ListADia<int> list3 = list1.slice(1, 3);
    print_List(list3);
    cout << "And to show list 1 is unaffected:" << endl;
    print_List(list1);

    cout << endl << "Here is the merge() function with list1 and list2..." << endl;
    cout << "Before the merge:" << endl;

    cout << "List1:" << endl;
    print_List(list1);
    cout << endl;
    cout << "List2:" << endl;
    print_List(list2);

    cout << endl << "After merge:" << endl;
    list1.merge(list2);
    cout << "List1:" << endl;
    print_List(list1);
    cout << "List2:" << endl;
    print_List(list2);



    return 0;
}