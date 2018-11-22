#ifndef INKA_H
#define INKA_H

class Inka
{
    // Liste des clients
    LesClients clients;
    // Client authentifié
    Client clientAuthentifie;
    
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
    void ajouterClient(String pseudo, String mdp);
    
    /**
     * @brief authentifier identifie un client dans la liste des clients
     * @param pseudo Pseudo du client
     * @param mdp Mot de passe du client
     */
    void authentifier(String pseudo, String mdp);
    
    /**
     * @brief creerPaquet
     * @param nomPaquet
     */
    void creerPaquet(String nomPaquet);
    
};

#endif // INKA_H
