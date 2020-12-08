#pragma once

using namespace System;
namespace NS_Composants
{
	ref class CL_map_TBCOMMANDE
	{
	private:
		int IDCommande;
		int IDClient;
		String^ ReferenceCommande;
		String^ NombreArticle;
		String^ MontantRemise;
		String^ MontantTotal;
		String^ MontantTotalTTC;
		String^ DateSolde;

	public:
		CL_map_TBCOMMANDE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ INSERTNULL(void);
		String^ UPDATE(void);
		String^ UPDATENULL(void);
		String^ DELETE(void);
		String^ DERNIERPAIEMENT(void);
		void setIDCommande(int);
		void setIDClient(int);
		void setReferenceCommande(String^);
		void setNombreArticle(String^);
		void setMontantRemise(String^);
		void setMontantTotal(String^);
		void setMontantTotalTTC(String^);
		void setDateSolde(String^);
		int getIDCommande(void);
		int getIDClient(void);
		String^ getReferenceCommande(void);
		String^ getNombreArticle(void);
		String^ getMontantRemise(void);
		String^ getMontantTotal(void);
		String^ getMontantTotalTTC(void);
		String^ getDateSolde(void);
	};
}

