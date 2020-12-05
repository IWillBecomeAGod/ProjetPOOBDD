#pragma once

#include "CL_CAD.h"
#include "CL_map_TBPERSONNE.h"
#include "CL_map_TBADRESSE.h"
#include "CL_map_TBCLIENT.h"
#include "CL_map_TBARTICLE.h"
#include "CL_map_TBCOMMANDE.h"
#include "CL_map_TBPAIEMENT.h"

using namespace System;
using namespace System::Data;
using namespace System::Xml;
using namespace MySql::Data::MySqlClient;

namespace NS_Svc
{
	ref class CL_svc_gestionPersonnes
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBPERSONNE^ personne;
		NS_Composants::CL_map_TBADRESSE^ adresse;
		NS_Composants::CL_map_TBCLIENT^ client;
		NS_Composants::CL_map_TBARTICLE^ article;
		NS_Composants::CL_map_TBCOMMANDE^ commande;
		NS_Composants::CL_map_TBPAIEMENT^ paiement;

		DataSet^ ds;
		DataTable^ dt;
	public:
		CL_svc_gestionPersonnes(void);
		DataSet^ listePersonnes(String^);
		DataTable^ listePersonnesAfficher(String^);
		int ajouterPersonnel(String^, String^, int, int, String^);
		int ajouterPersonnelNULL(String^, String^, int, String^);
		void modifierPersonnel(int, String^, String^, int, int, String^);
		void modifierPersonnelNULL(int, String^, String^, int, String^);
		void supprimerPersonnel(int);

		int ajouterAdresse(String^, String^, String^);
		void modifierAdresse(int, String^, String^, String^);
		void supprimerAdresse(int);

		int ajouterClient(String^, String^, String^, String^);
		void modifierClient(int, String^, String^, String^, String^);
		void supprimerClient(int);

		int ajouterArticle(int, String^, String^, String^, String^, String^, String^, String^, String^);
		int ajouterArticleNULL(String^, String^, String^, String^, String^, String^, String^, String^);
		void modifierArticle(int, int, String^, String^, String^, String^, String^, String^, String^, String^);
		void modifierArticleNULL(int, String^, String^, String^, String^, String^, String^, String^, String^);
		void supprimerArticle(int);

		int ajouterCommande(int, String^, String^, String^, String^, String^, String^);
		int ajouterCommandeNULL(int, String^, String^, String^, String^, String^);
		void modifierCommande(int, int, String^, String^, String^, String^, String^, String^);
		void modifierCommandeNULL(int, int, String^, String^, String^, String^, String^);
		void supprimerCommande(int);
		void ajouterDateSolde(int, String^);
		void ajouterPrixUTTC(int);

		int ajouterPaiement(int, String^, String^, String^);
		void modifierPaiement(int, int, String^, String^, String^);
		void supprimerPaiement(int);
	};
}