// Task 04 [The sum of cubes]
// Сумма кубов
// 
// Необходимо спроектировать и реализовать программу, 
// которая возвращает сумму кубов чисел от 1 до N.

int sum_of_cubes(int number) {

	if (number <= 1) {
		return number;
	}

	return number * number * number + sum_of_cubes(number - 1);
}