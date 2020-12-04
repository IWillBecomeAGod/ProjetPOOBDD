#include "CL_CAD.h"

namespace NS_Composants
{
	CL_CAD::CL_CAD(void)
	{
		this->rq_sql = "RIEN";
		this->cnx = "server=localhost;" + "Initial Catalog='livrableprojet';" + "Persist Security Info = True;" + "User ID=root;" + "Password=root";
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
	DataSet^ CL_CAD::getRows(String^ rq_sql, String^ datatablename, String^ rq_sql2, String^ datatablename2, String^ rq_sql3, String^ datatablename3, String^ rq_sql4, String^ datatablename4, String^ rq_sql5, String^ datatablename5)
	{
		this->setSQL(rq_sql);
		this->DA = gcnew MySqlDataAdapter(this->CMD);
		this->CMD->CommandText = this->rq_sql;
		this->DS = gcnew Data::DataSet();
		this->DA->Fill(this->DS, datatablename);

		this->setSQL(rq_sql2);
		this->CMD->CommandText = this->rq_sql;
		this->DA->Fill(this->DS, datatablename2);

		this->setSQL(rq_sql3);
		this->CMD->CommandText = this->rq_sql;
		this->DA->Fill(this->DS, datatablename3);

		this->setSQL(rq_sql4);
		this->CMD->CommandText = this->rq_sql;
		this->DA->Fill(this->DS, datatablename4);

		this->setSQL(rq_sql5);
		this->CMD->CommandText = this->rq_sql;
		this->DA->Fill(this->DS, datatablename5);

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