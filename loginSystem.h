#ifndef LOGINSYSTEM_H_INCLUDED
#define LOGINSYSTEM_H_INCLUDED

#include <map>
#include <cctype>
#include <cmath>
#include <iostream>
#include <string>
#include <regex>
#include<fstream>
#include <stdio.h>
#include <conio.h>


using namespace std;
void emailExist();
//----------------------
void changePass();

void threeChances();


void valid(string str);
bool is_email_valid(const string& email);
bool is_phone_number1_valid(const string& phone_number);
void  passMessage6();
void changePass();
void threeChances();
void insurepassword7(string& password);
void emailExist();
bool isPasswordstrong(string password);

bool is_name_valid(const string& name);


#endif // LOGINSYSTEM_H_INCLUDED
