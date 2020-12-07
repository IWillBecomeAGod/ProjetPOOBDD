#include "map_Adresse.h"
namespace composant {
	map_Adresse::map_Adresse(void) {
		this->TypeAdresse = "RIEN";
		this->N_Rue = 0;
		this->Rue = "RIEN";
		this->Ville = "RIEN";
		this->CP = 0;
		this->IDClient = -1;
	}
	String^ map_Adresse::SELECTAd(void)
	{
		return "SELECT TypeAdresse, N_Rue, Rue, Ville, CP, IDClient " +
			"FROM Adresse;";
	}
	String^ map_Adresse::INSERTAd(void)
	{
		return "INSERT INTO Adresse " +
			"(TypeAdresse, N_Rue, Rue, Ville, CP, IDClient) " +
			"VALUES('" + this->getTypeAdresse() + "', '" + this->getN_Rue() + "', '" + this->getRue() + "', '" + this->getVille() + "','" + this->getCP() + "','" + this->getIDClient() + "');SELECT @@IDENTITY;";
	}
	String^ map_Adresse::UPDATEAd(void)
	{
		return "UPDATE Adresse " +
			"SET TypeAdresse = '" + this->getTypeAdresse() + "',  N_Rue = '" + this->getN_Rue() + "', Rue = '" + this->getRue() + "',  Ville = '" + this->getVille() + "', CP = '" + this->getCP() + "', IDClient= '" + this->getIDClient() + "' " +
			"WHERE(IDClient = " + this->getIDClient() + ");";
	}
	String^ map_Adresse::DELETEAd(void)
	{
		return "DELETE FROM Adresse " +
			"WHERE(IDClient = " + this->getIDClient() + ");";
	}
	String^ map_Adresse::getTypeAdresse(void) {
		return this->TypeAdresse;
	}
	int map_Adresse::getN_Rue(void) {
		return this->N_Rue;
	}
	String^ map_Adresse::getRue(void) {
		return this->Rue;
	}
	String^ map_Adresse::getVille(void) {
		return this->Ville;
	}
	int map_Adresse::getCP(void) {
		return this->CP;
	}
	int map_Adresse::getIDClient(void) {
		return this->IDClient;
	}
	void  map_Adresse::setTypeAdresse(String^ TypeAdresse) {
		if (TypeAdresse != "")
		{
			this->TypeAdresse = TypeAdresse;
		}
	}
	void  map_Adresse::setN_Rue(int N_Rue) {
		if (N_Rue !=0)
		{
			this->N_Rue = N_Rue;
		}
	}
	void  map_Adresse::setRue(String^ Rue) {
		if (Rue != "")
		{
			this->Rue = Rue;
		}
	}
	void  map_Adresse::setVille(String^ Ville) {
		if (Ville != "")
		{
			this->Ville = Ville;
		}
	}
	void  map_Adresse::setCP(int CP) {
		if (CP != 0)
		{
			this->CP = CP;
		}
	}
	void   map_Adresse::setIDClient(int IDClient) {
		if (IDClient != 0)
		{
			this->IDClient = IDClient;
		}
	}
	
}
