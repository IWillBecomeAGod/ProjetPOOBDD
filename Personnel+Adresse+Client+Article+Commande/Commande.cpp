#include "CL_map_TBCOMMANDE.h"

namespace NS_Composants
{
	CL_map_TBCOMMANDE::CL_map_TBCOMMANDE(void)
	{
		this->IDCommande = -1;
		this->IDClient = -1;
		this->ReferenceCommande = "RIEN";
		this->NombreArticle = "RIEN";
		this->MontantRemise = "RIEN";
		this->MontantTotalTTC = "RIEN";
		this->DateSolde = "RIEN";
	}
	String^ CL_map_TBCOMMANDE::SELECT(void)
	{
		return "SELECT IDCommande, IDClient, ReferenceCommande, NombreArticle, MontantRemise, MontantTotalTTC, DateSolde " + "FROM COMMANDE;";
	}
	String^ CL_map_TBCOMMANDE::INSERT(void)
	{
		return "INSERT INTO COMMANDE " + "(IDClient, ReferenceCommande, NombreArticle, MontantRemise, MontantTotalTTC, DateSolde) " + "VALUES('" + this->getIDClient() + "', '" + this->getReferenceCommande() + "', '" + this->getNombreArticle() + "', '" + this->getMontantRemise() + "', '" + this->getMontantTotalTTC() + "', '" + this->getDateSolde() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBCOMMANDE::INSERTNULL(void)
	{
		return "INSERT INTO COMMANDE " + "(IDClient, ReferenceCommande, NombreArticle, MontantRemise, MontantTotalTTC) " + "VALUES('" + this->getIDClient() + "', '" + this->getReferenceCommande() + "', '" + this->getNombreArticle() + "', '" + this->getMontantRemise() + "', '" + this->getMontantTotalTTC() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBCOMMANDE::UPDATE(void)
	{
		return "UPDATE COMMANDE " + "SET IDClient = '" + this->getIDClient() + "', ReferenceCommande = '" + this->getReferenceCommande() + "', NombreArticle = '" + this->getNombreArticle() + "', MontantRemise = '" + this->getMontantRemise() + "', MontantTotalTTC = '" + this->getMontantTotalTTC() + "', DateSolde = '" + this->getDateSolde() + "' " + "WHERE(IDCommande = " + this->getIDCommande() + ");";
	}
	String^ CL_map_TBCOMMANDE::UPDATENULL(void)
	{
		return "UPDATE COMMANDE " + "SET IDClient = '" + this->getIDClient() + "', ReferenceCommande = '" + this->getReferenceCommande() + "', NombreArticle = '" + this->getNombreArticle() + "', MontantRemise = '" + this->getMontantRemise() + "', MontantTotalTTC = '" + this->getMontantTotalTTC() + "' " + "WHERE(IDCommande = " + this->getIDCommande() + ");";
	}
	String^ CL_map_TBCOMMANDE::DELETE(void)
	{
		return "DELETE FROM COMMANDE " + "WHERE(IDCommande = " + this->getIDCommande() + ");";
	}
	void CL_map_TBCOMMANDE::setIDCommande(int IDCommande)
	{
		if (IDCommande > 0)
		{
			this->IDCommande = IDCommande;
		}
	}
	void CL_map_TBCOMMANDE::setIDClient(int IDClient)
	{
		if (IDClient > 0)
		{
			this->IDClient = IDClient;
		}
	}
	void CL_map_TBCOMMANDE::setReferenceCommande(String^ ReferenceCommande)
	{
		if (ReferenceCommande != "")
		{
			this->ReferenceCommande = ReferenceCommande;
		}
	}
	void CL_map_TBCOMMANDE::setNombreArticle(String^ NombreArticle)
	{
		if (NombreArticle != "")
		{
			this->NombreArticle = NombreArticle;
		}
	}
	void CL_map_TBCOMMANDE::setMontantRemise(String^ MontantRemise)
	{
		if (MontantRemise != "")
		{
			this->MontantRemise = MontantRemise;
		}
	}
	void CL_map_TBCOMMANDE::setMontantTotalTTC(String^ MontantTotalTTC)
	{
		if (MontantTotalTTC != "")
		{
			this->MontantTotalTTC = MontantTotalTTC;
		}
	}
	void CL_map_TBCOMMANDE::setDateSolde(String^ DateSolde)
	{
		if (DateSolde != "")
		{
			this->DateSolde = DateSolde;
		}
	}

	int CL_map_TBCOMMANDE::getIDCommande(void)
	{
		return this->IDCommande;
	}
	int CL_map_TBCOMMANDE::getIDClient(void)
	{
		return this->IDClient;
	}
	String^ CL_map_TBCOMMANDE::getReferenceCommande(void)
	{
		return this->ReferenceCommande;
	}
	String^ CL_map_TBCOMMANDE::getNombreArticle(void)
	{
		return this->NombreArticle;
	}
	String^ CL_map_TBCOMMANDE::getMontantRemise(void)
	{
		return this->MontantRemise;
	}
	String^ CL_map_TBCOMMANDE::getMontantTotalTTC(void)
	{
		return this->MontantTotalTTC;
	}
	String^ CL_map_TBCOMMANDE::getDateSolde(void)
	{
		return this->DateSolde;
	}
}