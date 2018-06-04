#include<iostream>
#include "sort.h"

using namespace std;

void BubbleSort2 (SqList *L)
{
	int flag = 1;
	for (int i = 0; i < L->length && flag; ++i)
	{
		int flag = 0;
		for(int j = L->length-1; j > i; --j)
		{
			if(L->r[j] < L->r[j-1])
			{
				swap (L, j, j-1);
				flag = 1;
			}
		}
	}
}

int main(int argc,char *argv[])
{
	SqList L = {{9,1,5,8,3,7,4,6,2}, 9};

	BubbleSort2(&L);

	for(int i = 0; i < L.length; ++i)
		cout << L.r[i] << " ";
	cout << endl;

	return 0;
}
