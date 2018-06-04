#include<iostream>

using namespace std;

#define MAXSIZE 10

//定义线性表的结构
typedef struct
{
	int r[MAXSIZE+1];
	int length;
}SqList;

//交换数据元素
void swap(SqList *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}
