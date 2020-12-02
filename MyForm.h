#pragma once
#include "service_gestion_commande.h"
#include "service_gestion_commande.cpp"
namespace Project3poo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;
	using namespace System::Data::SqlClient;
	using namespace MySql;
	using namespace MySql::Data;
	using namespace MySql::Data::EntityFramework;
	using namespace MySql::Data::MySqlClient;
	using namespace MySql::Data::Common;
	using namespace MySql::Web;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Data::DataSet^ ds;
	private: int index;
	private: String^ mode;
	private: service::service_gestion_commande^ GestionCommande;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button10;
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1_IDComm
			// 
			this->textBox1->Location = System::Drawing::Point(18, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2_Ref
			// 
			this->textBox2->Location = System::Drawing::Point(18, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 26);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3_NbrArtic
			// 
			this->textBox3->Location = System::Drawing::Point(18, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(213, 26);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4_MntRemise
			// 
			this->textBox4->Location = System::Drawing::Point(17, 216);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(214, 26);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5_MntTTC
			// 
			this->textBox5->Location = System::Drawing::Point(18, 271);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(213, 26);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6_DateSolde
			// 
			this->textBox6->Location = System::Drawing::Point(17, 332);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(204, 26);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7_IDCli
			// 
			this->textBox7->Location = System::Drawing::Point(12, 396);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(201, 26);
			this->textBox7->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			/*this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));*/
			//this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"ID Commande";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Reference";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Nombre Article";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Montant Remise";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Montant TTC";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Date Solde";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 373);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"ID Client";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(290, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 55);
			this->button1->TabIndex = 14;
			this->button1->Text = L"ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(290, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 64);
			this->button2->TabIndex = 15;
			this->button2->Text = L"supprimer";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(291, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 73);
			this->button3->TabIndex = 16;
			this->button3->Text = L"modifier";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(471, 35);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 233);
			this->button4->TabIndex = 17;
			this->button4->Text = L"créer";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(502, 372);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(76, 34);
			this->button5->TabIndex = 18;
			this->button5->Text = L">>";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(422, 375);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(74, 34);
			this->button6->TabIndex = 19;
			this->button6->Text = L">";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(338, 376);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(78, 34);
			this->button7->TabIndex = 20;
			this->button7->Text = L"<";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(252, 378);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 31);
			this->button8->TabIndex = 21;
			this->button8->Text = L"<<";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(665, 95);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(492, 298);
			this->dataGridView1->TabIndex = 22;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(742, 35);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(322, 44);
			this->button9->TabIndex = 23;
			this->button9->Text = L"load table";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(656, 453);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(516, 26);
			this->textBox8->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(661, 416);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 20);
			this->label8->TabIndex = 25;
			this->label8->Text = L"message";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(302, 296);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(293, 46);
			this->button10->TabIndex = 26;
			this->button10->Text = L"enregistrer";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 491);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"gestion commande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ constring1 = L"datasource=localhost;port=3306;username=root;password=root";
			MySqlConnection^ conDataBase1 = gcnew MySqlConnection(constring1);
			MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("SELECT * FROM projetpoo.commande; ", conDataBase1);
			MySqlDataReader^ myReader1;

			try
			{
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase1;
				DataTable^ dbadataset = gcnew DataTable();
				sda->Fill(dbadataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbadataset;
				dataGridView1->DataSource = bSource;
				sda->Update(dbadataset);
			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
#pragma endregion
		private: System::Void FRM_Principal_Load(System::Object^ sender, System::EventArgs^ e)
		{
			this->index = 0;
			this->mode = "RIEN";
			this->ds = gcnew System::Data::DataSet();
			this->GestionCommande= gcnew service::service_gestion_commande();
			this->loadData(this->index);
			this->textBox8->Text = "Data chargées";
		}
private: void loadData(int index)
{
	this->ds->Clear();
	this->ds = this->GestionCommande->listeCommande("liste");
	this->textBox1->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
	this->textBox2->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
	this->textBox3->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
	this->textBox4->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
	this->textBox5->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
	this->textBox6->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
	this->textBox7->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[6]);
}
private: System::Void btn_first_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->index = 0;
	this->loadData(this->index);
	this->textBox8->Text = "Enregistrement n° : " + (this->index + 1);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->index > 0)
	{
		this->index--;
		this->loadData(this->index);
		this->textBox8->Text = "Enregistrement n° : " + (this->index + 1);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->index < this->ds->Tables["liste"]->Rows->Count - 1)
	{
		this->index++;
		this->loadData(this->index);
		this->textBox8->Text = "Enregistrement n° : " + (this->index + 1);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->index = this->ds->Tables["liste"]->Rows->Count - 1;
	this->loadData(this->index);
	this->textBox8->Text = "Enregistrement n° : " + (this->index + 1);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->textBox3->Clear();
	this->textBox4->Clear();
	this->textBox5->Clear();
	this->textBox6-> Clear();
	this->textBox7->Clear();
	this->mode = "nouv";
	this->textBox8->Text = "Veuillez saisir les information de la nouvelle commande et enregistrer";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->mode = "maj";
	this->textBox8->Text = "Veuillez modifier les information de la nouvelle commande et enregistrer.";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->mode = "sup";
	this->textBox8->Text = "Veuillez confirmer la suppression de la commande en cours en enregistrant.";
}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "créer";
		this->textBox8->Text = "Veuillze créer une commande.";
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->mode == "nouv")
	{
		int Id;
		Id = this->GestionCommande->ajouter(Convert::ToInt32(this->textBox1->Text), Convert::ToChar( this->textBox2->Text), Convert::ToInt32(this->textBox3->Text), Convert::ToDecimal(this->textBox4->Text), Convert::ToInt32(this->textBox5->Text),Convert::ToInt32(this->textBox6->Text), Convert::ToDecimal( this->textBox7->Text));
		this->textBox8->Text = "L'ID généré est le : " + Id + ". ";
	}
	else if (this->mode == "maj")
	{
		this->GestionCommande->modifier(Convert::ToInt32(this->textBox1->Text), Convert::ToChar( this->textBox2->Text), Convert::ToInt32( this->textBox3->Text), Convert::ToDecimal( this->textBox4->Text), Convert::ToInt32( this->textBox5->Text), Convert::ToInt32(this->textBox6->Text), Convert::ToDecimal(this->textBox7->Text));
	}
	else if (this->mode == "sup")
	{
		this->GestionCommande->supprimer(Convert::ToInt32(this->textBox1->Text));
	}
	else if (this->mode == "créer")
	{
		this->GestionCommande->creer(Convert::ToInt32(this->textBox1->Text), Convert::ToChar(this->textBox2->Text), Convert::ToInt32(this->textBox3->Text), Convert::ToDecimal(this->textBox4->Text), Convert::ToInt32(this->textBox5->Text), Convert::ToInt32(this->textBox6->Text), Convert::ToDecimal(this->textBox7->Text));
	}
	this->index = 0;
	this->loadData(this->index);
	this->textBox8->Text += "Traitement terminé.";
}
};
}

