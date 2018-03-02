//7.10
#ifndef MAHEADER_H
#define MAHEADER_H
#include <cstdlib>
#include <vector>
#include <ctime>
#include<string>
using namespace std;
using TexteMessage = vector <string>;

class MailBox {
public:
    //constructeur
    MailBox();
    //modificateur
    void ajouter(const string& expditeur, const string& destinataire,const string& ligneTexte);
    void supprimer(size_t ieme);
    //getteur
    string getMessage(size_t ieme)const;
    size_t getNbMessage()const;

private:
    string out_of_range()const;
    size_t compteur; //nbs de message
    TexteMessage mailbox;
};

class Message {
public:
    //constructeur
    Message(const string& expditeur, const string& destinataire);
    //modificateur
    void ajouter(const string& ligneTexte);
    //Convertir l'object courant en chaîne de caracteres
    string toString()const;
    //affiche le contenu intégral de l'objet courant
    void afficher() const;
    //les accesseurs viendraient s'insérer ici
private:
    const time_t DATE_CREATION = time(NULL); //date-heure de création du message
    string expediteur;
    string destinataire;
    TexteMessage texteMessage; //l'ensemble des lignes constituant le message
};

#endif /* MAHEADER_H */