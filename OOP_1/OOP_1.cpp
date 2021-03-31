#include <iostream>
#include <ctime>

using namespace std;


void sortArray(double* arr, int size) {
	double temp;

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// меняем элементы местами
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void searchByIndex(int* arr, int size, int index) {
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (index == arr[i]) {
			cout << "Индекс элемента " << index << ":" << i << endl;
			count++;
		}
	}

	if (count == 0) {
		cout << "Элемент " << index << " отсутствует в массиве" << endl;
	}
}

int searchLetter(char* arr, int size) {
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (int(arr[i]) >= 97 && int(arr[i]) <= 122) {
			count++;
		}
	}

	return count;
}

int* MakeRandomArray(int arraySize) {
	int* arr = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		arr[i] = rand() % 100;
	}

	return arr;
}

//1.1.3.1 Функции
double GetPower(double base, int exponent) {
	double number = base;

	if (exponent == 0) {
		return 1;
	}
	else if (exponent < 0) {
		for (int i = 0; i > exponent + 1; i--)
		{
			base *= number;
		}

		return 1 / base;
	}
	else {
		for (int i = 0; i < exponent - 1; i++)
		{
			base *= number;
		}

		return base;
	}

}

//1.1.3.3 Функции
void DemoGetPower(double base, int exponent) {
	cout << base << " ^ " << exponent << " = " << GetPower(base, exponent) << endl;
}

