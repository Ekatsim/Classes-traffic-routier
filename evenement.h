/*************************************************************************
                           ${file_base}  -  description
                             -------------------
    début                : ${date}
    copyright            : (C) ${year} par ${user}
*************************************************************************/

//---------- Interface de la classe <${file_base}> (fichier ${file_name}) ------
#if ! defined ( EVENEMENT_H )
#define EVENEMENT_H
#include <iostream>
#include "Donnee.h"
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <${file_base}>
//
//
//------------------------------------------------------------------------

class Evenement
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

// création de l'amitié avec la classe donnee
friend void Donnee::Lecture (const int capteur);

friend void Donnee::STATS_C (const int capteur);

friend void Donnee::STATS_D7 (const int jour);

friend void Donnee::STATS_D7_H24 (const int jour, const int heure);

friend void Donnee::MAX_TS ();

friend int Donnee::ConversionH(const Evenement event);

//------------------------------------------------- Surcharge d'opérateurs
    ${file_base} & operator = ( const ${file_base} & un${file_base} );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ${file_base} ( const ${file_base} & un${file_base} );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ${file_base} ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~${file_base} ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
int id;
int sec;
int d7;
char state;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <${file_base}>

#endif // XXX_H
