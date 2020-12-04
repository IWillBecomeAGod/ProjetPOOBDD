#pragma once

#include "CL_CAD.h"
#include "CL_map_TBPERSONNE.h"
#include "CL_map_TBADRESSE.h"

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
		DataSet^ ds;
		DataTable^ tb;
	public:
		CL_svc_gestionPersonnes(void);
		DataSet^ listePersonnes(String^);
		DataSet^ listeAdresses(String^);
		int ajouter(String^, String^, String^, String^, String^, int, String^ );
		void modifier(int, String^, String^, int, int, String^ );
		void supprimer(int);
	};
}