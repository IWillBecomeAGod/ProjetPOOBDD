#include "commande.h"
namespace composants
{
	commande::commande(void)
	{
		this->IDCommande = -1;
		this->ReferenceCommande = 'rien';
		this->NombreArticle = -1;
		this->MontantRemise = -1;
		this->MontantTotalTTC = -1;
		this->DateSolde = -1;
		this->IDClient = -1;

	}
	String^ commande::SELECT(void)
	{
		return "SELECT * FROM projetpoo.commande;";
	}
	String^ commande::INSERT(void)
	{
		return "INSERT INTO projetpoo.commande " +
			"(ReferenceCommande, NombreArticle, MontantRemise, MontantTotalTTC, DateSolde, IDClient) " +
			"VALUES('" + this->getReferenceCommande() + "', '" + this->getNombreArticle() + "','" + this->getMontantRemise() + "','" + this->getMontantTotalTTC() + "','" + this->getDateSolde() + "','" + this->getIDClient() + "';SELECT @@IDENTITY;";
	}
	String^ commande::UPDATE(void)
	{
		return "UPDATE commande " +
			"SET ReferenceCommande = '" + this->getReferenceCommande() + "', NombreArticle = '" + this->getNombreArticle() + "', NombreArticle = '" + this->getNombreArticle() + "', MontantRemise = '" + this->getMontantRemise() + "', MontantTotalTTC = '" + this->getMontantTotalTTC() + "', DateSolde = '" + this->getDateSolde() + "', IDClient = '" + this->getIDClient(); ""
			"WHERE(IDCommande = " + this->getIDCommande() + ");";
	}
	String^ commande::DELETE(void)
	{
		return "DELETE FROM commande " +
			"WHERE(IDCommande = " + this->getIDCommande() + ");";
	}
	void commande::setIDCommande(int IDCommande)
	{
		if (IDCommande > 0)
		{
			this->IDCommande = IDCommande;
		}
	}
	void commande::setReferenceCommande(char ReferenceCommande)
	{
		if (ReferenceCommande != 0)
		{
			this->ReferenceCommande = ReferenceCommande;
		}
	}
	void commande::setNombreArticle(int NombreArticle)
	{
		if (NombreArticle != 0)
		{
			this->NombreArticle = NombreArticle;
		}
	}
	void commande::setMontantTotalTTC(Decimal MontantTotalTTC)
	{
		if (MontantTotalTTC != 0)
		{
			this->MontantTotalTTC = MontantTotalTTC;
		}
	}
	void commande::setDateSolde(int DateSolde)
	{
		if (DateSolde != 0)
		{
			this->DateSolde = DateSolde;
		}
	}
	void commande::setIDClient(int IDClient)
	{
		if (IDClient > 0)
		{
			this->IDClient = IDClient;
		}
	}
	void commande::setMontantRemise(Decimal MontantRemise)
	{
		if (MontantRemise != 0)
		{
			this->MontantRemise = MontantRemise;
		}
	}
	int commande::getIDCommande(void)
	{
		return this->IDCommande;
	}
	char commande::getReferenceCommande(void)
	{
		return this->ReferenceCommande;
	}
	int commande::getNombreArticle(void)
	{
		return this->NombreArticle;
	}
	Decimal commande::getMontantTotalTTC(void)
	{
		return this->MontantTotalTTC;
	}
	int commande::getDateSolde(void)
	{
		return this->DateSolde;
	}
	int commande::getIDClient(void)
	{
		return this->IDClient;
	}
	Decimal commande::getMontantRemise(void)
	{
		return this->MontantRemise;
	}
}
