#include "CL_map_TBPAIEMENT.h"

namespace NS_Composants
{
	CL_map_TBPAIEMENT::CL_map_TBPAIEMENT(void)
	{
		this->IDPaiement = -1;
		this->IDCommande = -1;
		this->ModePaiement = "RIEN";
		this->MontantPaiement = "RIEN";
		this->DatePaiement = "RIEN";
	}
	String^ CL_map_TBPAIEMENT::SELECT(void)
	{
		return "SELECT IDPaiement, IDCommande, ModePaiement, MontantParPaiementHT, DatePaiement " + "FROM PAIEMENT;";

	}
	String^ CL_map_TBPAIEMENT::INSERT(void)
	{
		return "INSERT INTO PAIEMENT " + "(IDCommande, ModePaiement, MontantParPaiementHT, DatePaiement) " + "VALUES('" + this->getIDCommande() + "', '" + this->getModePaiement() + "', '" + this->getMontantPaiement() + "', '" + this->getDatePaiement() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPAIEMENT::INSERTNULL(void)
	{
		return "INSERT INTO PAIEMENT " + "(ModePaiement, MontantParPaiementHT, DatePaiement) " + "VALUES('" + this->getModePaiement() + "', '" + this->getMontantPaiement() + "', '" + this->getDatePaiement() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPAIEMENT::UPDATE(void)
	{
		return "UPDATE PAIEMENT " + "SET IDCommande = '" + this->getIDCommande() + "', ModePaiement = '" + this->getModePaiement() + "', MontantParPaiementHT = '" + this->getMontantPaiement() + "', DatePaiement = '" + this->getDatePaiement() + "' " + "WHERE(IDPaiement = " + this->getIDPaiement() + ");";
	}
	String^ CL_map_TBPAIEMENT::UPDATEIDCOMMANDE(void)
	{
		return "UPDATE PAIEMENT " + "SET IDCommande = '" + this->getIDCommande() + "' " + "WHERE(IDPaiement = " + this->getIDPaiement() + ");";
	}
	String^ CL_map_TBPAIEMENT::DELETE(void)
	{
		return "DELETE FROM PAIEMENT " + "WHERE(IDPaiement = " + this->getIDPaiement() + ");";
	}
	void CL_map_TBPAIEMENT::setIDPaiement(int IDPaiement)
	{
		if (IDPaiement > 0)
		{
			this->IDPaiement = IDPaiement;
		}
	}
	void CL_map_TBPAIEMENT::setIDCommande(int IDCommande)
	{
		if (IDCommande > 0)
		{
			this->IDCommande = IDCommande;
		}
	}
	void CL_map_TBPAIEMENT::setModePaiement(String^ ModePaiement)
	{
		if (ModePaiement != "")
		{
			this->ModePaiement = ModePaiement;
		}
	}
	void CL_map_TBPAIEMENT::setMontantPaiement(String^ MontantPaiement)
	{
		if (MontantPaiement != "")
		{
			this->MontantPaiement = MontantPaiement;
		}
	}
	void CL_map_TBPAIEMENT::setDatePaiement(String^ DatePaiement)
	{
		if (DatePaiement != "")
		{
			this->DatePaiement = DatePaiement;
		}
	}
	int CL_map_TBPAIEMENT::getIDPaiement(void)
	{
		return this->IDPaiement;
	}
	int CL_map_TBPAIEMENT::getIDCommande(void)
	{
		return this->IDCommande;
	}
	String^ CL_map_TBPAIEMENT::getModePaiement(void)
	{
		return this->ModePaiement;
	}
	String^ CL_map_TBPAIEMENT::getMontantPaiement(void)
	{
		return this->MontantPaiement;
	}
	String^ CL_map_TBPAIEMENT::getDatePaiement(void)
	{
		return this->DatePaiement;
	}
}