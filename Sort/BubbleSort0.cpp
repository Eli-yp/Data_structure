#include <iostream>
#include "sort.h"

using namespace std;

//冒泡排序初级版
void BubbleSort0(SqList *L)
{
	for (int i = 0; i < L->length; ++i)
	{
		for (int j = i+1; j < L->length; ++j)
		{
			if (L->r[i] > L->r[j])
			{
				swap(L, i, j);	//交换
			}
		}
	}
}

int  main(int argc, char *argv[])
{
	SqList L = {{9,1,5,8,3,7,4,6,2}, 9};
	//打印一开始的线性表的顺序
	for(int i = 0; i < L.length; ++i)
		cout << L.r[i] << " ";
	cout << endl;

	BubbleSort0(&L);	//排序

	//打印排序后的线性表的元素的顺序
	for(int i = 0; i < L.length; i++)
		cout << L.r[i] << " ";
	cout << endl;

	return 0;
}
