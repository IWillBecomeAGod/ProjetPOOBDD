#include "CL_map_TBCLIENT.h"

namespace NS_Composants
{
	CL_map_TBCLIENT::CL_map_TBCLIENT(void)
	{
		this->IDClient = -1;
		this->nomClient = "RIEN";
		this->prenomClient = "RIEN";
		this->DateNaissance = "RIEN";
		this->NumeroClient = "RIEN";
	}
	String^ CL_map_TBCLIENT::SELECT(void)
	{
		return "SELECT IDClient, nomClient, prenomClient, DateNaissance, NumeroClient " + "FROM Client;";
	}
	String^ CL_map_TBCLIENT::INSERT(void)
	{
		return "INSERT INTO CLIENT " + "(NomClient, PrenomClient, DateNaissance, NumeroClient) " + "VALUES('" + this->getNomClient() + "', '" + this->getPrenomClient() + "', '" + this->getDateNaissance() + "', '" + this->getNumeroClient() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBCLIENT::UPDATE(void)
	{
		return "UPDATE CLIENT " + "SET NomClient = '" + this->getNomClient() + "', PrenomClient = '" + this->getPrenomClient() + "', DateNaissance = '" + this->getDateNaissance() + "', NumeroClient = '" + this->getNumeroClient() + "' " + "WHERE(IDClient = " + this->getIDClient() + ");";
	}
	String^ CL_map_TBCLIENT::DELETE(void)
	{
		return "DELETE FROM CLIENT " + "WHERE(IDClient = " + this->getIDClient() + ");";
	}
	void CL_map_TBCLIENT::setIDClient(int IDClient)
	{
		if (IDClient > 0)
		{
			this->IDClient = IDClient;
		}
	}
	void CL_map_TBCLIENT::setNomClient(String^ nomClient)
	{
		if (nomClient != "")
		{
			this->nomClient = nomClient;
		}
	}
	void CL_map_TBCLIENT::setPrenomClient(String^ prenomClient)
	{
		if (prenomClient != "")
		{
			this->prenomClient = prenomClient;
		}
	}
	void CL_map_TBCLIENT::setDateNaissance(String^ DateNaissance)
	{
		if (DateNaissance != "")
		{
			this->DateNaissance = DateNaissance;
		}
	}
	void CL_map_TBCLIENT::setNumeroClient(String^ NumeroClient)
	{
		if (NumeroClient != "")
		{
			this->NumeroClient = NumeroClient;
		}
	}
	int CL_map_TBCLIENT::getIDClient(void)
	{
		return this->IDClient;
	}
	String^ CL_map_TBCLIENT::getNomClient(void)
	{
		return this->nomClient;
	}
	String^ CL_map_TBCLIENT::getPrenomClient(void)
	{
		return this->prenomClient;
	}
	String^ CL_map_TBCLIENT::getDateNaissance(void)
	{
		return this->DateNaissance;
	}
	String^ CL_map_TBCLIENT::getNumeroClient(void)
	{
		return this->NumeroClient;
	}
}