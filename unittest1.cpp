//#include "stdafx.h"
#include "CppUnitTest.h"
#include "../3PP/complex_atd.h"
#include "../3PP/rational_atd.h"
#include "../3PP/container_atd.h"
#include "../3PP/number_atd.h"
#include "../3PP/pol_coor_atd.h"
#include <string.h>
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace simple_numbers;
using namespace std;

namespace simple_numbers {
	float complex_ToFloat(complex &c);
	float rational_ToFloat(rational &r);
	float pol_coor_ToFloat(pol_coor &c);
	void In(complex &c, ifstream &ifst);
	void In(rational &r, ifstream &ifst);
	void In(pol_coor &pc, ifstream &ifst);
	void Out(complex &c, ofstream &ofst);
	void Out(rational &r, ofstream &ofst);
	void Out(pol_coor &pc, ofstream &ofst);
	void In(container **begin, ifstream &ifst);
	void Out(container **begin, ofstream &ofst);
	container* Sort_c(container **con);
	void OutComplex(container &con, ofstream &ofst);
	bool Compare_n(number *first, number *second);
} // end simple_numbers namespace

namespace UnitTest1
{
	TEST_CLASS(complex_test)
	{
	public:

		TEST_METHOD(complexToFloat)
		{
			complex c;
			c.x = 6;
			c.y = -8;
			float exp = 10;
			Assert::AreEqual(exp, complex_ToFloat(c));
		}

		TEST_METHOD(complexIn)
		{
			complex c;
			ifstream test_file("../3PP/Test_Files/complex_In.txt");
			In(c, test_file);
			float expected_x = 15.8;
			float expected_y = 87.954;
			Assert::AreEqual(expected_x, c.x);
			Assert::AreEqual(expected_y, c.y);
		}

		TEST_METHOD(complexOut)
		{
			complex c;
			c.x = 3.4;
			c.y = 5.7;
			ofstream test_file_out("../3PP/Test_Files/Complex_Out.txt");
			Out(c, test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3PP/Test_Files/Complex_Out.txt");
			string str1;
			getline(test_file_in, str1);
			string exp1 = "It is Complex number: 3.4 + i * (5.7)";
			Assert::AreEqual(exp1, str1);
		}
	};

	TEST_CLASS(rational_test)
	{
	public:

		TEST_METHOD(rationalToFloat)
		{
			rational r;
			r.a = 1;
			r.b = 5;
			float exp = 0.2;
			Assert::AreEqual(exp, rational_ToFloat(r));
		}

		TEST_METHOD(rationalIn)
		{
			rational r;
			ifstream test_file("../3PP/Test_Files/rational_In.txt");
			In(r, test_file);
			int expected_a = 15;//â ôàéëå 15,8
			int expected_b = 87;//â ôàéëå 87,954
			Assert::AreEqual(expected_a, r.a);
			Assert::AreEqual(expected_b, r.b);
		}

		TEST_METHOD(rationalOut)
		{
			rational r;
			r.a = 3;
			r.b = 5;
			ofstream test_file_out("../3PP/Test_Files/Rational_Out.txt");
			Out(r, test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3PP/Test_Files/Rational_Out.txt");
			string str1;
			getline(test_file_in, str1);
			string exp1 = "It is Rational number: 3/5";
			Assert::AreEqual(exp1, str1);

		}
	};

	TEST_CLASS(pol_coor_test)
	{
	public:

		TEST_METHOD(pol_coorToFloat)
		{
			pol_coor pc;
			pc.phi = 5.2;
			pc.d = 7;
			float exp = 12.2;
			Assert::AreEqual(exp, pol_coor_ToFloat(pc));
		}

		TEST_METHOD(pol_coorIn)
		{
			pol_coor pc;
			ifstream test_file("../3PP/Test_Files/pol_coor_In.txt");
			In(pc, test_file);
			float expected_phi = 45.8;
			int expected_d = 87;//â ôàéëå 87,954
			Assert::AreEqual(expected_phi, pc.phi);
			Assert::AreEqual(expected_d, pc.d);

		}
		TEST_METHOD(pol_coorOut)
		{
			pol_coor pc;
			pc.phi = 30.8;
			pc.d = 5;
			ofstream test_file_out("../3PP/Test_Files/Pol_coor_Out.txt");
			Out(pc, test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3PP/Test_Files/Pol_coor_Out.txt");
			string str1;
			getline(test_file_in, str1);
			string exp1 = "It is Polar coordinates: (30.8, 5)";
			Assert::AreEqual(exp1, str1);

		}

	};

	TEST_CLASS(Compare)
	{
	public:

		TEST_METHOD(Compare_test)
		{
			number *pc = new number;
			number *c = new number;
			c->k = number::key::ÑOMPLEX;
			c->c.x = 5;
			c->c.y = 4;
			pc->k = number::key::RATIONAL;
			pc->pc.phi = 10.96;
			pc->pc.d = 30;
			bool exp = true;
			Assert::AreEqual(exp, Compare_n(c,pc));
		}

	};


	TEST_CLASS(containerTest)
	{
	public:

		TEST_METHOD(container_In)
		{
			container *begin = new container;
			ifstream test_file_in("../3PP/Test_files/Container_In.txt");
			In(&begin, test_file_in);
		
			float exp = 12;
			Assert::AreEqual(exp, begin->num->c.x);
			exp = 7;
			Assert::AreEqual(exp, begin->num->c.y);
			string str1 = begin->num->ed_izm;
			string str2 = "litr";
			Assert::AreEqual(str1, str2);


			int expi = 45;
			Assert::AreEqual(expi, begin->next->num->r.a);
			expi = 7;
			Assert::AreEqual(expi, begin->next->num->r.b);
			str1 = begin->next->num->ed_izm;
			str2 = "metr";
			Assert::AreEqual(str1, str2);

			//Assert::AreEqual(number::key::POL_COOR, begin->next->next->num->k);
			exp = 12;
			Assert::AreEqual(exp, begin->next->next->num->pc.phi);
			expi = 78;
			Assert::AreEqual(expi, begin->next->next->num->pc.d);
			str1 = begin->next->next->num->ed_izm;
			str2 = "litr";
			Assert::AreEqual(str1, str2);
		}
		TEST_METHOD(containerOut)
		{
			container *begin = new container;
			number *c = new number;
			c->k = number::key::ÑOMPLEX;
			c->c.x = 5.2;
			c->c.y = 7.95;
			c->ed_izm = "metr";
			begin->num = c;

			container *second = new container;
			number *r = new number;
			r->k = number::key::RATIONAL;
			r->r.a = 78;
			r->r.b = 75;
			r->ed_izm = "litr";
			second->num = r;
			begin->next = second;

			container *therd = new container;
			number *pc = new number;
			pc->k = number::key::POL_COOR;
			pc->pc.phi = 90;
			pc->pc.d = 71;
			pc->ed_izm = "sm";
			therd->num = pc;
			therd->next = begin;
			begin->next->next = therd;

			ofstream test_file_out("../3PP/Test_Files/Container_Out.txt");

			Out(&begin, test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3PP/Test_Files/Container_Out.txt");
			string str[10];
			for (int i = 0;i < 10;i++)
			{
				getline(test_file_in, str[i]);
			}
			
			string exp[10];
			exp[0] = "Container contains 3 elements.";
			exp[1] = "1: It is Complex number: 5.2 + i * (7.95)";
			exp[2] = "float form: 9.49961";
			exp[3] = "measure = metr";
			exp[4] = "2: It is Rational number: 78/75";
			exp[5] = "float form: 1.04";
			exp[6] = "measure = litr";
			exp[7] = "3: It is Polar coordinates: (90, 71)";
			exp[8] = "float form: 161";
			exp[9] = "measure = sm";

			for(int i = 0; i<10;i++)

				Assert::AreEqual(exp[i], str[i]);
			
		}
		TEST_METHOD(Sort)
		{
			container *begin = new container;
			number *c = new number;
			c->k = number::key::ÑOMPLEX;
			c->c.x = 5.2;
			c->c.y = 7.95;
			c->ed_izm = "metr";
			begin->num = c;

			container *second = new container;
			number *r = new number;
			r->k = number::key::RATIONAL;
			r->r.a = 78;
			r->r.b = 75;
			r->ed_izm = "litr";
			second->num = r;
			begin->next = second;

			container *therd = new container;
			number *pc = new number;
			pc->k = number::key::POL_COOR;
			pc->pc.phi = 90;
			pc->pc.d = 71;
			pc->ed_izm = "sm";
			therd->num = pc;
			therd->next = begin;
			begin->next->next = therd;

			container* out = Sort_c(&begin);
			string str = out->num->ed_izm;
			string str1 = "sm";
			Assert::AreEqual(str, str1);
			str = out->next->num->ed_izm;
			str1 = "metr";
			Assert::AreEqual(str, str1);
			str = out->next->next->num->ed_izm;
			str1 = "litr";
			Assert::AreEqual(str, str1);
		}
		TEST_METHOD(Filtr)
		{
			container *begin = new container;
			number *c = new number;
			c->k = number::key::ÑOMPLEX;
			c->c.x = 5.2;
			c->c.y = 7.95;
			c->ed_izm = "metr";
			begin->num = c;

			container *second = new container;
			number *r = new number;
			r->k = number::key::RATIONAL;
			r->r.a = 78;
			r->r.b = 75;
			r->ed_izm = "litr";
			second->num = r;
			begin->next = second;

			container *therd = new container;
			number *pc = new number;
			pc->k = number::key::POL_COOR;
			pc->pc.phi = 90;
			pc->pc.d = 71;
			pc->ed_izm = "sm";
			therd->num = pc;
			therd->next = begin;
			begin->next->next = therd;

			ofstream test_file_out("../3PP/Test_Files/Filtr.txt");

			OutComplex(*begin, test_file_out);
			test_file_out.close();
			ifstream test_file_in("../3PP/Test_Files/Filtr.txt");

			string str[4];
			for (int i = 0;i < 4;i++)
			{
				getline(test_file_in, str[i]);
			}

			string exp[4];
			exp[0] = "Only complex numbers.";
			exp[1] = "1: It is Complex number: 5.2 + i * (7.95)";
			exp[2] = "float form: 9.49961";
			exp[3] = "measure = metr";

			for (int i = 0;i < 4;i++)
			{
				Assert::AreEqual(exp[i], str[i]);
			}

		}
	};


}