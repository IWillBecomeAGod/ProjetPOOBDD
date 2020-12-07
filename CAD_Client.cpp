#include "CAD_Client.h"
namespace composant {
	CAD_Client::CAD_Client(void)
	{
		this->rq_sqlclient = "RIEN";
		this->cnxclient = "";
		this->CNXclient = gcnew MySqlConnection(this->cnxclient);
		this->CMDclient = gcnew MySqlCommand(this->rq_sqlclient, this->CNXclient);
		this->CMDclient->CommandType = CommandType::Text;
	}
	int CAD_Client::actionRowsIDclient(String^ rq_sqlclient)
	{
		int id;
		this->setSQLclient(rq_sqlclient);
		this->CMDclient->CommandText = this->rq_sqlclient;
		this->CNXclient->Open();
		id = Convert::ToInt32(this->CMDclient->ExecuteScalar());
		this->CNXclient->Close();
		return id;
	}
	void CAD_Client::actionRowsclient(String^ rq_sqlclient)
	{
		this->setSQLclient(rq_sqlclient);
		this->CMDclient->CommandText = this->rq_sqlclient;
		this->CNXclient->Open();
		this->CMDclient->ExecuteNonQuery();
		this->CNXclient->Close();
	}
	DataSet^ CAD_Client::getRowsclient(String^ rq_sqlclient, String^ dataTableName)
	{
		this->setSQLclient(rq_sqlclient);
		this->DAclient = gcnew MySqlDataAdapter(this->CMDclient);
		this->CMDclient->CommandText = this->rq_sqlclient;
		this->DSclient = gcnew DataSet();
		this->DAclient->Fill(this->DSclient, dataTableName);
		return this->DSclient;
	}
	void CAD_Client::setSQLclient(String^ rq_sqlclient)
	{
		if (rq_sqlclient == "" || rq_sqlclient == "RIEN")
		{
			this->rq_sqlclient = "RIEN";
		}
		else
		{
			this->rq_sqlclient = rq_sqlclient;
		}
	}
}
