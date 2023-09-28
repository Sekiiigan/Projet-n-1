#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Fonctions.h"
using namespace std;

int main() 
{
    vector<string> lireQuestions(const string& fichierquestions);
    string choisirQuestionAleatoire(const vector<string>& questions);

    vector<string> questions = lireQuestions("C:/Users/keke2/Desktop/Cours/TP/c++/Projet n1/fichierquestions.txt");

    if (questions.empty()) {
        cerr << "Aucune question trouvee dans le fichier." << endl;
        return 1;
    }

    cout << "Bienvenue dans le questionnaire aleatoire !" << endl;

    char reponse;
    do {
        string question = choisirQuestionAleatoire(questions);

        cout << question << endl;
        cin >> reponse;
        
        cout << "Voulez-vous repondre a une autre question ? (O/N) : ";
        cin.ignore(); // Ignorer les caractères en excès dans le tampon
        cin.ignore(); // Ignorer les caractères en excès dans le tampon pour multiple questions
        cin >> reponse;

        

    } while (reponse == 'O' || reponse == 'o');

    cout << "Merci d'avoir repondu aux questions !" << endl;

    return 0;
}