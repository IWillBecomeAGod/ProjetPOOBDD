#include "connex.h"
namespace composants
{
	connex::connex()
	{
		this->rq_MySql = "RIEN";
		this->cnx = "Data Source=localhost;" +
			"port=3306;" +
			"Persist Security Info=True;" +
			"User ID=root;" +
			"Password=root";
		this->CNX = gcnew MySqlConnection(this->cnx);
		this->CMD = gcnew MySqlCommand(this->rq_MySql, this->CNX);
		this->CMD->CommandType = CommandType::Text;
	}
	int connex::actionRowsID(String^ rq_MySql)
	{
		int id;
		this->setMySQL(rq_MySql);
		this->CMD->CommandText = this->rq_MySql;
		this->CNX->Open();
		id = Convert::ToInt32(this->CMD->ExecuteScalar());
		this->CNX->Close();
		return id;
	}
	void connex::actionRows(String^ rq_sql)
	{
		this->setMySQL(rq_sql);
		this->CMD->CommandText = this->rq_MySql;
		this->CNX->Open();
		this->CMD->ExecuteNonQuery();
		this->CNX->Close();
	}
	DataSet^ connex::getRows(String^ rq_MySql, String^ dataTableCommande)
	{
		this->setMySQL(rq_MySql);
		this->DA = gcnew MySqlDataAdapter(this->CMD);
		this->CMD->CommandText = this->rq_MySql;
		this->DS = gcnew DataSet();
		this->DA->Fill(this->DS, dataTableCommande);
		return this->DS;
	}
	void connex::setMySQL(String^ rq_MySql)
	{
		if (rq_MySql == "" || rq_MySql == "RIEN")
		{
			this->rq_MySql = "RIEN";
		}
		else
		{
			this->rq_MySql = rq_MySql;
		}
	}

}
