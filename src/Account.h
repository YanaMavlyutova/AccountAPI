/*
 * Account.h
 *
 *  Created on: 27 Apr 2024
 *      Author: RobotComp.ru
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

struct Account; // только объявление структуры без ее определения в API модуля

struct Account* createAccount(char* username, char* pass);
void printName(struct Account* acc);
void deleteAccount(struct Account* acc);

#endif /* ACCOUNT_H_ */
