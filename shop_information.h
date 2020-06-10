/*****************************************************************//**
 * \file   shop_information.h
 * \brief  Информация о цехах
 * 
 * \author 
 * \date   May 2020
 * 
 *         Заголовочный файл с классом shop_information содержащий информацию о цехах,
 *         массив сотрудников и массив СИЗов, а также функции для работы с ними и памятью. 
 *  
 *********************************************************************/

#ifndef shop_information_H
#define shop_information_H
#include "ciz_information.h"
#include "sotrudnik_information.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

 /**
 * Класс содержаший информацию о цехе
 * Название цеха,
 * Количество сотрудников в цеху, количество СИЗов,
 * Размер массива сотрудников цеха, размер массива СИЗов цеха,
 * Указатели на массив сотрудников и СИЗов.
 */

class shop_information
{
private:
    /// Название цеха
    std::string shop_name;
    /// Количество сотрудников в цеху
    int sotrudnik_count;
    /// Количество СИЗ
    int ciz_count;
    /// Размер массива сотрудников
    int mas_size_sotrudnik;
    /// Размер массива СИЗ
    int mas_size_ciz;
    /// Размер СИЗ для операций с памятью
    int ciz_size;
    /// Размер сотрудников для операций с памятью
    int sotrudnik_size;
    /// Массив сотрудников
    sotrudnik_information *mas_sotrudnik;
    /// Массив СИЗ
    ciz_information *mas_ciz;

public:
    /// Деструктор 
    ~shop_information()
    {
        if (mas_sotrudnik != NULL)
        {
            delete[] mas_sotrudnik;
        }
        if (mas_ciz != NULL)
        {
            delete[] mas_ciz;
        }
    }
    /// Getter количества сотрудников в цеху
    int Getsotrudnik_count()
    {
        return sotrudnik_count;
    }
    /// Setter количества сотрудников в цеху
    void setsotrudnik_count(int tmp_sotrudnik_count)
    {
        sotrudnik_count = tmp_sotrudnik_count;
    }
    /// Getter количества СИЗ
    int Getciz_count()
    {
        return ciz_count;
    }
    /// Setter количества СИЗ
    void setciz_count(int tmp_ciz_count)
    {
        ciz_count = tmp_ciz_count;
    }
    /// Getter размера массива СИЗов
    int Getmas_size_ciz()
    {
        return mas_size_ciz;
    }
    /// Setter размера массива СИЗов
    void setmas_size_ciz(int tmp_mas_size_ciz)
    {
        mas_size_ciz = tmp_mas_size_ciz;
    }
    /// Getter размера массива сотрудников
    int Getmas_size_sotrudnik()
    {
        return mas_size_sotrudnik;
    }
    /// Setter размера массива сотрудников
    void setmas_size_sotrudnik(int tmp_mas_size)
    {
        mas_size_sotrudnik = tmp_mas_size;
    }
    /// Getter названия цеха
    std::string &Getshop_name()
    {
        return shop_name;
    }
    /// Setter названия цеха
    void setshop_name(std::string tmp_shop_name)
    {
        shop_name = tmp_shop_name;
    }
    /// Getter размера СИЗ (для операций с памятью)
    int Getciz_size()
    {
        return ciz_size;
    }
    /// Setter размера СИЗ (для операций с памятью)
    void setciz_size(int tmp_ciz_size)
    {
        ciz_size = tmp_ciz_size;
    }
    /// Getter размера массива сотрудников (для оперций с памятью)
    int Getsotrudnik_size()
    {
        return sotrudnik_size;
    }
    /// Setter размер массива сотрудников (для операций с памятью)
    void setsotrudnik_size(int tmp_sotrudnik_size)
    {
        sotrudnik_size = tmp_sotrudnik_size;
    }
    /// Getter массива сотрудников
    sotrudnik_information **Getmas_sotrudnik()
    {
        return &mas_sotrudnik;
    }
    /// Getter массива СИЗов
    ciz_information **Getmas_ciz()
    {
        return &mas_ciz;
    }
    /// Объявление функции заполнения названия цеха
    shop_information(std::string shopname_1);
    /// Объявление конструктора 
    shop_information();

    /// Перегрузка операторов ввода/вывода
    friend std::ostream &operator<<(std::ostream &out, const shop_information &obj);
    friend std::istream &operator>>(std::istream &in, shop_information &obj);
};
std::ostream &operator<<(std::ostream &out, const shop_information &obj);
std::istream &operator>>(std::istream &in, shop_information &obj);
#endif
