// Task 12 [The number]
// Число
//
// Необходимо спроектировать и реализовать программу 
// для вычисления n-го числа в последовательности, 
// где каждое следующее число равно сумме предыдущего 
// и его номера: 1, 2, 4, 7, 11, 16, ...
#include "logic.h"

int recursion(int index) {
	//base case
	if (index == 1) {
		return 1;
	}
	//recursion case
	index--;
	return recursion(index) + index;
}

int get_number(int index) {

	if (index <= 0) {
		return -1;
	}
	return recursion(index);
}
