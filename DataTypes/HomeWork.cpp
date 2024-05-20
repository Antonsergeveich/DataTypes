#include<iostream>
using namespace std;

using std::endl;
using std::cin;
using std::cout;
//#define TASK1
//#define TASK2
//#define TASK3
#define TASK4
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined TASK1
	cout << "\t\t\t\t\tЗадача 1\n";
	cout << "\t\t\t\tПреобразование числа в денежный формат\n" << endl;
	double fractional_number, kop;
	int grn;
	cout << "Введите дробное число\n" << endl;
	cin >> fractional_number;
	cout << fractional_number << " грн. - это" << endl;
	grn = fractional_number;
	kop = (fractional_number - grn) * 100;
	cout << grn << " гривны " << endl;
	cout << kop << " копеек " << endl;
	cout << "---------------------------\n";
#endif

#if defined TASK2
	cout << "\t\t\t\t\tЗадача 2\n" << endl;
	cout << "\t\t\t\tВычисление стоимости покупки.\n" << endl;
	cout << "Введите исходные данные:\n";
	double book_price, pencil_price, final_price;
	int quantity_book, quantity_pencil;
	cout << "Цена тетради (грн.)\n";
	cin >> book_price;
	cout << "Количество тетрадей\n";
	cin >> quantity_book;
	cout << "Цена карандаша\n";
	cin >> pencil_price;
	cout << "Количество карандашей\n";
	cin >> quantity_pencil;
	final_price = (book_price * quantity_book) + (pencil_price * quantity_pencil);
	cout << "Стоимость покупки\n" << final_price << "грн." << endl;
	cout << "---------------------------\n";
#endif

#if defined TASK3
	cout << "\t\t\t\t\tЗадача3\n" << endl;
	cout << "\t\t\t\tВычисление стоимости покупки.\n" << endl;
	cout << "Введите исходные данные:\n" << endl;
	double Price_book, Cover_price, Final_price;
	int Number_of_sets;
	cout << "Цена тетради (грн.)\n";
	cin >> Price_book;
	cout << "Цена обложки (грн.)\n";
	cin >> Cover_price;
	cout << "Количество комплектов (шт.)\n";
	cin >> Number_of_sets;
	Final_price = (Price_book + Cover_price) * Number_of_sets;
	cout << "Стоимость покупки:\n" << Final_price << " грн." << endl;
	cout << "---------------------------\n";
#endif

#if defined TASK4
	cout << "\t\t\t\t\tЗадача4\n" << endl;
	cout << "\t\t\t\tВычисление стоимости поездки на автомобили на дачу (Туда и обратно)\n" << endl;
	cout << "Исходные данные:\n" << endl;
	double Fuel_consumption, The_price_of_gasoline;
	float  Distance_to_the_cottage;
	int The_price_of_the_trip, kopeiki;
	cout << "Расстояние до дачи (км.)\n";
	cin >> Distance_to_the_cottage;
	cout << "Расход бензина литров на 100 км. пробега\n";
	cin >> Fuel_consumption;
	cout << "Цена литра бензина (грн.)\n";
	cin >> The_price_of_gasoline;
	The_price_of_the_trip = ((Distance_to_the_cottage / 100 * Fuel_consumption) * 2) * The_price_of_gasoline;
	kopeiki = ((((Distance_to_the_cottage / 100 * Fuel_consumption) * 2) * The_price_of_gasoline) - The_price_of_the_trip) * 100;
	cout << "Поездка на дачу и обратно обойдётся в: " << The_price_of_the_trip << " грн. " << kopeiki << " копеек" << endl;
#endif
}