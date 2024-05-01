#pragma once
/**
	@file	Sokolova_Class_person.h
	@brief	������������ ���� ������ �������
	@copyright	����
	@author	�������� �.�.
	@date	01-05-2024
	@version	1.1.1
\par ���������� ������:
	@ref Sokolova_Class_person
\par �������� �����:
	@ref Sokolova_Class_person
*/

/// ����� ��������
/** �������� ������ ���������� � ������ ��� ������ � ����
*/
class Sokolova_Class_person
{
protected:
	string Sokolova_Surname;	///< �������
	string Sokolova_Name;	///< ���
	string Sokolova_Otchestvo;	///< ��������
	string Sokolova_addres;	///< �����
	string Sokolova_gender;	///< ���
	string Sokolova_education;	///< �����������
	int Sokolova_god;	///< ��� ��������

public:

	/// ���������� ������ �������, ������� ������� ��������� ��������
	/**
	@return ������-������ � ����������, ������� ������� ��������� ��������
	@param person ������ �������, � ������� ������� �������
	@param age �������� ������� ��� ���������
	*/
	vector<Sokolova_Class_person> Sokolova_zadanAge(vector<Sokolova_Class_person> person, int age);

	/// ���������� ������ ������� � ������ ������������
	/**
	@return ������-������ � ���������� � ������ ������������
	@param person ������ �������, � ������� ������� �����������
	*/
	vector<Sokolova_Class_person> Sokolova_higherEducation(vector<Sokolova_Class_person> person);

	/// ���������� ������ ������� �������� ����
	/**
	@return ������-������ � ���������� �������� ����
	@param person ������ �������, � ������� ������� ���
	*/
	vector<Sokolova_Class_person> Sokolova_male(vector<Sokolova_Class_person> person);

	/// ����������� �� ���������
	/** ������ ���������� ��� ������������� �����
	*/
	Sokolova_Class_person();

	/// ����������� � �������������� �����
	/** ������ ���������� � �������������� �����
	\param Sokolova_Surname	�������
	\param Sokolova_Name	���
	\param Sokolova_Otchestvo	��������
	\param Sokolova_addres	�����
	\param Sokolova_gender	���
	\param Sokolova_education	�����������
	\param Sokolova_god	��� ��������
	*/
	Sokolova_Class_person(string Sokolova_Surname, string Sokolova_Name, string Sokolova_Otchestvo, string Sokolova_addres, string Sokolova_gender, string Sokolova_education, int Sokolova_god);

	/// ����������, ����������� ������
	~Sokolova_Class_person();
};

