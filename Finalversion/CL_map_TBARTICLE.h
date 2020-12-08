#pragma once
using namespace System;
namespace NS_Composants
{
	ref class CL_map_TBARTICLE
	{
	private:
		int IDArticle;
		String^ ReferenceArticle;
		String^ NomArticle;
		String^ NatureArticle;
		String^ PrixUHT;
		String^ MontantTVA;
		String^ PrixUTTC;
		String^ SeuilReaprovisionnement;
		String^ Couleur;
		String^ Stock;
		int StockDrop;

	public:
		CL_map_TBARTICLE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ UPDATESTOCK(void);
		String^ DELETE(void);
		
		void setIDArticle(int);
		void setReferenceArticle(String^);
		void setNomArticle(String^);
		void setNatureArticle(String^);
		void setPrixUHT(String^);
		void setMontantTVA(String^);
		void setPrixUTTC(String^);
		void setSeuilReaprovisionnement(String^);
		void setCouleur(String^);
		void setStock(String^);
		void setStockDrop(int);


		int getIDArticle(void);
		String^ getReferenceArticle(void);
		String^ getNomArticle(void);
		String^ getNatureArticle(void);
		String^ getPrixUHT(void);
		String^ getMontantTVA(void);
		String^ getPrixUTTC(void);
		String^ getSeuilReaprovisionnement(void);
		String^ getCouleur(void);
		String^ getStock(void);
		int getStockDrop(void);

	};
}

