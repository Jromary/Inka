#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class LesPaquets;

class Client{
    // Pseudo de l'utilisateur
    std::string pseudo;
    // mot de passe de l'utilisateur
    std::string mdp;
    // Vrai si l'utilisateur est un admin, Faux sinon
    bool admin;
    // Liste des paquets de l'utilisateur
    LesPaquets paquets;

public:
    /**
     * @brief Client Constructeur de Client
     * @param pseudo Pseudo de l'utilisateur
     * @param mdp Mot de passe de l'utilisateur
     */
    Client(std::string pseudo, std::string mdp);

    /**
     * @brief creerPaquet Créer un paquet pour l'utilisateur
     * @param nomPaquet Nom du paquet
     */
    void creerPaquet(std::string nomPaquet);
};
#endif // CLIENT_H
