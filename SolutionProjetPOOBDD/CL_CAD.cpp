#include "CL_CAD.h"

namespace NS_Composants
{
	CL_CAD::CL_CAD(void)
	{
		this->rq_sql = "RIEN";
		this->cnx = "server=127.0.0.1;" + "Initial Catalog='corbeille6';" + "Persist Security Info = True;" + "User ID=root;" + "Password=root";
		this->CNX = gcnew MySqlConnection(this->cnx);
		this->CMD = gcnew MySqlCommand(this->rq_sql, this->CNX);
		this->CMD->CommandType = CommandType::Text;
	}
	int CL_CAD::actionRowsID(String^ rq_sql)
	{
		int id;
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		id = Convert::ToInt32(this->CMD->ExecuteScalar());
		this->CNX->Close();
		return id;
	}
	void CL_CAD::actionRows(String^ rq_sql)
	{
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		this->CMD->ExecuteNonQuery();
		this->CNX->Close();
	}
	DataSet^ CL_CAD::getRows(String^ rq_sql, String^ datatablename)
	{
		this->setSQL(rq_sql);
		this->DA = gcnew MySqlDataAdapter(this->CMD);
		this->CMD->CommandText = this->rq_sql;
		this->DS = gcnew Data::DataSet();
		this->DA->Fill(this->DS, datatablename);
		return this->DS;
	}
	void CL_CAD::setSQL(String^ rq_sql)
	{
		if (rq_sql == "" || rq_sql == "RIEN")
		{
			this->rq_sql = "RIEN";
		}
		else
		{
			this->rq_sql = rq_sql;
		}
	}
}