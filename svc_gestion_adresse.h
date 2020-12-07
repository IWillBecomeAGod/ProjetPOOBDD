#pragma once
#include "CAD_Client.h"
#include "map_Adresse.h"
using namespace System;
using namespace System::Data;
using namespace System::Xml;
using namespace MySql::Data::MySqlClient;

namespace service {
	ref class svc_gestion_adresse
	{
	private:
		composant::CAD_Client^ cadadresse;
		composant::map_Adresse^ adresse;
		DataSet^ dsadresse;
	public:
		svc_gestion_adresse(void);
		DataSet^ afficheradresse(String^);
		int ajouteradresse(String^, int, String^, String^, int, int);
		void modifieradresse(String^, int, String^, String^, int, int);
		void supprimeradresse(int);
	};
  }
