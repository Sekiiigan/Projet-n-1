#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
#ifndef FONCTIONS_H
#define FONCTIONS_H

vector<string> lireQuestions(const string& fichierquestions);
string choisirQuestionAleatoire(const vector<string>& questions);

#endif //FONCTIONS_H
#include "Fonctions.cpp"