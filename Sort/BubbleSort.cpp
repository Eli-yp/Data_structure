#include <iostream>
#include "sort.h"

using namespace std;

//冒泡排序
void BubbleSort (SqList *L)
{
	for(int i = 0; i < L->length; ++i)
	{
		for(int j = L->length-1; j > i; --j)
		{
			if (L->r[j] < L->r[j-1])
			{
				swap(L, j, j-1);
			}
		}
	}
}

int main()
{
	SqList L = {{9,1,5,8,3,7,4,6,2}, 9};
	
	BubbleSort(&L);

	for(int i = 0; i < L.length; ++i)
		cout << L.r[i] << " ";
	cout << endl;

	return 0;
}
