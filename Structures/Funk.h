#pragma once

#include <iostream>
#include <fstream>
#include <string>
using namespace std;



//void PrintFIO(struct Student group[], int index)
//{
//	cout << index << " Student ";
//	cout << "FIO: " << group[index].FIO << endl;
//	cout << "Math = " << group[index].Points[0] << endl;
//	cout << "Russian language = " << group[index].Points[1] << endl;
//	cout << "Comp. Science = " << group[index].Points[2] << endl;
//	cout << "Programming = " << group[index].Points[3] << endl;
//	cout << "Linux course = " << group[index].Points[4] << endl;
//	cout << "Avarege point = " << group[index].MidPoints << endl;
//	cout << endl;
//}
//
//void AveragePoint(struct Student group[], int index)
//{
//	float result = 0;
//	for (int j = 0; j < 5; j++)
//	{
//		result += group[index].Points[j];
//	}
//	group[index].MidPoints = result / 5.f;
//}
//
//void InputFIO(struct Student group[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "FIO: ";
//		cin >> group[i].FIO;
//		cout << "Math: ";
//		cin >> group[i].Points[0];
//		cout << "Russian language: ";
//		cin >> group[i].Points[1];
//		cout << "Comp. Science: ";
//		cin >> group[i].Points[2];
//		cout << "Programming: ";
//		cin >> group[i].Points[3];
//		cout << "Linux course: ";
//		cin >> group[i].Points[4];
//	}
//	AveragePoint(group, 0);
//}
//
//void FIOSearch(Student group[], int size)
//{
//	string FIO;
//	cout << "Enter FIO: ";
//	cin >> FIO;
//	for (int i = 0; i < size; i++)
//	{
//		if (group[i].FIO == FIO)
//		{
//			PrintFIO(group, i);
//			return;
//		}
//	}
//}
//
//void MaxPointSearch(struct Student group[], int size)
//{
//	int subjName;
//	cout << "Enter subject index:" << endl;
//	cout << "0 = Math \n 1 = Russian Language\n 2 = Comp. Science\n 3 = Programming\n 4 = Linux course\n ";
//	cin >> subjName;
//	int maxPoint = group[0].Points[subjName];
//	int index = 0;
//	for (int i = 1; i < size; i++)
//	{
//		if (group[i].Points[subjName] > maxPoint)
//		{
//			index = i;
//			maxPoint = group[i].Points[subjName];
//		}
//	}
//	PrintFIO(group, index);
//}
//
//void SortByAveragePoint(struct Student group[], int size)
//{
//	Student tmp;
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - 1; j++)
//		{
//			if (group[j].MidPoints > group[j + 1].MidPoints)
//			{
//				tmp = group[i];
//				group[i] = group[j];
//				group[j] = tmp;
//			}
//		}
//	}
//}
//
//void SortByFIO(struct Student group[], int size)
//{
//	Student temp;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			string stud1 = group[j].FIO;
//			string stud2 = group[j + 1].FIO;
//			if (stud1.compare(stud2) == 1)
//			{
//				temp = group[i];
//				group[i] = group[j];
//				group[j] = temp;
//			}
//		}
//	}
//}
//
//void FileWrite(struct Student group[], int size)
//{
//	ofstream fileStrmOut("D:\\Repositories\\Structures\\1.txt", ios::binary);
//	fileStrmOut.write((char*)&group, sizeof(group));
//	fileStrmOut.close();
//}
//
//void FileRead(struct Student group[], int size)
//{
//	ifstream in("D:\\Repositories\\Structures\\1.txt", ios::binary);
//	in.read((char*)&group, sizeof(group));
//	in.close();
//}