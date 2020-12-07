#include "svc_gestionClient.h"

namespace service
{
	svc_gestionClient::svc_gestionClient(void)
	{
		this->cadclient = gcnew composant::CAD_Client();
		this->client = gcnew composant::map_TBClient();
		this->dsclient = gcnew System::Data::DataSet();
	}
	DataSet^ svc_gestionClient::afficherclient(String^ dataTableName)
	{
		this->dsclient->Clear();
		this->dsclient = this->cadclient->getRowsclient(this->client->SELECTCli(), dataTableName);
		return this->dsclient;
	}
	int svc_gestionClient::ajouterclient(String^ NomClient, String^ PrenomClient, String^ DateNaissance)
	{
		int IDClient;
		this->client->setNomCli(NomClient);
		this->client->setPrenomCli(PrenomClient);
		this->client->setDateNaissance(DateNaissance);
		IDClient = this->cadclient->actionRowsIDclient(this->client->INSERTCli());
		return IDClient;
	}
	void svc_gestionClient::modifierclient(String^ NomClient, String^ PrenomClient, String^ DateNaissance)
	{
		this->client->setNomCli(NomClient);
		this->client->setPrenomCli(PrenomClient);
		this->client->setDateNaissance(DateNaissance);
		this->cadclient->actionRowsclient(this->client->UPDATECli());
	}
	void svc_gestionClient::supprimerclient(int IDClient)
	{
		this->client->setIDCli(IDClient);
		this->cadclient->actionRowsclient(this->client->DELETECli());
	}
}
