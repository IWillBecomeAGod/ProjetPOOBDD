#include "svc_gestion_adresse.h"
namespace service
{
	svc_gestion_adresse::svc_gestion_adresse(void)
	{
		this->cadadresse = gcnew composant::CAD_Client();
		this->adresse = gcnew composant::map_Adresse();
		this->dsadresse = gcnew System::Data::DataSet();
	}
	DataSet^ svc_gestion_adresse::afficheradresse(String^ dataTableName)
	{
		this->dsadresse->Clear();
		this->dsadresse = this->cadadresse->getRowsclient(this->adresse->SELECTAd(), dataTableName);
		return this->dsadresse;
	}
	int svc_gestion_adresse::ajouteradresse(String^ TypeAdresse, int N_Rue, String^ Rue, String^ Ville, int CP, int IDClient)
	{
		int n;
		this->adresse->setTypeAdresse(TypeAdresse);
		this->adresse->setN_Rue(N_Rue);
		this->adresse->setRue(Rue);
		this->adresse->setVille(Ville);
		this->adresse->setCP(CP);
		this->adresse->setIDClient(IDClient);
		n = this->cadadresse->actionRowsIDclient(this->adresse->INSERTAd());
		return n;
	}
	void svc_gestion_adresse::modifieradresse(String^ TypeAdresse, int N_Rue, String^ Rue, String^ Ville, int CP, int IDClient)
	{
		this->adresse->setTypeAdresse(TypeAdresse);
		this->adresse->setN_Rue(N_Rue);
		this->adresse->setRue(Rue);
		this->adresse->setVille(Ville);
		this->adresse->setCP(CP);
		this->adresse->setIDClient(IDClient);
		this->cadadresse->actionRowsclient(this->adresse->UPDATEAd());
	}
	void svc_gestion_adresse::supprimeradresse(int IDClient)
	{
		this->adresse->setIDClient(IDClient);
		this->cadadresse->actionRowsclient(this->adresse->DELETEAd());
	}
}
