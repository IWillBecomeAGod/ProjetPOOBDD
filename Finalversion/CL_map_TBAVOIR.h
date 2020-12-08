#pragma once
using namespace System;
namespace NS_Composants
{
	ref class CL_map_TBAVOIR
	{
	private:
		int IDAvoir;
		int IDAdresse;
		int IDClient;
		String^ TypeAdresse;
	public:
		CL_map_TBAVOIR(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIDAvoir(int);
		void setIDAdresse(int);
		void setIDClient(int);
		void setTypeAdresse(String^);
		int getIDAvoir(void);
		int getIDAdresse(void);
		int getIDClient(void);
		String^ getTypeAdresse(void);
	};
}



