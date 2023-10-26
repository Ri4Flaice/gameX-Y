#include <iostream>
#include <string>

using namespace std;

bool checkVictory(string arr[], const short SIZE, string numberXY);
bool checkDraw(string arr[], const short SIZE);
void printArray(string arr[]);
bool checkOn�orrectnessData(string symbol);
void cellSelectionX(string arr[], const short SIZE);
void cellSelectionY(string arr[], const short SIZE);

// ������ ���������� ��� ������ � �� ������������ �� ����
const short CELL11 = 11, CELL12 = 12, CELL13 = 13;
const short CELL21 = 21, CELL22 = 22, CELL23 = 23;
const short CELL31 = 31, CELL32 = 32, CELL33 = 33;

void main()
{
	setlocale(LC_ALL, "");

	const short SIZE = 9;
	string arr[SIZE]{ " ", " ", " ", " ", " ", " ", " ", " ", " " };
	string playAgain; // ������ �������� ��� ������� ��������� ����

	while (true) {
		for (int i = 0; i < SIZE - 5; i++)
		{
			cellSelectionX(arr, SIZE);

			printArray(arr);

			if (checkVictory(arr, SIZE, "x") == true) {
				cout << "������ x" << endl;
				break;
			}

			cellSelectionY(arr, SIZE);

			printArray(arr);

			if (checkVictory(arr, SIZE, "0") == true) {
				cout << "������ 0" << endl;
				break;
			}

			if (i == 3) {
				if (checkDraw(arr, SIZE) == true) {
					cout << "�����" << endl;
					break;
				}
				else {
					continue;
				}
			}
		}
		cout << "������ ������� ��� ���? (y,n): ";
		cin >> playAgain;

		if (playAgain == "n") {
			break;
		}
		else {
			for (int i = 0; i < SIZE; i++)
			{
				arr[i] = " "; // ���� ���� ���������� ������, �� ������ ������
			}
		}
	}
}

// �������� �� ������ X,Y
bool checkVictory(string arr[], const short SIZE, string numberXY)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[0] == numberXY) {
			if (arr[1] == numberXY) {
				if (arr[2] == numberXY) {
					return true;
				}
			}
		}
		if (arr[0] == numberXY) {
			if (arr[3] == numberXY) {
				if (arr[6] == numberXY) {
					return true;
				}
			}
		}
		if (arr[0] == numberXY) {
			if (arr[4] == numberXY) {
				if (arr[8] == numberXY) {
					return true;
				}
			}
		}
		if (arr[1] == numberXY) {
			if (arr[4] == numberXY) {
				if (arr[7] == numberXY) {
					return true;
				}
			}
		}
		if (arr[2] == numberXY) {
			if (arr[5] == numberXY) {
				if (arr[8] == numberXY) {
					return true;
				}
			}
		}
		if (arr[2] == numberXY) {
			if (arr[4] == numberXY) {
				if (arr[6] == numberXY) {
					return true;
				}
			}
		}
		if (arr[3] == numberXY) {
			if (arr[4] == numberXY) {
				if (arr[5] == numberXY) {
					return true;
				}
			}
		}
		if (arr[6] == numberXY) {
			if (arr[7] == numberXY) {
				if (arr[8] == numberXY) {
					return true;
				}
			}
		}
	}
}

bool checkDraw(string arr[], const short SIZE)
{
	for (int i = 0; i < 1; i++)
	{
		if (arr[0] == arr[1] and arr[2] == " ") {
			if (arr[0] == arr[2] and arr[1] == " ") {
				if (arr[1] == arr[2] and arr[0] == " ") {
					return true;
				}
			}
		}

		if (arr[0] == arr[3] and arr[6] == " ") {
			if (arr[0] == arr[6] and arr[3] == " ") {
				if (arr[3] == arr[6] and arr[0] == " ") {
					return true;
				}
			}
		}
	}
}

void printArray(string arr[])
{
	for (int i = 0; i < 1; i++)
	{
		cout << arr[0] << "|" << arr[1] << "|" << arr[2] << "\n" <<
			arr[3] << "|" << arr[4] << "|" << arr[5] << "\n" <<
			arr[6] << "|" << arr[7] << "|" << arr[8] << "\n";
	}
}

