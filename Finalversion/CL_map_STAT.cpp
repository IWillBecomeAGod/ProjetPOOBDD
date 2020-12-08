#include "CL_map_STAT.h"

namespace NS_Composants
{
	CL_map_STAT::CL_map_STAT(void)
	{
		
	}

	String^ CL_map_STAT::PANIERMOYEN(void)
	{
		return "SELECT sum(MontantTotalTTC)/count(*) FROM commande;";
	}
	String^ CL_map_STAT::CHIFFREAFFAIREMOIS(void)
	{
		return "select sum(MontantTotalTTC) from commande where commande.IDCommande in(SELECT IDCommande FROM paiement where month(DatePaiement) = '" + this->getDateChiffreAffaireMois() + "' and year(DatePaiement) = '" + this->getDateChiffreAffaireAnnee() + "');";
	}
	String^ CL_map_STAT::ARTICLEAPPROVISIONNEMENT(void)
	{
		return "SELECT IDArticle, NomArticle FROM Article WHERE Stock < SeuilReaprovisionnement;";
	}
	String^ CL_map_STAT::MONTANTTOTALTTCCLIENT(void)
	{
		return "SELECT sum(MontantTotalTTC) FROM Commande WHERE IDClient = '" + this->getIDClient() + "';";
	}
	String^ CL_map_STAT::TOP10VENTEARTICLE(void)
	{
		return "SELECT IDArticle, sum(QuantiteArticle) FROM passercommande WHERE IDArticle GROUP BY IDArticle ORDER BY  sum(QuantiteArticle) desc LIMIT 10;";
	}
	String^ CL_map_STAT::LESS10VENTEARTICLE(void)
	{
		return "SELECT IDArticle, sum(QuantiteArticle) FROM passercommande WHERE IDArticle GROUP BY IDArticle ORDER BY  sum(QuantiteArticle) asc LIMIT 10;";
	}
	String^ CL_map_STAT::VALEURACHATSTOCK(void)
	{
		return "SELECT sum(Stock*prixuht) FROM article WHERE IDArticle;";
	}
	String^ CL_map_STAT::VALEURCOMMERCIALESTOCK(void)
	{
		return "SELECT sum(Stock*prixuht)*'"+this->getRemiseCommerciale()+"' FROM article WHERE IDArticle;";
	}
	




	void CL_map_STAT::setDateChiffreAffaireMois(String^ DateChiffreAffaire)
	{
		if (DateChiffreAffaire != "")
		{
			this->DateChiffreAffaireMois = DateChiffreAffaire->Substring(0,2);
		}
	}
	String^ CL_map_STAT::getDateChiffreAffaireMois(void)
	{
		return this->DateChiffreAffaireMois;
	}

	void CL_map_STAT::setDateChiffreAffaireAnnee(String^ DateChiffreAffaire)
	{
		if (DateChiffreAffaire != "")
		{
			this->DateChiffreAffaireAnnee = DateChiffreAffaire->Substring(DateChiffreAffaire->Length-4, 4);
		}
	}
	String^ CL_map_STAT::getDateChiffreAffaireAnnee(void)
	{
		return this->DateChiffreAffaireAnnee;
	}

	void CL_map_STAT::setIDClient(int IDClient)
	{
		if (IDClient > 0)
		{
			this->IDClient = IDClient;
		}
	}
	int CL_map_STAT::getIDClient(void)
	{
		return this->IDClient;
	}

	void CL_map_STAT::setRemiseCommerciale(String^ RemiseCommerciale)
	{
		if (RemiseCommerciale != "")
		{
			this->RemiseCommerciale = RemiseCommerciale;
		}
	}
	String^ CL_map_STAT::getRemiseCommerciale(void)
	{
		return this->RemiseCommerciale;
	}
	
}