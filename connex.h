#pragma once
using namespace System::Data;
using namespace System::Xml;
using namespace System;
using namespace MySql;
using namespace MySql::Data;
using namespace MySql::Data::EntityFramework;
using namespace MySql::Data::MySqlClient;
using namespace MySql::Data::Common;
using namespace MySql::Web;
namespace composants
{
	ref class connex
	{
	private:
		String^ cnx;
		String^ rq_MySql;
		MySqlConnection^ CNX;
		MySqlCommand^ CMD;
		MySqlDataAdapter^ DA;
		DataSet^ DS;
		void setMySQL(String^);
	public:
		connex(void);
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};

}

