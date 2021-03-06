#include <iostream>
using namespace std;

int minOddIndexElement(int *, int); // прототип функции

int main() { // главная функция
	int n; // переменная для ввода и хранения размерности массива
	cout << "Введите размерность массива: ";
	cin >> n;
	int intArray[n]; // целочисленный массив из n элементов
	cout << "Введите элементы массива:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> intArray[i];
	}
	minOddIndexElement(intArray, n); // вызов функции для осуществления дальнейших вычислений и вывода результатов
}

// Функция, находящая минимальный элемент массива с нечётным индексом и выводящая результат вычислений в консоль
int minOddIndexElement(int *parray, int n){
	int min = parray[1]; // переменная для хранения текущего минимального значения
	for (int i = 1; i < n; i += 2) { // процесс
		if (parray[i] < min) {       // нахождения
			min = parray[i];         // минимального
		}                            // элемента массива
	}                                // с нечётным индексом
	cout << "Минимальный элемент с нечётным индексом: " << min << endl; // вывод результата в консоль
	return min; // возврат результата работы функции
}
