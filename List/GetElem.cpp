//获得元素

#include<iostream>

using namespace std;

#define MAXSIZE 10
struct SqList
{
	int data[MAXSIZE];	//顺序线性表的最大存储容量
	int length;			//线性表的当前长度
};


int GetElem(SqList L, int i, int *e)
{
	if(L.length == 0 || i < 1 || i > L.length)
		return -1;
	*e = L.data[i-1];	//用e返回L中第i个数据元素的值
	return 0;
}

int main(int argc, char **argv)
{
	SqList L = {{1,2,3,4,5,6,7,8,9,10}, 8};		//定义线性表
	int *e = new int;	//定义一个指针，分配内存
	GetElem(L, 5, e);	//获取L中第5个数据元素的值
	cout << *e << endl;
	delete e;	//释放内存

	return 0;
}

/*
//或者用引用也行
int GetElem(SqList L, int i, int &e)
{
	if(L.length == 0 || i < 1 || i > L.length)
		return -1;
	e = L.data[i-1];	//用e返回L中第i个数据元素的值
	return 0;
}

int main(int argc, char **argv)
{
	SqList L = {{1,2,3,4,5,6,7,8,9,10}, 8};		//定义线性表
	int e;
	GetElem(L, 5, e);	//获取L中第5个数据元素的值
	cout << e << endl;

	return 0;
}
*/
