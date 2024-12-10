// Game Stats 3.0
// Demonstrates constants

#include <iostream>
using namespace std;

int main()
{
	double TAX = 0.30;
	const double PEN = 1.20;
	const double PENCIL = 2.50;
	const double ERASER = 0.90;

	double pen_cost = PEN + TAX;
	double pencil_cost = PENCIL + TAX;
	double eraser_cost = ERASER + TAX;
	cout << "List cost:" << endl;
	cout << "Pen: " << pen_cost << endl;
	cout << "Pencil: " << pencil_cost << endl;
	cout << "Eraser: " << eraser_cost << endl;

	double balance = 250.15;
	cout << "My balance before purchase: " << balance << endl;
	enum purchase {SCHEDULE = 49, NOTEPAD, CALCULATOR = 35};
	purchase my_purchase = NOTEPAD;
	cout << "my balance after purchase a notepad: " << (balance - NOTEPAD) << endl;

		system("pause");
		return 0;
}