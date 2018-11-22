#ifndef LESCLIENTS_H
#define LESCLIENTS_H

#include <string>
#include <iostream>
#include <iomanip>
#include <list>


class Client;

class LesClients{
private:
    /**
     * @brief lesClients, stock les utilisateurs
     */
    std::list<Client*> lesClients;

public:
    /**
     * @brief LesClients, Constructeur
     */
    LesClients();

    /**
     * @brief ajouterClient
     * @param pseudo
     * @param mdp
     */
    void ajouterClient(std::string pseudo, std::string mdp);

    /**
     * @brief utilisateurExiste
     * @param pseudo
     * @return vrai si le client existe
     */
    bool utilisateurExiste(std::string pseudo);

    /**
     * @brief authentifier
     * @param pseudo
     * @param mdp
     * @return le client que l'on vien d'authentifier
     */
    Client* authentifier(std::string pseudo, std::string mdp);

    /**
     * @brief getClient
     * @param pseudo
     * @return le Client possedant ce pseudo
     */
    Client* getClient(std::string pseudo);

    /**
     * @brief verifierMotDePasse
     * @param leClient
     * @param mdp
     * @return vrai si le mot de passe correspond au mot de passe du clien en question
     */
    bool verifierMotDePasse(Client& leClient ,std::string mdp);

};

#endif // LESCLIENTS_H
