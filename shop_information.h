/*****************************************************************//**
 * \file   shop_information.h
 * \brief  ���������� � �����
 * 
 * \author 
 * \date   May 2020
 * 
 *         ������������ ���� � ������� shop_information ���������� ���������� � �����,
 *         ������ ����������� � ������ �����, � ����� ������� ��� ������ � ���� � �������. 
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
 * ����� ���������� ���������� � ����
 * �������� ����,
 * ���������� ����������� � ����, ���������� �����,
 * ������ ������� ����������� ����, ������ ������� ����� ����,
 * ��������� �� ������ ����������� � �����.
 */

class shop_information
{
private:
    /// �������� ����
    std::string shop_name;
    /// ���������� ����������� � ����
    int sotrudnik_count;
    /// ���������� ���
    int ciz_count;
    /// ������ ������� �����������
    int mas_size_sotrudnik;
    /// ������ ������� ���
    int mas_size_ciz;
    /// ������ ��� ��� �������� � �������
    int ciz_size;
    /// ������ ����������� ��� �������� � �������
    int sotrudnik_size;
    /// ������ �����������
    sotrudnik_information *mas_sotrudnik;
    /// ������ ���
    ciz_information *mas_ciz;

public:
    /// ���������� 
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
    /// Getter ���������� ����������� � ����
    int Getsotrudnik_count()
    {
        return sotrudnik_count;
    }
    /// Setter ���������� ����������� � ����
    void setsotrudnik_count(int tmp_sotrudnik_count)
    {
        sotrudnik_count = tmp_sotrudnik_count;
    }
    /// Getter ���������� ���
    int Getciz_count()
    {
        return ciz_count;
    }
    /// Setter ���������� ���
    void setciz_count(int tmp_ciz_count)
    {
        ciz_count = tmp_ciz_count;
    }
    /// Getter ������� ������� �����
    int Getmas_size_ciz()
    {
        return mas_size_ciz;
    }
    /// Setter ������� ������� �����
    void setmas_size_ciz(int tmp_mas_size_ciz)
    {
        mas_size_ciz = tmp_mas_size_ciz;
    }
    /// Getter ������� ������� �����������
    int Getmas_size_sotrudnik()
    {
        return mas_size_sotrudnik;
    }
    /// Setter ������� ������� �����������
    void setmas_size_sotrudnik(int tmp_mas_size)
    {
        mas_size_sotrudnik = tmp_mas_size;
    }
    /// Getter �������� ����
    std::string &Getshop_name()
    {
        return shop_name;
    }
    /// Setter �������� ����
    void setshop_name(std::string tmp_shop_name)
    {
        shop_name = tmp_shop_name;
    }
    /// Getter ������� ��� (��� �������� � �������)
    int Getciz_size()
    {
        return ciz_size;
    }
    /// Setter ������� ��� (��� �������� � �������)
    void setciz_size(int tmp_ciz_size)
    {
        ciz_size = tmp_ciz_size;
    }
    /// Getter ������� ������� ����������� (��� ������� � �������)
    int Getsotrudnik_size()
    {
        return sotrudnik_size;
    }
    /// Setter ������ ������� ����������� (��� �������� � �������)
    void setsotrudnik_size(int tmp_sotrudnik_size)
    {
        sotrudnik_size = tmp_sotrudnik_size;
    }
    /// Getter ������� �����������
    sotrudnik_information **Getmas_sotrudnik()
    {
        return &mas_sotrudnik;
    }
    /// Getter ������� �����
    ciz_information **Getmas_ciz()
    {
        return &mas_ciz;
    }
    /// ���������� ������� ���������� �������� ����
    shop_information(std::string shopname_1);
    /// ���������� ������������ 
    shop_information();

    /// ���������� ���������� �����/������
    friend std::ostream &operator<<(std::ostream &out, const shop_information &obj);
    friend std::istream &operator>>(std::istream &in, shop_information &obj);
};
std::ostream &operator<<(std::ostream &out, const shop_information &obj);
std::istream &operator>>(std::istream &in, shop_information &obj);
#endif
