//希尔排序

#include<iostream>
#include "sort.h"

using namespace std;

void ShellSort(SqList *L)
{
	int i, j;
	int increment = L->length;	
	do
	{
		increment = increment / 3 + 1;	//增量序列	
		for(i = increment + 1; i <= L->length; ++i)
		{
			if(L->r[i] < L->r[i-increment])
			{
				//需将L->r[i]插入有序增量子表
				L->r[0] = L->r[i];		//暂缓在L->r[0];
				for(j = i - increment; j > 0 && L->r[0] < L->r[j]; j-=increment)
					L->r[j+increment] = L->r[j];	//记录后移，查找插入位置
				L->r[j+increment] = L->r[0];		//插入
			}
		}
	}
	while(increment > 1);
}

int main(int argc, char **argv)
{
	SqList L = {{0,9,1,5,8,3,7,4,6,2}, 9};
	ShellSort(&L);
	for(int i = 1; i <= L.length; ++i)
		cout << L.r[i] << " ";
	cout << endl;

	return 0;
}
