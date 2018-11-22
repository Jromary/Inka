#ifndef INKA_H
#define INKA_H
#include <string>

class LesClients;
class Client;

class Inka
{
    // Liste des clients
    LesClients clients;
    // Client authentifié
    Client* clientAuthentifie;
    
public:
    /**
     * @brief Inka Constructeur de Inka
     * @param clients Liste des clients
     */
    Inka(LesClients clients);

    /**
     * @brief ajouterClient Ajoute un client dans la liste des clients
     * @param pseudo Pseudo du client
     * @param mdp Mot de passe du client
     */
    void ajouterClient(std::string pseudo, std::string mdp);
    
    /**
     * @brief authentifier identifie un client dans la liste des clients
     * @param pseudo Pseudo du client
     * @param mdp Mot de passe du client
     */
    void authentifier(std::string pseudo, std::string mdp);
    
    /**
     * @brief creerPaquet
     * @param nomPaquet
     */
    void creerPaquet(std::string nomPaquet);
    
};

#endif // INKA_H
