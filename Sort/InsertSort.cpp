#include<iostream>
#include "sort.h"

using namespace std;

void InsertSort(SqList *L)
{
	int j;
	for(int i = 2; i < L->length; ++i)
	{
		if(L->r[i] < L->r[i-1])		//需将L->r[i]插入有序字表
		{
			L->r[0] = L->r[i];		//设置哨兵
			for(j = i-1; L->r[j] > L->r[0]; --j)
				L->r[j+1] = L->r[j];		//记录后移
			L->r[j+1] = L->r[0];		//插入到正确位置
		}
	}
}

int main(int argc, char *argv[])
{
	SqList L = {{0,5,3,4,6,2}, 6};

	InsertSort(&L);

	for(int i = 1; i < L.length; ++i)
			cout << L.r[i] << " ";
	cout << endl;

	return 0;
}
