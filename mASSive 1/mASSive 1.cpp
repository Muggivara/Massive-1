

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	// 1 Ввести массив из 5 чисел, а затем вывести его в обратном порядке. . 

	const int size = 5;
	int arr[size];
	for (int i = 0;i < size;i++)
	{
		cin >> arr[i];
	}
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << "\n";
	}


	// 2  Создать массив из 20 случайных чисел. Вывести все элементы массива с чётными индексами.


	srand(time(0));
	const int size = 20;
	int i;
	int arr[20];
	for ( i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
	for ( i = 0; i < size; i++)
	{
		if(arr[i] % 2 == 0)
		{
			cout << arr[i] << "\n";
		}

	}


	// 3 Создать массив из 10 случайных чисел в диапазоне от -20 до 20. Определить количество, сумму  и среднее арифметическое положительных элементов массива.


	srand(time(0));
	const int size = 10;
	int i;
	int arr[10];
	int sum = 0;
	int quantity = 0;
	int average;
	for ( i = 0; i < size; i++)
	{
		arr[i] = rand() % 40 - 20;
	}
	for (i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			cout << arr[i] << "\n";
			sum += arr[i];
			quantity++;
			average = (sum / quantity);
		}

	}
	cout <<  quantity<<" Êîëè÷åñòâî ïîëîæèòåëüíûõ ÷èñåë â ìàññèâå"<<"\n" << sum << " Ñóììà ïîëîæèòåëüíûõ ÷èñåë ìàññèâà"<<"\n"<< average << " Ñðåäíåå àðèôìåòè÷åñêîå";




	// 4 Создать символьный массив из 100 случайных элементов. Определить, сколько в нём цифр, букв и знаков пунктуации.


	const int SIZE = 100;
	char ar[SIZE];
	srand(time(0));
	int digits = 0;
	int characters = 0;
	int puntuations = 0;
	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 256;
		if (ar[i] >= '0' && ar[i] <= '9') digits++;
		else if (ar[i] >= 'a' && ar[i] <= 'z') characters++;
		else if (ar[i] >= 'A' && ar[i] <= 'Z') characters++;
		else puntuations++;

	}
	cout << digits << "\n" << characters << "\n" << puntuations << "\n";





	// 5 Написать программу, которая предлагает пользователю ввести число, и затем подсчитывает, 
	//сколько раз это число встречается в массиве на 100 случайных элементов. 

	srand(time(0));
	int size = 100;
	int i;
	int arr[100];
	int a;
	int b = 0;
	cout << "Ââåäèòå ÷èñëî\n";
	cin >> a;
	for ( i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (arr[i] == a)
		{
			b++;
			cout << arr[i] << "\n";

		}

	}
	cout << b << "\n";




	//  6  Создать массив из 20 случайных чисел в диапазоне от -10 до 30. 
	//  Написать программу, определяющую сумму элементов массива,
	//  находящихся в массиве после первого отрицательного элемента.



	 const int SIZE = 20;
	 int arr[SIZE];
	 srand(time(0));
	 bool start_counter = false;
	 int sum = 0;
	 for (int i = 0; i < SIZE; i++)
	 {
		 arr[i] = rand() % 60 - 10;
		 cout << arr[i] << ",";
		 if (arr[i] < 0)
		 {
			 start_counter = true;
		 }
		 if (start_counter == true)
		 {
			 sum += arr[i];

		 }
	 }
	 cout << "\n\n"<<sum<<"\n\n";



        //  7  Создать массив из 20 случайных чисел в диапазоне от -30 до 10. 
	//  Написать программу, определяющую сумму элементов массива,
	//  находящихся в массиве до первого положительного элемента.



	const int SIZE = 20;
	int arr[SIZE];
	srand(time(0));
	
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20 - 30;
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] <= 0)
			sum = sum + arr[i];
		
    }
	cout << sum;




	// 8   Создать массив из 20 случайных чисел. Определить минимальный и максимальный элемент массива (вывести значение и порядковый номер).

	int min, max, number;
	const int SIZE = 20;
	int arr[SIZE];
	srand(time(0));
	for (int i = 0; i < SIZE; i++)
	arr[i] = rand();
	min = arr[0];
	number = 0;
		for (int i = 0;i < SIZE; i++)
		{
			if (arr[i] < min) 
			{
				min = arr[i];
				number = i;
			}
	    }
		cout << min << "\n" << number<<"\n";

		max = arr[0];
		number = 0;
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
					number = i;
			}
		}
		cout << max << "\n" << number;









}


 
























