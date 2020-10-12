#pragma once
/// @brief Demo function to show how to write a unit test
/// @param x Integer value
/// @param y Float value
/// @return Integer 
int dummy(int x, float y) {
	return -1;
}

/// @brief Demo function to show how to write a unit test
/// @param x An integer x
/// @param y An integer y
/// @param z An integer z
/// @return x divide by y divided by z
/// @exception Throws logic_error if y or z == 0
int divideAll(int x, int y, int z) {

	if (y == 0 || z == 0)
		throw std::logic_error("Denominators cannot be zero!");

	return (x / y) / z;
}

/*************************************************************************/

/// @brief Gets the sum of values in an array of integers
/// @param pArray A pointer storing the address of the first element in the integer array
/// @param length The length of the array
/// @return Integer sum of all values in the array
int getArrayTotal(int* pArray, int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		//sum += *(pArray + i); //we could write code like this too
		sum += pArray[i];
	}
	return sum;
}

/// @brief Swaps the addresses stored in two pointers to integers
/// @param pA Reference to a pointer to a
/// @param pB Reference to a pointer to b
void swapPtrs(int*& pA, int*& pB) {
	int* pTemp = pB;
	pB = pA;
	pA = pTemp;
}

/// @brief Reverse the contents of an array using pointers
/// @param pArray A pointer storing the address of the first element in the integer array
/// @param length The length of the array
void reverseArray(int* pArray, int length) {
	//initialize the two pointers with the first and last address in the array
	int* pLeft = pArray;
	int* pRight = pArray + length - 1;
	//variable to store the swapped value
	int temp = 0;
	while (pLeft < pRight) {
		//dereference the number pointed to by pLeft and store in temp
		temp = *pLeft;
		//dereference the number at position pointed to by pRight and overwrite into position pointed to be pLeft
		*pLeft = *pRight;
		//write the stored value in temp into the position pointed to by pRight.
		*pRight = temp;
		//move the pointer to left towards the end of the array
		pLeft++;
		//move the pointer to right towards the start of the array
		pRight--;
	}
}

/// @brief Returns a count of the number of even integers in the array
/// @param pArray A pointer storing the address of the first element in the integer array
/// @param length The length of the array
/// @return 
int countEven(int* pArray, int length) {
	int count = 0;

	for (int i = 0; i < length; i++)
		if (pArray[i] % 2 == 0) count++;

	return count;
}

/// @brief Returns a count of the number of even integers in the array
/// @param pArray A pointer storing the address of the first element in the double array
/// @param length The length of the array
/// @return Pointer to the maximum value in the array 
double* getMaximum(double* pArray, int length) {

	if (length == 0)
		return nullptr;

	double max = -DBL_MAX; //the negative of the largest value

	for (int i = 0; i < length; i++) {
		if (pArray[i] > max) {
			max = pArray[i];
		}
	}

	//return a pointer (i.e. the address of max)
	return &max;
}

/// @brief Utility function to print an array of integer values
/// @param id A string identifier useful when printing out the array (e.g. "Student Ages[0]...")
/// @param pArray A pointer storing the address of the first element in the integer array
/// @param length The length of the array
void printArray(string id, int* pArray, int length) {
	for (int i = 0; i < length; i++)
		cout << id << "[" << i << "]: " << pArray[i] << endl;
}

