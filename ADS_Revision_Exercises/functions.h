#pragma once
/// @brief Demo function to show how to write a unit test
/// @param x Integer value
/// @param y Float value
/// @return Integer 
int dummy(int x, float y) {
	return -1;
}

/// @brief Swaps the addresses stored in two pointers to integers
/// @param pA Reference to a pointer to a
/// @param pB Reference to a pointer to b
void swapPtrs(int* &pA, int* &pB) {
	int* pTemp = pB;
	pB = pA;
	pA = pTemp;
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

/// @brief Gets the sum of values in an array of integers
/// @param pArray Pointer to the first element in the array
/// @param length Length of the array
/// @return Integer sum of all values in the array
int getSumOfArray(int* pArray, int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		//sum += *(pArray + i); //we could write code like this too
		sum += pArray[i];
	}
	return sum;
}


