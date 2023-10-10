/**
 * @file Individu.h
 * @author Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2022-12-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Cette classe représente un Individu et la voiture qu'il conduit s'il en conduit une
 * 
 * @details Au delà de représenter une personne par son nom et son prénom, la classe Individu permet de renseigner également la voiture qu'il conduit
 * 
 * La voiture associée à l'individu est représenté par un pointeur vers un objet de la classe Voiture qui peut être à null si l'individu ne possède pas de voiture
 * 
 * @warning Un Individu possède au plus une voiture
 * 
 * @deprecated La classe Individu sera bientôt remplacé par la classe Personne
 * 
 * @remark Code légèrement modifié pour le TP Doxygen
 */
class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture;

    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu, à partir de son nom (1er paramètre) et de son prénom (2ème paramètre)
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief Détruit un objet Individu
     * 
     */
    ~Individu();

    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return string l'identité de l'individu sous la forme nom prenom
     * 
     * @bug Problème de formatage : un espace en trop
     * 
     * @todo Ajouter un paramètre pour choisir si on veut un afficahge du type nom prenom ou prenom nom
     */
    string toString();        // Affiche l'identité de l'individu
    /**
     * @brief Retourne l'identité de l'individu et la voiture qu'il conduit s'il en a une
     * 
     * @return string sous la forme nom prenom pilote la voiture (marque et immatriculation)
     *
     */

    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Définit l'objet Voiture conduit par l'Individu
     * 
     * @param [in] voiture un pointeur vers l'objet Voiture conduit par l'Individu 
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H