// �������� �� ������������ ���� ������ ��� ���������
bool checkOn�orrectnessData(string symbol)
{
	if (symbol != "1") {
		if (symbol != "2") {
			if (symbol != "3") {
				cout << "������ ������� �� ���������" << endl;
				return false;
			}
		}
	}
}

// ������������ X � ������ ������
void cellSelectionX(string arr[], const short SIZE)
{
	string symbolVertical, symbolHorizontal, sumSymbol;
	short cellLocation;

	cout << "�������� ������ �� ����������� ��� x: ";
	cin >> symbolVertical;

	if (checkOn�orrectnessData(symbolVertical) == false) {
		return cellSelectionX(arr, SIZE);
	}

	cout << "�������� ������ �� ��������� ��� x: ";
	cin >> symbolHorizontal;

	if (checkOn�orrectnessData(symbolHorizontal) == false) {
		return cellSelectionX(arr, SIZE);
	}

	// ��������� ���������� ������, ������� ���� ������������
	sumSymbol = symbolVertical + symbolHorizontal;
	cellLocation = stoi(sumSymbol); // �������������� string � int

	// �������� ������ �� ���������� �� ���������� �����������
	for (int i = 0; i < 1; i++)
	{
		if (cellLocation == CELL11) {
			if (arr[0] == "x" or arr[0] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[0] = "x";
			}
		}
		else if (cellLocation == CELL12) {
			if (arr[1] == "x" or arr[1] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[1] = "x";
			}
		}
		else if (cellLocation == CELL13) {
			if (arr[2] == "x" or arr[2] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[2] = "x";
			}
		}
		else if (cellLocation == CELL21) {
			if (arr[3] == "x" or arr[3] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[3] = "x";
			}
		}
		else if (cellLocation == CELL22) {
			if (arr[4] == "x" or arr[4] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[4] = "x";
			}
		}
		else if (cellLocation == CELL23) {
			if (arr[5] == "x" or arr[5] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[5] = "x";
			}
		}
		else if (cellLocation == CELL31) {
			if (arr[6] == "x" or arr[6] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[6] = "x";
			}
		}
		else if (cellLocation == CELL32) {
			if (arr[7] == "x" or arr[7] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[7] = "x";
			}
		}
		else if (cellLocation == CELL33) {
			if (arr[8] == "x" or arr[8] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[8] = "x";
			}
		}
	}
}

// ������������ Y � ������ ������
void cellSelectionY(string arr[], const short SIZE)
{
	string symbolVertical, symbolHorizontal, sumSymbol;
	short cellLocation;

	cout << "�������� ������ �� ��������� ��� 0: ";
	cin >> symbolVertical;

	if (checkOn�orrectnessData(symbolVertical) == false) {
		return cellSelectionY(arr, SIZE);
	}

	cout << "�������� ������ �� ����������� ��� 0: ";
	cin >> symbolHorizontal;

	if (checkOn�orrectnessData(symbolHorizontal) == false) {
		return cellSelectionY(arr, SIZE);
	}

	// ��������� ���������� ������, ������� ���� ������������
	sumSymbol = symbolVertical + symbolHorizontal;
	cellLocation = stoi(sumSymbol); // �������������� string � int

	// �������� ������ �� ���������� �� ���������� �����������
	for (int i = 0; i < 1; i++)
	{
		if (cellLocation == CELL11) {
			if (arr[0] == "1" or arr[0] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[0] = "0";
			}
		}
		else if (cellLocation == CELL12) {
			if (arr[1] == "x" or arr[1] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[1] = "0";
			}
		}
		else if (cellLocation == CELL13) {
			if (arr[2] == "x" or arr[2] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[2] = "0";
			}
		}
		else if (cellLocation == CELL21) {
			if (arr[3] == "x" or arr[3] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[3] = "0";
			}
		}
		else if (cellLocation == CELL22) {
			if (arr[4] == "x" or arr[4] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[4] = "0";
			}
		}
		else if (cellLocation == CELL23) {
			if (arr[5] == "x" or arr[5] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[5] = "0";
			}
		}
		else if (cellLocation == CELL31) {
			if (arr[6] == "x" or arr[6] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[6] = "0";
			}
		}
		else if (cellLocation == CELL32) {
			if (arr[7] == "x" or arr[7] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[7] = "0";
			}
		}
		else if (cellLocation == CELL33) {
			if (arr[8] == "x" or arr[8] == "0") {
				cout << "������ ������ ������: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[8] = "0";
			}
		}
	}
}