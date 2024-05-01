#pragma once
/**
	@file	Sokolova_Class_person.h
	@brief	Заголовочный файл класса граждан
	@copyright	ВоГУ
	@author	Соколова В.А.
	@date	01-05-2024
	@version	1.1.1
\par Использует классы:
	@ref Sokolova_Class_person
\par Содержит класс:
	@ref Sokolova_Class_person
*/

/// Класс описания
/** Содержит данные гражданина и методы для работы с ними
*/
class Sokolova_Class_person
{
protected:
	string Sokolova_Surname;	///< Фамилия
	string Sokolova_Name;	///< Имя
	string Sokolova_Otchestvo;	///< Отчество
	string Sokolova_addres;	///< Адрес
	string Sokolova_gender;	///< Пол
	string Sokolova_education;	///< Образование
	int Sokolova_god;	///< Год рождения

public:

	/// Возвращает список граждан, возраст которых превышает заданный
	/**
	@return вектор-строку с гражданами, возраст которых превышает заданный
	@param person массив граждан, у которых смотрим возраст
	@param age заданный возраст для сравнения
	*/
	vector<Sokolova_Class_person> Sokolova_zadanAge(vector<Sokolova_Class_person> person, int age);

	/// Возвращает список граждан с высшим образованием
	/**
	@return вектор-строку с гражданами с высшим образованием
	@param person массив граждан, у которых смотрим образование
	*/
	vector<Sokolova_Class_person> Sokolova_higherEducation(vector<Sokolova_Class_person> person);

	/// Возвращает список граждан мужского пола
	/**
	@return вектор-строку с гражданами мужского пола
	@param person массив граждан, у которых смотрим пол
	*/
	vector<Sokolova_Class_person> Sokolova_male(vector<Sokolova_Class_person> person);

	/// Конструктор по умолчанию
	/** Создаёт гражданина без инициализации полей
	*/
	Sokolova_Class_person();

	/// Конструктор с инициализацией полей
	/** Создаёт гражданина с инициализацией полей
	\param Sokolova_Surname	Фамилия
	\param Sokolova_Name	Имя
	\param Sokolova_Otchestvo	Отчество
	\param Sokolova_addres	Адрес
	\param Sokolova_gender	Пол
	\param Sokolova_education	Образование
	\param Sokolova_god	Год рождения
	*/
	Sokolova_Class_person(string Sokolova_Surname, string Sokolova_Name, string Sokolova_Otchestvo, string Sokolova_addres, string Sokolova_gender, string Sokolova_education, int Sokolova_god);

	/// Деструктор, освобождает память
	~Sokolova_Class_person();
};

