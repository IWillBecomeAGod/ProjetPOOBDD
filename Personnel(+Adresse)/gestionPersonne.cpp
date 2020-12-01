#include "CL_svc_gestionPersonnes.h"

namespace NS_Svc
{
	CL_svc_gestionPersonnes::CL_svc_gestionPersonnes(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personne = gcnew NS_Composants::CL_map_TBPERSONNE();
		this->adresse = gcnew NS_Composants::CL_map_TBADRESSE();
		this->ds = gcnew Data::DataSet();
		DataTable^ dt = ds->Tables->Add("Adresse");
		DataTable^ dt2 = ds->Tables->Add("Personnel");
	}
	DataSet^ CL_svc_gestionPersonnes::listePersonnes(String^ datatablename)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT(), datatablename);
		
	
		return this->ds;
	}
	DataSet^ CL_svc_gestionPersonnes::listeAdresses(String^ datatablename)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->adresse->SELECT(), datatablename);
		return this->ds;
	}
	int CL_svc_gestionPersonnes::ajouter(String^ nomPersonnel, String^ prenomPersonnel, String^ adresseRue , String^ adresseVille, String^ adresseCodePostal, int IDSuperieur, String^ DateEmbauche)
	{
		int id_personnel;
		this->personne->setNomPersonnel(nomPersonnel);
		this->personne->setPrenomPersonnel(prenomPersonnel);
		int id_adresse;
		this->adresse->setAdresseRue(adresseRue);
		this->adresse->setAdresseVille(adresseVille);
		this->adresse->setAdresseCodePostal(adresseCodePostal);
		this->personne->setIDSuperieur(IDSuperieur);
		this->personne->setDateEmbauche(DateEmbauche);
		id_personnel = this->cad->actionRowsID(this->personne->INSERT());
		id_adresse = this->cad->actionRowsID(this->adresse->INSERT());
		return id_personnel, id_adresse;
	}
	void CL_svc_gestionPersonnes::modifier(int id_personnel, String^ nomPersonnel, String^ prenomPersonnel, int IDAdresse, int IDSuperieur, String^ DateEmbauche)
	{
		this->personne->setIDPersonnel(id_personnel);
		this->personne->setNomPersonnel(nomPersonnel);
		this->personne->setPrenomPersonnel(prenomPersonnel);
		this->personne->setIDAdresse(IDAdresse);
		this->personne->setIDSuperieur(IDSuperieur);
		this->personne->setDateEmbauche(DateEmbauche);
		this->cad->actionRows(this->personne->UPDATE());
	}
	void CL_svc_gestionPersonnes::supprimer(int id_personnel)
	{
		this->personne->setIDPersonnel(id_personnel);
		this->cad->actionRows(this->personne->DELETE());
	}
}