/*
 ============================================================================
 Name        : AccountAPI.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include "Account.h"


int main(void)
{
    UserAccount acc = createAccount("tom smith", "qwerty"); // создаем состояние

    printName(acc);     // операции с состоянием

    //printf("%s\n", acc->password); // ! Ошибка, т.к. определение структуры инкапсулировано

    deleteAccount(acc); // удаляем состояние
}
