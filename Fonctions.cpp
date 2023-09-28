#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
using namespace std;

    // Fonction pour lire les questions depuis un fichier .txt et les stocker dans un vecteur
    vector<string> lireQuestions(const string& fichierquestions) {
        vector<string> questions;
        ifstream fichier(fichierquestions);

        if (!fichier) {
            cerr << "Erreur : Impossible d'ouvrir le fichier " << fichierquestions << endl;
            exit(1);
        }

        string ligne;
        while (getline(fichier, ligne)) {
            questions.push_back(ligne);
        }

        fichier.close();
        return questions;
    }
    

// Fonction pour choisir aléatoirement une question parmi les questions disponibles
string choisirQuestionAleatoire(const vector<string>& questions) {
    srand(static_cast<unsigned int>(time(nullptr)));
    int indexAleatoire = rand() % questions.size();
    return questions[indexAleatoire];
}


