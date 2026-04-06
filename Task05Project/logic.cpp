// Task 05 [The number of digits]
// Количество цифр числа
// 
// Необходимо спроектировать и реализовать программу, 
// которая подсчитывает количество цифр в заданном целом числе.
int count(int number) {
	
	number = number < 0 ? -number : number;

	//base case
	if (number < 10) {
		return 1;
	}

	//recursion case
	return 1 + count(number / 10);
}


