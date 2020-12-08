#pragma once

using namespace System;
namespace NS_Composants
{
	ref class CL_map_TBPERSONNE
	{
	private:
		int IDPersonnel;
		int IDAdresse;
		int IDSuperieur;
		String^ nomPersonnel;
		String^ prenomPersonnel;
		String^ DateEmbauche;

	public:
		CL_map_TBPERSONNE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ INSERTNULL(void);
		String^ UPDATE(void);
		String^ UPDATENULL(void);
		String^ DELETE(void);
		void setIDPersonnel(int);
		void setIDAdresse(int);
		void setIDSuperieur(int);
		void setPrenomPersonnel(String^);
		void setNomPersonnel(String^);
		void setDateEmbauche(String^);
		int getIDPersonnel(void);
		int getIDAdresse(void);
		int getIDSuperieur(void);
		String^ getNomPersonnel(void);
		String^ getprenomPersonnel(void);
		String^ getDateEmbauche(void);
	};
}

