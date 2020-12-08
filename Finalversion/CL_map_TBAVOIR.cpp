#include "CL_map_TBAVOIR.h"

namespace NS_Composants
{
	CL_map_TBAVOIR::CL_map_TBAVOIR(void)
	{
		this->IDAvoir = -1;
		this->IDAdresse = -1;
		this->IDClient = -1;
		this->TypeAdresse = "RIEN";
	}
	String^ CL_map_TBAVOIR::SELECT(void)
	{
		return "SELECT IDAvoir, IDAdresse, IDClient, TypeAdresse " + "FROM AVOIR;";

	}
	String^ CL_map_TBAVOIR::INSERT(void)
	{
		return "INSERT INTO AVOIR " + "(IDAdresse, IDClient, TypeAdresse) " + "VALUES('" + this->getIDAdresse() + "', '" + this->getIDClient() + "', '" + this->getTypeAdresse() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_TBAVOIR::UPDATE(void)
	{
		return "UPDATE AVOIR " + "SET IDAdresse = '" + this->getIDAdresse() + "', IDClient = '" + this->getIDClient() + "', TypeAdresse = '" + this->getTypeAdresse() + "' " + "WHERE(IDAvoir = '" + this->getIDAvoir() + "');";
	}
	String^ CL_map_TBAVOIR::DELETE(void)
	{
		return "DELETE FROM AVOIR " + "WHERE(IDAvoir = " + this->getIDAvoir() + ");";
	}
	void CL_map_TBAVOIR::setIDAvoir(int IDAvoir)
	{
		if (IDAvoir > 0)
		{
			this->IDAvoir = IDAvoir;
		}
	}
	void CL_map_TBAVOIR::setIDAdresse(int IDAdresse)
	{
		if (IDAdresse > 0)
		{
			this->IDAdresse = IDAdresse;
		}
	}
	void CL_map_TBAVOIR::setIDClient(int IDClient)
	{
		if (IDClient > 0)
		{
			this->IDClient = IDClient;
		}
	}
	void CL_map_TBAVOIR::setTypeAdresse(String^ TypeAdresse)
	{
		if (TypeAdresse != "")
		{
			this->TypeAdresse = TypeAdresse;
		}
	}
	int CL_map_TBAVOIR::getIDAvoir(void)
	{
		return this->IDAvoir;
	}
	int CL_map_TBAVOIR::getIDAdresse(void)
	{
		return this->IDAdresse;
	}
	int CL_map_TBAVOIR::getIDClient(void)
	{
		return this->IDClient;
	}
	String^ CL_map_TBAVOIR::getTypeAdresse(void)
	{
		return this->TypeAdresse;
	}
}