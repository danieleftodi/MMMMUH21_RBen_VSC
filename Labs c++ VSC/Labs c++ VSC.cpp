﻿#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <map>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include<stdbool.h>
#include <climits>
#include <random>
#include <climits>
#include <sstream>
#include "Car.h"
#include "Overlaoding.h"

using namespace std;

//class rectangle
//{
//
//private:
//	float length;
//	float width;
//
//public:
//	void setLength(float L)
//	{
//		if (L >= 0)
//			length = L;
//		else
//			cout << "erorr, please enter only positive number" << endl;
//	}
//	float getLength()
//	{
//		return length;
//	}
//	void setWidth(float W)
//	{
//		if (W >= 0)
//			width = W;
//		else
//			cout << "erorr, please enter only positive number" << endl;
//
//	}
//	float getWidth()
//	{
//		return width;
//	}
//
//
//	float getArea()
//	{
//		return length * width;
//	}
//	
//};
//float print()
//{
//
//	rectangle box;
//	int x, y;
//	cout << "Enter Length: ";
//	cin >> x;
//	cout << "Enter Width: ";
//	cin >> y;
//	box.setLength(x);
//	box.setWidth(y);
//	cout << box.getArea();
//	return 0;
//}

void car();
void overlaoding();
int main()
{
	overlaoding();
	
}
void overlaoding()
{
	Overlaoding c1;
	cout << " add version 1" << c1.add(3, 1) << endl;
	cout << " add version 2" << c1.add(3, 1, 5) << endl;
	cout << " add version 3" << c1.add(3, 1, 5, 8) << endl;
	cout << " add version 5" << c1.add("Rachid", "Benzhair") << endl;
}





void car()
{
	Car c1("Toyota", 2020, "blacka");
	cout << "Bil Tillverkaren: " << c1.getMaker() << endl;
	cout << "Bil modell year: " << c1.getModell() << endl;
	cout << "Bil color: " << c1.getcolor() << endl;
	cout << "***********************************" << endl;
	Car c2("Volvo", 2018, "red");
	cout << "Bil Tillverkaren: " << c2.getMaker() << endl;
	cout << "Bil modell year: " << c2.getModell() << endl;
	cout << "Bil color: " << c2.getcolor() << endl;
	
}

//bool Hitta(int hitta[], int size, int searchitm);
//
//int main()
//{
//	int x, y;
//	int hitta[] = { 10,30,20,80,40 };
//	cout << "hitta ett nummer: ";
//	cin >> x;
//	if (Hitta(hitta, 5, x) == true)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			if (hitta[i] == x)
//				y = i;
//		}
//		cout << x << " its found at index:  " << y << endl;
//	}
//
//	else
//		cout << x << " its not found " << endl;
//}
//
//bool Hitta(int hitta[], int size, int searchitm)
//{
//
//	bool found = false;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (hitta[i] == searchitm)
//			found = true;
//	}
//	return found;
//
//}

//template <class t>
//
//t Max(t a,t b)
//{
//	if(a > b)
//		return a;
//	else
//		return b;
//}
//
//int main()
//{
//	cout << Max(10, 5) << endl;
//	cout << Max(12.5f, 17.3f);
//	return 0;
//}
//
//

//struct student
//{
//	int age;
//	float weight;
//	int length;
//	string name;
//	int person_nr;
//	string jobb;
//
//	void PrintStruct()
//	{
//		cout << name << " gar i pension om: "<< 65 - age << endl;
//	}
//
//};
//void print(student List[], int size);
//int main()
//{
//	int size = 0;
//	student List[6];
//	cout << "Enter antal studenter: ";
//	cin >> size;
//
//	for(int i = 0; i <size; i++)
//	{
//		cout << endl;
//		cout <<"Student " << i + 1 << endl;
//		cout <<"*********"<< endl;
//		cout << "enter Student name: ";
//		cin >> List[i].name;
//		cout << "enter Student age: ";
//		cin >> List[i].age;
//		cout << "enter Student weight : ";
//		cin >> List[i].weight;
//		cout << "enter Student length: ";
//		cin >> List[i].length;
//		cout << "enter Student person_nr: ";
//		cin >> List[i].person_nr;
//		cout << "enter Student jobb: ";
//		cin >> List[i].jobb;
//
//	}
//
//	for(int i = 0; i < size; i++)
//	{
//		List[i].PrintStruct();
//
//	}
//
//	print(List, size);
//
//	return 0;
//
//}
//void print(student List[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << endl;
//		cout << "Student " << i + 1 << endl;
//		cout << "*********" << endl;
//		cout << "Student name: "<< List[i].name << endl;
//		cout << "Student age:  "<< List[i].age << endl;
//		cout << "Student weight: "<< List[i].weight << endl;
//		cout << "Student length: "<< List[i].length << endl;
//		cout << "Student person_nr:	"<< List[i].person_nr << endl;
//		cout << "Student jobb:	"<< List[i].jobb << endl;	
//	}
//
//}

//void swap(int& num1, int& num2) //by refernce
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
//void swap(int* ptr1, int* ptr2) //by pointer 
//{
//
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//int main()
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1, * ptr2;
//	ptr1 = &num1;
//	ptr2 = &num2;
//
//	swap(num1, num2);
//	cout <<"num1: "<< num1 << " (num1 byter plats med num2) " << "num2: " << num2 << endl;
//	swap(*ptr1, *ptr2);
//	cout << "num1: " << *ptr1 <<" (num1 byter plats med num2 igen) "<< "num2: " << *ptr2 << endl;
//	swap(&num1, &num2);
//	cout << "num1: " << num1 <<" (num1 byter plats med num2 igen) "<< "num2: " << num2 << endl;
//
//		return 0;
//
//}
//int main()
//{
//	int List[5] = { 12,23,34,32,28 };
//	int* arr1 = List;
//	int* arr2 = &List[3];
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << List[i] << endl;
//		
//	}
//	cout << "*********" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << List << endl;
//		
//	}
//	cout << "*********" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << *(List + i) << endl;
//		
//	}
//	cout << "*********" << endl;
//	cout << List[3] << endl;
//	cout << arr2 << endl;
//	arr2++;
//	cout << arr2 << endl;
//	cout << *arr2 << endl;
//
//}

