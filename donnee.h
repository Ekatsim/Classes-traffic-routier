/*************************************************************************
                           ${file_base}  -  description
                             -------------------
    début                : ${date}
    copyright            : (C) ${year} par ${user}
*************************************************************************/

//---------- Interface de la classe <${file_base}> (fichier ${file_name}) ------
#if ! defined ( DONNEE_H )
#define DONNEE_H
#include <iostream>

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <${file_base}>
//
//
//------------------------------------------------------------------------ 

class Donnee : public 
{
//----------------------------------------------------------------- PUBLIC

public:

//----------------------------------------------------- Méthodes publiques
void Lecture (const int capteur);
    // Mode d'emploi :
    // lire les valeurs produites par un capteur particulier 
    // Contrat :
    // aucun

void STATS_C (const int capteur);	
    // Mode d'emploi :
    // afficher les statistiques de traffic pour un capteur particulier 
    // Contrat :
    // aucun

void STATS_D7 (const int jour);
    // Mode d'emploi :
    // afficher les statistiques de traffic pour les jours de la semaine 
    // Contrat :
    // aucun

void STATS_D7_H24 (const int jour, const int heure);
    // Mode d'emploi :
    // afficher les statistiques de traffic pour les jours de la semaine à une heure particulière 
    // Contrat :
    // aucun

void MAX_TS ();
    // Mode d'emploi :
    // afficher le moment avec le plus de bouchons 
    // Contrat :
    // aucun


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
evement * tab;
const int taille = 20 000 000;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privées

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <${file_base}>

#endif // XXX_H
