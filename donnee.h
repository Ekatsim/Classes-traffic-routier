/*************************************************************************
                           ${file_base}  -  description
                             -------------------
    d�but                : ${date}
    copyright            : (C) ${year} par ${user}
*************************************************************************/

//---------- Interface de la classe <${file_base}> (fichier ${file_name}) ------
#if ! defined ( DONNEE_H )
#define DONNEE_H
#include <iostream>

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <${file_base}>
//
//
//------------------------------------------------------------------------ 

class Donnee : public 
{
//----------------------------------------------------------------- PUBLIC

public:

//----------------------------------------------------- M�thodes publiques
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
    // afficher les statistiques de traffic pour les jours de la semaine � une heure particuli�re 
    // Contrat :
    // aucun

void MAX_TS ();
    // Mode d'emploi :
    // afficher le moment avec le plus de bouchons 
    // Contrat :
    // aucun


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
evement * tab;
const int taille = 20 000 000;
//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <${file_base}>

#endif // XXX_H
