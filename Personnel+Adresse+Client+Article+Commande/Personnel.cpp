#include "CL_map_TBPERSONNE.h"

namespace NS_Composants
{
	CL_map_TBPERSONNE::CL_map_TBPERSONNE(void)
	{
		this->IDPersonnel = -1;
		this->IDAdresse = -1;
		this->IDSuperieur = -1;
		this->nomPersonnel = "RIEN";
		this->prenomPersonnel = "RIEN";
		this->DateEmbauche = "RIEN";
	}
	String^ CL_map_TBPERSONNE::SELECT(void)
	{
		return "SELECT IDPersonnel, nomPersonnel, prenomPersonnel, IDAdresse, IDPersonnel_est_supervise_par, DateEmbauche " + "FROM PERSONNEL;";

	}
	String^ CL_map_TBPERSONNE::INSERT(void)
	{
		return "INSERT INTO PERSONNEL " + "(nomPersonnel, prenomPersonnel, IDAdresse, IDPersonnel_est_supervise_par, DateEmbauche) " + "VALUES('" + this->getNomPersonnel() + "', '" + this->getprenomPersonnel() + "', '" + this->getIDAdresse() + "', '" + this->getIDSuperieur() + "', '" + this->getDateEmbauche() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPERSONNE::INSERTNULL(void)
	{
		return "INSERT INTO PERSONNEL " + "(nomPersonnel, prenomPersonnel, IDAdresse, DateEmbauche) " + "VALUES('" + this->getNomPersonnel() + "', '" + this->getprenomPersonnel() + "', '" + this->getIDAdresse() + "', '" + this->getDateEmbauche() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPERSONNE::UPDATE(void)
	{
		return "UPDATE PERSONNEL " + "SET nomPersonnel = '" + this->getNomPersonnel() + "', prenomPersonnel = '" + this->getprenomPersonnel() + "', IDAdresse = '" + this->getIDAdresse() + "', IDPersonnel_est_supervise_par = '" + this->getIDSuperieur() + "', DateEmbauche = '" + this->getDateEmbauche() + "' " + "WHERE(IDPersonnel = " + this->getIDPersonnel() + ");";
	}
	String^ CL_map_TBPERSONNE::UPDATENULL(void)
	{
		return "UPDATE PERSONNEL " + "SET nomPersonnel = '" + this->getNomPersonnel() + "', prenomPersonnel = '" + this->getprenomPersonnel() + "', IDAdresse = '" + this->getIDAdresse() + "', DateEmbauche = '" + this->getDateEmbauche() + "' " + "WHERE(IDPersonnel = " + this->getIDPersonnel() + ");";
	}
	String^ CL_map_TBPERSONNE::DELETE(void)
	{
		return "DELETE FROM PERSONNEL " + "WHERE(IDPersonnel = " + this->getIDPersonnel() + ");";
	}
	void CL_map_TBPERSONNE::setIDPersonnel(int id_personnel)
	{
		if (id_personnel > 0)
		{
			this->IDPersonnel = id_personnel;
		}
	}
	void CL_map_TBPERSONNE::setIDAdresse(int id_adresse)
	{
		if (id_adresse > 0)
		{
			this->IDAdresse = id_adresse;
		}
	}
	void CL_map_TBPERSONNE::setIDSuperieur(int id_superieur)
	{
		if (id_superieur > 0)
		{
			this->IDSuperieur = id_superieur;
		}
	}
	void CL_map_TBPERSONNE::setPrenomPersonnel(String^ prenomPersonnel)
	{
		if (prenomPersonnel != "")
		{
			this->prenomPersonnel = prenomPersonnel;
		}
	}
	void CL_map_TBPERSONNE::setNomPersonnel(String^ nomPersonnel)
	{
		if (nomPersonnel != "")
		{
			this->nomPersonnel = nomPersonnel;
		}
	}
	void CL_map_TBPERSONNE::setDateEmbauche(String^ DateEmbauche)
	{
		if (DateEmbauche != "")
		{
			this->DateEmbauche = DateEmbauche;
		}
	}
	int CL_map_TBPERSONNE::getIDPersonnel(void)
	{
		return this->IDPersonnel;
	}
	String^ CL_map_TBPERSONNE::getNomPersonnel(void)
	{
		return this->nomPersonnel;
	}
	String^ CL_map_TBPERSONNE::getprenomPersonnel(void)
	{
		return this->prenomPersonnel;
	}
	int CL_map_TBPERSONNE::getIDAdresse(void)
	{
		return this->IDAdresse;
	}
	int CL_map_TBPERSONNE::getIDSuperieur(void)
	{
		return this->IDSuperieur;
	}
	String^ CL_map_TBPERSONNE::getDateEmbauche(void)
	{
		return this->DateEmbauche;
	}
}