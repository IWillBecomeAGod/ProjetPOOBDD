#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Xml;
using namespace MySql::Data::MySqlClient;
namespace composant {
	ref class CAD_Client
	{
	private:
		String^ cnxclient;
		String^ rq_sqlclient;
		MySqlConnection^ CNXclient;
		MySqlCommand^ CMDclient;
		MySqlDataAdapter^ DAclient;
		DataSet^ DSclient;
		void setSQLclient(String^);
	public:
		CAD_Client(void);
		int actionRowsIDclient(String^);
		void actionRowsclient(String^);
		DataSet^ getRowsclient(String^, String^);
	};

}
