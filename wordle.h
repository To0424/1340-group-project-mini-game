#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
#include <windows.h>
#include <windows.h>
#include <sstream>
#include <fstream>
using namespace std;

string getWord();
int check_matched(string word, string targetWord, vector<int>& number_of_matched);
bool isValid(string word, string targetWord);
void toUpperCase(string& word);
void print_output(string word, vector<int>& matched);
int wordle();

