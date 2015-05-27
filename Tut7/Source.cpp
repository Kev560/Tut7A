#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

template <class T>
void swaping(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;

	cout << a << "      " << b << "\n" << endl;

}

template <class T>
void bub(T arr[], T len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}

		}


	}

}

template <class T>
void quick(T arr[], T left, T right)
{
	int i = left;
	int j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	while (i <= j)
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;

		if (i <= j)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;

		}

	}

	if (left < j)
		quick(arr, left, j);
	if (i < right)
		quick(arr, i, right);

}



	

int main()
{
	int a, b;
	cout << "Enter a:" << endl;
	cin >> a;
	cout << "Enter b:" << endl;
	cin >> b;
	cout << "\n";
	swaping(a, b);

	const int l = 5;
	int arr[l] = { 3, 4, 9, 2, 7 };
	
	bub(arr, l);

	for (int i = 0; i < l; i++)
	{
		cout << arr[i] << "\n";

	}

	cout << "\n" << endl;

	//quick(arr, 0, l - 1);
	for (int k = 0; k < l; k++)
	{
		cout << arr[k] << "\n";

	}

	system("pause");
	return 0;
}
