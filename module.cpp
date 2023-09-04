#include <iostream>
#include "module.h"
void itc_fio(void) {
	std::cout << "Sher ";
	itc_name();
	std::cout << "Kar ";
}
void itc_name(void) {
	std::cout << "Igr ";
}
int itc_abs(int num) {
	int f;
	if (num < 0)
		f = num * -1;
	else
		f = num;
	return f;
}
double itc_fabs(double num) {
	double f = fabs(num);
	return f;
}
int itc_revnbr(int num) {
	int a, b, c;
	a = num % 10;
	b = (num % 100 - a)/10;
	c = num / 100;
	return (a * 100) + (b * 10) + c;
}
bool itc_iseven(int num) {
	return num % 2 == 0;
}
int itc_max(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}