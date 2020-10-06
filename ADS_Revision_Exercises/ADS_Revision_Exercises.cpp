// ADS_Revision_Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Flower.h"

//declaration => c => semi-colon
void swap(int a, int b);

using namespace std;
void demoSimpleSwap();
void operatorsExercise2();
void operatorsExercise3();
void operatorsExercise5();

int main()
{
    demoSimpleSwap();
    //answers to exercises...

    //Flower
    //operatorsExercise2();
   // operatorsExercise3();
    operatorsExercise5();
}

void operatorsExercise2() {
    Flower f1("rose", 12, 3.99);
    cout << f1.getName() << endl;

    Flower* pF1 = &f1;
    cout << pF1->getName() << endl;
}

void operatorsExercise3() {
    Flower f1("rose", 12, 3.99);
    cout << f1 << endl;
}

void operatorsExercise5() {
    //int ages = 10;
    //int x = ++ages;

    Flower f1("rose", 12, 3.99);
    f1++;
    cout << f1 << endl;
}


void demoSimpleSwap(){
    cout << "Hello World!\n";

    //value-types => passed by copy
    int a = 5;
    int b = 100;
    swap(a, b);
    cout << a << " - " << b << endl;
}

//definition - finite - known
void swap(int a, int b) {
    int temp = b;
    a = b;
    b = temp;
}