#pragma once
using namespace System;
namespace NS_Composants
{
	ref class CL_map_TBADRESSE
	{
	private:
		int IDAdresse;
		String^ adresseRue;
		String^ adresseVille;
		String^ adresseCodePostal;
	public:
		CL_map_TBADRESSE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIDAdresse(int);
		void setAdresseRue(String^);
		void setAdresseVille(String^);
		void setAdresseCodePostal(String^);
		int getIDAdresse(void);
		String^ getAdresseRue(void);
		String^ getAdresseVille(void);
		String^ getAdresseCodePostal(void);
	};
}

