/// @author NMG
/// @version 1.0
/// @date 7/10/20
/// @see Revision Exercises document in Moodle
#include <iostream>
#include "Flower.h"
#include "functions.h"

using namespace std;
//exercises
void operatorsExercise2();
void operatorsExercise3();
void operatorsExercise5();
void pointersExercise2();

//other demos - swap and adding comments to our code
void swap(int a, int b);
void demoSimpleSwap();
void demoDoxygenComments();
bool isValidUser(int a, float b, string c, char d);

int main()
{
    //operatorsExercise2();
    //operatorsExercise3();
    //operatorsExercise5();

    pointersExercise2();
}



void pointersExercise2() {
    int x = 10;
    int y = 200;

    int* pX = &x;
    int* pY = &y;

    swapPtrs(pX, pY);
    cout << pX << endl; //addr
    cout << *pX << endl;

    cout << pY << endl; //addr
    cout << *pY << endl;
}

/// @brief Demonstrates use of a getter for the Flower class
void operatorsExercise2() {
    Flower f1("rose", 12, 3.99);
    cout << f1.getName() << endl;
}

/// @brief Demonstrates the insertion stream operator for the Flower class
void operatorsExercise3() {
    Flower f1("rose", 12, 3.99);
    cout << f1 << endl;
}

/// @brief Demonstrates the pre- and post-increment operators for the Flower class
void operatorsExercise5() {
    Flower f1("rose", 12, 3.99);
    f1++;
    cout << f1 << endl;
}

/********************************* CODE NOT RELATED TO EXERCISES *********************************/

/// @brief Demonstrates that a swap() using pass-by-copy does not work
void demoSimpleSwap(){
    //value-types => passed by copy
    int a = 5;
    int b = 100;
    swap(a, b);
    cout << a << " - " << b << endl;
}

/// @brief Attempts to swap two integers but does not work because of pass-by-copy
/// @param a integer
/// @param b integer
/// @version 1.0
/// @bug Note this function will NOT operate correctly as it uses pass-by-copy and not pass-by-reference
void swap(int a, int b) {
    int temp = b;
    a = b;
    b = temp;
}

/// @brief Demonstrates a function that is documented using Doxygen
void demoDoxygenComments() {
    cout << isValidUser(24, 1.85, "jane smith", 'j');
}

/// @brief Demonstrates how to write Doxygen comments for a demo function, isValidUser
/// @param age User age
/// @param heightCms User height in cms
/// @param fullName User name
/// @param firstNameInitial User first initial
/// @return True if user is allowed access to..., otherwise false
/// @see https://www.doxygen.nl/manual/commands.html
/// @author NMCG
/// @version 1.0
bool isValidUser(int age, float heightCms, string fullName, char firstNameInitial) {
    return true;
}

