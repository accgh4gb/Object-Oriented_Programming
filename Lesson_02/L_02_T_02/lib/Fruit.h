#pragma once

#include <iostream>
#include <string>

// 2. Создать классы Apple (яблоко) и Banana (банан),
// которые наследуют класс Fruit (фрукт). У Fruit есть
// две переменные-члена: name (имя) и color (цвет).
// Добавить новый класс GrannySmith, который наследует класс Apple.

class Fruit
{
private:
	std::string FruitName;
	std::string FruitColor;

public:
	Fruit(){}
	Fruit(const std::string& new_name, const std::string& new_color)
	: FruitName(new_name), FruitColor(new_color) {}
	void SetName(const std::string& name) {FruitName = name;}
	void SetColor(const std::string& color) {FruitColor = color;}
	std::string GetName() const {return FruitName;}
	std::string GetColor() const {return FruitColor;}
	//~Fruit();
};