//1.1.3.4 Функции
void RoundToTens(int& value) {
	if (value % 10 < 5) {
		value /= 10;
		value *= 10;
	}
	else {
		value /= 10;
		value++;
		value *= 10;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));

	//1.1.2.1 Массивы
	cout << "1.1.2.1 Массивы" << endl;
	const int size1 = 10;
	int arr1[size1];
	int temp1;

	for (int i = 0; i < size1; i++)
	{
		arr1[i] = rand() % 100;
	}
	
	cout << "Созданный массив(1.1.2.1): ";
	for (int i = 0; i < size1; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size1 - 1; i++) {
		for (int j = 0; j < size1 - i - 1; j++) {
			if (arr1[j] > arr1[j + 1]) {
				// меняем элементы местами
				temp1 = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp1;
			}
		}
	}

	cout << "Отсортированный массив(1.1.2.1): ";
	for (int i = 0; i < size1; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl << endl;

	//1.1.2.2 Массивы
	cout << "1.1.2.2 Массивы" << endl;
	const int size2 = 12;
	double arr2[size2];
	double searchingValue;
	int count1 = 0;

	for (int i = 0; i < size2; i++)
	{
		arr2[i] = rand() % 100;
	}

	cout << "Созданный массив(1.1.2.2): ";
	for (int i = 0; i < size2; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	cout << "Введите вещественное значение: ";
	cin >> searchingValue;

	for (int i = 0; i < size2; i++)
	{
		if (arr2[i] >= searchingValue) {
			count1++;
		}
	}

	cout << "Количество элементов, которые больше или равны " << searchingValue << ": " << count1 << endl << endl;

	//1.1.2.3 Массивы
	cout << "1.1.2.3 Массивы" << endl;
	const int size3 = 8;
	char arr3[size3];

	cout << "Заполните массив" << endl;
	for (int i = 0; i < size3; i++)
	{
		cout << i << ": ";
		cin >> arr3[i];
	}

	cout << "Созданный массив(1.1.2.3): ";
	for (int i = 0; i < size3; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;

	cout << "Все буквы в массиве: ";

	for (int i = 0; i < size3; i++)
	{
		if (int(arr3[i]) >= 97 && int(arr3[i]) <= 122) {
			cout << arr3[i] << " ";
		}
	}

	cout << endl << endl;

	//1.1.3.2 Функции
	cout << "1.1.3.2 Функции" << endl;

	cout << "2.0 ^ 5 = " << GetPower(2.0, 5) << endl;
	cout << "3.0 ^ 4 = " << GetPower(3.0, 4) << endl;
	cout << "-2.0 ^ 5 = " << GetPower(-2.0, 5) << endl << endl;

	//1.1.3.3 Функции
	cout << "1.1.3.3 Функции" << endl;
	DemoGetPower(2.0, 5);
	DemoGetPower(3.0, 4);
	DemoGetPower(-2.0, 5);

	cout << endl;

	//1.1.3.4 Функции
	cout << "1.1.3.4 Функции" << endl;
	int a = 14;

	cout << "Число до округления: " << a << endl;
	RoundToTens(a);
	cout << "Число после округления: " << a << endl;

	a = 146;
	cout << "Число до округления: " << a << endl;
	RoundToTens(a);
	cout << "Число после округления: " << a << endl;

	a = 55;
	cout << "Число до округления: " << a << endl;
	RoundToTens(a);
	cout << "Число после округления: " << a << endl << endl;

	//1.1.5.1 Динамическая память
	cout << "1.1.5.1 Динамическая память" << endl;
	const int size4 = 7;
	double* dynamicArr = new double[size4];

	for (int i = 0; i < size4; i++)
	{
		dynamicArr[i] = rand() % 100;
	}

	cout << "Выделенный в памяти массив вещественных чисел: ";
	for (int i = 0; i < size4; i++)
	{
		cout << dynamicArr[i] << " ";
	}
	cout << endl << endl;
	
	delete[] dynamicArr;

	//1.1.5.2 Динамическая память
	cout << "1.1.5.2 Динамическая память" << endl;
	const int size5 = 7;
	bool* dynamicArr2 = new bool[size5] { true, false, true, false, true, false, true };

	cout << "Выделенный в памяти массив булеевых чисел: ";
	for (int i = 0; i < size5; i++)
	{
		if (dynamicArr2[i] == true) {
			cout << "true ";
		}
		else {
			cout << "false ";
		}
	}
	cout << endl << endl; 

	delete[] dynamicArr2;

	//1.1.5.3 Динамическая память
	cout << "1.1.5.3 Динамическая память" << endl;
	int n;

	cout << "Введите размерность символьного массива: ";
	cin >> n;

	char* dynamicArr3 = new char[n];

	cout << "Заполните массив" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i << ": ";
		cin >> dynamicArr3[i];
	}

	cout << "Выделенный в памяти массив символов: ";
	for (int i = 0; i < n; i++)
	{
		cout << dynamicArr3[i] << " ";
	}
	cout << endl << endl;

	delete[] dynamicArr3;

	//1.1.5.4 Динамическая память
	cout << "1.1.5.4 Динамическая память" << endl;
	int size6 = 10;
	double* dynamicArr4 = new double[size6];

	for (int i = 0; i < size6; i++)
	{
		dynamicArr4[i] = (rand() % 100) + 0.2;
	}

	cout << "Выделенный в памяти массив вещественных чисел: ";
	for (int i = 0; i < size6; i++)
	{
		cout << dynamicArr4[i] << " ";
	}
	cout << endl;

	sortArray(dynamicArr4, size6);

	cout << "Отсротированный массив вещественных чисел: ";
	for (int i = 0; i < size6; i++)
	{
		cout << dynamicArr4[i] << " ";
	}
	cout << endl << endl;

	delete[] dynamicArr4;

	//1.1.5.5 Динамическая память
	cout << "1.1.5.5 Динамическая память" << endl;
	int size7 = 10;
	int* dynamicArr5 = new int[size7];

	for (int i = 0; i < size7; i++)
	{
		dynamicArr5[i] = rand() % 100;
	}

	cout << "Выделенный в памяти массив целых чисел: ";
	for (int i = 0; i < size7; i++)
	{
		cout << dynamicArr5[i] << " ";
	}
	cout << endl;
	searchByIndex(dynamicArr5, size7, 99);
	cout << endl;

	delete[] dynamicArr5;

	//1.1.5.6 Динамическая память
	cout << "1.1.5.6 Динамическая память" << endl;
	int size8 = 15;
	char* dynamicArr6 = new char[size8] { 'a', 'b', 'c', 'd', '4', 'd', '$', '%', '>', 's', 'b', 'c', 'd', '4', ')' };
	int count2 = searchLetter(dynamicArr6, size8);

	cout << "Выделенный в памяти массив символов: ";
	for (int i = 0; i < size8; i++)
	{
		cout << dynamicArr6[i] << " ";
	}
	cout << endl;

	cout << "Количество букв ( 'a' - 'z' ) в массиве = " << count2 << endl << endl;

	delete[] dynamicArr6;

	//1.1.5.7 Динамическая память
	cout << "1.1.5.7 Динамическая память" << endl;
	int *dynamicArr7 = MakeRandomArray(5);
	int* dynamicArr8 = MakeRandomArray(8);
	int* dynamicArr9 = MakeRandomArray(13);

	cout << "Динамический массив с размерностью 5" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << dynamicArr7[i] << " ";
	}
	cout << endl;

	cout << "Динамический массив с размерностью 8" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << dynamicArr8[i] << " ";
	}
	cout << endl;

	cout << "Динамический массив с размерностью 13" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << dynamicArr9[i] << " ";
	}
	cout << endl;

	delete[] dynamicArr7;
	delete[] dynamicArr8;
	delete[] dynamicArr9;
}
