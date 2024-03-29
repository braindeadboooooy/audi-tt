/*****************************************************************//**
 * \file   help.cpp
 * \brief  Меню
 * 
 * \author 
 * \date   May 2020
 * 
 *         Исходный файл: список меню и ошибки меню
 *
 *********************************************************************/
#include "help.h"
using namespace std;

/**
 * Меню
 */
void help::showmenu()
{
    cout << "Информация о предприятии" << endl;
    cout << "1. Добавить сотрудника" << endl;
    cout << "2. Информация о сотрудниках" << endl;
    cout << "3. Добавить СИЗ" << endl;
    cout << "4. Информация о СИЗ" << endl;
    cout << "5. Добавить цех" << endl;
    cout << "6. Информация о цехах" << endl;
    cout << "7. Удалить сотрудника" << endl;
    cout << "8. Рассчитать кол-во СИЗ" << endl;
    cout << "9. Выход" << endl;
    cout << ">";
}
/**
 * Ошибки меню
 */
bool help::isvalid(int ch)
{
    if ((ch < 1) || (ch > MAX_MENU_NUMBER))
    {
        cout << "Неверное значение" << endl;
        cout << "Введите еще раз" << endl;
        return false;
    }
    else
        return true;
}