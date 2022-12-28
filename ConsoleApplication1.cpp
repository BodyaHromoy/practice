#include <iostream>
#include <locale.h>
#include <complex>


int sl(int a, int b);
int vh(int a, int b);
int umn(int a, int b);
int del(int a, int b);

std::complex<double> sinM(std::complex<double> z1, std::complex<double> z2);


int main() {
	setlocale(LC_ALL, "ru-RU");
	int a;
	int b;
	std::cout << "дай мне 1-е число - ";
	std::cin >> a;
	std::cout << "дай мне 2-е число - ";
	std::cin >> b;
	std::cout << "сложение 2-х чисел =  " << sl(a, b) << '\n';
	std::cout << "вычетание 2-х чисел =  " << vh(a, b) << '\n';
	std::cout << "умножение 2-х чисел =  " << umn(a, b) << '\n';
	std::cout << "деление 2-х чисел =  " << del(a, b) << '\n';
	std::cout << "комплекс 2-х чисел =  " << sinM(a, b) << '\n';

}