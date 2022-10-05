#include "Funk.h"

struct Student
{
	char FIO[35];
	int Points[5];
	float MidPoints = 0;
};

struct MARSH
{
	char BEGST[30];
	char TERM[30];
	int  NUMER;
};

void InputWays(MARSH traffic[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " march" << endl;
		cout << "first point: ";
		cin >> traffic[i].BEGST ;
		cout << "second point: ";
		cin >> traffic[i].TERM;
		cout << "number: ";
		cin >> traffic[i].NUMER;
	}
	cout << endl;
}

void PrintWay(MARSH traffic)
{
	cout << traffic.BEGST << endl;
	cout << traffic.TERM << endl;
	cout << traffic.NUMER << endl;
	cout << endl;
}

void SortByNumber(MARSH traffic[], int size)
{
	MARSH tmp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (traffic[j].NUMER > traffic[j + 1].NUMER)
			{
				tmp = traffic[i];
				traffic[i] = traffic[j];
				traffic[j] = tmp;
			}
		}
	}
} 

void SearchLastPoint(MARSH traffic[], int size)
{
	cout << "Enter last point..." << endl;
	string lastP;
	cin >> lastP;
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (lastP == traffic[i].TERM)
		{
			PrintWay(traffic[i]);
			flag = true;
		}
	}
	if (!flag)
	{
		cout << "No matches";
		cout << endl;
	}
}

void SearchFirstPoint(MARSH traffic[], int size)
{
	cout << "Enter first point..." << endl;
	string firstP;
	cin >> firstP;
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (firstP == traffic[i].BEGST)
		{
			PrintWay(traffic[i]);
			flag = true;
		}
	}
	if (!flag)
	{
		cout << "No matches";
		cout << endl;
	}
}

int main()
{
	MARSH* TRAFIC = new MARSH[4];
	InputWays(TRAFIC, 4);
	SortByNumber(TRAFIC, 4);
	SearchFirstPoint(TRAFIC, 4);
	SearchLastPoint(TRAFIC, 4);







	//InputFIO(group, 1);
	//AveragePoint(group, 0);
	////FIOSearch(group, 5);
	////SortByAveragePoint(group, 3);
	//SortByFIO(group, 1);
	//cout << endl << endl;
	//for (int i = 0; i < 1; i++)
	//{
	//	PrintFIO(group, i);
	//}
	//FileWrite(group, 1);
	//FileRead(group, 1);
	///*MaxPointSearch(group[0], 3);*/
	//for (int i = 0; i < 1; i++)
	//{
	//	PrintFIO(group,i);
	//}



}



