//顺序线性表的插入
#include<iostream>

using namespace std;

#define MAXSIZE 10

struct SpList
{
	int data[MAXSIZE];	//线性表的最大存储容量
	int length;			//线性表的当前长度
};

//线性表的插入函数，将e插入到L的第i个位置
int ListInsert(SpList *L, int i, int e)
{
	int k;
	if(L->length == MAXSIZE)	//线性表已经满了
		return -1;
	if(i<1 || i>L->length+1)	//当i不在范围时
		return -1;
	if(i <= L->length)			//若插入位置不在表尾
	{
		for(k=L->length-1; k>=i-1; k--)	//将要插入位置后的数据向后移动一位
			L->data[k+1] = L->data[k];
	}
	L->data[i-1] = e;	//将新元素插入
	L->length++;
	return 0;
}


int main(int argc, char **argv)
{
	SpList L = {{1,2,3,4,5,6}, 8};	//定义一个新的表
	for(int i=0; i < L.length; ++i)		//打印表中的元素
		cout << L.data[i] << " ";
	cout << endl;

	ListInsert(&L, 3, 8);	//在给定位置插入元素
	for(int i=0; i < L.length; ++i)
		cout << L.data[i] << " ";
	cout << endl;

	return 0;
}
