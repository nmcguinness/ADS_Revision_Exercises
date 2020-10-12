/// @author NMG
/// @version 1.0
/// @date 7/10/20
/// @see Revision Exercises document in Moodle

#include <iostream>
#include "Flower.h"
#include "functions.h"

using namespace std;

//exercises
void pointersExercise1();
void operatorsExercise2();
void operatorsExercise3();
void operatorsExercise5();

void pointersExercise1();
void pointersExercise2();
void pointersExercise3();
void pointersExercise4();
void pointersExercise5();
void pointersExercise6();


//other demos - array length, swap and adding comments to our code
void usingArrayRefresher();
void swap(int a, int b);
void demoSimpleSwap();
void demoDoxygenComments();
bool isValidUser(int a, double b, string c, char d);

int main()
{
    cout << "A&DS - Revision Exercises - Selected Solutions" << endl;

    cout << endl << "Exercises: Classes & Operator Overloading..." << endl;
    operatorsExercise2();
    operatorsExercise3();
    operatorsExercise5();

    cout << endl << "Exercises: Pointers & Dynamic Memory..." << endl;
    pointersExercise1();
    pointersExercise2();
    pointersExercise3();
    pointersExercise4();
    pointersExercise5();
    pointersExercise6();

    cout << endl << "Other demos(array and swap)..." << endl;
    usingArrayRefresher();
    demoSimpleSwap();
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

/// @brief Demonstrates the getArrayTotal() function
void pointersExercise1() {
    int* pArray = new int[3]; //12 bytes of space i.e. 3 x 4 bytes
    pArray[0] = 15;  //*pArray = 15
    pArray[1] = 25;  //*(pArray+1) = 25
    pArray[2] = 35;  //*(pArray+2) = 35

    int sum = getArrayTotal(pArray, 3);
    cout << "Sum: " << sum << endl;

    //always have a delete for every use of "new"
    //note we use delete[] to delete a pointer to an array
    delete[] pArray;
}

/// @brief Demonstrates the swapPtrs() function
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

/// @brief Demonstrates the reverseArray() function
void pointersExercise3()
{
    int ages[] = { 1, 2, 3, 4, 5, 6 };
    int length = sizeof(ages) / sizeof(ages[0]);
    reverseArray(ages, length);
    printArray("ages", ages, length);
}

/// @brief Demonstrates the countEven() function
void pointersExercise4()
{
    int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int length = sizeof(nums) / sizeof(nums[0]);
    cout << "array countains " << countEven(nums, length) << " even values" << endl;
}

void pointersExercise5()
{
    //don't forget we can use scientific notation to represent small/large floating point values
    double nums[] = { 6.8, 24.45, -45.67, 112.789, 8.67, 3.14, 1E-8};
    int length = sizeof(nums) / sizeof(nums[0]);
    double* pMax = getMaximum(nums, length);

    if(pMax != nullptr)
        cout << "max is " << *pMax << " at address[" << pMax << "]" << endl;
    else
        cout << "Array length was zero!" << endl;
}

void pointersExercise6()
{
    char str[] = { 'a', 'b', 'c', 'd', 'e', '\0'};

    encrypt(str, 6, 1);
}


/********************************* CODE NOT RELATED TO EXERCISES *********************************/

/// @brief Demonstrates how to use sizeof() to obtain the length of an array
void usingArrayRefresher() {
    //if we define an array using the standard method (i.e. not a pointer to an array e.g. int* pArray)
    //then we can determine the length of the array using sizeof()
    int ages[3];
    ages[0] = 18; 
    ages[1] = 22; 
    ages[2] = 34;

    int length = sizeof(ages) / sizeof(ages[0]);
    cout << "Total size required for the array: " << sizeof(ages) << endl;
    cout << "Size required for the first element in array: " << sizeof(ages) << endl;
    cout << "Size of ages: " << length << endl;
}


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
bool isValidUser(int age, double heightCms, string fullName, char firstNameInitial) {
    return true;
}

