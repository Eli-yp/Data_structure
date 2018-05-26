//删除L的第i个数据元素，并用e返回其值，L的长度减1

#include<iostream>

using namespace std;

#define MAXSIZE 10
#define ERROR -1
#define OK 0

struct SqList
{
	int data[MAXSIZE];	//顺序线性表最大存储容量
	int length;			//线性表的当前长度
};

int ListDelete(SqList *L, int i, int *e)
{
	int k;
	if (L->length == 0)		//线性表为空
		return ERROR;
	if (i<1 || i>L->length)	//删除位置不正确
		return ERROR;
	*e = L->data[i-1];		//把要删除的元素拿出来
	if (i < L->length)
	{
		for(k=i; k < L->length; ++k)
			L->data[k-1] = L->data[k];	//将要删除位置后的元素前移
	}
	L->length--;		//线性表的长度减少

	return OK;
}

int main(int argc, char **argv)
{
	SqList L = {{1,2,3,4,5,6,7,8,9,10}, 8};
	for(int i = 0; i < L.length; ++i)
		cout << L.data[i] << " ";
	cout << endl;
	cout << L.length << endl;

	int *e = new int;	//定义指针，分配内存
	ListDelete(&L, 3, e);	//注意这里的L要加&号
	for(int i = 0; i < L.length; ++i)
		cout << L.data[i] << " ";
	cout << endl;
	cout << L.length << endl;
	cout << *e << endl;		//删除的元素的值
	delete e;	//释放内存

	return 0;
}


/*
//以下用的是引用的方法
int ListDelete(SqList &L, int i, int &e)
{
	int k;
	if (L.length == 0)		//线性表为空
		return ERROR;
	if (i<1 || i>L.length)	//删除位置不正确
		return ERROR;
	e = L.data[i-1];		//把要删除的元素拿出来
	if (i < L.length)
	{
		for(k=i; k < L.length; ++k)
			L.data[k-1] = L.data[k];	//将要删除位置后的元素前移
	}
	L.length--;		//线性表的长度减少

	return OK;
}

int main(int argc, char **argv)
{
	SqList L = {{1,2,3,4,5,6,7,8,9,10}, 8};
	for(int i = 0; i < L.length; ++i)
		cout << L.data[i] << " ";
	cout << endl;
	cout << L.length << endl;

	int e;
	ListDelete(L, 3, e);	
	for(int i = 0; i < L.length; ++i)
		cout << L.data[i] << " ";
	cout << endl;
	cout << L.length << endl;
	cout << e << endl;		//删除的元素的值

	return 0;
}
*/
