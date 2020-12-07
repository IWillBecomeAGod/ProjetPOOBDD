#include "map_TBClient.h"
namespace composant
{
	map_TBClient::map_TBClient(void)
	{
		this->IDClient = -1;
		this->NomClient = "RIEN";
		this->PrenomClient = "RIEN";
		this->DateNaissance = "Rien";
	}
	String^ map_TBClient::SELECTCli(void)
	{
		return "SELECT IDClient, NomClient, PrenomClient, DateNaissance,TypeAdresse, N_Rue, Rue, Vilee, CP, IDClient " +
			"FROM TBClient, Adresse" + "WHERE IDClient=IDClient;";
	}
	String^ map_TBClient::INSERTCli(void)
	{
		return "INSERT INTO TBClient " +
			"(NomClient, PrenomClient, DateNaissance,) " +
			"VALUES('" + this->getNomCli() + "', '" + this->getPrenomCli() + "', '" + this->getDateNaissance() + "');SELECT @@IDENTITY;";
	}
	String^ map_TBClient::UPDATECli(void)
	{
		return "UPDATE TBClient " +
			"SET NomClient = '" + this->getNomCli() + "', PrenomClient = '" + this->getPrenomCli() + "', DateNaissance = '" + this->getDateNaissance() + "' " +
			"WHERE(IDClient = " + this->getIdCli() + ");";
	}
	String^ map_TBClient::DELETECli(void)
	{
		return "DELETE FROM TBClient " +
			"WHERE(IDClient = " + this->getIdCli() + ");";
	}
	void map_TBClient::setIDCli(int IDClient)
	{
		if (IDClient > 0)
		{
			this->IDClient = IDClient;
		}
	}
	void map_TBClient::setPrenomCli(String^ PrenomClient)
	{
		if (PrenomClient != "")
		{
			this->PrenomClient = PrenomClient;
		}
	}
	void map_TBClient::setNomCli(String^ NomClient)
	{
		if (NomClient != "")
		{
			this->NomClient = NomClient;
		}
	}
	void map_TBClient::setDateNaissance(String^ DateNaissance)
	{
		if (DateNaissance != "")
		{
			this->DateNaissance = DateNaissance;
		}
	}
	int map_TBClient::getIdCli(void)
	{
		return this->IDClient;
	}
	String^ map_TBClient::getNomCli(void)
	{
		return this->NomClient;
	}
	String^ map_TBClient::getPrenomCli(void)
	{
		return this->PrenomClient;
	}
	String^ map_TBClient::getDateNaissance(void)
	{
		return this->DateNaissance;
	}
}
