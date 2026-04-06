// Task 01 [The sum I]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от 1 до N.

//Best case: O(1)
//Worst case: O(N)
int sum(int number) {

	//base case
	if (number < 0) {
		return -1;
	}
	if (number == 0) {
		return 0;
	}

	if (number == 1) {
		return 1;
	}

	//recursion case
	return number + sum(number - 1);
}