#pragma once

using namespace System;
namespace NS_Composants
{
	ref class CL_map_TBPAIEMENT
	{
	private:
		int IDPaiement;
		int IDCommande;
		String^ ModePaiement;
		String^ MontantPaiement;
		String^ DatePaiement;

	public:
		CL_map_TBPAIEMENT(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ INSERTNULL(void);
		String^ UPDATE(void);
		String^ UPDATEIDCOMMANDE(void);
		String^ DELETE(void);
		void setIDPaiement(int);
		void setIDCommande(int);
		void setModePaiement(String^);
		void setMontantPaiement(String^);
		void setDatePaiement(String^);
		int getIDPaiement(void);
		int getIDCommande(void);
		String^ getModePaiement(void);
		String^ getMontantPaiement(void);
		String^ getDatePaiement(void);
	};
}


