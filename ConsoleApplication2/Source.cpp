#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int task;
	cin >> task;
	if (task == 1)
	{

		/*2.	������ � ���������� �������������� ������� � ������ ����� � ����������, � ����� ��������� ��� ���������(� ��������� ��� ��������).*/
		int shirota, dolgota;
		cin >> shirota;
		cin >> dolgota;
		if (shirota >= 0 && shirota >= 180 )
		{
			cout << "vy nahodites v vostochnom polusharii " << endl;
			if (dolgota >= 0 && dolgota >= 90)
			{
				cout << "Na severnoi dolgote" << endl;
			}
			else
			{
				cout << "Na yuzhnoi dolgote" << endl;
			}
		}
		else
		{
			cout << "vy nahodites v zapadnom polusharii" << endl;
			if (dolgota >= 0 && dolgota >= 90)
			{
				cout << "Na severnoi dolgote" << endl;
			}
			else
			{
				cout << "Na yuzhnoi dolgote" << endl;
			}
		}
		
	}
	if (task == 2)
	{
		/*1.	�������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������ ��������������� 20 % ������.������ ����������������� ��������� � ���� ������(����� �� 1 �� 7).*/
		int time, day, price,tarif;
		cin >> time;
		cin >> day;
		tarif = 50;
		if (day > 0 && day < 6)
		{
			price = time*tarif;
			cout << "Stoimost peregovorov= " << price << endl;
		}
		else
		{
			price = time*tarif*0.8;
			cout << "Stoimost peregovorov= " << price << endl;
		}
	}
	if (task == 3)
	{
		/*2.	��������� ��������� ������� � ������ ������.������ 5 % ���������������, ���� ����� ������� ��������� 500 ����� � 10 % , ���� ������ 1000 �����.*/
		int sum, payment;
		cin >> sum;
		if (sum <= 500)
		{
			payment = sum;
			cout << "Stoimost pokupki " << payment << endl;
		}
		else if (sum > 500 && sum <= 1000)
		{
			payment = sum*0.95;
			cout << "Stoimost pokupki " << payment << endl;
		}
		else
		{
			payment = sum*0.9;
			cout << "Stoimost pokupki " << payment << endl;
		}
	}
	//if (task == 4)
	//{
	//	/*3.	������ � ������ ����� �� 1 �� 12. �� ������ ������ ������ ��������� � ������� ����.���� ������������ ������ ������������ �����, ��������� ������ ������ ��������� �� ������*/
	//	int month;
	//	cin >> month;
	//	switch (month)
	//	{
	//	case1:
	//	case2:
	//	case12:
	//		{cout << "Zima" << endl;
	//		break; }
	//	case3:
	//	case4:
	//	case5:
	//		{cout << "Vesna" << endl;
	//		break; }
	//	case6:
	//	case7:
	//	case8:
	//		{cout << "Leto" << endl;
	//		break; }
	//	case9:
	//	case10:
	//	case11:
	//		{cout << "Osen" << endl;
	//		break; }
	//	}
	//}
	if (task == 5)
	{
		/*4.	���� ��� ����� a, b, c.����������, ������� �� ����� ��� ���� �� ���� ���� ������*/
		int a, b, c;
		if (a == b || a == c || b == c || a == b&&b == c)
		{
			cout << "Sredi chisel est hotya by para ravnyh" << endl;
		}
		else
		{
			cout << "Uslovie ne vypolnyetsya" << endl;
		}
	}
	if (task == 6)
	{
		/*5.	�������� ��������� ��� ����������� ������� ����� �� ������� �������� ������� � ������� ���������(���� � � 6 �� 12, ���� � � 12 �� 18, ����� � � 18 �� 24, ���� � � 0 �� 6).*/
		int time;
		cin >> time;
		if (time >= 0 && time < 7)
		{
			cout << "noch" << endl;
		}
		else if (time >= 6 && time <= 12)
		{
			cout << "Utro" << endl;
		}
		else
		{
			cout << "den" << endl;
		}
	}
	if (task == 7)
	{
		/*1.	���� ����������� �����.����������:
		a.������ �� � ���� ����� 5;
		b.������ �� � ���� ����� �.*/
		int x, a;
		cin >> x;
		cin >> a;
		if (x % 10 == 5 || x / 10 % 10 == 5)
		{
			cout << "V chislo " << x << "vhodit cifra 5" << endl;
		}
		else if (x % 10 == a||x/10%10==a)
			{
				cout << "V chislo " << x << " vhodit cifra " << a << endl;
			}

		
		else
		{
			cout << "Usloviya ne vypolnyutsya" << endl;
		}

	}
	if (task == 8)
	{
		/*2.	�������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99 ��������� � ���� ����� "�������" � ���������� �����.��������, 1 �������, 5 ������, 42 �������*/
		int currency;
		cin >> currency;
		if (currency % 10==1&&currency>11)
		{
			cout << currency << " kopeika" << endl;
		}
		else if (currency % 10 > 1 && currency % 10 < 5||currency%10==0)
		{
			cout << currency << " kopeiki" << endl;
		}
		else if (currency%10>4&&currency%10<10)
		{
			cout << currency << " kopeek" << endl;
		}
		else
		{
			cout << currency << " kopeek" << endl;
		}
	}
	if (task == 9)
	{
		/*3.	���� ����������� �������������� �����.��������, �������� �� ��� �����������(�������� ��������� ����� ������� � ������ ������).*//*1223=3000,200,20,1*/
		int a, p;
		cin >> a;
		p = a % 10*1000 + a / 10 % 10 * 100 + a / 100 % 10 * 10 + a / 1000;
		if(a==p)
		{
			cout << p << " Polindrom" << endl;
		}
		else
		{
			cout << p << " Ne polindrom" << endl;
		}
	}


}