//int main() // pointer
//{
//	int x = 10;
//	int* ptr = &x;
//	cout << x << endl;   
//	cout << &x << endl;
//	cout << ptr << endl;
//	cout << &ptr << endl;
//	cout << *ptr << endl;
//
//	return 0;
//
//}

// * DUNGEON: a simple game for the terminal. The objective of the
// * game is that the player ("P") reaches the treasure ("X")
// * avoiding the traps ("T") and the bandits ("B").
// * Bandits move randomly each turn.
// * */
//const int NUMBEROFTRAPS = 3;
//const int NUMBEROFBANDITS = 2;
//
//// Represents a place in the board.
//// xPosition is the x-axis index and yPosition is the y-axis index
//struct Location {
//	int xPosition;
//	int yPosition;
//};
//
//// Represents the player.
//// It is guaranteed Player position is in the board.
//// Position is altered through function movePlayer.
//
//struct Player {
//	Location position;
//	char symbol = 'P';
//	std::string name = "player";
//};
//
//// Represents traps on the board
//// It is guarateed Trap position is in the board.
//struct Trap {
//	Location position;
//	char symbol = 'T';
//};
//
//// Represents Bandits moving around the map.
//// Position is altered through funtion moveBandit.
//struct Bandit {
//	Location position;
//	char symbol = 'B';
//};
//
//// Represents the treasure.
//// The game ends as soon Player.position == Treasure.position
//struct Treasure {
//	Location position;
//	char symbol = 'X';
//};
//
//// Represents the board.
//struct {
//	int xDimension;
//	int yDimension;
//} board = { .xDimension = 10, .yDimension = 10 };
//
//// Possible directions. WRONG_DIRECTION is used to report incorrect input
//enum Direction { RIGHT, LEFT, TOP, BOTTOM, WRONG_DIRECTION };
//enum Result { VICTORY, DEFEAT };
//
//void drawBoard(Player, Trap[], Bandit[], Treasure);
//void endGame(Result);
//void movePlayer(Player&, Direction);
//void moveBandit(Bandit&);
//Direction askDirection();
//
//int main() {
//	std::srand(std::time(0));
//
//	// Treasure position is decided randomly.
//	Treasure treasure = { .position = {.xPosition = std::rand() % board.xDimension,
//					 .yPosition = std::rand() % board.yDimension} };
//
//	// Traps are placed around the map. It is not guaranteed
//	// that traps position doesn't converge.
//	// In that case, the second trap can be assumed to not exist.
//	Trap trapsInMap[NUMBEROFTRAPS];//Här skulle man kunna lägga till kod som fixar detta.
//	for (int i = 0; i < NUMBEROFTRAPS; i++) {
//		int xPos = std::rand() % board.xDimension;
//		int yPos = std::rand() % board.yDimension;
//		Trap trap = { .position = {.xPosition = xPos, .yPosition = yPos} };
//		trapsInMap[i] = trap;
//	}
//
//	// Bandits are placed around the map. It is not guaranteed
//	// that bandits position doesn't converge, but they will move
//	// anyway.
//	Bandit banditsInMap[NUMBEROFBANDITS];
//	for (int i = 0; i < NUMBEROFBANDITS; i++) {
//		int xPos = std::rand() % board.xDimension;
//		int yPos = std::rand() % board.yDimension;
//		Bandit bandit = { .position = {.xPosition = xPos, .yPosition = yPos} };
//		banditsInMap[i] = bandit;
//	}
//
//	// Player position on the 1st turn is randomly decided.
//	// It can not be the same of a bandit or a trap.
//	bool match = false;
//	int xPos;
//	int yPos;
//	do {
//		xPos = std::rand() % board.xDimension;
//		yPos = std::rand() % board.yDimension;
//		for (int i = 0; i < NUMBEROFTRAPS; i++) {
//			if ((xPos == trapsInMap[i].position.xPosition &&
//				yPos == trapsInMap[i].position.yPosition) ||
//				(xPos == banditsInMap[i].position.xPosition &&
//					yPos == banditsInMap[i].position.yPosition)) {
//				match = true;
//			}
//		}
//	} while (match);
//
//	Player player = { .position = {.xPosition = xPos, .yPosition = yPos} };
//
//	// The order of the turn is the following:
//	// 1. Board is drawn.
//	// 2. User is asked for movement direction.
//	// 3. Player moves in the chosen direction.
//	// 4. Bandits move.
//	int maxTurnos = INT_MAX;
//	for (int i = 0; i <= maxTurnos; i++) {
//		drawBoard(player, trapsInMap, banditsInMap, treasure);
//		Direction direction;
//		do {
//			direction = askDirection();
//			std::cout << std::endl;
//		} while (direction == WRONG_DIRECTION);
//		movePlayer(player, direction);
//		for (int i = 0; i < NUMBEROFBANDITS; i++) {
//			moveBandit(banditsInMap[i]);
//		}
//		std::cout << "\x1B[2J\x1B[H";
//	}
//}
//
//void drawBoard(
//	/* in */ Player player,
//	/* in */ Trap totalTraps[],
//	/* in */ Bandit totalBandits[],
//	/* in */ Treasure treasure)
//
//	// Draws a (board.xDimension * board.yDimension) grid.
//	// Elements are drawn using .location.?Dimensions.
//
//	// Precondition: 0 <= Player.xPosition <= board.xDimension &&
//	//      0 <= player.position.yPosition <= board.yDimension  &&
//	//      board.xDimension > 0  && board.yDimension > 0 &&
//	// Postcondition: The grid has been drawn.
//	//      All elements have been drawn.
//	//      If the player is in the same square than the treasure,
//	//      the game ends with victory.
//	//      If the player is in the same square than a bandit or
//	//      a trap, the game ends with defeat.
//{
//	bool squareDrawn = false;
//	for (int y = 0; y <= board.yDimension; y++) {
//		for (int x = 0; x <= board.xDimension; x++) {
//			// Traps are drawn
//			for (int z = 0; z <= NUMBEROFTRAPS; z++) {
//				Trap trapToDraw = totalTraps[z];
//				if (trapToDraw.position.xPosition == x &&
//					trapToDraw.position.yPosition == y) {
//					std::cout << trapToDraw.symbol;
//					squareDrawn = true;
//				}
//			}
//			// Bandits are drawn.
//			// In case of collision with a trap,
//			// only the second is drawn.
//			for (int z = 0; z <= NUMBEROFBANDITS; z++) {
//				Bandit banditToDraw = totalBandits[z];
//				if (banditToDraw.position.xPosition == x &&
//					banditToDraw.position.yPosition == y && !squareDrawn) {
//					std::cout << banditToDraw.symbol;
//					squareDrawn = true;
//				}
//			}
//
//			// Treasure is drawn. If position of treasure == position of player
//			// game ends with victory
//			if (x == treasure.position.xPosition &&
//				y == treasure.position.yPosition) {
//				if (treasure.position.xPosition == player.position.xPosition &&
//					treasure.position.yPosition == player.position.yPosition) {
//					endGame(VICTORY);
//				}
//
//				std::cout << "X";
//				continue;
//			}
//
//			if (x == player.position.xPosition && y == player.position.yPosition) {
//				if (squareDrawn)
//					endGame(DEFEAT);
//				std::cout << "P";
//				continue;
//			}
//			// Empty square "." is drawn. It only gets printed if there is nothing
//			// on the square.
//			if (!squareDrawn)
//				std::cout << ".";
//			squareDrawn = false;
//		}
//		std::cout << std::endl;
//	}
//}
//
//Direction askDirection() {
//
//	// Asks the user to input a direction and returns it.
//	// Precondition: -
//	// Poscondition:
//	// Return: a Direction value containing the direction chosen or
//	// WRONG_DIRECTION.
//
//	std::cout << "Select [L/A]eft, [R/D]ight, [T/W]op or [B/S]ottom: ";
//	char answer;
//	std::cin.get(answer);
//
//	Direction chosenDirection;
//	switch (std::toupper(answer)) { // Fixa styling
//	case 'L':
//	case 'A':
//		chosenDirection = LEFT;
//		break;
//	case 'R':
//	case 'D':
//		chosenDirection = RIGHT;
//		break;
//	case 'T':
//	case 'W':
//		chosenDirection = TOP;
//		break;
//	case 'B':
//	case 'S':
//		chosenDirection = BOTTOM;
//		break;
//	default:
//		chosenDirection = WRONG_DIRECTION;
//	}
//	return chosenDirection;
//}
//
//void movePlayer(
//	/* inout */ Player& player,   // Player of the game
//	/* in */ Direction direction) // Direction previously chosen.
//								  // It is represented by a Direction object,
//								  // different from WRONG_DIRECTION.
//
//// Moves player in the chosen direction, by altering its coordinates. If the
//// player would finish out of the board, no movement is made.
//
//// Precondition: 0 <= Player.xPosension <= board.xDimension &&
////        0 <= player.position.yPosition <= board.yDimension  &&
////        board.xDimension > 0  && board.yDimension > 0 &&
////        direction in {LEFT; RIGHT; TOP; BOTTOM} &&
//// Postcondition: player coordinates have been altered &&
////        player remains inside the board.
//{
//	switch (direction) {
//	case RIGHT:
//		if (player.position.xPosition < board.xDimension)
//			player.position.xPosition += 1;
//		break;
//	case LEFT:
//		if (player.position.xPosition > 0)
//			player.position.xPosition -= 1;
//		break;
//	case TOP:
//		if (player.position.yPosition > 0)
//			player.position.yPosition -= 1;
//		break;
//	case BOTTOM:
//		if (player.position.yPosition < board.yDimension)
//			player.position.yPosition += 1;
//		break;
//	}
//}
//
//void moveBandit(
//	/* inout */ Bandit& bandit) // Player of the game
//								// It is represented by a Direction object,
//								// different from WRONG_DIRECTION.
//
//// Moves player in the chosen direction, by altering its coordinates. If the
//// player would finish out of the board, no movement is made.
//
//// Precondition: 0 <= Player.xPosension <= board.xDimension &&
////        0 <= player.position.yPosition <= board.yDimension  &&
////        board.xDimension > 0  && board.yDimension > 0 &&
////        direction in {LEFT; RIGHT; TOP; BOTTOM} &&
//// Postcondition: player coordinates have been altered &&
////        player remains inside the board.
//{
//
//	int direction = std::rand() % 4;
//	switch (direction) {
//	case 0:
//		if (bandit.position.xPosition < board.xDimension)
//			bandit.position.xPosition += 1;
//		break;
//	case 1:
//		if (bandit.position.xPosition > 0)
//			bandit.position.xPosition -= 1;
//		break;
//	case 2:
//		if (bandit.position.yPosition > 0)
//			bandit.position.yPosition -= 1;
//		break;
//	case 3:
//		if (bandit.position.yPosition < board.yDimension)
//			bandit.position.yPosition += 1;
//		break;
//	}
//}
//
//void endGame(
//	/* in */ Result result) // Result of the game.
//							// It is either VICTORY or DEFEAT
//// Cleans screen, prints a good bye message
//// and ends the game.
//// Precondition: a condition for ending the game has been found.
////              Either player.position == bandit.position ||
////              player.position == trap.position [DEFEAT]
////              or player.position == treasure.position [VICTORY]
//// Poscondition: game is ended. Greeting message is printed.
//{
//	std::string announcement = (result == VICTORY) ? "YOU WIN" : "GAME OVER";
//	std::cout << "\x1B[2J\x1B[H"; // Resets terminal
//	std::cout << std::endl << std::endl;
//	std::cout << "===========================" << std::endl;
//	std::cout << "||\t\t\t||" << std::endl;
//	std::cout << "||\t" << announcement << "\t\t||" << std::endl;
//	std::cout << "||\t\t\t||" << std::endl;
//	std::cout << "===========================" << std::endl;
//	exit(1);
//}

