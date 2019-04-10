#include <iostream>
#include <fstream>
#include "container_atd.h"
#include <string>

using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций
	void Init(container **begin);
	void Clear(container **begin);
	void In(container **begin, ifstream &ifst);
	void Out(container **begin, ofstream &ofst);
	container* Sort_c(container **con);
	void OutComplex(container &con, ofstream &ofst);
}
using namespace simple_numbers;//различие????
int main(int argc, char* argv[]) {
	if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);

	if (!ifst.is_open())
	{
		cout << "input file not open";
		return 2;
	}

	if (!ofst.is_open())
	{
		cout << "output file not open or not create";
		return 3;
	}

	string where_er = "";
	int str = 0;
	char *buf = new char[10];
	bool no_er = false;
	float number_code;
	float param;
	//string measure;


	while (!ifst.eof())
	{
		switch (str % 4) {
		case 0://проверка ключа спецификации
			if (!(ifst >> number_code)) // число не считывается
			{

				cout << "Error. Wrong type" << endl;
				cout << where_er << "!!ERROR POSITION!!" << endl;
				return 3;
			}
			if (number_code - (int)number_code != 0)
			{
				cout << "Error. Wrong type" << endl;
				cout << where_er << "!!ERROR POSITION!!" << endl;
				return 3;
			}
			if (number_code < 1 || number_code>3)//целое считалось, но не 1,2,3
			{
				cout << "Error. Wrong type" << endl;
				cout << where_er << endl << "!!ERROR POSITION!!" << endl;
				return 3;
			}
			where_er += to_string((int)number_code);
			where_er += "\n";
			str++;
			break;
		case 1:
		case 2:
			if (!(ifst >> param))//параметр не число
			{
				cout << "Error. Wrong parameter" << endl;
				cout << where_er << "!!ERROR POSITION!!" << endl;
				return 4;
			}
			where_er += to_string(param);
			where_er += "\n";
			str++;
			break;

		case 3:
			if (!(ifst >> buf)) //Внезапный конец файла 
			{
				cout << "Error. Wrong measure" << endl;
				cout << where_er << "!!ERROR POSITION!!" << endl;
				return 5;
			}
			where_er += buf;
			where_er += "\n";
			str++;
			break;
		}

	}
	if ((str - 1) % 4 != 3)
	{
		cout << "Error. Unexpected end of file" << endl;
		return 6;

	}

	//Проверка оконечна без ошибок

	ifst.close();
	ifst.open(argv[1]);

	cout << "Start" << endl;
	container* begin;
	//container con;
	Init(&begin);
	In(&begin, ifst);
	ofst << "Filled container. " << endl;
	Out(&begin, ofst);
	begin = Sort_c(&begin);
	ofst << "After sort." << endl;
	Out(&begin, ofst);
	OutComplex(*begin, ofst);
	Clear(&begin);
	ofst << "Empty container. " << endl;
	Out(&begin, ofst);
	cout << "Stop" << endl;
	return 0;
}