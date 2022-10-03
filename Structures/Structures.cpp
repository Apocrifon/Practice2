#include <iostream>

using namespace std;

struct Student
{
	char FIO[35];
	int Points[5];
	float MidPoints = 0;
};

void InputFIO(struct Student group[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "FIO: ";
		cin >> group[i].FIO;
		cout << "Math: ";
		cin >> group[i].Points[0];
		cout << "Russian language: ";
		cin >> group[i].Points[1];
		cout << "Comp. Science: ";
		cin >> group[i].Points[2];
		cout << "Programming: ";
		cin >> group[i].Points[3];
		cout << "Linux course: ";
		cin >> group[i].Points[4];
	}

}

void PrintFIO(struct Student group[], int index)
{
	cout << index << " Student ";
	cout << "FIO: " << group[index].FIO << endl;
	cout << "Math = " << group[index].Points[0] << endl;
	cout << "Russian language = " << group[index].Points[1] << endl;
	cout << "Comp. Science = " << group[index].Points[2] << endl;
	cout << "Programming = " << group[index].Points[3] << endl;
	cout << "Linux course = " << group[index].Points[4] << endl;
	cout << "Avarege point = " << group[index].MidPoints << endl;
}

void AveragePoint(Student group)
{
	float result;
	result = 0;
	for (int j = 0; j < 5; j++)
	{
		result += group.Points[j];
	}
	group.MidPoints = result / 5.0;
}

void FIOSearch(Student group[], int size)
{
	string FIO;
	cout << "Enter FIO: ";
	cin >> FIO;
	for (int i = 0; i < size; i++)
	{
		if (group[i].FIO == FIO)
		{
			PrintFIO(group, i);
			return;
		}
	}
}

void MaxPointSearch(Student group[], int size)
{
	int subjName;
	cin >> subjName;
	int maxPoint = group[0].Points[subjName];
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (group[i].Points[subjName] > maxPoint)
		{
			index = i;
			maxPoint = group[i].Points[subjName];
			return;
		}
		PrintFIO(group, i);
	}
}

void SortByAveragePoint(Student group[], int size) {
	Student tmp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (group[i].MidPoints < group[j].MidPoints)
			{
				tmp = group[i];
				group[i] = group[j];
				group[j] = tmp;
			}
		}
	}
}

void SortByFIO(Student group[], int size) {
	Student temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (group[i].FIO < group[j].FIO)
				temp = group[i]; group[i] = group[j]; group[j] = temp;
		}
	}
}


int main()
{
	Student* group = new Student[3];
	InputFIO(group, 3);
	//AveragePoint(group[0]);
	//FIOSearch(group, 5);
	SortByAveragePoint(group, 3);
	cout << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		PrintFIO(group, i);
	}
}



