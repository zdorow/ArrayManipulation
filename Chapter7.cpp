// Chapter7.cpp : Arrays
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

void main()
{
	const int arrsize = 12;
	int temp1[arrsize];
	int count = 0;
	const int arraySize = 100;
	int numbers[arraySize];
	char chFileName[80];

	cout << "Enter file name:  ";
	cin.getline(chFileName, 80);

	ifstream inputFile;
	inputFile.open(chFileName);

	while (count < arraySize && inputFile >> temp1[count])
		count++;

	inputFile.close();

	cout << "The numbers are: ";

	for (int index = 0; index < count; index++)
		cout << temp1[index] << " ";

	cout << endl;

	system("pause");

	char menuchoice;
	do {
		cout << "Please choose A, B, C or D to manipluate the numbers from the file or E to quit.\n";
		cin >> menuchoice;
		switch (menuchoice)
		{

		case 'A':
		case 'a':
			int lowest;
			lowest = temp1[0];
			for (count = 1; count < arrsize; count++)
			{
				if (temp1[count] < lowest)
					lowest = temp1[count];
			}
			cout << "The lowest number in the array = " << lowest << "\n";
			system("pause");
			system("CLS");
			break;

		case 'B':
		case 'b':
			int highest;
			highest = temp1[0];
			for (count = 1; count < arrsize; count++)
			{
				if (temp1[count] > highest)
					highest = temp1[count];
			}
			cout << "The highest number in the array = " << highest << "\n";
			system("pause");
			system("CLS");
			break;
		case 'C':
		case 'c':
		{
			int tnum;
			double sum = 0;
			for (tnum = 0; tnum < arrsize; tnum++)
			{
				sum += temp1[tnum];
			}
			cout << "The total of the numbers in the array = " << sum << "\n";
			system("pause");
			system("CLS");
		}
		break;

		case 'D':
		case 'd':

		{
			int tnum;
			double sum = 0;
			double average;
			for (tnum = 0; tnum < arrsize; tnum++)
			{
				sum += temp1[tnum];
				average = sum / arrsize;
			}
			cout << "The average of the numbers in the array = " << average << "\n";
			system("pause");
			system("CLS");
		}
			break;

		case 'E':
		case 'e':
			exit(0);
			break;

		default:
			system("CLS");
			cout << "Invalid choice\n";
			cout << "Please enter \'A\', \'B\', \'C\', \'D\' or \'E\'...\n";
		}
		} while (menuchoice != 'e' && menuchoice != 'E');
	
}
