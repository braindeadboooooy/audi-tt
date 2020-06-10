/*****************************************************************//**
 * \file   ciz_information.h
 * \brief  Класс информация о СИЗ
 * 
 * \author 
 * \date   May 2020
 * 
 *         Заголовочный файл с классом ciz_information с информацией о СИЗ и
 *         Функции для работы с информацие о СИЗ
 * 
 *********************************************************************/
#ifndef ciz_information_H
#define ciz_information_H
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

/**
 * Класс ciz_information содержит информацию о средствах индивидуальной защиты
 */
class ciz_information
{
private:
    /// Переменная хранящая название СИЗ
    std::string ciz_name;
    /// Переменная хранящая время использования СИЗ
    unsigned int data;

public:
    /// Функция возвращающая название СИЗ
    std::string &Getciz_name()
    {
        return ciz_name;
    }
    /// Функция возвращающая время использования СИЗ
    unsigned int Getciz_data()
    {
        return data;
    }
    /// Сеттер времени использования СИЗ
    void setciz_data(unsigned int tmp_data)
    {
        data = tmp_data;
    }
    /// Объявление функции заполнения информации о СИЗ
    ciz_information(std::string ciz_name_1, unsigned int data_1);
    /// Объявление конструктора 
    ciz_information();
    
    /// Перегрузка операторов ввода/вывода
    friend std::ostream &operator<<(std::ostream &out, const ciz_information &obj);
    friend std::istream &operator>>(std::istream &in, ciz_information &obj);
};
std::ostream &operator<<(std::ostream &out, const ciz_information &obj);
std::istream &operator>>(std::istream &in, ciz_information &obj);
#endif
