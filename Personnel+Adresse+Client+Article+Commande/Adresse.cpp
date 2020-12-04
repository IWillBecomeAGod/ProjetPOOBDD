#include "CL_map_TBADRESSE.h"

namespace NS_Composants
{
	CL_map_TBADRESSE::CL_map_TBADRESSE(void)
	{
		this->IDAdresse = -1;
		this->adresseRue = "RIEN";
		this->adresseVille = "RIEN";
		this->adresseCodePostal = "RIEN";
	}
	String^ CL_map_TBADRESSE::SELECT(void)
	{
		return "SELECT IDAdresse, AdresseRue, AdresseVille, AdresseCodePostal " + "FROM ADRESSE;";

	}
	String^ CL_map_TBADRESSE::INSERT(void)
	{
		return "INSERT INTO ADRESSE " + "(AdresseRue, AdresseVille, AdresseCodePostal) " + "VALUES('" + this->getAdresseRue() + "', '" + this->getAdresseVille() + "', '" + this->getAdresseCodePostal() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBADRESSE::UPDATE(void)
	{
		return "UPDATE ADRESSE " + "SET AdresseRue = '" + this->getAdresseRue() + "', AdresseVille = '" + this->getAdresseVille() + "', AdresseCodePostal = '" + this->getAdresseCodePostal() + "' " + "WHERE(IDAdresse = " + this->getIDAdresse() + ");";
	}
	String^ CL_map_TBADRESSE::DELETE(void)
	{
		return "DELETE FROM ADRESSE " + "WHERE(IDAdresse = " + this->getIDAdresse() + ");";
	}
	void CL_map_TBADRESSE::setIDAdresse(int id_adresse)
	{
		if (id_adresse > 0)
		{
			this->IDAdresse = id_adresse;
		}
	}
	void CL_map_TBADRESSE::setAdresseRue(String^ adresseRue)
	{
		if (adresseRue != "")
		{
			this->adresseRue = adresseRue;
		}
	}
	void CL_map_TBADRESSE::setAdresseVille(String^ adresseVille)
	{
		if (adresseVille != "")
		{
			this->adresseVille = adresseVille;
		}
	}
	void CL_map_TBADRESSE::setAdresseCodePostal(String^ adresseCodePostal)
	{
		if (adresseCodePostal != "")
		{
			this->adresseCodePostal = adresseCodePostal;
		}
	}
	int CL_map_TBADRESSE::getIDAdresse(void)
	{
		return this->IDAdresse;
	}
	String^ CL_map_TBADRESSE::getAdresseRue(void)
	{
		return this->adresseRue;
	}
	String^ CL_map_TBADRESSE::getAdresseVille(void)
	{
		return this->adresseVille;
	}
	String^ CL_map_TBADRESSE::getAdresseCodePostal(void)
	{
		return this->adresseCodePostal;
	}
}