#pragma once
#include <string>
using namespace System;
namespace composants
{
	ref class commande
	{
	protected:
	private:
		int IDCommande;
		char ReferenceCommande;
		int NombreArticle;
		Decimal  MontantRemise;
		Decimal MontantTotalTTC;
		int DateSolde;
		int IDClient;

	public:
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		char getReferenceCommande(void);
		int  getNombreArticle(void);
		Decimal getMontantTotalTTC(void);
		int getDateSolde(void);
		int getIDClient(void);
		Decimal getMontantRemise(void);
		int getIDCommande(void);
		void setIDCommande(int);
		void setReferenceCommande(char);
		void setNombreArticle(int);
		void setMontantTotalTTC(Decimal);
		void setDateSolde(int);
		void setIDClient(int);
		void setMontantRemise(Decimal);
		commande();
		//~commande();
	};
	};
