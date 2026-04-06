// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.


//Best case: O(1)
//Worst case:O(N)

#include "logic.h"

int sum(int n, int m) {

	//base case
	if (n == m) {
		return n;
	}

	if (n > m) {
		int t = n;
		n = m;
		m = t;
	}

	//recursion case
	return n + sum(n + 1 , m);
}