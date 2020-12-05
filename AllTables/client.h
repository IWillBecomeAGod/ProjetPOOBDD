#pragma once
using namespace System;
namespace NS_Composants
{
	ref class CL_map_TBCLIENT
	{
	private:
		int IDClient;
		String^ nomClient;
		String^ prenomClient;
		String^ DateNaissance;
		String^ NumeroClient;
	public:
		CL_map_TBCLIENT(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIDClient(int);
		void setNomClient(String^);
		void setPrenomClient(String^);
		void setDateNaissance(String^);
		void setNumeroClient(String^);
		int getIDClient(void);
		String^ getNomClient(void);
		String^ getPrenomClient(void);
		String^ getDateNaissance(void);
		String^ getNumeroClient(void);
	};
}

