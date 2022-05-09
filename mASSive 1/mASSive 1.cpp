

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


	// 2 Ñîçäàòü ìàññèâ èç 20 ñëó÷àéíûõ ÷èñåë.Âûâåñòè âñå ýëåìåíòû ìàññèâà ñ ÷¸òíûìè èíäåêñàìè.


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


	// 3 Ñîçäàòü ìàññèâ èç 10 ñëó÷àéíûõ ÷èñåë â äèàïàçîíå îò -20 äî 20. Îïðåäåëèòü êîëè÷åñòâî, ñóììó  è ñðåäíåå àðèôìåòè÷åñêîå ïîëîæèòåëüíûõ ýëåìåíòîâ ìàññèâà.


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




	// 4 Ñîçäàòü ñèìâîëüíûé ìàññèâ èç 100 ñëó÷àéíûõ ýëåìåíòîâ. 
	//Îïðåäåëèòü, ñêîëüêî â í¸ì öèôð, áóêâ è çíàêîâ ïóíêòóàöèè.


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





	// 5 Íàïèñàòü ïðîãðàììó, êîòîðàÿ ïðåäëàãàåò ïîëüçîâàòåëþ ââåñòè ÷èñëî, è çàòåì ïîäñ÷èòûâàåò, 
	//ñêîëüêî ðàç ýòî ÷èñëî âñòðå÷àåòñÿ â ìàññèâå íà 100 ñëó÷àéíûõ ýëåìåíòîâ. 

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




	//  6  Ñîçäàòü ìàññèâ èç 20 ñëó÷àéíûõ ÷èñåë â äèàïàçîíå îò -10 äî 30. 
	//Íàïèñàòü ïðîãðàììó, îïðåäåëÿþùóþ ñóììó ýëåìåíòîâ ìàññèâà, 
	//íàõîäÿùèõñÿ â ìàññèâå ïîñëå ïåðâîãî îòðèöàòåëüíîãî ýëåìåíòà.



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



	 // 7  Ñîçäàòü ìàññèâ èç 20 ñëó÷àéíûõ ÷èñåë â äèàïàçîíå îò - 30 äî 10. 
	// Íàïèñàòü ïðîãðàììó, îïðåäåëÿþùóþ ñóììó ýëåìåíòîâ ìàññèâà, 
	// íàõîäÿùèõñÿ â ìàññèâå äî ïåðâîãî ïîëîæèòåëüíîãî ýëåìåíòà.



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




	// 8  Ñîçäàòü ìàññèâ èç 20 ñëó÷àéíûõ ÷èñåë.
	//Îïðåäåëèòü ìèíèìàëüíûé è ìàêñèìàëüíûé ýëåìåíò ìàññèâà
	//(âûâåñòè çíà÷åíèå è ïîðÿäêîâûé íîìåð).

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


 
























