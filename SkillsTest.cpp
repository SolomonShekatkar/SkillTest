#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double rate, houra, hourb, hourc, hourd, houre;

cout << "Input your pay rate per hour" << endl;
cin >>rate;
cout << "Input the number of hour(s) you worked each week for five weeks" <<endl;
cin >> houra >> hourb >> hourc >> hourd >> houre;
double hourT = houra + hourb + hourc + hourd + houre;
cout << "Gross Income:"<< "$"<< hourT * rate <<endl;
cout << "Net Income:" << "$" << hourT * rate - (hourT * rate)*0.14  <<endl;
double net = hourT * rate - (hourT * rate)*0.14;
cout << "Clothes and Accessories:" << "$" << net * 0.10 <<endl;
cout << "School Supplies:" << "$" << net * 0.01 << endl;
double cs = net - (net * 0.10 + net * 0.01);
cout << "Savings Bonds:" << "$" << cs * 0.25 << endl;
double bondsmoto = cs * 0.25;
cout << "Additional Savings Bonds:"<< "$" << bondsmoto / 2 << endl;

_getch();
return 0;

}