//int main()
//{
//	string str = "welcome";
//	int count = 0;
//	for (int i = 0; str[i] != 0; i++)
//	{
//		count++;
//	}
//	cout << "Length : " << count << endl;
//	return 0;
//}
//int main()
//{
//
//	int A[] = { 2,4,6,8,10,12 };
//	int*p = A;
//	p++;
//	cout << *p << endl;
//	p = p + 3;
//	cout << *p << endl;
//	cout << p[-4] << endl;
//
//

//int main()
////program för dynamic memmory allocation
//{
//	
//	/*int *p = new int[20];
//	cout << p << endl;
//	delete[]p;
//	p = new int[10];
//	cout <<p << endl;*/
//
//	int size;
//	cout << "Enter nummer of element: ";
//	cin >> size;
//	int* p = new int[size];
//	cout << &*p << endl;
//	cout << size << endl;
//	cout << "Enter new size: " ;
//	cin >> size;
//	p = new int[size];
//	cout << &*p << endl;
//	cout << size << endl;
//
//	return 0;
//
//}

//int main()
//{
//	int A[10][10], B[10][10], Mult[10][10], r1, c1, r2, c2, i, j, k;
//
//	cout << "Enter Rows and Columns for First Matrix: ";
//	cin >> r1 >> c1;
//	cout << "Enter Rows and Columns for Second Matrix: ";
//	cin >> r2 >> c2;
//
//	if (c1 != r2)
//	{
//		cout << "Cant be Multiplied";
//		return 0;
//	}
//
//	// Storing Elements of First Matrix.
//	cout << endl << "Enter Elements of Matrix 1:" << endl;
//
//	for (i = 0; i < r1; ++i)
//		for (j = 0; j < c1; ++j)
//		{
//			cout << "Enter Element A" << i + 1 << j + 1 << " : ";
//			cin >> A[i][j];
//		}
//
//	// Storing Elements of Second Matrix.
//	cout << endl << "Enter Elements of Matrix 2:" << endl;
//
//	for (i = 0; i < r2; ++i)
//		for (j = 0; j < c2; ++j)
//		{
//			cout << "Enter Element B" << i + 1 << j + 1 << " : ";
//			cin >> B[i][j];
//		}
//
//	// Multiplying Matrix A and B and Storing in Array Mult.
//	for (i = 0; i < r1; ++i)
//		for (j = 0; j < c2; ++j)
//		{
//			Mult[i][j] = 0;
//
//			for (k = 0; k < c1; ++k)
//			{
//				Mult[i][j] += A[i][k] * B[k][j];
//			}
//		}
//
//	// Displaying the Multiplication of Two Matrix.
//	cout << endl << "Output Matrix: " << endl;
//
//	for (i = 0; i < r1; ++i)
//		for (j = 0; j < c2; ++j)
//		{
//			cout << " " << Mult[i][j];
//
//			if (j == c2 - 1)
//				cout << endl;
//		}
//
//	return 0;
//}

