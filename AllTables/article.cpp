#include "CL_map_TBARTICLE.h"

namespace NS_Composants
{
	CL_map_TBARTICLE::CL_map_TBARTICLE(void)
	{
		this->IDArticle = -1;
		this->IDCommande = -1;
		this->ReferenceArticle = "RIEN";
		this->NomArticle = "RIEN";
		this->NatureArticle = "RIEN";
		this->PrixUHT = "RIEN";
		this->MontantTVA = "RIEN";
		this->PrixUTTC = "RIEN";
		this->SeuilReaprovisionnement = "RIEN";
		this->Couleur = "RIEN";
	}
	String^ CL_map_TBARTICLE::SELECT(void)
	{
		return "SELECT IDArticle, IDCommande, ReferenceArticle, NomArticle, NatureArticle, PrixUHT, MontantTVA, PrixUTTC, SeuilReaprovisionnement, Couleur " + "FROM ARTICLE;";
	}
	String^ CL_map_TBARTICLE::INSERT(void)
	{
		return "INSERT INTO ARTICLE " + "(IDCommande, ReferenceArticle, NomArticle, NatureArticle, PrixUHT, MontantTVA, PrixUTTC, SeuilReaprovisionnement, Couleur) " + "VALUES('" + this->getIDCommande() + "' , '" + this->getReferenceArticle() + "', '" + this->getNomArticle() + "', '" + this->getNatureArticle() + "', '" + this->getPrixUHT() + "', '" + this->getMontantTVA() + "', '" + this->getPrixUTTC() + "', '" + this->getSeuilReaprovisionnement() + "', '" + this->getCouleur() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBARTICLE::INSERTNULL(void)
	{
		return "INSERT INTO ARTICLE " + "(ReferenceArticle, NomArticle, NatureArticle, PrixUHT, MontantTVA, PrixUTTC, SeuilReaprovisionnement, Couleur) " + "VALUES('" + this->getReferenceArticle() + "', '" + this->getNomArticle() + "', '" + this->getNatureArticle() + "', '" + this->getPrixUHT() + "', '" + this->getMontantTVA() + "', '" + this->getPrixUTTC() + "', '" + this->getSeuilReaprovisionnement() + "', '" + this->getCouleur() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBARTICLE::UPDATE(void)
	{
		return "UPDATE ARTICLE " + "SET IDCommande = '" + this->getIDCommande() + "', ReferenceArticle = '" + this->getReferenceArticle() + "', NomArticle = '" + this->getNomArticle() + "', NatureArticle = '" + this->getNatureArticle() + "', PrixUHT = '" + this->getPrixUHT() + "', MontantTVA = '" + this->getMontantTVA() + "', PrixUTTC = '" + this->getPrixUTTC() + "', SeuilReaprovisionnement = '" + this->getSeuilReaprovisionnement() + "', Couleur = '" + this->getCouleur() + "' " + "WHERE(IDArticle = " + this->getIDArticle() + ");";
	}
	String^ CL_map_TBARTICLE::UPDATENULL(void)
	{
		return "UPDATE ARTICLE " + "SET ReferenceArticle = '" + this->getReferenceArticle() + "', NomArticle = '" + this->getNomArticle() + "', NatureArticle = '" + this->getNatureArticle() + "', PrixUHT = '" + this->getPrixUHT() + "', MontantTVA = '" + this->getMontantTVA() + "', PrixUTTC = '" + this->getPrixUTTC() + "', SeuilReaprovisionnement = '" + this->getSeuilReaprovisionnement() + "', Couleur = '" + this->getCouleur() + "' " + "WHERE(IDArticle = " + this->getIDArticle() + ");";
	}
	String^ CL_map_TBARTICLE::DELETE(void)
	{
		return "DELETE FROM ARTICLE " + "WHERE(IDArticle = " + this->getIDArticle() + ");";
	}
	String^ CL_map_TBARTICLE::PRIXUNITAIRE(void)
	{
		return "SELECT PrixUHT " + "FROM ARTICLE " + "WHERE(IDCommande = " + this->getIDCommande() + ");";
	}
	void CL_map_TBARTICLE::setIDArticle(int IDArticle)
	{
		if (IDArticle > 0)
		{
			this->IDArticle = IDArticle;
		}
	}
	void CL_map_TBARTICLE::setIDCommande(int IDCommande)
	{
		if (IDCommande > 0)
		{
			this->IDCommande = IDCommande;
		}
	}
	void CL_map_TBARTICLE::setReferenceArticle(String^ ReferenceArticle)
	{
		if (ReferenceArticle != "")
		{
			this->ReferenceArticle = ReferenceArticle;
		}
	}
	void CL_map_TBARTICLE::setNomArticle(String^ NomArticle)
	{
		if (NomArticle != "")
		{
			this->NomArticle = NomArticle;
		}
	}
	void CL_map_TBARTICLE::setNatureArticle(String^ NatureArticle)
	{
		if (NatureArticle != "")
		{
			this->NatureArticle = NatureArticle;
		}
	}
	void CL_map_TBARTICLE::setPrixUHT(String^ PrixUHT)
	{
		if (PrixUHT != "")
		{
			this->PrixUHT = PrixUHT;
		}
	}
	void CL_map_TBARTICLE::setMontantTVA(String^ MontantTVA)
	{
		if (MontantTVA != "")
		{
			this->MontantTVA = MontantTVA;
		}
	}
	void CL_map_TBARTICLE::setPrixUTTC(String^ PrixUTTC)
	{
		if (PrixUTTC != "")
		{
			this->PrixUTTC = PrixUTTC;
		}
	}
	void CL_map_TBARTICLE::setSeuilReaprovisionnement(String^ SeuilReaprovisionnement)
	{
		if (SeuilReaprovisionnement != "")
		{
			this->SeuilReaprovisionnement = SeuilReaprovisionnement;
		}
	}
	void CL_map_TBARTICLE::setCouleur(String^ Couleur)
	{
		if (Couleur != "")
		{
			this->Couleur = Couleur;
		}
	}
	

	int CL_map_TBARTICLE::getIDArticle(void)
	{
		return this->IDArticle;
	}
	int CL_map_TBARTICLE::getIDCommande(void)
	{
		return this->IDCommande;
	}
	String^ CL_map_TBARTICLE::getReferenceArticle(void)
	{
		return this->ReferenceArticle;	
	}
	String^ CL_map_TBARTICLE::getNomArticle(void)
	{
		return this->NomArticle;
	}
	String^ CL_map_TBARTICLE::getNatureArticle(void)
	{
		return this->NatureArticle;
	}
	String^ CL_map_TBARTICLE::getPrixUHT(void)
	{
		return this->PrixUHT;
	}
	String^ CL_map_TBARTICLE::getMontantTVA(void)
	{
		return this->MontantTVA;
	}
	String^ CL_map_TBARTICLE::getPrixUTTC(void)
	{
		return this->PrixUTTC;
	}
	String^ CL_map_TBARTICLE::getSeuilReaprovisionnement(void)
	{
		return this->SeuilReaprovisionnement;
	}
	String^ CL_map_TBARTICLE::getCouleur(void)
	{
		return this->Couleur;
	}
}