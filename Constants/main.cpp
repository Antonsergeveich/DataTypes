﻿#include<iostream>
using namespace std;
using std::endl;
using std::cout;
using std::cin;
//Константа - это именованная область памяти, содержимое которой не может изменяться в процессе выполнения программы.
//const

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello Constants" << endl;
	//type name;
	int speed = 0;		//Объявление и инициализация переменной 'speed' (скорость)
	const int MAX_SPEED = 250;//Объявление и инициализация константы 'MAX_SPEED' (максимальная скорость)

	speed = 70;
	//MAX_SPEED = 320;

	/////////////////////////////////////////////////////////

	5;			//это числовая константа типа 'int'
	5U; 5u;		//это числовая константа типа 'usigned int'
	5LL; 5ll;	//это числовая константа типа 'long long'
	5ULL; 5ull;	//числовая константа типа 'unsigned long long'

	5.0;	//числовая константа типа 'double'
	5.;		//числовая константа типа 'double'
	0.5;	//числовая константа типа 'double'
	.5;		//числовая константа типа 'double'
	.5f;	//числовая константа типа 'float'

	cout << sizeof(5ull) << endl;
	cout << typeid(5ull).name() << endl;
	cout << typeid(.5).name() << endl;

	///////////////////////////////////////////////////////////

	//Символьная константа - это одиночный символ, заключенный в одинарные кавыки.
	//Символьная константа - это константа типа 'char'.
	'+';
	cout << typeid('+').name() << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	//Строковая константа - это последовательность символов, заключенная в двойные кавыйки.
	cout << "Hello" << endl;
	cout << sizeof("Hello") << endl;
}

/*
-------------------------
Bjarne Stroustrup
Ctrl + Shift + U - перевод выделения в верхний регистр.
-------------------------
*/