//int main()
//{
//	int A[2][3] = { {3,3,3},{3,3,3} };
//	int B[2][3] = { {1,1,1},{1,1,1} };
//	int C[2][3];
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			C[i][j] = A[i][j] + B[i][j];
//		}
//
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << C[i][j] << ",";
//		}
//
//	}
//	cout << endl;
//
//}
//
//

//int main()
//{
//	int m = 10, n = 10;
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			cout << " ";	
//		}
//		for (int k = 1; k <= n; k++)
//		{
//			cout << "*";
//		}
//		n--;
//		cout << endl;
//	}
//	return 0;
//
//}

//int main()
//{
//	for (int i = 10; i > 1; i--)
//	{
//		for (int j = 1; j < i ; j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	return 0;
//
//}

//int main()
//{
//	for (int i = 1; i <=5; i++)
//	{
//		for (int j = 1; j <=5; j++)
//		{
//			
//				cout << "(" << i << ", " << j <<")";
//		}
//		cout << endl;
//	}
//	return 0;
//
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (i <= j)
//				cout << "*";
//		}
//		cout << endl;
//	}
//	return 0;
//
//}

//int main() // write a loop to count positive and negative numbers
//{
//	int num1[] = { 3,5,-2,9,-4,10,-24,19,81,-7,12,13};
//	int pcount = 0;
//	int ncount = 0;
//
//	for (int i = 0; i < 12; i++)
//	{
//		if (num1[i] > 0)
//		{
//			pcount++;
//		}	
//		else if (num1[i] < 0)
//		{
//			ncount++;
//		}
//			
//	}
//	cout << pcount << " _________" << ncount;
//}
//

//int main()// min värdet i array
//{
//	int num1[] = { 12,65,354,342,42,13,34 };
//	int min = num1[0];
//	for (int i = 0; i < 7; i++)
//	{
//		if (num1[i] < min)
//		{
//			min = num1[i];
//		}
//
//	}
//	cout << min;
//}

//int main()// max värdet i array
//{
//	int num1[] = { 12,65,354,342,42,13,34};
//	int max = num1[0];
//	for (int i = 0; i < 7; i++)
//	{
//		if (num1[i] > max)
//		{
//			max = num1[i]; // lägger till om värdet är högre i max när den kollar vilkoret.
//		}
//
//	}
//	cout << max;
//}

//int main() // summera värdet
//{
//	int num1[] = { 2,3,3,4,5,7,57,47,46,3,6,4};
//	int sum = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		sum += num1[i];
//	}
//	cout << sum;
//}

//int main()
//{
//	int num1[] = { 2,4,45,7,8,98,6,3,9,10};
//	int L = 0, H = 9, key, mid;
//	cout << "Enter key ";
//	cin >> key;
//	while (L <= H)
//	{
//		mid =  (H + L ) / 2;
//		if ( num1[mid]== key)
//		{
//			cout << " hittad " ;
//			return 0;
//		}
//		if (num1[mid] < key)
//
//			L = mid + H;
//		else
//			H = mid - L;
//		
//	}
//
//	cout << "Ej hittad ";
//
//}

