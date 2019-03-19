#include <iostream>
#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// Сигнатуры требуемых внешних функций
	void Init(container **begin);
	void Clear(container **begin);
	void In(container **begin, ifstream &ifst);
	void Out(container **begin, ofstream &ofst);
}
using namespace simple_numbers;//различие????
int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}

	ifstream ifst(argv[1]);//открытие файлов
	ofstream ofst(argv[2]);
	//ifstream ifst("C:\\in.txt");//открытие файлов
	//ofstream ofst("C:\\out.txt");
	/*char symb;
	while (!ifst.eof())
	{
		ifst >> symb;
		if ((symb < 48 || symb >57) && symb !=45 && symb !=46)
		{
			cout << "incorrect input file!" << endl;
			exit(1);
		}
	}
	ifst.close();
	ifst.open(argv[1]);*/

	cout << "Start" << endl;
	container* begin;
	//container con;
	Init(&begin);
	In(&begin, ifst);
	ofst << "Filled container. " << endl;
	Out(&begin, ofst);
	Clear(&begin);
	ofst << "Empty container. " << endl;
	Out(&begin, ofst);
	cout << "Stop" << endl;
	return 0;
}