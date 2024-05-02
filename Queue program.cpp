#include<iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool isFull()
{
	if(top >= max)
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
	if(top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void view()
{
	if(!isEmpty())
	{
		cout << "Data Antrian : " <<endl;
		for(int a = top-1; a>=0; a--)
		{
			cout << a+1 <<". " << data[a] << endl;
		}
	}
	else
	{
		cout <<"Antrian kosong" << endl;
	}
	
	if(isFull())
	{
		cout <<"Antrian penuh" << endl;
	}
	cout << endl;
}

void enqueue()
{
	if(!isFull())
	{
		cout<<"Masukan data : ";  
		cin>> data[top];
		top++;
	}
}

int main()
{
	int pil;
	string isi;
	
	queue:
		system("cls");
		view();
		cout<<"Menu Utama\n1. Enqueue\n2. Dequeue\nPilihan :";
		cin >> pil;
	
	if(pil == 1)
	{
		system ("cls");
		//cout << "Enqueue" << endl;
		enqueue(); 
		goto queue;
	}
	else if (pil == 2)
	{
		cout << "Dequeue" << endl;
		
	}
}