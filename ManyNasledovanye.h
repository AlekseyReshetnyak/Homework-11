#pragma once

#include <iostream>

class Screen
{
protected:
	std::string Matrix_type;
	int hor, vert;
public:
	Screen(std::string a = "", int h = 0, int v = 0);
	virtual ~Screen() {};
	virtual void Print_name() = 0;
};

class Keyboard
{
protected:
	std::string Keyboard_type;
	int Count_key;
public:
	Keyboard(std::string K = "", int c = 0);
	virtual ~Keyboard() {};
	virtual void Print_kb() = 0;
};

class Telephon : public Screen, public Keyboard
{
protected:
	std::string Marka;
public:
	Telephon(std::string M = "", std::string a = "", int h = 0, int v = 0, std::string K = "", int c = 0);
	~Telephon() {};
	void Print_name();
	void Print_kb();
};

class Laptop : public Screen, public Keyboard
{
protected:
	std::string Marka;
public:
	Laptop(std::string M = "", std::string a = "", int h = 0, int v = 0, std::string K = "", int c = 0);
	~Laptop() {};
	void Print_name();
	void Print_kb();
};

class Comptuter : public Screen, public Keyboard
{
protected:
	std::string Marka;
public:
	Comptuter(std::string M = "", std::string a = "", int h = 0, int v = 0, std::string K = "", int c = 0);
	~Comptuter() {};
	void Print_name();
	void Print_kb();
};