//int main()
//{
//	int  num1[10], n = 10, key;
//	cout << "Enter nummer: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num1[i];
//
//	}
//
//	cout << " enter key: ";
//	cin >> key;
//	for (int i = 0; i < n; i++)
//	{
//		if (key == num1[i])
//		{
//
//			cout << " Key hittad" << endl;
//			return 0;
//
//		}
//	}
//	cout << " Key ej hittad" << endl;
//
//
//	return 0;
//}
//int main()
//{
//	int num1[7] = { 6,7,9,75,34,65,55 };
//	int num2 = 7, sum = 0, max = num1[0];
//	for (int i = 0; i < 7; i++)
//	{
//		sum += num1[i];
//
//		for (int i = 0; i < 7; i++)
//		{
//	
//			if (num1[i] > max)
//			{
//				max = num1[i];
//			}
//
//		}
//
//	}
//	cout <<" Summan av Array: " << sum << endl;
//	cout << "Max nummber: " << max << endl;
//
//
//	return 0;
//}

//int main()
//{
//	int num[5] = { 2,3,6,8,10 };
//	for (auto i = 0; i < 5; i++)
//	{
//		cout << num[i] << endl;
//	}
//
//	cout << "****************************" << endl;
//
//	int num1[] ={ 2,3,6,8,10 };
//	for (auto x:num1)
//	{
//		cout << x << endl;
//	}
//}
//

//int main()
//{
//	for (int i = 5; i >= 1; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//
//			cout << " * ";
//		}
//
//		cout << endl;
//	}
//
//}

//int main()
//{
//	int num, fact = 1;
//
//	for (num = 1; num <= 10; num++)
//	{
//		for (int i = 1; i <= num; i++)
//		{
//			fact = i * fact;
//		}
//		cout << "factorial of " << num << "  =  " << fact << endl;
//
//	}
//
//
//}

//int  main()
//{
//
//	int num, sumeven = 0, sumodd = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		cout << "Enter 10 nr" << endl;
//		cin >> num;
//
//		if (num % 2 == 0)
//		{
//			sumeven += num;
//		}
//		else
//			sumodd += num;
//	}
//	cout << "Even num: " << sumeven << endl;
//	cout << "odd num: " << sumodd << endl;
//}

//
//int main()
//{
//
//	int index, value =0;
//	float age[10], avg, sum = 0.0;
//	cout << "Enter nr of persons" << endl;
//		cin >> index;
//	for (int i = 0; i < index ; i++)
//	{
//		
//		cout << "Enter age of persons" << endl;
//		cin >> age[value];
//		sum += age[value];
//
//	}
//	cout << "******************" << endl;
//	cout <<"Avarage old is: "<< sum / index << endl;
//	cout << "******************" << endl;
//}

//void swap(int x, int y);// parameter by value
//int main()
//{
//	int i = 10, y = 60;
//	swap(i, y);
//	cout << "i blir:" << i << endl;
//	cout << "y blir:" << y << endl;
//}
//void swap(int x, int y)
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//
//}

//void login(string email, string password, string name, string = "")// Function Parameter Default Value
//{
//	cout << "email =" << email << endl;
//	cout << "Password =" << password << endl;
//	cout << "Name =" << name << endl;
//	cout << "Mobil =" << "" << endl;
//
//}
//int main()
//{
//
//
//	login("rachid.ben@hotmail.com", "movant2021", "Rachid Ben");
//	return 0;
//
//}
//
//
//void swap(int &x, int &y); //parameter by Reference 
//int main()
//{
//	int i = 10, y = 60;
//	swap(i, y);
//	cout << "i blir:" << i << endl;
//	cout << "y blir:" << y << endl;
//}
//void swap(int &x, int &y)
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//
//}
//
//

//struct student 
//	// enkel exmpel på sturkt däre vi skivkar värden till struct från int main och kalla på det itms vi vill ha.
//{
//	int age;
//	float vikt;
//	int langd;
//	string name;
//	int person_nr;
//	string jobb;
//	
//};
//
//int main()
//{
//	student nr1;
//	nr1.name = "RAchid";
//	nr1.person_nr = 780523;
//	nr1.age = 35;
//	nr1.vikt = 65;
//	nr1.jobb = "student";
//	nr1.langd = 170;
//
//	student nr2;
//	nr2.name = "Sami";
//	nr2.person_nr = 750803;
//	nr2.age = 32;
//	nr2.vikt = 75;
//	nr2.jobb = "student";
//	nr2.langd = 170;
// 
//	cout << nr2.name << endl;
// 
//
//	return 0;
//
//}

//void printmatrix(int Array[][3], int rads); // skriv ut 2D aaray som user mattar in 
//
//int main()
//{
//	int Array[5][3];
//
//	for(int rad = 0; rad < 5; rad++)
//	{
//		for(int col = 0; col < 3; col++)
//		{
//			cout << "Skriv in nummer i : " << rad +1 << "-" << col+1<< endl;
//			cin >> Array[rad][col];
//		}
//
//	}
//	printmatrix(Array,5);
//}
//void printmatrix(int Array[][3], int rads)
//{
//	for(int rad = 0; rad < rads; rad++)
//	{
//		for(int col = 0; col < 3; col++)
//		{
//			cout << Array[rad][col] << "\t";
//		}
//		cout << endl;
//	}
//}

//bool Hitta(int hit[], int size, int searchitem);
//int main()
//{
//	int x;
//	int hitta[] = { 10,30,20,30,40 };
//	cout << "hitta ett nummer" << endl;
//	cin >> x;
//	if (Hitta(hitta, 5, x) == true)
//		cout << x << " hittad" << endl;
//	else
//		cout << x << " ej hittad" << endl;
//
//
//}
//bool Hitta(int hit[], int size, int searchitem)
//{
//	bool found = false;
//	for (int i = 0; i < size; i++)
//	{
//		if (hit[i] == searchitem)
//			found = true;
//	}
//	return found;
//}

