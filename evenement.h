/*************************************************************************
                           ${file_base}  -  description
                             -------------------
    d�but                : ${date}
    copyright            : (C) ${year} par ${user}
*************************************************************************/

//---------- Interface de la classe <${file_base}> (fichier ${file_name}) ------
#if ! defined ( EVENEMENT_H )
#define EVENEMENT_H
#include <iostream>
#include "Donnee.h"
//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <${file_base}>
//
//
//------------------------------------------------------------------------

class Evenement
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

// cr�ation de l'amiti� avec la classe donnee
friend void Donnee::Lecture (const int capteur);

friend void Donnee::STATS_C (const int capteur);

friend void Donnee::STATS_D7 (const int jour);

friend void Donnee::STATS_D7_H24 (const int jour, const int heure);

friend void Donnee::MAX_TS ();

friend int Donnee::ConversionH(const Evenement event);

//------------------------------------------------- Surcharge d'op�rateurs
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
//----------------------------------------------------- M�thodes prot�g�es

private:
//------------------------------------------------------- M�thodes priv�es

protected:
//----------------------------------------------------- Attributs prot�g�s

private:
//------------------------------------------------------- Attributs priv�s
int id;
int sec;
int d7;
char state;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <${file_base}>

#endif // XXX_H
