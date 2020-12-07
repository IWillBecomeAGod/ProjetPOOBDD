#pragma once
#include "CAD_Client.h"
#include "map_TBClient.h"
using namespace System;
using namespace System::Data;
using namespace System::Xml;
using namespace MySql::Data::MySqlClient;

namespace service {
	ref class svc_gestionClient
	{
	private:
		composant::CAD_Client^ cadclient;
		composant::map_TBClient^ client;
		DataSet^ dsclient;
	public:
		svc_gestionClient(void);
		DataSet^ afficherclient(String^);
		int ajouterclient(String^, String^, String^);
		void modifierclient(String^, String^, String^);
		void supprimerclient(int);
	};
}
