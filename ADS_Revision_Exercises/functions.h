#pragma once
/// @brief 
/// @param x 
/// @param y 
/// @return 
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

//stub = function definition + "trivial" function body
int divideAll(int x, int y, int z) {

	if (y == 0 || z == 0)
		throw std::logic_error("Denominators cannot be zero!");

	//if (y == 0 || z == 0)
	//	throw std::domain_error("Denominators cannot be zero!");

	return (x / y) / z;
}

//15, 25, 35
int getSumOfArray(int* pArray, int length) {

	//size of a pointer(4) / size of first element i.e. integer(4)
	//int length = sizeof(pArray) / sizeof(pArray[0]);

	int sum = 0;
	for (int i = 0; i < length; i++) {
		//sum += *(pArray + i);
		sum += pArray[i];
	}

	return sum;
}


