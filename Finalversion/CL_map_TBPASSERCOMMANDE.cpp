#include "CL_map_TBPASSERCOMMANDE.h"

namespace NS_Composants
{
	CL_map_TBPASSERCOMMANDE::CL_map_TBPASSERCOMMANDE(void)
	{
		this->IDPasserCommande = -1;
		this->IDCommande = -1;
		this->IDArticle = -1;
		this->Quantite = "RIEN";
	}
	String^ CL_map_TBPASSERCOMMANDE::SELECT(void)
	{
		return "SELECT IDPasserCommande, IDCommande, IDArticle, QuantiteArticle " + "FROM PASSERCOMMANDE;";
	}
	String^ CL_map_TBPASSERCOMMANDE::INSERT(void)
	{
		return "INSERT INTO PASSERCOMMANDE " + "(IDCommande, IDArticle, QuantiteArticle) " + "VALUES('" + this->getIDCommande() + "', '" + this->getIDArticle() + "', '" + this->getQuantite() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPASSERCOMMANDE::INSERTNULL(void)
	{
		return "INSERT INTO PASSERCOMMANDE " + "(IDArticle, QuantiteArticle) " + "VALUES('" + this->getIDArticle() + "', '" + this->getQuantite() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBPASSERCOMMANDE::UPDATE(void)
	{
		return "UPDATE PASSERCOMMANDE " + "SET IDCommande = '" + this->getIDCommande() + "', IDArticle = '" + this->getIDArticle() + "', QuantiteArticle = '" + this->getQuantite() + "' " + "WHERE(IDPasserCommande = '" + this->getIDPasserCommande() + "');";
	}
	String^ CL_map_TBPASSERCOMMANDE::UPDATEIDCOMMANDE(void)
	{
		return "UPDATE PASSERCOMMANDE " + "SET IDCommande = '" + this->getIDCommande() + "'" + "WHERE(IDPasserCommande = '" + this->getIDPasserCommande() + "');";
	}
	String^ CL_map_TBPASSERCOMMANDE::DELETE(void)
	{
		return "DELETE FROM PASSERCOMMANDE " + "WHERE(IDPasserCommande = '" + this->getIDPasserCommande() + "');";
	}
	void CL_map_TBPASSERCOMMANDE::setIDPasserCommande(int IDPasserCommande)
	{
		if (IDPasserCommande > 0)
		{
			this->IDPasserCommande = IDPasserCommande;
		}
	}
	void CL_map_TBPASSERCOMMANDE::setIDCommande(int IDCommande)
	{
		if (IDCommande > 0)
		{
			this->IDCommande = IDCommande;
		}
	}
	void CL_map_TBPASSERCOMMANDE::setIDArticle(int IDArticle)
	{
		if (IDArticle > 0)
		{
			this->IDArticle = IDArticle;
		}
	}
	void CL_map_TBPASSERCOMMANDE::setQuantite(String^ Quantite)
	{
		if (Quantite != "")
		{
			this->Quantite = Quantite;
		}
	}
	int CL_map_TBPASSERCOMMANDE::getIDPasserCommande(void)
	{
		return this->IDPasserCommande;
	}
	int CL_map_TBPASSERCOMMANDE::getIDCommande(void)
	{
		return this->IDCommande;
	}
	int CL_map_TBPASSERCOMMANDE::getIDArticle(void)
	{
		return this->IDArticle;
	}
	String^ CL_map_TBPASSERCOMMANDE::getQuantite(void)
	{
		return this->Quantite;
	}
}