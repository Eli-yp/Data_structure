#include<iostream>
#include "sort.h"

using namespace std;

void HeapAdjust(SqList *L, int s, int m)
{
	int temp, j;
 	temp = L->r[s];		//先将最下面的那个非叶节点的值保存
	for(j=2*s; j<=m; j*=2)
	{
		if(j<m && L->r[j]<L->r[j+1])	//比较两个子节点的值，将大的那个子节点的下标付给j
			++j;
		if(temp >= L->r[j])		//若父节点大于两者之中大的那个子节点的值
			break;	//退出循环，什么也不做
		L->r[s] = L->r[j];		//将父节点与大的那个子节点交换值
		s = j;	//且让他们两个的下标一样，这样是为了继续循环
	}
	L->r[s] = temp;				//将一开始的那个非叶节点的值赋给处理完以后的那个子节点
}

void HeapSort (SqList *L)
{
	int i;
	//将L中的r构建成一个大顶堆
	for(i=L->length/2; i>0; i--)
		HeapAdjust(L, i, L->length);

	
	for(i=L->length; i>1; i--)
	{
		swap(L, 1, i);			//将堆顶记录和当前未经排序子序列的最后一个记录交换
		HeapAdjust(L, 1, i-1);	//重新调整为大顶堆
	}
}

int main(int argc, char *argv[])
{
	SqList L = { {0,50,10,90,30,70,40,80,60,20}, 9};
	HeapSort(&L);	//堆排序
	for(int i = 1; i<= L.length; ++i)
		cout << L.r[i] << " ";
	cout << endl;

	return 0;
}
