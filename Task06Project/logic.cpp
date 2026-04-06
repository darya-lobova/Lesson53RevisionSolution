// Task 06 [The sum III]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чётных чисел от 1 до N.

int sum(int number) {


	//base case
	if (number < 0) {
		return -1;
	}

	if (number < 2) {
		return 0;
	}


	if (number % 2 == 1) {
		number -= 1;
	}
	//recursion case
	return number + sum(number - 2);

}