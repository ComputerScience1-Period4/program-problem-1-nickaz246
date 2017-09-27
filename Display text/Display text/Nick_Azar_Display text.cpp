/*
Nick Azar 9/21/17 Period 4
Display Text
Intro to C++ Visual Studios
Printing out statements to console from code
*/

//Libraries
#include <iostream> // cout, cin, end12, <<, >> 
#include <conio.h> // pause() fun access to _getcha() and _kbhit()
//Namespaces
using namespace std;

//Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//Main
void main() {
	char four = '4';
	cout << "Nick Azar"<< endl;
	cout << four<< endl;
	cout << "Hello world"<< endl;
	pause();
	return;
}