//float omkrets(float omk[], int size);// räkna omkrets
//int main()
//{
//	float omk[] = { 12,3};
//	
//	cout << omkrets(omk,2);
//
//}
//float omkrets(float omk[], int size)
//{
//	float sum = 1;
//	for ( int i = 0; i < size; i++)
//	{
//		sum *= omk[i];
//	}
//
//	return sum;
//}

//int main()  // flytta värdet till anan array
//{
//	int arry1[3] = { 10,20,30 };
//	int arry2[3];
//	for (int i = 0; i < 3; i++)
//	{
//		arry2[i] = arry1[i];
//
//	}
//	cout << arry2[2] << endl;
//
//}

//int main()
//{
//
//	int age[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "enter age" << endl;
//		cin >> age[i];
//
//		for (int index = 0; index < 10; index++)
//		{
//			age[index] = 65 - age[index];
//		}
//	}
//	cout << "du går i pension om: " << age[5] << endl;
//
//}

//void Myname(char myname[][3])
//{
//	
//		printf("ditt namn: %c%c%c%c%c%c", myname[1][1], myname[0][0],
//			myname[0][2], myname[1][2], myname[2][0], myname[1][0]);
//
//}
//
//int main()
//{
//	char myname[4][3] = { {'A','B','C'},
//						  {'D','R','H'},
//						  {'I','Z','N'},
//						  {'M','V','S'} };
//
//	Myname(myname);
//
//	return 0;
//
//}

//int main() //BOOL
//{
//	bool test = 1 == 2;
//	printf("%d", test);
//	return 0;
//
//}
//

//int main()
//{
//	float arabic, math, svenska, eknomi;
//	float avarage;
//
//	printf("enter arabic betyg\n");
//	scanf_s("%f", &arabic);
//	printf("enter math betyg\n");
//	scanf_s("%f", &math);
//	printf("enter svenska betyg\n");
//	scanf_s("%f", &svenska);
//	printf("enter eknomi betyg\n");
//	scanf_s("%f", &eknomi);
//	avarage = (arabic + math + svenska + eknomi)/4;
//
//	printf("din totala resultat ar %.2f\n", avarage);
//
//
//	return 0;
//
//}

//void Rita(); // denna function ritar tabellen
//void byta(int, char);
//bool sheck(int);
//bool Xvinnare();
//bool Ovinnare();
//bool sheckvinnare();
//void Rensatabellen();
//
//char courentPlayer = 'X';
//char c1, c2, c3, c4, c5, c6, c7, c8, c9;
//
//
//int main()
//{
//
//	while (true)
//	{
//		Rensatabellen();
//		cout << "valkomen till O - X spelet igen" << endl;
//		Rita();
//		int input;
//		int counter = 0;
//
//		while (true)
//		{
//
//			cout << "Din tur: " << courentPlayer << endl;
//			cin >> input;
//			while (!sheck(input))
//			{
//				cout << "--------------------------------------------------" << endl;
//				cout << "Fel inmatning eller upptaget testa mellan 1 till 9" << endl;
//				cout << "--------------------------------------------------" << endl;
//				cin >> input;
//			}
//
//			if (counter % 2 == 0)
//			{
//				byta(input, courentPlayer);
//				courentPlayer = 'O';
//			}
//			else
//			{
//				byta(input, courentPlayer);
//				courentPlayer = 'X';
//			}
//			counter++;
//			Rita();
//			if (sheckvinnare())
//			{
//				cout << "Vill du borja om spelet" << endl;
//				break;
//			}
//
//			else if (counter == 9)
//			{
//
//				cout << "oavgjort" << endl;
//				break;
//			}
//
//
//
//		}
//		cout << " VALJ NEDAN" << endl;
//		cout << " 1 continue" << endl;
//		cout << " 2 avbryt" << endl;
//		cin >> input;
//		if (input == 1)
//		{
//			continue;
//		}
//
//		else
//		{
//			exit(0);
//		}
//	}
//
//
//
//}
//
//void Rensatabellen()
//{
//	c1 = '1';
//	c2 = '2';
//	c3 = '3';
//	c4 = '4';
//	c5 = '5';
//	c6 = '6';
//	c7 = '7';
//	c8 = '8';
//	c9 = '9';
//}
//
//void Rita() // denna funktion gör att programmet ritar tabellen
//{
//	cout << "\t" << c1 << "\t|\t" << c2 << "\t|\t" << c3 << endl;
//	cout << "\t---------------------------------\n" << endl;
//	cout << "\t" << c4 << "\t|\t" << c5 << "\t|\t" << c6 << endl;
//	cout << "\t---------------------------------\n" << endl;
//	cout << "\t" << c7 << "\t|\t" << c8 << "\t|\t" << c9 << endl;
//	cout << "\t---------------------------------\n" << endl;
//}
//
//void byta(int i, char c) // denna funktion gör att ersätta siffarn i tabellen med X eller O
//{
//	switch (i)
//	{
//	case 1: c1 = c; break;
//	case 2: c2 = c; break;
//	case 3: c3 = c; break;
//	case 4: c4 = c; break;
//	case 5: c5 = c; break;
//	case 6: c6 = c; break;
//	case 7: c7 = c; break;
//	case 8: c8 = c; break;
//	case 9: c9 = c; break;
//
//
//	}
//}
//bool sheck(int input)// denna funktion gör att den skickar om input användaren skriver är 
//					//	rätt eller fel och går att skriva den i tabellen
//{
//	if (input < 1 || input > 9)
//		return false;
//	switch (input)
//	{
//	case 1:
//		if (c1 == '1')
//			return true;
//		break;
//	case 2:
//		if (c2 == '2')
//			return true;
//		break;
//	case 3:
//		if (c3 == '3')
//			return true;
//		break;
//	case 4:
//		if (c4 == '4')
//			return true;
//		break;
//	case 5:
//		if (c5 == '5')
//			return true;
//		break;
//	case 6:
//		if (c6 == '6')
//			return true;
//		break;
//	case 7:
//		if (c7 == '7')
//			return true;
//		break;
//	case 8:
//		if (c8 == '8')
//			return true;
//		break;
//	case 9:
//		if (c9 == '9')
//			return true;
//		break;
//	}
//
//	return false;
//}
//bool Xvinnare()	//returnerar sant om X  är vinner
//{
//	bool v1 = (c1 == 'X' && c2 == 'X' && c3 == 'X');
//	bool v2 = (c4 == 'X' && c5 == 'X' && c6 == 'X');
//	bool v3 = (c7 == 'X' && c8 == 'X' && c9 == 'X');
//
//	bool r1 = (c1 == 'X' && c4 == 'X' && c7 == 'X');
//	bool r2 = (c2 == 'X' && c5 == 'X' && c8 == 'X');
//	bool r3 = (c3 == 'X' && c6 == 'X' && c9 == 'X');
//
//	bool t1 = (c1 == 'X' && c5 == 'X' && c9 == 'X');
//	bool t2 = (c3 == 'X' && c5 == 'X' && c7 == 'X');
//
//	if (v1 || v2 || v3 || r1 || r2 || r3 || t1 || t2)
//	{
//		cout << "X ar vinnare" << endl;
//		return true;
//	}
//	return false;
//}
//bool Ovinnare()	//returnerar sant om X eller O binner
//{
//	bool v1 = (c1 == 'O' && c2 == 'O' && c3 == 'O');
//	bool v2 = (c4 == 'O' && c5 == 'O' && c6 == 'O');
//	bool v3 = (c7 == 'O' && c8 == 'O' && c9 == 'O');
//
//	bool r1 = (c1 == 'O' && c4 == 'O' && c7 == 'O');
//	bool r2 = (c2 == 'O' && c5 == 'O' && c8 == 'O');
//	bool r3 = (c3 == 'O' && c6 == 'O' && c9 == 'O');
//
//	bool t1 = (c1 == 'O' && c5 == 'O' && c9 == 'O');
//	bool t2 = (c3 == 'O' && c5 == 'O' && c7 == 'O');
//
//	if (v1 || v2 || v3 || r1 || r2 || r3 || t1 || t2)
//	{
//		cout << "O ar vinnare" << endl;
//		return true;
//	}
//	return false;
//}
//bool sheckvinnare()
//{
//
//	return  Xvinnare() || Ovinnare();
//}
//

