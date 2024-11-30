#include <iostream>

using namespace std;

//int main()
//{
//	int a = 3;
//	int b = 5;
//	cout << &a << ' ' << &b << endl;
//
//	int* ptr = nullptr;
//
//	ptr = &a;
//}

//void show(int* ptr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//
//	}
//}
//
//int summa(int* ptr, int size)
//{
//	int s = 0;
//	for (int i = 0; i < size; i++)
//	{
//		s += *(ptr + i);
//
//	}
//	return s;
//}


//int main()
//{
//	
//	int ar[] = {1, 2, 3, 4};
//	int size = sizeof(ar) / sizeof(ar[0]);
//
//	int* ptr = ar;
//
//	show(ptr, size);
//
//	int sum = summa(ptr, size);
//	cout << endl << sum << endl;
//
//
//	/*cout << size << endl;
//	cout << ar << endl;
//	cout << &ar << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << &ar[i] << ' ';
//	}*/
//	
//}


char func(int* ptr)
{
	if (*ptr < 0)
		return '-';
	else if (*ptr > 0 && *ptr == 0)
		return '+';
}


int main()
{
	int a;
	cin >> a;

	char as = func(&a);
	cout << as << endl;
}