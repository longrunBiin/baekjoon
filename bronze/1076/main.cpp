#include<iostream>
using namespace std;

int main() {
	string color1, color2, color3;
	long long value1, value2, value3;
	cin >> color1;
	cin >> color2;
	cin >> color3;

	if (color1 == "black")value1 = 0;
	else if (color1 == "brown") value1 = 1;
	else if (color1 == "red") value1 = 2;
	else if (color1 == "orange") value1 = 3;
	else if (color1 == "yellow") value1 = 4;
	else if (color1 == "green") value1 = 5;
	else if (color1 == "blue") value1 = 6;
	else if (color1 == "violet") value1 = 7;
	else if (color1 == "grey") value1 = 8;
	else if (color1 == "white") value1 = 9;

	if (color2 == "black")value2 = 0;
	else if (color2 == "brown") value2 = 1;
	else if (color2 == "red") value2 = 2;
	else if (color2 == "orange") value2 = 3;
	else if (color2 == "yellow") value2 = 4;
	else if (color2 == "green") value2 = 5;
	else if (color2 == "blue") value2 = 6;
	else if (color2 == "violet") value2 = 7;
	else if (color2 == "grey") value2 = 8;
	else if (color2 == "white") value2 = 9;

	if (color3 == "black")value3 = 1;
	else if (color3 == "brown") value3 = 10;
	else if (color3 == "red") value3 = 100;
	else if (color3 == "orange") value3 = 1000;
	else if (color3 == "yellow") value3 = 10000;
	else if (color3 == "green") value3 = 100000;
	else if (color3 == "blue") value3 = 1000000;
	else if (color3 == "violet") value3 = 10000000;
	else if (color3 == "grey") value3 = 100000000;
	else if (color3 == "white") value3 = 1000000000;

	cout << (value1 * 10 + value2) * value3;
}