//enum Kon
//{
//	Man, Kvinna
//
//}Kon;
//
//enum Omdome
//{
//	mycket_bra = 1, bra = 2, mindre_bra = 3, illa = 4
//
//}Omdome;
//
//typedef struct Person
//{
//	char* namn;
//	int kon;
//	int omdome;
//
//}Person;
//
//int main(int argc, char** argv)
//{
//	Person p;
//
//	char namn[60];
//	printf("Skriv ditt Namn:\n");
//	scanf_s("%s", namn);
//
//	int kon;
//	printf("Skriv din Kon: 1: Man. 2: Kvinna\n ");
//	scanf_s("%d", &kon);
//
//	int omdome;
//	printf("Skriv ditt omdome:\n *mycket bra:    1\n *bra:           2\n *mindre bra:    3\n *illa:          4\n ");
//	scanf_s("%d", &omdome);
//
//	p.namn = namn;
//	p.kon = kon;
//	p.omdome = omdome;
//
//	printf("Hej %s, ditt omdome %d\n", p.namn, p.omdome);
//
//
//	return 0;
//}

//int potens(int n, int p)
//{
//	if (p <= 0)
//		return 1;
//	return n * potens(n, p - 1);
//}
//int main()
//{
//	cout << potens(2, 3) << endl;
//	return 0;
//
//}

//int equationX(int n) {
//	return n * n;
//}
//int equationY(int n) {
//	return n * n * n;
//}
//int equationZ(int n) {
//	return n * n * n * n;
//}
//int equation1(int n) {
//	return equationX(n) + equationY(n) + equationZ(n);
//}
//int main()
//{
//	cout << equation1(2) << endl;
//	return 0;
//}

//void login(string email, string password, string name, string ="")
//{
//	cout << "email =" << email << endl;
//	cout << "Password =" << password << endl;
//	cout << "Name =" << name << endl;
//	cout << "Mobil =" << "" << endl;
//
//}
//int main()
//{
//	
//
//	login("rachid.ben@hotmail.com", "movant2021", "Rachid Ben");
//		return 0;
//
//}

//void increcment(int &i ,int &j);
//
//int main()
//{
//	int nummer1 = 0;
//	int nummer2 = 30;
//	increcment(nummer1, nummer2);
//	cout << " 1: " << nummer1 << endl;
//	cout << " 2: " << nummer2 << endl;
//	return 0;
//}
//void increcment(int &i , int &j)
//{
//	i++;
//	j++;
//
//}
//
//int increcment(int);
//
//int main()
//{
//	int nummer = 0;
//	nummer = increcment(nummer);
//	cout << "jag ute ur functionen: " << nummer << endl;
//	return 0;
//}
//int increcment(int i)
//{
//	i++;
//	cout << "jag inne i functionen: " << i << endl;
//	return i;
//	
//}
//
//void printcounter();
//
//int main()
//{	
//	printcounter();
//	printcounter();
//	printcounter();
//	
//	return 0;
//
//}
//
//void printcounter()
//{
//	static int counter = 0;
//	cout << ++counter << endl;
//}

//int main()
//{
//	cout << "2^3 = ";
//	cout << pow(2, 3) << endl;
//
//	cout << "√(9) = ";
//	cout << sqrt(9) << endl;
//
//	cout << "ceil(9.01) = ";
//	cout << ceil(9.01) << endl;
//
//	cout << "ceil(-9.99) = ";
//	cout << ceil(-9.99) << endl;
//
//	cout << "floor(9.99) = ";
//	cout << floor(9.99) << endl;
//
//	cout << "ceil(-9.01) = ";
//	cout << floor(-9.01) << endl;
//
//	cout << "cos(0) = ";
//	cout << cos(0) << endl;
//
//	cout << "sin(0) = ";
//	cout << sin(0) << endl;
//
//	cout << "tan(0) = ";
//	cout << tan(0) << endl;
//
//	cout << "log(e) = ";
//	cout << log(exp(1)) << endl;
//
//	cout << "log10(10) = ";
//	cout << log10(10) << endl;
//
//	cout << "e^1 = ";
//	cout << exp(1) << endl;
//
//	cout << "|-21| = ";
//	cout << fabs(-21) << endl;
//
//	cout << "13.657 % 2.33 = ";
//	cout << fmod(13.657, 2.33) << endl;
//
//
//	return 0;
//
//}

