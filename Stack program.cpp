#include <iostream>
using namespace std;

struct stack
{
	int top;
	float arr[7];
};
struct stack newstack;

int maxstack = 8;
bool isFull()
{
	if(newstack.top == maxstack)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEmpty()
{
	if(newstack.top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

float data;
void push(float data)
{
	if(isFull() == true)
	{
		cout<<"Stack is full";
	}
	else
	{
		newstack.top++;
		newstack.arr[newstack.top]=data;
	}
}

void pop()
{
	if(isEmpty() == true)
	{
		cout<<"Data kosong!!";
	}
	else
	{
		cout<<"Data yang diambil : " <<newstack.arr[newstack.top]<<endl;
		newstack.top--;
	}
}

void cetak()
{
	cout<<"\nData yang tersimpan didalam stack adalah: \n";
	for(int i=0; i<newstack.top; i++)
	{
		cout<<newstack.arr[i]<<"  ";
	}
}

void clear()
{
	newstack.top = -1;
	cout<<"\nStack sudah kosong";
}

int main()
{
	newstack.top = -1;
	char menu;
	char loop;
	do
	{
		cout<<"\nMenu : ";
		cout<<"\n1. Push stack";
		cout<<"\n2. Pop stack";
		cout<<"\n3. Cetak Data";
		cout<<"\n4. Clear stack";
		cout<<"\n5. exit";
		
		cout<<"\nMenu pilihan Anda : ";
		cin>>menu;
		if(menu == '1') 
		{
			cout<<"\nInput Data";
			cout<<"\n-----------";
			cout<<"\nInput data yang akan disimpan : ";
			cin>>data;
			push(data);
			loop = 'y';
		}
		else if(menu == '2')
		{
			pop();
			loop = 'y';
		}
		else if(menu == '3')
		{
			cetak();
			cout<<"\n\nApakah anda ingin mengulang kembali? (y/t)";
			cin>>loop;
		}
		else if(menu == '4')
		{
			clear();
			cout<<"\n\nApakah anda ingin mengulang kembali? (y/t)";
			cin>>loop;
		}
		else if(menu == '5')
		{
			exit(0);
		}
	}
	while(loop == 'y' || loop == 'Y');
}











	