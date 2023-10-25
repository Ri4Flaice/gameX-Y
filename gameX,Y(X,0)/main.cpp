#include <iostream>
#include <string>

using namespace std;

bool checkVictory(string arr[], const int SIZE, string numberXY);
void printArray(string arr[]);
void cellSelectionX(string arr[], const int SIZE);
void cellSelectionY(string arr[], const int SIZE);

// Каждая переменная эта ячейка с ее координатами на поле
int cell11 = 11, cell12 = 12, cell13 = 13;
int cell21 = 21, cell22 = 22, cell23 = 23;
int cell31 = 31, cell32 = 32, cell33 = 33;

void main()
{
	setlocale(LC_ALL, "");

	const int SIZE = 9;
	string arr[SIZE]{ " ", " ", " ", " ", " ", " ", " ", " ", " " };
	string playAgain; // Хранит значение для условия повторной игры

	while (true) {
		for (int i = 0; i < SIZE - 5; i++)
		{
			cellSelectionX(arr, SIZE);

			printArray(arr);

			if (checkVictory(arr, SIZE, "1") == true) {
				cout << "Победа Х" << endl;
				break;
			}

			cellSelectionY(arr, SIZE);

			printArray(arr);

			if (checkVictory(arr, SIZE, "0") == true) {
				cout << "Победа Y" << endl;
				break;
			}
		}
		cout << "Хотите сыграть еще раз? (y,n): ";
		cin >> playAgain;

		if (playAgain == "n") {
			break;
		}
		else {
			for (int i = 0; i < SIZE; i++)
			{
				arr[i] = " "; // Если игра начинается заново, то чистим список
			}
		}
	}
}

// Проверка на победу X,Y
bool checkVictory(string arr[], const int SIZE, string numberXY)
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

void printArray(string arr[])
{
	for (int i = 0; i < 1; i++)
	{
		cout << arr[0] << "|" << arr[1] << "|" << arr[2] << "\n" <<
			arr[3] << "|" << arr[4] << "|" << arr[5] << "\n" <<
			arr[6] << "|" << arr[7] << "|" << arr[8] << endl;
	}
}

// Присваивание X к нужной ячейке
void cellSelectionX(string arr[], const int SIZE)
{
	string symbolVertical, symbolHorizontal, sumSymbol;
	int cellLocation;

	cout << "Выберите ячейку по горизонтали для Х: ";
	cin >> symbolVertical;

	if (symbolVertical != "1") {
		if (symbolVertical != "2") {
			if (symbolVertical != "3") {
				cout << "Данные введены не корректно" << endl;
				return cellSelectionX(arr, SIZE); // Если координата выходит за рамки поля
			}
		}
	}

	cout << "Выберите ячейку по вертикали для Х: ";
	cin >> symbolHorizontal;

	if (symbolHorizontal != "1") {
		if (symbolHorizontal != "2") {
			if (symbolHorizontal != "3") {
				cout << "Данные введены не корректно" << endl;
				return cellSelectionX(arr, SIZE); // Если координата выходит за рамки поля
			} 
		}
	}

	// Получение координаты ячейки, который ввел пользователь
	sumSymbol = symbolVertical + symbolHorizontal;
	cellLocation = stoi(sumSymbol); // Преобразование string в int

	// Проверка ячейки на занятность по полученным координатам
	for (int i = 0; i < 1; i++)
	{
		if (cellLocation == cell11) {
			if (arr[0] == "1" or arr[0] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[0] = "1";
			}
		}
		else if (cellLocation == cell12) {
			if (arr[1] == "1" or arr[1] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[1] = "1";
			}
		}
		else if (cellLocation == cell13) {
			if (arr[2] == "1" or arr[2] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[2] = "1";
			}
		}
		else if (cellLocation == cell21) {
			if (arr[3] == "1" or arr[3] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[3] = "1";
			}
		}
		else if (cellLocation == cell22) {
			if (arr[4] == "1" or arr[4] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[4] = "1";
			}
		}
		else if (cellLocation == cell23) {
			if (arr[5] == "1" or arr[5] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[5] = "1";
			}
		}
		else if (cellLocation == cell31) {
			if (arr[6] == "1" or arr[6] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[6] = "1";
			}
		}
		else if (cellLocation == cell32) {
			if (arr[7] == "1" or arr[7] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[7] = "1";
			}
		}
		else if (cellLocation == cell33) {
			if (arr[8] == "1" or arr[8] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionX(arr, SIZE);
			}
			else {
				arr[8] = "1";
			}
		}
	}
}

// Присваивание Y к нужной ячейке
void cellSelectionY(string arr[], const int SIZE)
{
	string symbolVertical, symbolHorizontal, sumSymbol;
	int cellLocation;

	cout << "Выберите ячейку по вертикали для Y: ";
	cin >> symbolVertical;

	if (symbolVertical != "1") {
		if (symbolVertical != "2") {
			if (symbolVertical != "3") {
				cout << "Данные введены не корректно" << endl;
				return cellSelectionY(arr, SIZE); // Если координата выходит за рамки поля
			}
		}
	}

	cout << "Выберите ячейку по горизонтали для Y: ";
	cin >> symbolHorizontal;

	if (symbolHorizontal != "1") {
		if (symbolHorizontal != "2") {
			if (symbolHorizontal != "3") {
				cout << "Данные введены не корректно" << endl;
				return cellSelectionY(arr, SIZE); // Если координата выходит за рамки поля
			}
		}
	}

	// Получение координаты ячейки, который ввел пользователь
	sumSymbol = symbolVertical + symbolHorizontal;
	cellLocation = stoi(sumSymbol); // Преобразование string в int

	// Проверка ячейки на занятность по полученным координатам
	for (int i = 0; i < 1; i++)
	{
		if (cellLocation == cell11) {
			if (arr[0] == "1" or arr[0] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[0] = "0";
			}
		}
		else if (cellLocation == cell12) {
			if (arr[1] == "1" or arr[1] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[1] = "0";
			}
		}
		else if (cellLocation == cell13) {
			if (arr[2] == "1" or arr[2] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[2] = "0";
			}
		}
		else if (cellLocation == cell21) {
			if (arr[3] == "1" or arr[3] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[3] = "0";
			}
		}
		else if (cellLocation == cell22) {
			if (arr[4] == "1" or arr[4] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[4] = "0";
			}
		}
		else if (cellLocation == cell23) {
			if (arr[5] == "1" or arr[5] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[5] = "0";
			}
		}
		else if (cellLocation == cell31) {
			if (arr[6] == "1" or arr[6] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[6] = "0";
			}
		}
		else if (cellLocation == cell32) {
			if (arr[7] == "1" or arr[7] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[7] = "0";
			}
		}
		else if (cellLocation == cell33) {
			if (arr[8] == "1" or arr[8] == "0") {
				cout << "Данная ячейка занята: " << arr[i] << endl;
				return cellSelectionY(arr, SIZE);
			}
			else {
				arr[8] = "0";
			}
		}
	}
}