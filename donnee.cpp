/*************************************************************************
                           ${file_base}  -  description
                             -------------------
    début                : ${date}
    copyright            : (C) ${year} par ${user}
*************************************************************************/

//---------- Réalisation de la classe <${file_base}> (fichier ${file_name}) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <string>
//------------------------------------------------------ Include personnel
#include "Donnee.h"
#include "Evenement.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies



void Donnee::Lecture (const int capteur)
{
	for (int i=0; tab[i].id = NULL; i++)
	{
		if (capteur == tab[i].id)
		{
			cout << tab[i].id << " " << tab[i].year << " " << tab[i].month << " " << tab[i].day << " " << tab[i].hour << " " << tab[i].min << " " << tab[i].sec << " " << tab[i].d7 << " " << tab[i].state << endl;
		}
	}
}

void Donnee::STATS_C (const int capteur)
{
	int i;
	int sommeV = 0;
	int sommeJ = 0;
	int sommeR = 0;
	int sommeN = 0;
	for (i=0; tab[i].id = NULL; i++)
	{
		if (tab[i].state == V)
		{
			sommeV++;
		}
		if (tab[i].state == J)
		{
			sommeJ++;
		}
		if (tab[i].state == R)
		{
			sommeR++;
		}
		if (tab[i].state == N)
		{
			sommeN++;
		}
	}

	int moyV=100*sommeV/i;
	int moyJ=100*sommeJ/i;
	int moyR=100*sommeR/i;
	int moyN=100*sommeN/i;

	cout << "V "<< moyV <<"%" << endl;
	cout << "J "<< moyJ <<"%" << endl;
	cout << "R "<< moyR <<"%" << endl;
	cout << "N "<< moyN <<"%" << endl;
}

void Donnee::STATS_D7 (const int jour)
{
	int i;
	int sommeV = 0;
	int sommeJ = 0;
	int sommeR = 0;
	int sommeN = 0;
	for (i=0; tab[i].id = NULL; i++)
	{
		if (tab[i].state == V && tab[i].d7 == jour)
		{
			sommeV++;
		}
		if (tab[i].state == J && tab[i].d7 == jour)
		{
			sommeJ++;
		}
		if (tab[i].state == R && tab[i].d7 == jour)
		{
			sommeR++;
		}
		if (tab[i].state == N && tab[i].d7 == jour)
		{
			sommeN++;
		}
	}

	int moyV=100*sommeV/i;
	int moyJ=100*sommeJ/i;
	int moyR=100*sommeR/i;
	int moyN=100*sommeN/i;

	cout << "V "<< moyV <<"%" << endl;
	cout << "J "<< moyJ <<"%" << endl;
	cout << "R "<< moyR <<"%" << endl;
	cout << "N "<< moyN <<"%" << endl;
}

int Donne::ConversionH (const Evenement event)
{
    int seconde = event.sec;
    int secjour = seconde % (24*3600); //on calcule le nombre de secondes depuis le debut de la journee
    int heure = secjour/3600; //en prenant le quotient on obtient le nombre d'heures depuis le debut de la journee
    return heure;
}

void Donnee::STATS_D7_H24 (const int jour, const int heure)
{
	int i;
	int sommeV = 0;
	int sommeJ = 0;
	int sommeR = 0;
	int sommeN = 0;
	for (i=0; tab[i].id = NULL; i++)
	{
	    if (tab[i].d7 == jour && tab[i].ConversionH == heure)
		{
            if (tab[i].state == V )
            {
                sommeV++;
            }
            if (tab[i].state == J )
            {
                sommeJ++;
            }
            if (tab[i].state == R )
            {
                sommeR++;
            }
            if (tab[i].state == N )
            {
                sommeN++;
            }
		}
	}

	int moyV=100*sommeV/i;
	int moyJ=100*sommeJ/i;
	int moyR=100*sommeR/i;
	int moyN=100*sommeN/i;

	cout << "V "<< moyV <<"%" << endl;
	cout << "J "<< moyJ <<"%" << endl;
	cout << "R "<< moyR <<"%" << endl;
	cout << "N "<< moyN <<"%" << endl;
}

void MAX_TS ()
{
    int i = 0;
    int j = 0;
    int secMax = 0; // nombre de secondes relative a nbRNMax
    int nbRNMax = 0;  //nombre de capteurs rouges + noirs max
    int nbRNtemp = 0; // nombre de capteurs rouges + noirs temporaire
    Evenement eveMax; // on stocke l'identifant correspondant
    for (i=0;tab[i].id!=NULL;i+=j)
    {
        for (j=0; tab[j].sec < tab[i].sec + 60 ; j++)
        {
            if (tab[j].state==R || tab[j]==N)
            {
                nbRNtemp++;
            }
        }
    if (nbRNtemp>nbRNMax)
    {
        nbRNMax = nbRNtemp;
        secMax = tab[i].sec;
        eveMax = tab[i];
    }
    nbRNtemp = 0;
    }
    // on fait le choix de ne pas prendre en compte le nombre de secondes (ce sont des capteurs emmettant des valeurs toutes les MINUTES)
    int anneeMax = 2014;
    int jourTemp = secMax/(3600*24); //nombre de jours depuis 1 janvier 2014
    int moisMax;    //calcul du mois
    if (jourTemp<32)
    {
        moisMax = 1;
    }
    if (jourTemp>31 && jourTemp<60)
    {
        moisMax = 2;
    }
    if (jourTemp>59 && jourTemp<91)
    {
        moisMax = 3;
    }
    if (jourTemp>90 && jourTemp<121)
    {
        moisMax = 4;
    }
    if (jourTemp>120 && jourTemp<152)
    {
        moisMax = 5;
    }
    if (jourTemp>151 && jourTemp<182)
    {
        moisMax = 6;
    }
    if (jourTemp>181 && jourTemp<213)
    {
        moisMax = 7;
    }
    if (jourTemp>212 && jourTemp<244)
    {
        moisMax = 8;
    }
    if (jourTemp>243 && jourTemp<274)
    {
        moisMax = 9;
    }
    if (jourTemp>273 && jourTemp<305)
    {
        moisMax = 10;
    }
    if (jourTemp>304 && jourTemp<335)
    {
        moisMax = 11;
    }
    else
    {
        moisMax = 12;
    }
    int jourMax = jourTemp/moisMax;
    int heureMax = ConversionH(eveMax);
    int minuteMax = secMax/60 - (jourTemp*24*60 + heureMax*60);

    // on prend le parti que les 1500 capteurs sont actifs au moment évalué
    cout << anneeMax << " " << moisMax << " " << jourMax << " " << heureMax << " " << minuteMax << " " << nbRNMax*100/1500 << " " << "%" << endl;
}

//----------------------------------------------------- Méthodes publiques
// type ${file_base}::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
${file_base} & ${file_base}::operator = ( const ${file_base} & un${file_base} )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
${file_base}::${file_base} ( const ${file_base} & un${file_base} )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <${file_base}>" << endl;
#endif
} //----- Fin de ${file_base} (constructeur de copie)


Donnee::Donnee ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <${file_base}>" << endl;
#endif

} //----- Fin de ${file_base}


${file_base}::~${file_base} ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <${file_base}>" << endl;
#endif
} //----- Fin de ~${file_base}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
