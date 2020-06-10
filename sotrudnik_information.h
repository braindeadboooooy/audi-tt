/*****************************************************************//**
 * \file   sotrudnik_information.h
 * \brief  Класс содержащий информацию о сотрудниках
 * 
 * \author 
 * \date   May 2020
 *  
 *         Заголовочный файл с классом soutrudnik_information с информацией о сотруднике и
 *         Функции для работы с информацие о сотрудниках
 * 
 *********************************************************************/

#ifndef sotrudnik_information_H
#define sotrudnik_information_H
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
/**
 * Класс содержащий информацию о сотруднике
 * Имя Фамилия Отчество соотрудника
 */
class sotrudnik_information
{
private:
    /// Имя сотрудника
    std::string name;
    /// Фамилия сотрудника
    std::string surname;
    /// Отчество сотрудника
    std::string middle_name;

public:
    /// Getter возвращающая значение имени сотрудника
    std::string &Getsotrudnik_name()
    {
        return name;
    }
    /// Getter возвращающий значение фамилии сотрудника
    std::string &Getsotrudnik_surname()
    {
        return surname;
    }
    /// Getter возвращающий значение отчества сотрудника
    std::string &Getsotrudnik_middlename()
    {
        return middle_name;
    }
    /// Объвление конструктора 
    sotrudnik_information();
    /// Объявление функции заполнения информации о сотруднике
    sotrudnik_information(std::string name_1, std::string surname_1, std::string middlename_1);
    /// Перегрузка операторов ввода и вывода
    friend std::ostream &operator<<(std::ostream &out, const sotrudnik_information &obj);
    friend std::istream &operator>>(std::istream &in, sotrudnik_information &obj);
};
std::ostream &operator<<(std::ostream &out, const sotrudnik_information &obj);
std::istream &operator>>(std::istream &in, sotrudnik_information &obj);
#endif
