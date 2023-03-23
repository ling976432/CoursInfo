#include "wordle.h"

bool Wordle::loadWords(string filename)
{
    string fileName = "word.txt";
    string line;
    ifstream File;
    cout << targetSize << endl;

    int i = 0;

    File.open(fileName);
    cout << "fichier ouvert avec succés" << endl;
    if (File.is_open())
    {

        while (!File.eof())
        {

            getline(File, line);
            wordList.push_back(line);
        }
        File.close();
    }

    else
    {
        cout << "fichier non ouvert probleme";
        return false;
    }
    cout << "fichier fermé avec succés, les mots sont dans wordlist" << endl;

    return true;
}

void Wordle::pickRandomTarget()
{
    int a = rand() % wordList.size();
    target = wordList[a];
}

bool Wordle::wordExists(string word)
{
    int i = 0;
    while (i < wordList.size())
    {
        if (wordList[i] == word)
        {
            return true;
        }
    }
    return false;
}


Wordle::Wordle(int Size, int Rounds)
{
    srand(time(NULL));
    targetSize = Size;
    vector<string> sizeWordList;
    numRounds = Rounds;
    loadWords("word.txt");
    int i = 0;
    while (i < wordList.size())
    {
        if (targetSize == wordList[i].length())
        {
            sizeWordList.push_back(wordList[i]);
        }
        i++;
    }

    wordList = sizeWordList;

    target = wordList[rand() % wordList.size()];

    cout << "Mot choisi :";
    cout << target << endl;
    cout << "nombre de round restant :";
    cout << numRounds << endl;
    cout << "Taille du mot choisi :";
    cout << targetSize << endl;
}

TrialResult Wordle::checkGuess(string word)
{
    return TrialResult();
}

void Wordle::testchar()
{
    vector<string> resultat;
    string resToPush;
    int nberror = 0;
    int temp;                                       

    cout << "veuillez rentrer un mot de " << targetSize << "lettre" << endl;
    cin >> resToPush;

    char *tabchartest = toChar(resToPush);
    char *tabchartarget = toChar(target);

    
    for (int i = 0; i < targetSize; i++)
    {
        temp=0;
        

        if (tabchartarget[i]==tabchartest[i])
        {

           resToPush = "JUSTE";
            resultat.push_back(resToPush);
            cout << "LETTRE : " << i <<" "<<resultat[i]<<endl;
        }

        else 
        {
            for (int j = 0; j < targetSize; j++)
            {
                if (tabchartest[i]==tabchartarget[j])
                {
                    temp=1;
                    nberror++;
                     resToPush = " MAUVAISE PLACE";
                resultat.push_back(resToPush);
                cout << "LETTRE : " << i <<resultat[i]<< endl;
                    break;
                }

                
            }
            if (temp==0)
            {
                nberror++;
            resToPush = "FAUSSE";
            resultat.push_back(resToPush);
            cout << "LETTRE : " << i <<resultat[i]<< endl;
            }
            
            
            
             

            
        }
    }
    // for (int i = 0; i < targetSize; i++)
    // {
    //     cout<<"la lettre à la position"<<i<<" est une"<<resultat[i]<<endl;
    //     cout<<"il ya "<<nberror<<endl;

    // }
}
char *Wordle::toChar(string wordString)
{
    
    
    size_t size = wordString.size() + 1; // + 1 pour le caractère '\0' de fin
    char *wordChar = new char[size];
    // char** wordCharChar=new char*[size];
    // copier la chaîne
    strncpy(wordChar, wordString.c_str(), size);
    // for (int i = 0; i < size; i++)
    // {
    //     wordCharChar[i]=&wordChar[i];
    // }
    
    
    
    
    

    return wordChar;
}