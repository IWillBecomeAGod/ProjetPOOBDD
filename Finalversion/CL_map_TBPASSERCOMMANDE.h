#pragma once

using namespace System;
namespace NS_Composants
{
	ref class CL_map_TBPASSERCOMMANDE
	{
	private:
		int IDPasserCommande;
		int IDCommande;
		int IDArticle;
		String^ Quantite;
	public:
		CL_map_TBPASSERCOMMANDE(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ INSERTNULL(void);
		String^ UPDATE(void);
		String^ UPDATEIDCOMMANDE(void);
		String^ DELETE(void);

		void setIDPasserCommande(int);
		void setIDCommande(int);
		void setIDArticle(int);
		void setQuantite(String^);


		int getIDPasserCommande(void);
		int getIDCommande(void);
		int getIDArticle(void);
		String^ getQuantite(void);


	};
}



