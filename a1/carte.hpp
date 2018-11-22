#ifndef CARTE_HPP
#define CARTE_HPP


//La classe carte


/** @brief La classe Carte est la classe qui définie une carte
 **
 ** @version 1
 ** @author Angela Ipseiz
 **/

class Carte {
    ///@brief l'identifiant de la carte
    int id;
    ///@brief le texte écrit sur le recto de la carte
    std::string recto;
    ///@brief le texte écrit au verso de la carte
    std::string verso;
    ///@brief le nombre de fois où la carte est sortie
    int nb_fois_sortie;
    ///@brief le pourcentage de réussite pour cette carte
    float pourent_reussite;

    public:
        Carte();
};

#endif // CARTE_HPP
