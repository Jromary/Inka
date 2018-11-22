#ifndef PAQUET_HPP
#define PAQUET_HPP

//La classe paquet

class Carte;

/**
 * @brief La classe paquet est la classe qui défini un paquet de
 *        cartes, elle possède donc plusieurs cartes
 * @version 1
 * @version Angela Ipseiz
 */
class Paquet {

    ///@brief le nom du paquet
    std::string nom;

    public:
        ///@brief Le constructeur permet de remplir le champ
        ///       nom de la classe en fonciton du paramètre passé.
        ///
        /// @param nom le nom du paquet
        ///
        /// @see nom
        Paquet(){}
};

#endif // PAQUET_HPP

