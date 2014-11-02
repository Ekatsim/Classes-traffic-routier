/*************************************************************************
                           ${file_base}  -  description
                             -------------------
    début                : ${date}
    copyright            : (C) ${year} par ${user}
*************************************************************************/

//BLABLABLA

//---------- Réalisation de la classe <${file_base}> (fichier ${file_name}) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <string>
//------------------------------------------------------ Include personnel
#include "Donnee.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//void GestionNULL ()
//{
//	for (int i=0; tab[i].id = NULL; i++)    //parcours des evenements
//	{
//		for (int j=0; (tab[i+j].min*60+ tab[i+j].sec) - (tab[i].min*60+ tab[i].sec)  < 300; j++)  //on regarde les evenements espaces de moins de 5 min
//		{
//			if (tab[j].id = tab[j+i].id && tab[i+j].state==NULL)  //etude de l'etat pour un même capteur (valeur absente - capteur non fonctionnel)
//			{
//				tab[i+j].state = tab[i].state;
//			}
//		}
//	}
//}
		

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

void STATS_C (const int capteur)
{
	int i;	
	int sommeV = 0;
	int sommeJ = 0;
	int sommeR = 0;
	int sommeN = 0;
	for (i=0; tab[i].id = NULL; i++)
	{
		if (tab[i].state = V)		
		{
			sommeV++;
		}
		if (tab[i].state = J)		
		{
			sommeJ++;
		}
		if (tab[i].state = R)		
		{
			sommeR++;
		}
		if (tab[i].state = N)		
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

void STATS_D7 (const int jour)
{
	int i;	
	int sommeV = 0;
	int sommeJ = 0;
	int sommeR = 0;
	int sommeN = 0;
	for (i=0; tab[i].id = NULL; i++)
	{
		if (tab[i].state = V && tab[i].d7 = jour)		
		{
			sommeV++;
		}
		if (tab[i].state = J && tab[i].d7 = jour)		
		{
			sommeJ++;
		}
		if (tab[i].state = R && tab[i].d7 = jour)		
		{
			sommeR++;
		}
		if (tab[i].state = N && tab[i].d7 = jour)		
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


${file_base}::${file_base} ( )
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