//int main()
//{
//
//	SetConsoleCP(1252);
//	SetConsoleOutputCP(1252);
//
//	srand(time(0));
//	int input;
//	int x;
//	do
//	{
//		int counter = 0;
//		int randomNamber = rand() % 100;
//		cout << "skriv ditt gäsa nummer" << endl;
//		cin >> input;
//		while (input != randomNamber)
//		{
//			if (input < randomNamber)
//			{
//				cout << "för lite" << endl;
//			}
//			else
//			{
//				cout << "för stor" << endl;
//			}
//			counter++;
//			cin >> input;
//		}
//		cout << "du skrev rätt nummer " << endl;
//		cout << "Välj: 1 om du vill försätta annars vläj: 2 om du vill stänga" << endl;
//		cin >> x;
// 
//	} while (x != 2);
//
//		return 0;
//	
//}

//float Mini(float num1, float num2, float val)
//{
//
//	do
//	{
//		cout << "   choose one option: " << endl;
//		cout << "=======================" << endl;
//
//		cout << "Val 1:  + " << endl << "Val 2 : - " << endl << "Val 3:  * " << endl << "Val 4:  / " << endl;
//		cin >> val;
//
//		if (val >= 1 && val <= 4)
//		{
//
//			
//			cout << "=======================" << endl;
//			cout << "Skriv first nummer: ";
//			cin >> num1;
//			cout << "Skriv second nummer: ";
//			cin >> num2;
//			cout << "=======================" << endl;
//			if (val == 1)
//				cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//			else if (val == 2)
//				cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
//			else if (val == 3)
//				cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//			else if (val == 4)
//				cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//		}
//		else
//			cout << "fel val testa igen" << endl;
//	}
//
//	while (true)
//	{
//
//	}
//	
//
//		
//
//	
//
//	return num1;
//	return num2;
//
//}
//int main()
//{
//
//
//	int c, c2, temp, sum = 0;
//	printf("Enter count for sum:");
//	scanf_s("%d", &c);
//	c2 = c;
//	for (; c > 0; c--)
//	{
//		printf("Enter number %d: ", c2 - c + 1);
//		scanf_s("%d", &temp);
//		sum += temp;
//
//	}
//
//
//	printf("Total is: %d\n", sum);
//
//
//	system("PAUSE");
//
//}

//int main()
//{
//	for (int i = 7; i >= 1; i--)
//
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%d", i);
//		}
//		printf("\n");
//
//	}
//
//	system("PAUSE");
//}

//int main()
//			{
//				int x, y, big;
//				char c;
//				printf("enter x:");
//				scanf_s("%d", &x);
//				printf("enter y:");
//				scanf_s("%d", &y);
//			
//				big = x > y ? x : y;
//				c = x > y ? 'x' : 'y';
//			
//				printf("% c : % d\n", c, big);
//			
//				system("PAUSE");
//			}

//int main()
		//{
		//
		//	int x;
		//
		//	for (x = 1; x <= 50; x++)
		//	{
		//		printf("%d\n", x);
		//
		//	}
		//}

//int main()
		//{
		//
		//	int x;
		//	for (x = 10; x > 0; x--)
		//	{
		//		printf("%d\n", x);
		//
		//	}
		//
		//
		//	system("PAUSE");
		//
		//}

//int main()
	//{
	//	int x = 0;
	//		for (;;)
	//		{
	//			printf("%d\n", x);
	//			x++;
	//			if (x >= 10)
	//				break;
	//		}
	//
	//
	//		system("PAUSE");
	//
	//	
	//}

//int main()
//{
//	char hello[60] = "Hello ";
//	char name[50];
//	puts("Skriv ditt namn: ");
//	gets_s(name);
//	strcat_s(hello, name);
//	puts(hello);
//
//	system("PAUSE");
//}

//int main()
//{
//int numTabel[3][3];
//
//		numTabel[0][0] = 1;
//		numTabel[0][1] = 2;
//		numTabel[0][2] = 3;
//
//		numTabel[1][0] = 4;
//		numTabel[1][1] = 5;
//		numTabel[1][2] = 6;
//
//		numTabel[2][0] = 7;
//		numTabel[2][1] = 8;
//		numTabel[2][2] = 9;
//
//		printf("%d, %d , %d\n", numTabel[0][0], numTabel[0][1], numTabel[0][2]);
//		printf("%d, %d , %d\n", numTabel[1][0], numTabel[1][1], numTabel[1][2]);
//		printf("%d, %d , %d\n", numTabel[2][0], numTabel[2][1], numTabel[2][2]);
//
//		printf("%p, %p , %p\n", &numTabel[0][0], &numTabel[0][1], &numTabel[0][2]);
//		printf("%p, %p , %p\n", &numTabel[1][0], &numTabel[1][1], &numTabel[1][2]);
//		printf("%p, %p , %p\n", &numTabel[2][0], &numTabel[2][1], &numTabel[2][2]);
//
//		int x = 5;
//		int* p = &x;
//		printf("%p\n", &x);  // pointer som pekar på smma värde i en vanlig varibele
//		printf("%p\n", p);
//		printf("%d\n", *p); // när vi skriver sjärna visar pointer värdet som vi lagt i variablen
//		*p = 33;			// vi kasn ändrta värdet via pointer 
//		printf("%d\n", x);
//		printf("Värdet är:%d, Pekare är: %p", x, p);
//
//
//	system("PAUSE");
//}
