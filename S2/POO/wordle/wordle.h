#include <iostream>
#include <vector>
#include <string> 
#include <cstring> 
#include <fstream>
using namespace std;

enum CharacterStatus
{
    Correct,
    Misplaced,
    Wrong // le caractère est correct, mal placé ou incorrect
};
enum TrialStatus
{
    PlayerWon,
    WordIsUnknown,
    KeepLooking // le mot proposé est le bon, un mot inconnu,→ ou on a pas encore trouvé

};

struct TrialResult
{
    string word;                        // mot testé
    vector<CharacterStatus> characters; // validité de chaque caractère
    TrialStatus status;                 // état de la partie
    int remainingTrials;                // nombre d'essais restant
    bool gameOver;                      // vrai lorsque la partie est terminée
};

class Wordle
{
private:
    vector<string> wordList;         // liste de mots
    size_t targetSize;               // taille du mot choisi (typiquement 5)
    int numRounds;                   // nombre d'essais maximum (typiquement 6)
    string target;                   // mot cible lors d'une partie
    int currentRound;                // nombre effectif d'essais pendant la partie

    
    bool loadWords(string filename); // fonction qui charge la liste de mots à,→ partir d'un fichier
    void pickRandomTarget();      // choix aléatoire du mot cible
    bool wordExists(string word); // teste si un mot existe dans la liste
    char *toChar(string wordString);//transforme un string en teableau de char*

public:
    Wordle(int Size, int Rounds); // constructeur pour une partie
    void startGame();                              // commence une partie
    TrialResult checkGuess(string word);           // essayer un mot et récupérer le résultat
    void testchar();
};