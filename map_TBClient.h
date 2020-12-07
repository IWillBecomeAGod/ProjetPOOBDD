#pragma once

using namespace System;
namespace composant {
	ref class map_TBClient
	{
	private:
		int IDClient;
		String^ NomClient;
		String^ PrenomClient;
		String^ DateNaissance;

	public:
		map_TBClient(void);
		String^ SELECTCli(void);
		String^ INSERTCli(void);
		String^ UPDATECli(void);
		String^ DELETECli(void);
		void setIDCli(int);
		void setPrenomCli(String^);
		void setNomCli(String^);
		void setDateNaissance(String^);
		int getIdCli(void);
		String^ getNomCli(void);
		String^ getPrenomCli(void);
		String^ getDateNaissance(void);
	};

}
