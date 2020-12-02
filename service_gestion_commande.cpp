#include "service_gestion_commande.h"

namespace service
{
	service_gestion_commande::service_gestion_commande(void)
	{
		this->cad = gcnew composants::connex();
		this->cmmd = gcnew composants::commande();
		this->ds = gcnew System::Data::DataSet();
	}
	DataSet^ service_gestion_commande::listeCommande(String^ dataTableCommande)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->cmmd->SELECT(), dataTableCommande);
		return this->ds;
	}
	int service_gestion_commande::ajouter(int IDCommande, char ReferenceCommande, int NombreArticle, Decimal MontantTotalTTC, int DateSolde, int IDClient, Decimal MontantRemise)
	{
		int IDCommande;
		this->cmmd->setReferenceCommande(ReferenceCommande);
		this->cmmd->setNombreArticle(NombreArticle);
		this->cmmd->setMontantTotalTTC(MontantTotalTTC);
		this->cmmd->setDateSolde(DateSolde);
		this->cmmd->setIDClient(IDClient);
		this->cmmd->setMontantRemise(MontantRemise);
		IDCommande = this->cad->actionRowsID(this->cmmd->INSERT());
		return IDCommande;
	}
	void service_gestion_commande::modifier(int IDCommande, char ReferenceCommande, int NombreArticle, Decimal MontantTotalTTC, int DateSolde, int IDClient, Decimal MontantRemise)
	{
		this->cmmd->setIDCommande(IDCommande);
		this->cmmd->setNombreArticle(NombreArticle);
		this->cmmd->setMontantTotalTTC(MontantTotalTTC);
		this->cmmd->setDateSolde(DateSolde);
		this->cmmd->setIDClient(IDClient);
		this->cmmd->setMontantRemise(MontantRemise);
		this->cad->actionRows(this->cmmd->UPDATE());
	}
	void service_gestion_commande::supprimer(int IDCommande)
	{
		this->cmmd->setIDCommande(IDCommande);
		this->cad->actionRows(this->cmmd->DELETE());
	}
	void service_gestion_commande::creer(int IDCommande, char ReferenceCommande, int NombreArticle, Decimal MontantTotalTTC, int DateSolde, int IDClient, Decimal MontantRemise)
	{
		this->cmmd->setIDCommande(IDCommande);
		this->cmmd->setReferenceCommande(ReferenceCommande);
		this->cmmd->setNombreArticle(NombreArticle);
		this->cmmd->setMontantTotalTTC(MontantTotalTTC);
		this->cmmd->setDateSolde(DateSolde);
		this->cmmd->setIDClient(IDClient);
		this->cmmd->setMontantRemise(MontantRemise);
		IDCommande = this->cad->actionRowsID(this->cmmd->INSERT());
	}
};
