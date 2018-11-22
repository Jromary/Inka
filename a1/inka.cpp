#include "inka.hpp"

Inka::Inka()
{
public:
    /**
     * @brief Inka Constructeur de Inka
     * @param clients Liste des clients
     */
    Inka(LesClients clients){
        this->clients = clients;
    }

    /**
     * @brief ajouterClient Ajoute un client dans la liste des clients
     * @param pseudo Pseudo du client
     * @param mdp Mot de passe du client
     */
    void ajouterClient(String pseudo, String mdp){
        Client client = new client(pseudo,mdp);
        clients.add(client);
    }
    
    /**
     * @brief authentifier identifie un client dans la liste des clients
     * @param pseudo Pseudo du client
     * @param mdp Mot de passe du client
     */
    void authentifier(String pseudo, String mdp){
        Client client = clients.getClient(pseudo,mdp);
        this->clientAuthentifie = client;
    }
    
    /**
     * @brief creerPaquet
     * @param nomPaquet
     */
    void creerPaquet(String nomPaquet){
        this->clientAuthentifie.creerPaquet(nomPaquet);
    }
    
}
