/*
#include <iostream>
#include <cstdlib>

int arraymulti(int* arr1, int* arr2)
{
	return (((*arr1) * (*arr2)) + ((*arr1 + 1) * (*arr2 + 1)) + ((*arr1 + 2) * (*arr2 + 2)));
}

void arr_analisys(int* arr2)
{
	int big = *arr2, smal = *arr2, sum = 0;

	for(int i = 0; i < 19; i++)
	{
		if (big < *(arr2 + i))
		{
			big = *(arr2 + i);
			sum = sum + *(arr2 + i);
		}
		else
		{
			sum = sum + *(arr2 + i);
		}

		if (smal > *(arr2 + i))
		{
			smal = *(arr2 + i);
		}
		else;
	}

	int i = 0;
	while (1)
	{
		if (big == *(arr2 + i))
			break;
		else
			i++;
	}
	std::cout << i + 1 << '\n';

	i = 0;
	while (1)
	{
		if (smal == *(arr2 + i))
			break;
		else
			i++;
	}
	std::cout << i + 1 << '\n' << sum / 20 << '\n';
	
}

int arr_conv(int* arr1, int* arr2)
{
	arraymulti(arr1, arr2);
}

int main()
{
	int array1[3];

	std::cout << "<입력>\n";
	std::cin >> array1[0] >> array1[1] >> array1[2];

	std::cout << "<출력>\n" << arraymulti(array1,array1) << '\n';

	int randarray[20];

	srand(0);

	for (int i = 0; i < 20; i++)
	{
		randarray[i] = rand() % 1001;
	}

	arr_analisys(randarray);

}
*/