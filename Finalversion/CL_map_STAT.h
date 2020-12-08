#pragma once
using namespace System;
namespace NS_Composants
{
	ref class CL_map_STAT
	{
	private:
		String^ DateChiffreAffaireMois;
		String^ DateChiffreAffaireAnnee;
		int IDClient;
		String^ RemiseCommerciale;

	public:
		CL_map_STAT(void);
		String^ PANIERMOYEN(void);
		String^ CHIFFREAFFAIREMOIS(void);
		String^ ARTICLEAPPROVISIONNEMENT(void);
		String^ MONTANTTOTALTTCCLIENT(void);
		String^ TOP10VENTEARTICLE(void);
		String^ LESS10VENTEARTICLE(void);
		String^ VALEURACHATSTOCK(void);
		String^ VALEURCOMMERCIALESTOCK(void);

		
		
		void setDateChiffreAffaireMois(String^);
		String^ getDateChiffreAffaireMois(void);
		void setDateChiffreAffaireAnnee(String^);
		String^ getDateChiffreAffaireAnnee(void);
		void setIDClient(int);
		int getIDClient(void);
		void setRemiseCommerciale(String^);
		String^ getRemiseCommerciale(void);

	};
}


