// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.


//Best case: O(1)
//Worst case:O(N)

#include "logic.h"

int sum(int n, int m) {

	if (n == m) {
		return 0;
	}

	return sum(n-1, m-1);
}