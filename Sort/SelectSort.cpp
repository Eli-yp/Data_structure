#include<iostream>
#include "sort.h"

using namespace std;

void SelectSort (SqList *L)
{
	int min;
	for(int i = 0; i < L->length; ++i)
	{
		min = i;
		for(int j = i+1; j < L->length; ++j)
		{
			if (L->r[min] > L->r[j])
				min = j;
		}
		if(i != min)
			swap(L, i, min);
	}
}

int main(int argc, char **argv)
{
	SqList L = {{9,1,5,8,3,7,4,6,2}, 9};

	SelectSort(&L);

	for (int i = 0; i < L.length; ++i)
		cout << L.r[i] << " ";
	cout << endl;

	return 0;
}
