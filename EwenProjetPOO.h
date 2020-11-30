#pragma once

namespace ProjetBDD {

	using namespace System;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
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

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button7;




	protected:

	protected:


	private:
		String^ mode;
		String^ action;
		String^ step;
		String^ stepPrecedent;
		String^ nomPersonnel;
		String^ prenomPersonnel;
		String^ dateEmbauche;
		String^ IDSuperieur;
		String^ nomSuperieur;
		String^ prenomSuperieur;
		String^ IDAdresse;
		String^ rue;
		String^ ville;
		String^ CP;
		String^ ID;
		String^ ID2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::Button^ button9;
		   
		
		MySqlCommand^ test()
		{
			
			String^ constring1 = L"datasource=localhost;port=3306;username=root;password=root";
			MySqlConnection^ conDataBase1 = gcnew MySqlConnection(constring1);

			MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("INSERT INTO `livrableprojet`.`adresse` (`AdresseRue`, `AdresseVille`, `AdresseCodePostal`) VALUES ('"+rue+"', '" + ville + "', '" + CP + "');", conDataBase1);
			MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("SELECT `IDPersonnel` FROM `livrableprojet`.`personnel` WHERE `NomPersonnel` = '"+nomPersonnel+"' AND `PrenomPersonnel` = '"+prenomPersonnel+"'", conDataBase1);

			
			MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("INSERT INTO `livrableprojet`.`personnel` (`NomPersonnel`, `PrenomPersonnel`, `DateEmbauche`, `IDAdresse`, `IDPersonnel_est_supervise_par`) VALUES ('" + nomPersonnel + "', '" + prenomPersonnel + "', '" + dateEmbauche + "',"+ID+", 1); SELECT * FROM `livrableprojet`.`personnel`;", conDataBase1);
			
			MySqlCommand^ cmdDataBase4 = gcnew MySqlCommand("SELECT * FROM `livrableprojet`.`article`; ", conDataBase1);
			
			MySqlCommand^ cmdDataBase5 = gcnew MySqlCommand("SELECT * FROM `livrableprojet`.`personnel`; ", conDataBase1);
			MySqlCommand^ cmdDataBase6 = gcnew MySqlCommand("SELECT * FROM `livrableprojet`.`commande`; ", conDataBase1);
			MySqlCommand^ cmdDataBase7 = gcnew MySqlCommand("SELECT * FROM `livrableprojet`.`client`; ", conDataBase1);
			MySqlCommand^ cmdDataBase8 = gcnew MySqlCommand("SELECT * FROM `livrableprojet`.`article`; ", conDataBase1);

			MySqlCommand^ cmdDataBase9 = gcnew MySqlCommand("SELECT * FROM `livrableprojet`.`personnel`; ", conDataBase1);
			MySqlCommand^ cmdDataBase10 = gcnew MySqlCommand("SELECT * FROM `livrableprojet`.`commande`; ", conDataBase1);
			MySqlCommand^ cmdDataBase11 = gcnew MySqlCommand("SELECT * FROM `livrableprojet`.`client`; ", conDataBase1);
			MySqlCommand^ cmdDataBase12 = gcnew MySqlCommand("SELECT * FROM `livrableprojet`.`article`; ", conDataBase1);
			
			MySqlDataReader^ myReader1;

			if (mode == "personnel")
			{
				if (action == "new")
				{
					return cmdDataBase2;
				}
				if (action == "edit")
				{
					return cmdDataBase3;
				}
				if (action == "delete")
				{
					return cmdDataBase1;
				}
			}

			if (mode == "commande")
			{
				if (action == "new")
				{
					return cmdDataBase2;
				}
				if (action == "edit")
				{
					return cmdDataBase6;
				}
				if (action == "delete")
				{
					return cmdDataBase10;
				}
			}

			if (mode == "client")
			{
				if (action == "new")
				{
					return cmdDataBase3;
				}
				if (action == "edit")
				{
					return cmdDataBase7;
				}
				if (action == "delete")
				{
					return cmdDataBase11;
				}
			}
			
			if (mode == "article")
			{
				if (action == "new")
				{
					return cmdDataBase4;
				}
				if (action == "edit")
				{
					return cmdDataBase8;
				}
				if (action == "delete")
				{
					return cmdDataBase12;
				}
			}
			
		}
	private: System::Windows::Forms::Button^ button8;
		   /// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Orange;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::LavenderBlush;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Gold;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::LavenderBlush;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Orange;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Orange;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::LavenderBlush;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Gold;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::LavenderBlush;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Orange;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::LavenderBlush;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Gold;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::LavenderBlush;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->GridColor = System::Drawing::Color::Red;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridView1->Location = System::Drawing::Point(12, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Orange;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::LavenderBlush;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Gold;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::LavenderBlush;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidth = 15;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Orange;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::LavenderBlush;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Gold;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::LavenderBlush;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->Height = 35;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(1153, 320);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1171, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(231, 75);
			this->button2->TabIndex = 2;
			this->button2->Text = L"EDIT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gold;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(1171, 104);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(231, 75);
			this->button3->TabIndex = 3;
			this->button3->Text = L"NEW";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gold;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(1171, 349);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(231, 75);
			this->button4->TabIndex = 4;
			this->button4->Text = L"DELETE";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gold;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::DarkOrange;
			this->textBox1->Location = System::Drawing::Point(28, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 41);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gold;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::DarkOrange;
			this->textBox2->Location = System::Drawing::Point(320, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(142, 41);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Gold;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::DarkOrange;
			this->textBox3->Location = System::Drawing::Point(607, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 41);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Visible = false;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(23, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ID";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrange;
			this->label2->Location = System::Drawing::Point(320, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 29);
			this->label2->TabIndex = 10;
			this->label2->Text = L"First Name";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkOrange;
			this->label3->Location = System::Drawing::Point(602, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 29);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Last Name";
			this->label3->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gold;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(12, 430);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(231, 75);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Personnel";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gold;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(249, 430);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(231, 75);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Commande";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(486, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 75);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Client";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gold;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(723, 430);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(231, 75);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Article";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gold;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(1171, 551);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(231, 75);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Confirm";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gold;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(913, 551);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(231, 75);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Suivant";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Gold;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::DarkOrange;
			this->textBox4->Location = System::Drawing::Point(28, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(154, 41);
			this->textBox4->TabIndex = 18;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Gold;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::DarkOrange;
			this->textBox5->Location = System::Drawing::Point(308, 57);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(154, 41);
			this->textBox5->TabIndex = 19;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Gold;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::DarkOrange;
			this->textBox6->Location = System::Drawing::Point(600, 57);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(154, 41);
			this->textBox6->TabIndex = 20;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Gold;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::DarkOrange;
			this->textBox7->Location = System::Drawing::Point(28, 57);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(154, 41);
			this->textBox7->TabIndex = 21;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Gold;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::DarkOrange;
			this->textBox8->Location = System::Drawing::Point(308, 57);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(154, 41);
			this->textBox8->TabIndex = 22;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1430, 638);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		action = "edit";
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		action = "new";
		if (mode == "personnel")
		{
			step = "personnel";
			textBox1->Visible = true;
			textBox2->Visible = true;
			textBox3->Visible = true;
			textBox4->Visible = false;
			textBox5->Visible = false;
			textBox6->Visible = false;
			textBox7->Visible = false;
			textBox8->Visible = false;
			textBox4->Location = System::Drawing::Point(2000, 25);
			textBox5->Location = System::Drawing::Point(2000, 25);
			textBox6->Location = System::Drawing::Point(2000, 25);
			textBox7->Location = System::Drawing::Point(2000, 25);
			textBox8->Location = System::Drawing::Point(2000, 25);
			label1->Text = "Nom Personnel";
			label2->Text = "Prenom Personnel";
			label3->Text = "Date Embauche";
			textBox1->Size = label1->Size;
			textBox2->Size = label2->Size;
			textBox3->Size = label3->Size;
			label1->Location = System::Drawing::Point(25*0.74, 25);
			label2->Location = System::Drawing::Point(320*0.74, 25);
			label3->Location = System::Drawing::Point(607*0.74, 25);
			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = true;
		}
		
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		action = "delete";
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		mode = "personnel";
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "commande";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	mode = "client";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "article";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	

	nomPersonnel = textBox1->Text;
	prenomPersonnel = textBox2->Text;
	dateEmbauche = textBox3->Text;
	rue = textBox4->Text;
	ville = textBox5->Text;
	CP = textBox6->Text;
	nomSuperieur = textBox7->Text;
	prenomSuperieur = textBox8->Text;

	if (action == "new")
	{

		try
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = test();

			DataTable^ dbadataset = gcnew DataTable();
			sda->Fill(dbadataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbadataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbadataset);
			int lastId = (Int32)sda->SelectCommand->LastInsertedId;
			ID = Convert::ToString(lastId);
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		action = "edit";
	}

	
	if (action == "edit")
	{
		try
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = test();
			DataTable^ dbadataset = gcnew DataTable();
			sda->Fill(dbadataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbadataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbadataset);
			int lastId2 = (Int32)sda->SelectCommand->LastInsertedId;
			ID2 = Convert::ToString(lastId2);
			MessageBox::Show(ID2);
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		action = "delete";
	}
	if (action == "delete")
	{
		try
		{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = test();
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
		

}


private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (step == "personnel")
	{
		stepPrecedent = "personnel";
		step = "adresse";
	}
	if (step == "adresse" && stepPrecedent == "personnel" && textBox1->Text != "")
	{
		stepPrecedent = "adresse";
		textBox1->Visible = false;
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBox1->Location = System::Drawing::Point(2000, 25);
		textBox2->Location = System::Drawing::Point(2000, 25);
		textBox3->Location = System::Drawing::Point(2000, 25);
		textBox4->Location = System::Drawing::Point(25, 25);
		textBox5->Location = System::Drawing::Point(320, 25);
		textBox6->Location = System::Drawing::Point(607, 25);
		textBox4->Visible = true;
		textBox5->Visible = true;
		textBox6->Visible = true;
		textBox7->Visible = false;
		textBox8->Visible = false;
		label1->Text = "Rue";
		label2->Text = "Ville";
		label3->Text = "Code Postal";
		textBox4->Size = label1->Size;
		textBox5->Size = label2->Size;
		textBox6->Size = label3->Size;
		label1->Location = System::Drawing::Point(25 * 0.74, 25);
		label2->Location = System::Drawing::Point(320 * 0.74, 25);
		label3->Location = System::Drawing::Point(607 * 0.74, 25);
		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;

		

		label1->Text = rue;

		step = "superieur";
	}
	if (step == "superieur" && stepPrecedent == "adresse" && textBox4->Text!="")
	{
		stepPrecedent = "adresse";
		textBox1->Visible = false;
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		textBox5->Visible = false;
		textBox6->Visible = false;
		textBox4->Location = System::Drawing::Point(2000, 25);
		textBox5->Location = System::Drawing::Point(2000, 25);
		textBox6->Location = System::Drawing::Point(2000, 25);
		textBox7->Visible = true;
		textBox8->Visible = true;
		textBox7->Location = System::Drawing::Point(25, 25);
		textBox8->Location = System::Drawing::Point(320, 25);
		label1->Text = "Nom Superieur";
		label2->Text = "Prenom Superieur";
		textBox7->Size = label1->Size;
		textBox8->Size = label2->Size;
		label1->Location = System::Drawing::Point(25 * 0.74, 25);
		label2->Location = System::Drawing::Point(320 * 0.74, 25);
		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = false;
		


		step = "encodeNewPersonnel";
	}
}
};
}
