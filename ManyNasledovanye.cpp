#include "ManyNasledovanye.h"

Screen::Screen(std::string a, int h, int v)
{
	Matrix_type = a;
	hor = h;
	vert = v;
}

Keyboard::Keyboard(std::string K, int c)
{
	Keyboard_type = K;
	Count_key = c;
}

Telephon::Telephon(std::string M, std::string a, int h, int v, std::string K, int c) : Screen(a, h, v), Keyboard(K, c)
{
	Marka = M;
}

void Telephon::Print_name()
{
	std::cout << Marka << std::endl;
}

void Telephon::Print_kb()
{
	std::cout << "Built-in " << Keyboard_type << " keyboard.\n";
}

Laptop::Laptop(std::string M, std::string a, int h, int v, std::string K, int c) : Screen(a, h, v), Keyboard(K, c)
{
	Marka = M;
}

void Laptop::Print_name()
{
	std::cout << Marka << std::endl;
}

void Laptop::Print_kb()
{
	std::cout << "Built-in " << Keyboard_type << " keyboard.\n";
}

Comptuter::Comptuter(std::string M, std::string a, int h, int v, std::string K, int c) : Screen(a, h, v), Keyboard(K, c)
{
	Marka = M;
}

void Comptuter::Print_name()
{
	std::cout << Marka << std::endl;
}

void Comptuter::Print_kb()
{
	std::cout << "Discrete " << Keyboard_type << " keyboard.\n";
}
