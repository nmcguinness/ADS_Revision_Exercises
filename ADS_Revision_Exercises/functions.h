#pragma once
/// @brief 
/// @param x 
/// @param y 
/// @return 
int dummy(int x, float y) {
	return -1;
}

void swapPtrs(int* &pA, int* &pB) {
	int* pTemp = pB;
	pB = pA;
	pA = pTemp;
}