#include "CL_svc_gestionPersonnes.h"

namespace NS_Svc
{
	CL_svc_gestionPersonnes::CL_svc_gestionPersonnes(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personne = gcnew NS_Composants::CL_map_TBPERSONNE();
		this->adresse = gcnew NS_Composants::CL_map_TBADRESSE();
		this->client = gcnew NS_Composants::CL_map_TBCLIENT();
		this->article = gcnew NS_Composants::CL_map_TBARTICLE();
		this->commande = gcnew NS_Composants::CL_map_TBCOMMANDE();
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ CL_svc_gestionPersonnes::listePersonnes(String^ datatablename, String^ datatablename2, String^ datatablename3, String^ datatablename4, String^ datatablename5)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT(), datatablename, this->adresse->SELECT(), datatablename2, this->client->SELECT(), datatablename3, this->article->SELECT(), datatablename4, this->commande->SELECT(), datatablename5);
		
		return this->ds;
	}
	
	
	
	int CL_svc_gestionPersonnes::ajouterPersonnel(String^ nomPersonnel, String^ prenomPersonnel, int IDAdresse, int IDSuperieur, String^ DateEmbauche)
	{
		int id_personnel;
		this->personne->setNomPersonnel(nomPersonnel);
		this->personne->setPrenomPersonnel(prenomPersonnel);
		this->personne->setIDAdresse(IDAdresse);
		this->personne->setIDSuperieur(IDSuperieur);
		this->personne->setDateEmbauche(DateEmbauche);
		id_personnel = this->cad->actionRowsID(this->personne->INSERT());
		return id_personnel;
	}
	int CL_svc_gestionPersonnes::ajouterPersonnelNULL(String^ nomPersonnel, String^ prenomPersonnel, int IDAdresse, String^ DateEmbauche)
	{
		int id_personnel;
		this->personne->setNomPersonnel(nomPersonnel);
		this->personne->setPrenomPersonnel(prenomPersonnel);
		this->personne->setIDAdresse(IDAdresse);
		this->personne->setDateEmbauche(DateEmbauche);
		id_personnel = this->cad->actionRowsID(this->personne->INSERTNULL());
		return id_personnel;
	}
	void CL_svc_gestionPersonnes::modifierPersonnel(int id_personnel, String^ nomPersonnel, String^ prenomPersonnel, int IDAdresse, int IDSuperieur, String^ DateEmbauche)
	{
		this->personne->setIDPersonnel(id_personnel);
		this->personne->setNomPersonnel(nomPersonnel);
		this->personne->setPrenomPersonnel(prenomPersonnel);
		this->personne->setIDAdresse(IDAdresse);
		this->personne->setIDSuperieur(IDSuperieur);
		this->personne->setDateEmbauche(DateEmbauche);
		this->cad->actionRows(this->personne->UPDATE());
	}
	void CL_svc_gestionPersonnes::modifierPersonnelNULL(int id_personnel, String^ nomPersonnel, String^ prenomPersonnel, int IDAdresse, String^ DateEmbauche)
	{
		this->personne->setIDPersonnel(id_personnel);
		this->personne->setNomPersonnel(nomPersonnel);
		this->personne->setPrenomPersonnel(prenomPersonnel);
		this->personne->setIDAdresse(IDAdresse);
		this->personne->setDateEmbauche(DateEmbauche);
		this->cad->actionRows(this->personne->UPDATENULL());
	}
	void CL_svc_gestionPersonnes::supprimerPersonnel(int id_personnel)
	{
		this->personne->setIDPersonnel(id_personnel);
		this->cad->actionRows(this->personne->DELETE());
	}
	
	
	
	int CL_svc_gestionPersonnes::ajouterAdresse(String^ adresseRue, String^ adresseVille, String^ adresseCodePostal)
	{
		int id_adresse;
		this->adresse->setAdresseRue(adresseRue);
		this->adresse->setAdresseVille(adresseVille);
		this->adresse->setAdresseCodePostal(adresseCodePostal);
		id_adresse = this->cad->actionRowsID(this->adresse->INSERT());
		return id_adresse;
	}
	void CL_svc_gestionPersonnes::modifierAdresse(int id_adresse, String^ adresseRue, String^ adresseVille, String^ adresseCodePostal)
	{
		this->adresse->setIDAdresse(id_adresse);
		this->adresse->setAdresseRue(adresseRue);
		this->adresse->setAdresseVille(adresseVille);
		this->adresse->setAdresseCodePostal(adresseCodePostal);
		this->cad->actionRows(this->adresse->UPDATE());
	}
	void CL_svc_gestionPersonnes::supprimerAdresse(int id_adresse)
	{
		this->adresse->setIDAdresse(id_adresse);
		this->cad->actionRows(this->adresse->DELETE());
	}
	
	
	int CL_svc_gestionPersonnes::ajouterClient(String^ NomClient, String^ PrenomClient, String^ DateNaissance, String^ NumeroClient)
	{
		int id_client;
		this->client->setNomClient(NomClient);
		this->client->setPrenomClient(PrenomClient);
		this->client->setDateNaissance(DateNaissance);
		this->client->setNumeroClient(NumeroClient);
		id_client = this->cad->actionRowsID(this->client->INSERT());
		return id_client;
	}
	void CL_svc_gestionPersonnes::modifierClient(int IDClient, String^ NomClient, String^ PrenomClient, String^ DateNaissance, String^ NumeroClient)
	{
		this->client->setIDClient(IDClient);
		this->client->setNomClient(NomClient);
		this->client->setPrenomClient(PrenomClient);
		this->client->setDateNaissance(DateNaissance);
		this->client->setNumeroClient(NumeroClient);
		this->cad->actionRows(this->client->UPDATE());
	}
	void CL_svc_gestionPersonnes::supprimerClient(int IDClient)
	{
		this->client->setIDClient(IDClient);
		this->cad->actionRows(this->client->DELETE());
	}


	int CL_svc_gestionPersonnes::ajouterArticle(String^ ReferenceArticle, String^ NomArticle, String^ NatureArticle, String^ PrixUHT, String^ MontantTVA, String^ PrixUTTC, String^ SeuilReaprovisionnement, int IDCommande)
	{
		int id_article;
		this->article->setReferenceArticle(ReferenceArticle);
		this->article->setNomArticle(NomArticle);
		this->article->setNatureArticle(NatureArticle);
		this->article->setPrixUHT(PrixUHT);
		this->article->setMontantTVA(MontantTVA);
		this->article->setPrixUTTC(PrixUTTC);
		this->article->setSeuilReaprovisionnement(SeuilReaprovisionnement);
		this->article->setIDCommande(IDCommande);
		id_article = this->cad->actionRowsID(this->article->INSERT());
		return id_article;
	}

	int CL_svc_gestionPersonnes::ajouterArticleNULL(String^ ReferenceArticle, String^ NomArticle, String^ NatureArticle, String^ PrixUHT, String^ MontantTVA, String^ PrixUTTC, String^ SeuilReaprovisionnement)
	{
		int id_article;
		this->article->setReferenceArticle(ReferenceArticle);
		this->article->setNomArticle(NomArticle);
		this->article->setNatureArticle(NatureArticle);
		this->article->setPrixUHT(PrixUHT);
		this->article->setMontantTVA(MontantTVA);
		this->article->setPrixUTTC(PrixUTTC);
		this->article->setSeuilReaprovisionnement(SeuilReaprovisionnement);
		id_article = this->cad->actionRowsID(this->article->INSERTNULL());
		return id_article;
	}

	void CL_svc_gestionPersonnes::modifierArticle(int IDArticle, String^ ReferenceArticle, String^ NomArticle, String^ NatureArticle, String^ PrixUHT, String^ MontantTVA, String^ PrixUTTC, String^ SeuilReaprovisionnement, int IDCommande)
	{
		this->article->setIDArticle(IDArticle);
		this->article->setReferenceArticle(ReferenceArticle);
		this->article->setNomArticle(NomArticle);
		this->article->setNatureArticle(NatureArticle);
		this->article->setPrixUHT(PrixUHT);
		this->article->setMontantTVA(MontantTVA);
		this->article->setPrixUTTC(PrixUTTC);
		this->article->setSeuilReaprovisionnement(SeuilReaprovisionnement);
		this->article->setIDCommande(IDCommande);
		this->cad->actionRows(this->article->UPDATE());
	}

	void CL_svc_gestionPersonnes::modifierArticleNULL(int IDArticle, String^ ReferenceArticle, String^ NomArticle, String^ NatureArticle, String^ PrixUHT, String^ MontantTVA, String^ PrixUTTC, String^ SeuilReaprovisionnement)
	{
		this->article->setIDArticle(IDArticle);
		this->article->setReferenceArticle(ReferenceArticle);
		this->article->setNomArticle(NomArticle);
		this->article->setNatureArticle(NatureArticle);
		this->article->setPrixUHT(PrixUHT);
		this->article->setMontantTVA(MontantTVA);
		this->article->setPrixUTTC(PrixUTTC);
		this->article->setSeuilReaprovisionnement(SeuilReaprovisionnement);
		this->cad->actionRows(this->article->UPDATENULL());
	}

	void CL_svc_gestionPersonnes::supprimerArticle(int IDArticle)
	{
		this->article->setIDArticle(IDArticle);
		this->cad->actionRows(this->article->DELETE());
	}


	int CL_svc_gestionPersonnes::ajouterCommande(int IDClient, String^ ReferenceCommande, String^ NombreArticle, String^ MontantRemise, String^ MontantTotalTTC, String^ DateSolde)
	{
		int id_commande;
		this->commande->setIDClient(IDClient);
		this->commande->setReferenceCommande(ReferenceCommande);
		this->commande->setNombreArticle(NombreArticle);
		this->commande->setMontantRemise(MontantRemise);
		this->commande->setMontantTotalTTC(MontantTotalTTC);
		this->commande->setDateSolde(DateSolde);
		id_commande = this->cad->actionRowsID(this->commande->INSERT());
		return id_commande;
	}

	int CL_svc_gestionPersonnes::ajouterCommandeNULL(int IDClient, String^ ReferenceCommande, String^ NombreArticle, String^ MontantRemise, String^ MontantTotalTTC)
	{
		int id_commande;
		this->commande->setIDClient(IDClient);
		this->commande->setReferenceCommande(ReferenceCommande);
		this->commande->setNombreArticle(NombreArticle);
		this->commande->setMontantRemise(MontantRemise);
		this->commande->setMontantTotalTTC(MontantTotalTTC);
		id_commande = this->cad->actionRowsID(this->commande->INSERT());
		return id_commande;
	}

	void CL_svc_gestionPersonnes::modifierCommande(int IDCommande, int IDClient, String^ ReferenceCommande, String^ NombreArticle, String^ MontantRemise, String^ MontantTotalTTC, String^ DateSolde)
	{
		this->commande->setIDCommande(IDCommande);
		this->commande->setIDClient(IDClient);
		this->commande->setReferenceCommande(ReferenceCommande);
		this->commande->setNombreArticle(NombreArticle);
		this->commande->setMontantRemise(MontantRemise);
		this->commande->setMontantTotalTTC(MontantTotalTTC);
		this->commande->setDateSolde(DateSolde);
		this->cad->actionRowsID(this->commande->UPDATE());
	}

	void CL_svc_gestionPersonnes::modifierCommandeNULL(int IDCommande, int IDClient, String^ ReferenceCommande, String^ NombreArticle, String^ MontantRemise, String^ MontantTotalTTC)
	{
		this->commande->setIDCommande(IDCommande);
		this->commande->setIDClient(IDClient);
		this->commande->setReferenceCommande(ReferenceCommande);
		this->commande->setNombreArticle(NombreArticle);
		this->commande->setMontantRemise(MontantRemise);
		this->commande->setMontantTotalTTC(MontantTotalTTC);
		this->cad->actionRowsID(this->commande->UPDATENULL());

	}

	void CL_svc_gestionPersonnes::supprimerCommande(int IDCommande)
	{
		this->commande->setIDCommande(IDCommande);
		this->cad->actionRows(this->commande->DELETE());
	}
}