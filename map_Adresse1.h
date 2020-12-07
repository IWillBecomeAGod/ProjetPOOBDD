#pragma once
using namespace System;
namespace composant {
	ref class map_Adresse
	{
	private:
		String^ TypeAdresse;
		int N_Rue;
		String^ Rue;
		String^ Ville;
		int CP;
		int IDClient;


	public:
		map_Adresse(void);
		String^ SELECTAd(void);
		String^ INSERTAd(void);
		String^ UPDATEAd(void);
		String^ DELETEAd(void);
		String^ getTypeAdresse(void);
		int getN_Rue(void);
		String^ getRue(void);
		String^ getVille(void);
		int getCP(void);
		int getIDClient(void);
		void setTypeAdresse(String^ TypeAdresse);
		void setN_Rue(int N_Rue);
		void setRue(String^ Rue);
		void setVille(String^ Ville);
		void setCP(int CP);
		void setIDClient(int IDClient);

	};

}
