#pragma once
#include <string>
#include "commande.h"
#include "connex.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
using namespace MySql;
using namespace MySql::Data::MySqlClient;
using namespace MySql::Data::Common;
using namespace MySql::Web;

namespace service
{
	ref class service_gestion_commande
	{
	private:
		composants::connex^ cad;
		composants::commande^ cmmd;
		DataSet^ ds;
	public:
		service_gestion_commande(void);
		DataSet^ listeCommande(String^);
		int ajouter(int, char, int, Decimal, int, int, Decimal);
		void modifier(int, char, int, Decimal, int, int, Decimal);
		void supprimer(int);
		void creer(int, char, int, Decimal, int, int, Decimal);
	};
}
