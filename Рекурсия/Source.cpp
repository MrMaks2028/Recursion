#include <iostream>
using namespace std;
long long fact(long long num) {
	if (num <= 1)
		return 1;
	return fact(num - 1) * num;
}

int fibonacci(int fn);
template <typename T> void bubbleSort(T a[], int len, bool type = false) {
	if(!type){
		for(int i = len - 1; i > 0; i--)
			for(int j = 0; j < i; j++)
				if(a[j] > a[j + 1])
					swap(a[j],a[j + 1])
	}
	else
		for (int i = len - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (a[j] < a[j + 1])
					swap(a[j], a[j + 1])
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	
	//Задача 1
	/*cout << "Задача 1.\nПервые 13 чисел Фибоначчи:\n";
	for (int i = 0; i < 13; i++)
		cout << i + 1 << ". " << fibonacci(i) << endl;
	cout << endl;*/

	//Задача 2
	cout << "Задача 2.\nИзначальный массив\n";
	double z2[5] = { 5.1, 6.101, 7.43, 8.15, 9.634 };
	for (int i = 0; i < 5; i++)
		cout << z2[i] << " ";
	cout << "\nОтсортированный массив:\n";
	bubbleSort(z2, 5, true);
	for(int i = 0; i < 5; i++)
		cout << z2[i] << " ";
	

	return 0;
}

int fibonacci(int fn) {
	if (fn == 0)
		return 0;
	if (fn == 1)
		return 1;
	return fibonacci(fn - 1) + fibonacci(fn - 2);
}