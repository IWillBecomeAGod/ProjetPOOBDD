#pragma once
#include "CL_svc_gestionPersonnes.h"


namespace ProjetPOOBDD {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	private: System::Windows::Forms::Label^ lbl_message;
	private: System::Windows::Forms::TextBox^ txt_message;

	private: System::Windows::Forms::Button^ btn_nouveau;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_sup;
	private: System::Windows::Forms::Button^ btn_enregistrer;
	private: NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: Data::DataTable^ dt;
	
		   
	
	private: int idcommande, idarticle, quantite, idarticlesearching, idclientsearching, idclientsearching2, idadressesearching, idadressesearching2, incrementref=0, countidclient;
	private: double prixUTTC;
	private: int lastidcommande, n, b;
	private: String^ lastidpassercommande;
	private: String^ lastidpaiement;
	private: String^ datepaiement;
	private: String^ datepaiement2;
	private: String^ annivclient;
	private: String^ nomclient;
	private: String^ prenomclient;
	private: String^ adresseville;
	private: String^ typeadresse;
	private: String^ idclient;
	private: String^ IDNULL;
	private: String^ moischiffreaffaire;
		
	


	private: int index;
	private: String^ mode;
	private: String^ mode2;
	private: String^ mode3;
	private: String^ RefreshMode;
	private: String^ LastPaiement;


	private: String^ a;
	private: String^ z;
	private: String^ e;
	private: String^ r;
	private: String^ t;
	private: String^ y;
	private: String^ u;
	private: String^ v;


	private: double paniermoyen;
	private: double chiffreaffaire;
	private: double montanttotalttcclient;
	private: double valeurachatstock;
	private: double valeurcommercialestock;


	private: System::Windows::Forms::Button^ ModeAdresse;
	private: System::Windows::Forms::Button^ ModePersonnel;


	private: System::Windows::Forms::Button^ ModeClient;
	private: System::Windows::Forms::TextBox^ txt5;
	private: System::Windows::Forms::Label^ lbl5;



	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::Label^ lbl1;




	private: System::Windows::Forms::TextBox^ txt4;
	private: System::Windows::Forms::Label^ lbl4;




	private: System::Windows::Forms::TextBox^ txt3;
	private: System::Windows::Forms::Label^ lbl3;




	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::Label^ lbl2;




	private: System::Windows::Forms::TextBox^ txt9;
	private: System::Windows::Forms::Label^ lbl9;





	private: System::Windows::Forms::TextBox^ txt8;
	private: System::Windows::Forms::Label^ lbl8;





	private: System::Windows::Forms::Button^ btn_end4;


	private: System::Windows::Forms::Button^ btn_next4;

	private: System::Windows::Forms::Button^ btn_previous4;

	private: System::Windows::Forms::Button^ btn_first4;
	private: System::Windows::Forms::Button^ ModeArticle;
	private: System::Windows::Forms::TextBox^ txt7;
	private: System::Windows::Forms::Label^ lbl7;


	private: System::Windows::Forms::TextBox^ txt6;
	private: System::Windows::Forms::Label^ lbl6;
private: System::Windows::Forms::Button^ ModeAvoir;
private: System::Windows::Forms::Button^ ViewAvoir;



	private: System::Windows::Forms::Button^ ModeCommande;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ ViewPersonnel;
private: System::Windows::Forms::Button^ ViewAdresse;
private: System::Windows::Forms::Button^ Paiement;
private: System::Windows::Forms::Button^ ViewClient;
private: System::Windows::Forms::Button^ ViewArticle;
private: System::Windows::Forms::Button^ ViewCommande;
private: System::Windows::Forms::Button^ ModePaiement;
private: System::Windows::Forms::Button^ ViewPaiement;
private: System::Windows::Forms::Button^ DernierPaiement;
private: System::Windows::Forms::Button^ Refresh;
private: System::Windows::Forms::TextBox^ txt10;
private: System::Windows::Forms::Label^ lbl10;
private: System::Windows::Forms::Button^ ViewPasserCommande;
private: System::Windows::Forms::Button^ ModePasserCommande;
private: System::Windows::Forms::Button^ btnpaniermoyen;
private: System::Windows::Forms::Button^ btnchiffreaffaire;
private: System::Windows::Forms::Button^ btnarticlereapprovisionnement;
private: System::Windows::Forms::Button^ btntotalachatclient;
private: System::Windows::Forms::Button^ btntop10ventesp;
private: System::Windows::Forms::Button^ btntop10ventesm;
private: System::Windows::Forms::Button^ btnvaleurachatstock;






private: System::Windows::Forms::TextBox^ txtpaniermoyen;
private: System::Windows::Forms::TextBox^ txtchiffreaffaire;


private: System::Windows::Forms::TextBox^ txtmontanttotalttcclient;
private: System::Windows::Forms::TextBox^ txtvaleurachatstock;
private: System::Windows::Forms::TextBox^ txtvaleurcommercialestock;

private: System::Windows::Forms::Button^ btnvaleurcommercialestock;







	private:
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lbl_message = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->btn_nouveau = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_sup = (gcnew System::Windows::Forms::Button());
			this->btn_enregistrer = (gcnew System::Windows::Forms::Button());
			this->ModeAdresse = (gcnew System::Windows::Forms::Button());
			this->ModePersonnel = (gcnew System::Windows::Forms::Button());
			this->ModeClient = (gcnew System::Windows::Forms::Button());
			this->txt5 = (gcnew System::Windows::Forms::TextBox());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->txt9 = (gcnew System::Windows::Forms::TextBox());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->txt8 = (gcnew System::Windows::Forms::TextBox());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->btn_end4 = (gcnew System::Windows::Forms::Button());
			this->btn_next4 = (gcnew System::Windows::Forms::Button());
			this->btn_previous4 = (gcnew System::Windows::Forms::Button());
			this->btn_first4 = (gcnew System::Windows::Forms::Button());
			this->ModeArticle = (gcnew System::Windows::Forms::Button());
			this->txt7 = (gcnew System::Windows::Forms::TextBox());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->txt6 = (gcnew System::Windows::Forms::TextBox());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->ModeCommande = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ViewPersonnel = (gcnew System::Windows::Forms::Button());
			this->ViewAdresse = (gcnew System::Windows::Forms::Button());
			this->ViewClient = (gcnew System::Windows::Forms::Button());
			this->ViewArticle = (gcnew System::Windows::Forms::Button());
			this->ViewCommande = (gcnew System::Windows::Forms::Button());
			this->ModePaiement = (gcnew System::Windows::Forms::Button());
			this->ViewPaiement = (gcnew System::Windows::Forms::Button());
			this->DernierPaiement = (gcnew System::Windows::Forms::Button());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->txt10 = (gcnew System::Windows::Forms::TextBox());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->ViewPasserCommande = (gcnew System::Windows::Forms::Button());
			this->ModePasserCommande = (gcnew System::Windows::Forms::Button());
			this->Paiement = (gcnew System::Windows::Forms::Button());
			this->ModeAvoir = (gcnew System::Windows::Forms::Button());
			this->ViewAvoir = (gcnew System::Windows::Forms::Button());
			this->btnpaniermoyen = (gcnew System::Windows::Forms::Button());
			this->btnchiffreaffaire = (gcnew System::Windows::Forms::Button());
			this->btnarticlereapprovisionnement = (gcnew System::Windows::Forms::Button());
			this->btntotalachatclient = (gcnew System::Windows::Forms::Button());
			this->btntop10ventesp = (gcnew System::Windows::Forms::Button());
			this->btntop10ventesm = (gcnew System::Windows::Forms::Button());
			this->btnvaleurachatstock = (gcnew System::Windows::Forms::Button());
			this->txtpaniermoyen = (gcnew System::Windows::Forms::TextBox());
			this->txtchiffreaffaire = (gcnew System::Windows::Forms::TextBox());
			this->txtmontanttotalttcclient = (gcnew System::Windows::Forms::TextBox());
			this->txtvaleurachatstock = (gcnew System::Windows::Forms::TextBox());
			this->txtvaleurcommercialestock = (gcnew System::Windows::Forms::TextBox());
			this->btnvaleurcommercialestock = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_message
			// 
			this->lbl_message->AutoSize = true;
			this->lbl_message->Location = System::Drawing::Point(14, 608);
			this->lbl_message->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_message->Name = L"lbl_message";
			this->lbl_message->Size = System::Drawing::Size(65, 17);
			this->lbl_message->TabIndex = 6;
			this->lbl_message->Text = L"Message";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(9, 629);
			this->txt_message->Margin = System::Windows::Forms::Padding(4);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(548, 61);
			this->txt_message->TabIndex = 7;
			// 
			// btn_nouveau
			// 
			this->btn_nouveau->Location = System::Drawing::Point(565, 443);
			this->btn_nouveau->Margin = System::Windows::Forms::Padding(4);
			this->btn_nouveau->Name = L"btn_nouveau";
			this->btn_nouveau->Size = System::Drawing::Size(107, 44);
			this->btn_nouveau->TabIndex = 12;
			this->btn_nouveau->Text = L"Nouveau";
			this->btn_nouveau->UseVisualStyleBackColor = true;
			this->btn_nouveau->Visible = false;
			this->btn_nouveau->Click += gcnew System::EventHandler(this, &MyForm::btn_nouveau_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(565, 509);
			this->btn_modifier->Margin = System::Windows::Forms::Padding(4);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(107, 44);
			this->btn_modifier->TabIndex = 13;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Visible = false;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm::btn_modifier_Click);
			// 
			// btn_sup
			// 
			this->btn_sup->Location = System::Drawing::Point(565, 576);
			this->btn_sup->Margin = System::Windows::Forms::Padding(4);
			this->btn_sup->Name = L"btn_sup";
			this->btn_sup->Size = System::Drawing::Size(107, 44);
			this->btn_sup->TabIndex = 14;
			this->btn_sup->Text = L"Supprimer";
			this->btn_sup->UseVisualStyleBackColor = true;
			this->btn_sup->Visible = false;
			this->btn_sup->Click += gcnew System::EventHandler(this, &MyForm::btn_sup_Click);
			// 
			// btn_enregistrer
			// 
			this->btn_enregistrer->Location = System::Drawing::Point(1486, 503);
			this->btn_enregistrer->Margin = System::Windows::Forms::Padding(4);
			this->btn_enregistrer->Name = L"btn_enregistrer";
			this->btn_enregistrer->Size = System::Drawing::Size(131, 177);
			this->btn_enregistrer->TabIndex = 15;
			this->btn_enregistrer->Text = L"ENREGISTRER";
			this->btn_enregistrer->UseVisualStyleBackColor = true;
			this->btn_enregistrer->Click += gcnew System::EventHandler(this, &MyForm::btn_enregistrer_Click);
			// 
			// ModeAdresse
			// 
			this->ModeAdresse->Location = System::Drawing::Point(680, 636);
			this->ModeAdresse->Margin = System::Windows::Forms::Padding(4);
			this->ModeAdresse->Name = L"ModeAdresse";
			this->ModeAdresse->Size = System::Drawing::Size(107, 44);
			this->ModeAdresse->TabIndex = 37;
			this->ModeAdresse->Text = L"Adresse";
			this->ModeAdresse->UseVisualStyleBackColor = true;
			this->ModeAdresse->Click += gcnew System::EventHandler(this, &MyForm::ModeAdresse_Click);
			// 
			// ModePersonnel
			// 
			this->ModePersonnel->Location = System::Drawing::Point(565, 636);
			this->ModePersonnel->Margin = System::Windows::Forms::Padding(4);
			this->ModePersonnel->Name = L"ModePersonnel";
			this->ModePersonnel->Size = System::Drawing::Size(107, 44);
			this->ModePersonnel->TabIndex = 38;
			this->ModePersonnel->Text = L"Personnel";
			this->ModePersonnel->UseVisualStyleBackColor = true;
			this->ModePersonnel->Click += gcnew System::EventHandler(this, &MyForm::ModePersonnel_Click);
			// 
			// ModeClient
			// 
			this->ModeClient->Location = System::Drawing::Point(795, 636);
			this->ModeClient->Margin = System::Windows::Forms::Padding(4);
			this->ModeClient->Name = L"ModeClient";
			this->ModeClient->Size = System::Drawing::Size(107, 44);
			this->ModeClient->TabIndex = 57;
			this->ModeClient->Text = L"Client";
			this->ModeClient->UseVisualStyleBackColor = true;
			this->ModeClient->Click += gcnew System::EventHandler(this, &MyForm::ModeClient_Click_1);
			// 
			// txt5
			// 
			this->txt5->Location = System::Drawing::Point(11, 229);
			this->txt5->Margin = System::Windows::Forms::Padding(4);
			this->txt5->Name = L"txt5";
			this->txt5->Size = System::Drawing::Size(268, 22);
			this->txt5->TabIndex = 67;
			this->txt5->Visible = false;
			this->txt5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt5_KeyPress_1);
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Location = System::Drawing::Point(7, 209);
			this->lbl5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(38, 17);
			this->lbl5->TabIndex = 66;
			this->lbl5->Text = L"label";
			this->lbl5->Visible = false;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(13, 23);
			this->txt1->Margin = System::Windows::Forms::Padding(4);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(268, 22);
			this->txt1->TabIndex = 65;
			this->txt1->Visible = false;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(9, 3);
			this->lbl1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(38, 17);
			this->lbl1->TabIndex = 64;
			this->lbl1->Text = L"label";
			this->lbl1->Visible = false;
			// 
			// txt4
			// 
			this->txt4->Location = System::Drawing::Point(12, 178);
			this->txt4->Margin = System::Windows::Forms::Padding(4);
			this->txt4->Name = L"txt4";
			this->txt4->Size = System::Drawing::Size(268, 22);
			this->txt4->TabIndex = 63;
			this->txt4->Visible = false;
			this->txt4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt4_KeyPress);
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Location = System::Drawing::Point(8, 158);
			this->lbl4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(38, 17);
			this->lbl4->TabIndex = 62;
			this->lbl4->Text = L"label";
			this->lbl4->Visible = false;
			// 
			// txt3
			// 
			this->txt3->Location = System::Drawing::Point(13, 126);
			this->txt3->Margin = System::Windows::Forms::Padding(4);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(268, 22);
			this->txt3->TabIndex = 61;
			this->txt3->Visible = false;
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(9, 106);
			this->lbl3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(38, 17);
			this->lbl3->TabIndex = 60;
			this->lbl3->Text = L"label";
			this->lbl3->Visible = false;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(13, 75);
			this->txt2->Margin = System::Windows::Forms::Padding(4);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(268, 22);
			this->txt2->TabIndex = 59;
			this->txt2->Visible = false;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(9, 55);
			this->lbl2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(38, 17);
			this->lbl2->TabIndex = 58;
			this->lbl2->Text = L"label";
			this->lbl2->Visible = false;
			// 
			// txt9
			// 
			this->txt9->Location = System::Drawing::Point(9, 429);
			this->txt9->Margin = System::Windows::Forms::Padding(4);
			this->txt9->Name = L"txt9";
			this->txt9->Size = System::Drawing::Size(268, 22);
			this->txt9->TabIndex = 71;
			this->txt9->Visible = false;
			// 
			// lbl9
			// 
			this->lbl9->AutoSize = true;
			this->lbl9->Location = System::Drawing::Point(5, 409);
			this->lbl9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(38, 17);
			this->lbl9->TabIndex = 70;
			this->lbl9->Text = L"label";
			this->lbl9->Visible = false;
			// 
			// txt8
			// 
			this->txt8->Location = System::Drawing::Point(10, 378);
			this->txt8->Margin = System::Windows::Forms::Padding(4);
			this->txt8->Name = L"txt8";
			this->txt8->Size = System::Drawing::Size(268, 22);
			this->txt8->TabIndex = 69;
			this->txt8->Visible = false;
			this->txt8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt8_KeyPress);
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->Location = System::Drawing::Point(6, 358);
			this->lbl8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(38, 17);
			this->lbl8->TabIndex = 68;
			this->lbl8->Text = L"label";
			this->lbl8->Visible = false;
			// 
			// btn_end4
			// 
			this->btn_end4->Location = System::Drawing::Point(216, 507);
			this->btn_end4->Margin = System::Windows::Forms::Padding(4);
			this->btn_end4->Name = L"btn_end4";
			this->btn_end4->Size = System::Drawing::Size(61, 28);
			this->btn_end4->TabIndex = 75;
			this->btn_end4->Text = L">>";
			this->btn_end4->UseVisualStyleBackColor = true;
			this->btn_end4->Visible = false;
			this->btn_end4->Click += gcnew System::EventHandler(this, &MyForm::btn_end4_Click_1);
			// 
			// btn_next4
			// 
			this->btn_next4->Location = System::Drawing::Point(147, 507);
			this->btn_next4->Margin = System::Windows::Forms::Padding(4);
			this->btn_next4->Name = L"btn_next4";
			this->btn_next4->Size = System::Drawing::Size(61, 28);
			this->btn_next4->TabIndex = 74;
			this->btn_next4->Text = L">";
			this->btn_next4->UseVisualStyleBackColor = true;
			this->btn_next4->Visible = false;
			this->btn_next4->Click += gcnew System::EventHandler(this, &MyForm::btn_next4_Click_1);
			// 
			// btn_previous4
			// 
			this->btn_previous4->Location = System::Drawing::Point(77, 507);
			this->btn_previous4->Margin = System::Windows::Forms::Padding(4);
			this->btn_previous4->Name = L"btn_previous4";
			this->btn_previous4->Size = System::Drawing::Size(61, 28);
			this->btn_previous4->TabIndex = 73;
			this->btn_previous4->Text = L"<";
			this->btn_previous4->UseVisualStyleBackColor = true;
			this->btn_previous4->Visible = false;
			this->btn_previous4->Click += gcnew System::EventHandler(this, &MyForm::btn_previous4_Click_1);
			// 
			// btn_first4
			// 
			this->btn_first4->Location = System::Drawing::Point(8, 507);
			this->btn_first4->Margin = System::Windows::Forms::Padding(4);
			this->btn_first4->Name = L"btn_first4";
			this->btn_first4->Size = System::Drawing::Size(61, 28);
			this->btn_first4->TabIndex = 72;
			this->btn_first4->Text = L"<<";
			this->btn_first4->UseVisualStyleBackColor = true;
			this->btn_first4->Visible = false;
			this->btn_first4->Click += gcnew System::EventHandler(this, &MyForm::btn_first4_Click_1);
			// 
			// ModeArticle
			// 
			this->ModeArticle->Location = System::Drawing::Point(910, 636);
			this->ModeArticle->Margin = System::Windows::Forms::Padding(4);
			this->ModeArticle->Name = L"ModeArticle";
			this->ModeArticle->Size = System::Drawing::Size(107, 44);
			this->ModeArticle->TabIndex = 76;
			this->ModeArticle->Text = L"Article";
			this->ModeArticle->UseVisualStyleBackColor = true;
			this->ModeArticle->Click += gcnew System::EventHandler(this, &MyForm::ModeArticle_Click);
			// 
			// txt7
			// 
			this->txt7->Location = System::Drawing::Point(10, 330);
			this->txt7->Margin = System::Windows::Forms::Padding(4);
			this->txt7->Name = L"txt7";
			this->txt7->Size = System::Drawing::Size(268, 22);
			this->txt7->TabIndex = 80;
			this->txt7->Visible = false;
			this->txt7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt7_KeyPress_1);
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Location = System::Drawing::Point(6, 310);
			this->lbl7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(38, 17);
			this->lbl7->TabIndex = 79;
			this->lbl7->Text = L"label";
			this->lbl7->Visible = false;
			// 
			// txt6
			// 
			this->txt6->Location = System::Drawing::Point(11, 279);
			this->txt6->Margin = System::Windows::Forms::Padding(4);
			this->txt6->Name = L"txt6";
			this->txt6->Size = System::Drawing::Size(268, 22);
			this->txt6->TabIndex = 78;
			this->txt6->Visible = false;
			this->txt6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt6_KeyPress_1);
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Location = System::Drawing::Point(7, 259);
			this->lbl6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(38, 17);
			this->lbl6->TabIndex = 77;
			this->lbl6->Text = L"label";
			this->lbl6->Visible = false;
			// 
			// ModeCommande
			// 
			this->ModeCommande->Location = System::Drawing::Point(1025, 636);
			this->ModeCommande->Margin = System::Windows::Forms::Padding(4);
			this->ModeCommande->Name = L"ModeCommande";
			this->ModeCommande->Size = System::Drawing::Size(107, 44);
			this->ModeCommande->TabIndex = 99;
			this->ModeCommande->Text = L"Commande";
			this->ModeCommande->UseVisualStyleBackColor = true;
			this->ModeCommande->Click += gcnew System::EventHandler(this, &MyForm::ModeCommande_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->Location = System::Drawing::Point(302, 73);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1315, 363);
			this->dataGridView1->TabIndex = 100;
			// 
			// ViewPersonnel
			// 
			this->ViewPersonnel->Location = System::Drawing::Point(302, 13);
			this->ViewPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->ViewPersonnel->Name = L"ViewPersonnel";
			this->ViewPersonnel->Size = System::Drawing::Size(107, 44);
			this->ViewPersonnel->TabIndex = 101;
			this->ViewPersonnel->Text = L"Personnel";
			this->ViewPersonnel->UseVisualStyleBackColor = true;
			this->ViewPersonnel->Click += gcnew System::EventHandler(this, &MyForm::ViewPersonnel_Click);
			// 
			// ViewAdresse
			// 
			this->ViewAdresse->Location = System::Drawing::Point(417, 12);
			this->ViewAdresse->Margin = System::Windows::Forms::Padding(4);
			this->ViewAdresse->Name = L"ViewAdresse";
			this->ViewAdresse->Size = System::Drawing::Size(107, 44);
			this->ViewAdresse->TabIndex = 102;
			this->ViewAdresse->Text = L"Adresse";
			this->ViewAdresse->UseVisualStyleBackColor = true;
			this->ViewAdresse->Click += gcnew System::EventHandler(this, &MyForm::ViewAdresse_Click);
			// 
			// ViewClient
			// 
			this->ViewClient->Location = System::Drawing::Point(532, 12);
			this->ViewClient->Margin = System::Windows::Forms::Padding(4);
			this->ViewClient->Name = L"ViewClient";
			this->ViewClient->Size = System::Drawing::Size(107, 44);
			this->ViewClient->TabIndex = 103;
			this->ViewClient->Text = L"Client";
			this->ViewClient->UseVisualStyleBackColor = true;
			this->ViewClient->Click += gcnew System::EventHandler(this, &MyForm::ViewClient_Click);
			// 
			// ViewArticle
			// 
			this->ViewArticle->Location = System::Drawing::Point(647, 12);
			this->ViewArticle->Margin = System::Windows::Forms::Padding(4);
			this->ViewArticle->Name = L"ViewArticle";
			this->ViewArticle->Size = System::Drawing::Size(107, 44);
			this->ViewArticle->TabIndex = 104;
			this->ViewArticle->Text = L"Article";
			this->ViewArticle->UseVisualStyleBackColor = true;
			this->ViewArticle->Click += gcnew System::EventHandler(this, &MyForm::ViewArticle_Click);
			// 
			// ViewCommande
			// 
			this->ViewCommande->Location = System::Drawing::Point(762, 12);
			this->ViewCommande->Margin = System::Windows::Forms::Padding(4);
			this->ViewCommande->Name = L"ViewCommande";
			this->ViewCommande->Size = System::Drawing::Size(107, 44);
			this->ViewCommande->TabIndex = 105;
			this->ViewCommande->Text = L"Commande";
			this->ViewCommande->UseVisualStyleBackColor = true;
			this->ViewCommande->Click += gcnew System::EventHandler(this, &MyForm::ViewCommande_Click);
			// 
			// ModePaiement
			// 
			this->ModePaiement->Location = System::Drawing::Point(1140, 636);
			this->ModePaiement->Margin = System::Windows::Forms::Padding(4);
			this->ModePaiement->Name = L"ModePaiement";
			this->ModePaiement->Size = System::Drawing::Size(107, 44);
			this->ModePaiement->TabIndex = 106;
			this->ModePaiement->Text = L"Paiement";
			this->ModePaiement->UseVisualStyleBackColor = true;
			this->ModePaiement->Click += gcnew System::EventHandler(this, &MyForm::ModePaiement_Click);
			// 
			// ViewPaiement
			// 
			this->ViewPaiement->Location = System::Drawing::Point(877, 13);
			this->ViewPaiement->Margin = System::Windows::Forms::Padding(4);
			this->ViewPaiement->Name = L"ViewPaiement";
			this->ViewPaiement->Size = System::Drawing::Size(107, 44);
			this->ViewPaiement->TabIndex = 107;
			this->ViewPaiement->Text = L"Paiement";
			this->ViewPaiement->UseVisualStyleBackColor = true;
			this->ViewPaiement->Click += gcnew System::EventHandler(this, &MyForm::ViewPaiement_Click);
			// 
			// DernierPaiement
			// 
			this->DernierPaiement->Location = System::Drawing::Point(8, 551);
			this->DernierPaiement->Margin = System::Windows::Forms::Padding(4);
			this->DernierPaiement->Name = L"DernierPaiement";
			this->DernierPaiement->Size = System::Drawing::Size(107, 44);
			this->DernierPaiement->TabIndex = 108;
			this->DernierPaiement->Text = L"Dernier Paiement";
			this->DernierPaiement->UseVisualStyleBackColor = true;
			this->DernierPaiement->Visible = false;
			this->DernierPaiement->Click += gcnew System::EventHandler(this, &MyForm::DernierPaiement_Click);
			// 
			// Refresh
			// 
			this->Refresh->Location = System::Drawing::Point(1510, 13);
			this->Refresh->Margin = System::Windows::Forms::Padding(4);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(107, 44);
			this->Refresh->TabIndex = 109;
			this->Refresh->Text = L"Refresh";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &MyForm::Refresh_Click);
			// 
			// txt10
			// 
			this->txt10->Location = System::Drawing::Point(8, 477);
			this->txt10->Margin = System::Windows::Forms::Padding(4);
			this->txt10->Name = L"txt10";
			this->txt10->Size = System::Drawing::Size(268, 22);
			this->txt10->TabIndex = 111;
			this->txt10->Visible = false;
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->Location = System::Drawing::Point(4, 457);
			this->lbl10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(38, 17);
			this->lbl10->TabIndex = 110;
			this->lbl10->Text = L"label";
			this->lbl10->Visible = false;
			// 
			// ViewPasserCommande
			// 
			this->ViewPasserCommande->Location = System::Drawing::Point(992, 13);
			this->ViewPasserCommande->Margin = System::Windows::Forms::Padding(4);
			this->ViewPasserCommande->Name = L"ViewPasserCommande";
			this->ViewPasserCommande->Size = System::Drawing::Size(107, 44);
			this->ViewPasserCommande->TabIndex = 112;
			this->ViewPasserCommande->Text = L"PasserCommande";
			this->ViewPasserCommande->UseVisualStyleBackColor = true;
			this->ViewPasserCommande->Click += gcnew System::EventHandler(this, &MyForm::ViewPasserCommande_Click);
			// 
			// ModePasserCommande
			// 
			this->ModePasserCommande->Location = System::Drawing::Point(1255, 636);
			this->ModePasserCommande->Margin = System::Windows::Forms::Padding(4);
			this->ModePasserCommande->Name = L"ModePasserCommande";
			this->ModePasserCommande->Size = System::Drawing::Size(107, 44);
			this->ModePasserCommande->TabIndex = 113;
			this->ModePasserCommande->Text = L"PasserCommande";
			this->ModePasserCommande->UseVisualStyleBackColor = true;
			this->ModePasserCommande->Click += gcnew System::EventHandler(this, &MyForm::ModePasserCommande_Click);
			// 
			// Paiement
			// 
			this->Paiement->Location = System::Drawing::Point(123, 551);
			this->Paiement->Margin = System::Windows::Forms::Padding(4);
			this->Paiement->Name = L"Paiement";
			this->Paiement->Size = System::Drawing::Size(107, 44);
			this->Paiement->TabIndex = 114;
			this->Paiement->Text = L"Paiement";
			this->Paiement->UseVisualStyleBackColor = true;
			this->Paiement->Visible = false;
			this->Paiement->Click += gcnew System::EventHandler(this, &MyForm::Paiement_Click);
			// 
			// ModeAvoir
			// 
			this->ModeAvoir->Location = System::Drawing::Point(1370, 636);
			this->ModeAvoir->Margin = System::Windows::Forms::Padding(4);
			this->ModeAvoir->Name = L"ModeAvoir";
			this->ModeAvoir->Size = System::Drawing::Size(107, 44);
			this->ModeAvoir->TabIndex = 115;
			this->ModeAvoir->Text = L"Avoir";
			this->ModeAvoir->UseVisualStyleBackColor = true;
			this->ModeAvoir->Click += gcnew System::EventHandler(this, &MyForm::ModeAvoir_Click);
			// 
			// ViewAvoir
			// 
			this->ViewAvoir->Location = System::Drawing::Point(1107, 13);
			this->ViewAvoir->Margin = System::Windows::Forms::Padding(4);
			this->ViewAvoir->Name = L"ViewAvoir";
			this->ViewAvoir->Size = System::Drawing::Size(107, 44);
			this->ViewAvoir->TabIndex = 116;
			this->ViewAvoir->Text = L"Avoir";
			this->ViewAvoir->UseVisualStyleBackColor = true;
			this->ViewAvoir->Click += gcnew System::EventHandler(this, &MyForm::ViewAvoir_Click);
			// 
			// btnpaniermoyen
			// 
			this->btnpaniermoyen->Location = System::Drawing::Point(1624, 73);
			this->btnpaniermoyen->Margin = System::Windows::Forms::Padding(4);
			this->btnpaniermoyen->Name = L"btnpaniermoyen";
			this->btnpaniermoyen->Size = System::Drawing::Size(107, 44);
			this->btnpaniermoyen->TabIndex = 117;
			this->btnpaniermoyen->Text = L"Panier Moyen";
			this->btnpaniermoyen->UseVisualStyleBackColor = true;
			this->btnpaniermoyen->Click += gcnew System::EventHandler(this, &MyForm::btnpaniermoyen_Click);
			// 
			// btnchiffreaffaire
			// 
			this->btnchiffreaffaire->Location = System::Drawing::Point(1624, 125);
			this->btnchiffreaffaire->Margin = System::Windows::Forms::Padding(4);
			this->btnchiffreaffaire->Name = L"btnchiffreaffaire";
			this->btnchiffreaffaire->Size = System::Drawing::Size(107, 44);
			this->btnchiffreaffaire->TabIndex = 118;
			this->btnchiffreaffaire->Text = L"Chiffre d\'Affaire";
			this->btnchiffreaffaire->UseVisualStyleBackColor = true;
			this->btnchiffreaffaire->Click += gcnew System::EventHandler(this, &MyForm::btnchiffreaffaire_Click);
			// 
			// btnarticlereapprovisionnement
			// 
			this->btnarticlereapprovisionnement->Location = System::Drawing::Point(1624, 177);
			this->btnarticlereapprovisionnement->Margin = System::Windows::Forms::Padding(4);
			this->btnarticlereapprovisionnement->Name = L"btnarticlereapprovisionnement";
			this->btnarticlereapprovisionnement->Size = System::Drawing::Size(107, 44);
			this->btnarticlereapprovisionnement->TabIndex = 119;
			this->btnarticlereapprovisionnement->Text = L"Article Réapprovisionnement";
			this->btnarticlereapprovisionnement->UseVisualStyleBackColor = true;
			this->btnarticlereapprovisionnement->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btntotalachatclient
			// 
			this->btntotalachatclient->Location = System::Drawing::Point(1624, 229);
			this->btntotalachatclient->Margin = System::Windows::Forms::Padding(4);
			this->btntotalachatclient->Name = L"btntotalachatclient";
			this->btntotalachatclient->Size = System::Drawing::Size(107, 44);
			this->btntotalachatclient->TabIndex = 120;
			this->btntotalachatclient->Text = L"Total Achat Client";
			this->btntotalachatclient->UseVisualStyleBackColor = true;
			this->btntotalachatclient->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// btntop10ventesp
			// 
			this->btntop10ventesp->Location = System::Drawing::Point(1624, 279);
			this->btntop10ventesp->Margin = System::Windows::Forms::Padding(4);
			this->btntop10ventesp->Name = L"btntop10ventesp";
			this->btntop10ventesp->Size = System::Drawing::Size(107, 44);
			this->btntop10ventesp->TabIndex = 121;
			this->btntop10ventesp->Text = L"Top 10 Ventes (+)";
			this->btntop10ventesp->UseVisualStyleBackColor = true;
			this->btntop10ventesp->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// btntop10ventesm
			// 
			this->btntop10ventesm->Location = System::Drawing::Point(1624, 331);
			this->btntop10ventesm->Margin = System::Windows::Forms::Padding(4);
			this->btntop10ventesm->Name = L"btntop10ventesm";
			this->btntop10ventesm->Size = System::Drawing::Size(107, 44);
			this->btntop10ventesm->TabIndex = 122;
			this->btntop10ventesm->Text = L"Top 10 Ventes (-)";
			this->btntop10ventesm->UseVisualStyleBackColor = true;
			this->btntop10ventesm->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// btnvaleurachatstock
			// 
			this->btnvaleurachatstock->Location = System::Drawing::Point(1624, 382);
			this->btnvaleurachatstock->Margin = System::Windows::Forms::Padding(4);
			this->btnvaleurachatstock->Name = L"btnvaleurachatstock";
			this->btnvaleurachatstock->Size = System::Drawing::Size(107, 44);
			this->btnvaleurachatstock->TabIndex = 123;
			this->btnvaleurachatstock->Text = L"Valeur Achat Stock";
			this->btnvaleurachatstock->UseVisualStyleBackColor = true;
			this->btnvaleurachatstock->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// txtpaniermoyen
			// 
			this->txtpaniermoyen->Location = System::Drawing::Point(1739, 84);
			this->txtpaniermoyen->Margin = System::Windows::Forms::Padding(4);
			this->txtpaniermoyen->Name = L"txtpaniermoyen";
			this->txtpaniermoyen->Size = System::Drawing::Size(170, 22);
			this->txtpaniermoyen->TabIndex = 124;
			// 
			// txtchiffreaffaire
			// 
			this->txtchiffreaffaire->Location = System::Drawing::Point(1739, 136);
			this->txtchiffreaffaire->Margin = System::Windows::Forms::Padding(4);
			this->txtchiffreaffaire->Name = L"txtchiffreaffaire";
			this->txtchiffreaffaire->Size = System::Drawing::Size(170, 22);
			this->txtchiffreaffaire->TabIndex = 125;
			// 
			// txtmontanttotalttcclient
			// 
			this->txtmontanttotalttcclient->Location = System::Drawing::Point(1739, 240);
			this->txtmontanttotalttcclient->Margin = System::Windows::Forms::Padding(4);
			this->txtmontanttotalttcclient->Name = L"txtmontanttotalttcclient";
			this->txtmontanttotalttcclient->Size = System::Drawing::Size(170, 22);
			this->txtmontanttotalttcclient->TabIndex = 127;
			// 
			// txtvaleurachatstock
			// 
			this->txtvaleurachatstock->Location = System::Drawing::Point(1739, 393);
			this->txtvaleurachatstock->Margin = System::Windows::Forms::Padding(4);
			this->txtvaleurachatstock->Name = L"txtvaleurachatstock";
			this->txtvaleurachatstock->Size = System::Drawing::Size(170, 22);
			this->txtvaleurachatstock->TabIndex = 128;
			// 
			// txtvaleurcommercialestock
			// 
			this->txtvaleurcommercialestock->Location = System::Drawing::Point(1739, 455);
			this->txtvaleurcommercialestock->Margin = System::Windows::Forms::Padding(4);
			this->txtvaleurcommercialestock->Name = L"txtvaleurcommercialestock";
			this->txtvaleurcommercialestock->Size = System::Drawing::Size(170, 22);
			this->txtvaleurcommercialestock->TabIndex = 130;
			// 
			// btnvaleurcommercialestock
			// 
			this->btnvaleurcommercialestock->Location = System::Drawing::Point(1624, 434);
			this->btnvaleurcommercialestock->Margin = System::Windows::Forms::Padding(4);
			this->btnvaleurcommercialestock->Name = L"btnvaleurcommercialestock";
			this->btnvaleurcommercialestock->Size = System::Drawing::Size(107, 65);
			this->btnvaleurcommercialestock->TabIndex = 129;
			this->btnvaleurcommercialestock->Text = L"Valeur Commerciale Stock";
			this->btnvaleurcommercialestock->UseVisualStyleBackColor = true;
			this->btnvaleurcommercialestock->Click += gcnew System::EventHandler(this, &MyForm::btnvaleurcommercialestock_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1949, 696);
			this->Controls->Add(this->txtvaleurcommercialestock);
			this->Controls->Add(this->btnvaleurcommercialestock);
			this->Controls->Add(this->txtvaleurachatstock);
			this->Controls->Add(this->txtmontanttotalttcclient);
			this->Controls->Add(this->txtchiffreaffaire);
			this->Controls->Add(this->txtpaniermoyen);
			this->Controls->Add(this->btnvaleurachatstock);
			this->Controls->Add(this->btntop10ventesm);
			this->Controls->Add(this->btntop10ventesp);
			this->Controls->Add(this->btntotalachatclient);
			this->Controls->Add(this->btnarticlereapprovisionnement);
			this->Controls->Add(this->btnchiffreaffaire);
			this->Controls->Add(this->btnpaniermoyen);
			this->Controls->Add(this->ViewAvoir);
			this->Controls->Add(this->ModeAvoir);
			this->Controls->Add(this->Paiement);
			this->Controls->Add(this->ModePasserCommande);
			this->Controls->Add(this->ViewPasserCommande);
			this->Controls->Add(this->txt10);
			this->Controls->Add(this->lbl10);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->DernierPaiement);
			this->Controls->Add(this->ViewPaiement);
			this->Controls->Add(this->ModePaiement);
			this->Controls->Add(this->ViewCommande);
			this->Controls->Add(this->ViewArticle);
			this->Controls->Add(this->ViewClient);
			this->Controls->Add(this->ViewAdresse);
			this->Controls->Add(this->ViewPersonnel);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ModeCommande);
			this->Controls->Add(this->txt7);
			this->Controls->Add(this->lbl7);
			this->Controls->Add(this->txt6);
			this->Controls->Add(this->lbl6);
			this->Controls->Add(this->ModeArticle);
			this->Controls->Add(this->btn_end4);
			this->Controls->Add(this->btn_next4);
			this->Controls->Add(this->btn_previous4);
			this->Controls->Add(this->btn_first4);
			this->Controls->Add(this->txt9);
			this->Controls->Add(this->lbl9);
			this->Controls->Add(this->txt8);
			this->Controls->Add(this->lbl8);
			this->Controls->Add(this->txt5);
			this->Controls->Add(this->lbl5);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->txt4);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->txt3);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->ModeClient);
			this->Controls->Add(this->ModePersonnel);
			this->Controls->Add(this->ModeAdresse);
			this->Controls->Add(this->btn_enregistrer);
			this->Controls->Add(this->btn_sup);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_nouveau);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_message);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Projet POO";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->mode = "RIEN";
		this->ds = gcnew Data::DataSet();
		this->dt = gcnew Data::DataTable();
		this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
		this->loadData(this->index, sender, e);
		this->txt_message->Text = "Data chargées";
	}
	private: void loadData(int index, System::Object^ sender, System::EventArgs^ e)
	{
		this->ds->Clear();

		if (mode2 == "Personnel")
		{
			this->ds = this->processusPersonnes->listePersonnes("PERSONNEL");

			this->txt1->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[0]);
			this->txt2->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[1]);
			this->txt3->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[2]);
			this->txt4->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[3]);
			this->txt5->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[4]);
			this->txt6->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[5]);

			
			if (txt6->Text->Contains("00:00:00"))
			{
				txt6->Text = txt6->Text->Replace(" 00:00:00","");
			}
		}
		else if (mode2 == "Adresse")
		{
			this->ds = this->processusPersonnes->listePersonnes("ADRESSE");

			this->txt1->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index]->ItemArray[0]);
			this->txt2->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index]->ItemArray[1]);
			this->txt3->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index]->ItemArray[2]);
			this->txt4->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index]->ItemArray[3]);

		}
		else if (mode2 == "Client")
		{
			this->ds = this->processusPersonnes->listePersonnes("CLIENT");

			this->txt1->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index]->ItemArray[0]);
			this->txt2->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index]->ItemArray[1]);
			this->txt3->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index]->ItemArray[2]);
			this->txt4->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index]->ItemArray[3]);
			this->txt5->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index]->ItemArray[4]);

			if (txt4->Text->Contains("00:00:00"))
			{
				txt4->Text = txt4->Text->Replace(" 00:00:00", "");
			}
		}
		else if (mode2 == "Article")
		{
			this->ds = this->processusPersonnes->listePersonnes("ARTICLE");

			this->txt1->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index]->ItemArray[0]);
			this->txt2->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index]->ItemArray[1]);
			this->txt3->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index]->ItemArray[2]);
			this->txt4->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index]->ItemArray[3]);
			this->txt5->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index]->ItemArray[4]);
			this->txt6->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index]->ItemArray[5]);
			this->txt7->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index]->ItemArray[6]);
			this->txt8->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index]->ItemArray[7]);
			this->txt9->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index]->ItemArray[8]);

		}
		else if (mode2 == "Commande")
		{
			this->ds = this->processusPersonnes->listePersonnes("COMMANDE");

			this->txt1->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index]->ItemArray[0]);
			this->txt2->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index]->ItemArray[1]);
			this->txt3->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index]->ItemArray[2]);
			this->txt4->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index]->ItemArray[3]);
			this->txt5->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index]->ItemArray[4]);
			this->txt6->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index]->ItemArray[5]);
			this->txt7->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index]->ItemArray[6]);		
			this->txt8->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index]->ItemArray[7]);

			

			if (txt8->Text->Contains("00:00:00"))
			{
				txt8->Text = txt8->Text->Replace(" 00:00:00", "");
			}

			if (mode3 == "Article++")
			{
				if (Convert::ToInt32(r == ""))
				{
					r = "0";
				}
				if (Convert::ToInt32(y == ""))
				{
					y = "0";
				}

				if (y->Contains("."))
				{
					y = y->Replace(".", ",");
				}
				
				this->txt1->Text = "";
				this->txt2->Text = z;
				this->txt3->Text = this->e;
				this->txt4->Text = Convert::ToString((Int32::Parse(r) + quantite));
				this->txt5->Text = t;
				this->txt6->Text = Convert::ToString(Double::Parse(y) + prixUTTC * quantite);


				this->txt7->Text = "";
				this->txt8->Text = "";

				for (int i = 0; i < txt6->Text->Length - 1; i++)
				{
					txt6->Text->Substring(i, 1);
					if (txt6->Text->Substring(i, 1) == ",")
					{
						if (txt6->Text->Length-i > 2)
						{
							txt6->Text = txt6->Text->Substring(0, i + 3);
						}
						else
						{
							txt6->Text = txt6->Text->Substring(0, txt6->Text->Length);

						}
					}
				}

				DernierPaiement->Visible = true;
			}
			else if (mode3 == "Paiement++")
			{
				if (Convert::ToInt32(t == ""))
				{
					t = "0";
				}
				prenomclient = prenomclient->Substring(0, 2);
				nomclient = nomclient->Substring(0, 2);
				adresseville = adresseville->Substring(0, 3);

				if (y->Contains("."))
				{
					y = y->Replace(".", ",");
				}

				this->txt1->Text = "";
				this->txt2->Text = idclient;
				this->txt3->Text = prenomclient + nomclient + datepaiement2 + adresseville + incrementref;
				this->txt4->Text = r;

				

				if (annivclient == datepaiement)
				{
					this->txt5->Text = Convert::ToString(Double::Parse(y) * 0.35);
				}
				else
				{
					this->txt5->Text = "0";
				}
				
				this->txt6->Text = y;

				this->txt8->Text = v;
				
				
				if (txt5->Text->Contains("."))
				{
					txt5->Text = txt5->Text->Replace(".", ",");
				}

				if (txt6->Text->Contains("."))
				{
					txt6->Text = txt6->Text->Replace(".", ",");
				}

				for (int i = 0; i < txt5->Text->Length - 1; i++)
				{
					txt5->Text->Substring(i, 1);
					if (txt5->Text->Substring(i, 1) == ",")
					{
						if (txt5->Text->Length - i > 2)
						{
							txt5->Text = txt5->Text->Substring(0, i + 3);
						}
						else
						{
							txt5->Text = txt5->Text->Substring(0, txt5->Text->Length);
						}
					}
				}

				for (int i = 0; i < txt6->Text->Length - 1; i++)
				{
					txt6->Text->Substring(i, 1);
					if (txt6->Text->Substring(i, 1) == ",")
					{
						if (txt6->Text->Length - i > 2)
						{
							txt6->Text = txt6->Text->Substring(0, i + 3);
						}
						else
						{
							txt6->Text = txt6->Text->Substring(0, txt6->Text->Length);
						}
					}
				}

				this->txt7->Text = Convert::ToString(Double::Parse(txt6->Text) - Double::Parse(txt5->Text));

				if (txt7->Text->Contains("."))
				{
					txt7->Text = txt7->Text->Replace(".", ",");
				}

				for (int i = 0; i < txt7->Text->Length - 1; i++)
				{
					txt7->Text->Substring(i, 1);
					if (txt7->Text->Substring(i, 1) == ",")
					{
						if (txt7->Text->Length - i > 2)
						{
							txt7->Text = txt7->Text->Substring(0, i + 3);
						}
						else
						{
							txt7->Text = txt7->Text->Substring(0, txt7->Text->Length);
						}
					}
				}

				if (txt5->Text->Contains(","))
				{
					txt5->Text = txt5->Text->Replace(",", ".");
				}
				if (txt6->Text->Contains(","))
				{
					txt6->Text = txt6->Text->Replace(",", ".");
				}
				if (txt7->Text->Contains(","))
				{
					txt7->Text = txt7->Text->Replace(",", ".");
				}
				

				Paiement->Visible = true;
			}
		}
		else if (mode2 == "Paiement")
		{
			this->ds = this->processusPersonnes->listePersonnes("PAIEMENT");

			this->txt1->Text = Convert::ToString(this->ds->Tables["PAIEMENT"]->Rows[this->index]->ItemArray[0]);
			this->txt2->Text = Convert::ToString(this->ds->Tables["PAIEMENT"]->Rows[this->index]->ItemArray[1]);
			this->txt3->Text = Convert::ToString(this->ds->Tables["PAIEMENT"]->Rows[this->index]->ItemArray[2]);
			this->txt4->Text = Convert::ToString(this->ds->Tables["PAIEMENT"]->Rows[this->index]->ItemArray[3]);
			this->txt5->Text = Convert::ToString(this->ds->Tables["PAIEMENT"]->Rows[this->index]->ItemArray[4]);

			if (txt5->Text->Contains("00:00:00"))
			{
				txt5->Text = txt5->Text->Replace(" 00:00:00", "");
			}

			if (mode3 == "Paiement++")
			{
				this->txt1->Clear();
				this->txt2->Clear();
				this->txt2->Clear();
				this->txt3->Clear();
				this->txt4->Clear();
				this->txt5->Clear();

				mode = "nouv";
			}

		}
		else if (mode2 == "PasserCommande")
		{
			this->ds = this->processusPersonnes->listePersonnes("PASSERCOMMANDE");

			this->txt1->Text = Convert::ToString(this->ds->Tables["PASSERCOMMANDE"]->Rows[this->index]->ItemArray[0]);
			this->txt2->Text = Convert::ToString(this->ds->Tables["PASSERCOMMANDE"]->Rows[this->index]->ItemArray[1]);
			this->txt3->Text = Convert::ToString(this->ds->Tables["PASSERCOMMANDE"]->Rows[this->index]->ItemArray[2]);
			this->txt4->Text = Convert::ToString(this->ds->Tables["PASSERCOMMANDE"]->Rows[this->index]->ItemArray[3]);

			if (mode3 == "Article++")
			{
				this->txt1->Clear();
				this->txt2->Clear();
				this->txt3->Clear();
				this->txt4->Clear();

				mode = "nouv";
			}
		}

		else if (mode2 == "Avoir")
		{
		this->ds = this->processusPersonnes->listePersonnes("AVOIR");

		this->txt1->Text = Convert::ToString(this->ds->Tables["AVOIR"]->Rows[this->index]->ItemArray[0]);
		this->txt2->Text = Convert::ToString(this->ds->Tables["AVOIR"]->Rows[this->index]->ItemArray[1]);
		this->txt3->Text = Convert::ToString(this->ds->Tables["AVOIR"]->Rows[this->index]->ItemArray[2]);
		this->txt4->Text = Convert::ToString(this->ds->Tables["AVOIR"]->Rows[this->index]->ItemArray[3]);

		}
		

	}


	private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->txt1->Clear();
		this->txt2->Clear();
		this->txt3->Clear();
		this->txt4->Clear();
		this->txt5->Clear();
		this->txt6->Clear();
		this->txt7->Clear();
		this->txt8->Clear();
		this->txt9->Clear();
		this->txt10->Clear();
		
		txt1->Enabled = false;
		txt2->Enabled = true;
		txt3->Enabled = true;
		txt4->Enabled = true;
		txt5->Enabled = true;
		txt6->Enabled = true;
		txt7->Enabled = true;
		txt8->Enabled = true;
		txt9->Enabled = true;
		txt10->Enabled = true;

		if (mode2 == "Commande")
		{
			DernierPaiement->Visible = true;
			Paiement->Visible = true;
		}
		

		this->mode = "nouv";
		this->txt_message->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
	}


	private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		txt1->Enabled = false;
		

		this->mode = "maj";
		this->txt_message->Text = "Veuillez modifier les information de la nouvelle courante et enregistrer.";
	}



	private: System::Void btn_sup_Click(System::Object^ sender, System::EventArgs^ e)
	{

		this->mode = "sup";

		this->txt_message->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";

	}




	private: System::Void btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		if (this->mode2 == "Personnel")
		{
			
			if (this->mode == "nouv")
			{
				String^ stock1 = txt6->Text->Substring(0, 2);
				String^ stock2 = txt6->Text->Substring(3, 2);
				String^ stock3 = txt6->Text->Substring(txt6->Text->Trim()->Length - 4, 4);
				txt6->Text = stock3 + "/" + stock2 + "/" + stock1;

				int Id;
				if (this->txt5->Text == "")
				{
					Id = this->processusPersonnes->ajouterPersonnelNULL(this->txt2->Text, this->txt3->Text, Convert::ToInt32(this->txt4->Text), this->txt6->Text);
				}
				else
				{
					Id = this->processusPersonnes->ajouterPersonnel(this->txt2->Text, this->txt3->Text, Convert::ToInt32(this->txt4->Text), Convert::ToInt32(this->txt5->Text), this->txt6->Text);
				}

				this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
			}
			else if (this->mode == "maj")
			{
				String^ stock1 = txt6->Text->Substring(0, 2);
				String^ stock2 = txt6->Text->Substring(3, 2);
				String^ stock3 = txt6->Text->Substring(txt6->Text->Trim()->Length - 4, 4);
				txt6->Text = stock3 + "/" + stock2 + "/" + stock1;

				if (this->txt5->Text == "")
				{
					this->processusPersonnes->modifierPersonnelNULL(Convert::ToInt32(this->txt1->Text), this->txt2->Text, this->txt3->Text, Convert::ToInt32(this->txt4->Text), this->txt6->Text);
				}
				else
				{
					this->processusPersonnes->modifierPersonnel(Convert::ToInt32(this->txt1->Text), this->txt2->Text, this->txt3->Text, Convert::ToInt32(this->txt4->Text), Convert::ToInt32(this->txt5->Text), this->txt6->Text);
				}
			}
			else if (this->mode == "sup")
			{
				this->processusPersonnes->supprimerPersonnel(Convert::ToInt32(this->txt1->Text));

			}
		}

		else if (this->mode2 == "Adresse")
		{
			if (this->mode == "nouv")
			{
				int Id;
				Id = this->processusPersonnes->ajouterAdresse(this->txt2->Text, this->txt3->Text, this->txt4->Text);
				this->txt_message->Text = "L'ID généré est le : " + Id + ". ";

			}
			else if (this->mode == "maj")
			{
				this->processusPersonnes->modifierAdresse(Convert::ToInt32(this->txt1->Text), this->txt2->Text, this->txt3->Text, this->txt4->Text);
			}
			else if (this->mode == "sup")
			{
				this->processusPersonnes->supprimerAdresse(Convert::ToInt32(this->txt1->Text));
			}
		}

		else if (this->mode2 == "Client")
		{
			if (this->mode == "nouv")
			{
				String^ stock1 = txt4->Text->Substring(0, 2);
				String^ stock2 = txt4->Text->Substring(3, 2);
				String^ stock3 = txt4->Text->Substring(txt4->Text->Trim()->Length - 4, 4);
				txt4->Text = stock3 + "/" + stock2 + "/" + stock1;

				int Id;

				Id = this->processusPersonnes->ajouterClient(this->txt2->Text, this->txt3->Text, this->txt4->Text, this->txt5->Text);
				this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
			}
			else if (this->mode == "maj")
			{
				String^ stock1 = txt4->Text->Substring(0, 2);
				String^ stock2 = txt4->Text->Substring(3, 2);
				String^ stock3 = txt4->Text->Substring(txt4->Text->Trim()->Length - 4, 4);
				txt4->Text = stock3 + "/" + stock2 + "/" + stock1;

				this->processusPersonnes->modifierClient(Convert::ToInt32(this->txt1->Text), this->txt2->Text, this->txt3->Text, this->txt4->Text, this->txt5->Text);
			}
			else if (this->mode == "sup")
			{
				this->processusPersonnes->supprimerClient(Convert::ToInt32(this->txt1->Text));
			}
		}

		else if (this->mode2 == "Article")
		{
			if (this->mode == "nouv")
			{
				int Id;
				
				Id = this->processusPersonnes->ajouterArticle(this->txt2->Text, this->txt3->Text, this->txt4->Text, this->txt5->Text, this->txt6->Text, this->txt7->Text, this->txt8->Text, this->txt9->Text, this->txt10->Text);
				
				this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
			}
			else if (this->mode == "maj")
			{
					this->processusPersonnes->modifierArticle(Convert::ToInt32(this->txt1->Text), this->txt2->Text, this->txt3->Text, this->txt4->Text, this->txt5->Text, this->txt6->Text, this->txt7->Text, this->txt8->Text, this->txt9->Text, this->txt10->Text);
			}
			else if (this->mode == "sup")
			{
				this->processusPersonnes->supprimerArticle(Convert::ToInt32(this->txt1->Text));
			}
		}
		else if (this->mode2 == "Commande")
		{
			if (this->mode == "nouv")
			{
				int Id;
				if (this->txt8->Text == "")
				{
					Id = this->processusPersonnes->ajouterCommandeNULL(Convert::ToInt32(this->txt2->Text), this->txt3->Text, this->txt4->Text, this->txt5->Text, this->txt6->Text, this->txt7->Text);
					lastidcommande = Id;
				}
				else
				{
					String^ stock1 = txt8->Text->Substring(0, 2);
					String^ stock2 = txt8->Text->Substring(3, 2);
					String^ stock3 = txt8->Text->Substring(txt8->Text->Trim()->Length - 4, 4);
					txt8->Text = stock3 + "/" + stock2 + "/" + stock1;

					Id = this->processusPersonnes->ajouterCommande(Convert::ToInt32(this->txt2->Text), this->txt3->Text, this->txt4->Text, this->txt5->Text, this->txt6->Text, this->txt7->Text, this->txt8->Text);
					lastidcommande = Id;
				}
					if (mode3 == "Article++" || mode3 == "Paiement++")
					{
						ViewPasserCommande_Click(sender, e);
						ViewPaiement_Click(sender, e);
						mode3 = "";
					}
					

				

				this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
			}

			else if (this->mode == "maj")
			{
				String^ stock1 = txt8->Text->Substring(0, 2);
				String^ stock2 = txt8->Text->Substring(3, 2);
				String^ stock3 = txt8->Text->Substring(txt7->Text->Trim()->Length - 4, 4);
				txt8->Text = stock3 + "/" + stock2 + "/" + stock1;

				if (this->txt8->Text == "")
				{
					this->processusPersonnes->modifierCommandeNULL(Convert::ToInt32(this->txt1->Text), Convert::ToInt32(this->txt2->Text), this->txt3->Text, this->txt4->Text, this->txt5->Text, this->txt6->Text, this->txt7->Text);
				}
				else
				{
					this->processusPersonnes->modifierCommande(Convert::ToInt32(this->txt1->Text), Convert::ToInt32(this->txt2->Text), this->txt3->Text, this->txt4->Text, this->txt5->Text, this->txt6->Text, this->txt7->Text, this->txt8->Text);
				}
			}
			else if (this->mode == "sup")
			{
				this->processusPersonnes->supprimerCommande(Convert::ToInt32(this->txt1->Text));
			}
		}
		else if (this->mode2 == "Paiement")
		{
		if (this->mode == "nouv")
		{
			if (this->mode3 == "Paiement++")
			{
				datepaiement = txt5->Text;
				datepaiement = datepaiement->Substring(0, 5);
				datepaiement2 = txt5->Text->Substring(txt5->TextLength - 4, 4);
			}

			String^ stock1 = txt5->Text->Substring(0, 2);
			String^ stock2 = txt5->Text->Substring(3, 2);
			String^ stock3 = txt5->Text->Substring(txt5->Text->Trim()->Length - 4, 4);
			txt5->Text = stock3 + "/" + stock2 + "/" + stock1;

			int Id;
				
			if (txt2->Text == "")
			{
				Id = this->processusPersonnes->ajouterPaiementNULL(this->txt3->Text, this->txt4->Text, this->txt5->Text);
			}
			else
			{
				Id = this->processusPersonnes->ajouterPaiement(Convert::ToInt32(this->txt2->Text), this->txt3->Text, this->txt4->Text, this->txt5->Text);
			}

			if (LastPaiement == "vrai")
			{
				this->processusPersonnes->ajouterDateSolde(Convert::ToInt32(this->txt2->Text), this->txt5->Text);
			}

			if (mode3 == "Paiement++")
			{
				txt2->Enabled = true;
				ViewClient_Click(sender, e);
				ViewAvoir_Click(sender, e);
				ViewAdresse_Click(sender, e);
				ViewCommande_Click(sender, e);
			}

			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}

		else if (this->mode == "maj")
		{
			String^ stock1 = txt5->Text->Substring(0, 2);
			String^ stock2 = txt5->Text->Substring(3, 2);
			String^ stock3 = txt5->Text->Substring(txt5->Text->Trim()->Length - 4, 4);
			txt5->Text = stock3 + "/" + stock2 + "/" + stock1;

			this->processusPersonnes->modifierPaiement(Convert::ToInt32(this->txt1->Text), Convert::ToInt32(this->txt2->Text), this->txt3->Text, this->txt4->Text, this->txt5->Text);
		
			if (LastPaiement == "vrai")
			{
				this->processusPersonnes->ajouterDateSolde(Convert::ToInt32(this->txt2->Text), this->txt5->Text);
			}
		}
		else if (this->mode == "sup")
		{
			this->processusPersonnes->supprimerPaiement(Convert::ToInt32(this->txt1->Text));
		}
		}
		else if (this->mode2 == "PasserCommande")
		{
			if (this->mode == "nouv")
			{
				int Id;
				if (txt2->Text == "")
				{
					Id = this->processusPersonnes->ajouterPasserCommandeNULL(Convert::ToInt32(this->txt3->Text), this->txt4->Text);
				}
				else
				{
					Id = this->processusPersonnes->ajouterPasserCommande(Convert::ToInt32(this->txt2->Text), Convert::ToInt32(this->txt3->Text), this->txt4->Text);
				}

				if (this->mode3 == "Article++")
				{
					idarticle = Convert::ToInt32(txt3->Text);
					quantite = Convert::ToInt32(txt4->Text);
					this->processusPersonnes->modifierArticleStock(idarticle, quantite);

					txt2->Enabled = true;
					ViewArticle_Click(sender, e);
				}
				
			}

			else if (this->mode == "maj")
			{
				this->processusPersonnes->modifierPasserCommande(Convert::ToInt32(this->txt1->Text), Convert::ToInt32(this->txt2->Text), Convert::ToInt32(this->txt3->Text), this->txt4->Text);
			}
			else if (this->mode == "sup")
			{
				this->processusPersonnes->supprimerPasserCommande(Convert::ToInt32(this->txt1->Text));
				
			}
		}
		else if (this->mode2 == "Avoir")
		{
		if (this->mode == "nouv")
		{
			int Id;

			Id = this->processusPersonnes->ajouterAvoir(Convert::ToInt32(this->txt2->Text), Convert::ToInt32(this->txt3->Text), this->txt4->Text);
		}
		else if (this->mode == "maj")
		{
			this->processusPersonnes->modifierAvoir(Convert::ToInt32(this->txt1->Text), Convert::ToInt32(this->txt2->Text), Convert::ToInt32(this->txt3->Text), this->txt4->Text);
		}
		else if (this->mode == "sup")
		{
			this->processusPersonnes->supprimerAvoir(Convert::ToInt32(this->txt1->Text));

		}
		}



		this->loadData(this->index, sender, e);

		this->txt_message->Text += "Traitement terminé.";
	}

	private: System::Void btn_first4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->index = 0;
		this->loadData(this->index, sender, e);
		this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
	}
	private: System::Void btn_previous4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (this->index > 0)
		{
			this->index--;
			this->loadData(this->index, sender, e);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		}
	}
	private: System::Void btn_next4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (mode2 == "Personnel")
		{
			if (this->index < this->ds->Tables["PERSONNEL"]->Rows->Count - 1)
			{
				this->index++;
				this->loadData(this->index, sender, e);
				this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
			}
		}
		else if (mode2 == "Adresse")
		{
			if (this->index < this->ds->Tables["ADRESSE"]->Rows->Count - 1)
			{
				this->index++;
				this->loadData(this->index, sender, e);
				this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
			}
		}
		else if (mode2 == "Client")
		{
			if (this->index < this->ds->Tables["CLIENT"]->Rows->Count - 1)
			{
				this->index++;
				this->loadData(this->index, sender, e);
				this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
			}
		}
		else if (mode2 == "Article")
		{
			if (this->index < this->ds->Tables["ARTICLE"]->Rows->Count - 1)
			{
				this->index++;
				this->loadData(this->index, sender, e);
				this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
			}
		}
		else if (mode2 == "Commande")
		{
			if (this->index < this->ds->Tables["COMMANDE"]->Rows->Count - 1)
			{
				this->index++;
				this->loadData(this->index, sender, e);
				this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
			}
		}
		else if (mode2 == "Paiement")
		{
			if (this->index < this->ds->Tables["PAIEMENT"]->Rows->Count - 1)
			{
				this->index++;
				this->loadData(this->index, sender, e);
				this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
			}
		}
		else if (mode2 == "PasserCommande")
		{
			if (this->index < this->ds->Tables["PASSERCOMMANDE"]->Rows->Count - 1)
			{
				this->index++;
				this->loadData(this->index, sender, e);
				this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
			}
		}
		else if (mode2 == "Avoir")
		{
			if (this->index < this->ds->Tables["AVOIR"]->Rows->Count - 1)
			{
				this->index++;
				this->loadData(this->index, sender, e);
				this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
			}
		}
	}
	private: System::Void btn_end4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (mode2 == "Personnel")
		{
			this->index = this->ds->Tables["PERSONNEL"]->Rows->Count - 1;
			this->loadData(this->index, sender, e);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		}
		else if (mode2 == "Adresse")
		{
			this->index = this->ds->Tables["ADRESSE"]->Rows->Count - 1;
			this->loadData(this->index, sender, e);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		}
		else if (mode2 == "Client")
		{
			this->index = this->ds->Tables["CLIENT"]->Rows->Count - 1;
			this->loadData(this->index, sender, e);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		}
		else if (mode2 == "Article")
		{
			this->index = this->ds->Tables["ARTICLE"]->Rows->Count - 1;
			this->loadData(this->index, sender, e);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		}
		else if (mode2 == "Commande")
		{
			this->index = this->ds->Tables["COMMANDE"]->Rows->Count - 1;
			this->loadData(this->index, sender, e);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
			
		}
		else if (mode2 == "Paiement")
		{
			this->index = this->ds->Tables["PAIEMENT"]->Rows->Count - 1;
			this->loadData(this->index, sender, e);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);

		}
		else if (mode2 == "PasserCommande")
		{
			this->index = this->ds->Tables["PASSERCOMMANDE"]->Rows->Count - 1;
			this->loadData(this->index, sender, e);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);

		}
		else if (mode2 == "Avoir")
		{
			this->index = this->ds->Tables["AVOIR"]->Rows->Count - 1;
			this->loadData(this->index, sender, e);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);

		}
	}


	private: System::Void ModePersonnel_Click(System::Object^ sender, System::EventArgs^ e) {

		this->mode2 = "Personnel";

		lbl1->Visible = true;
		lbl2->Visible = true;
		lbl3->Visible = true;
		lbl4->Visible = true;
		lbl5->Visible = true;
		lbl6->Visible = true;
		lbl7->Visible = false;
		lbl8->Visible = false;
		lbl9->Visible = false;
		lbl10->Visible = false;

		txt1->Visible = true;
		txt2->Visible = true;
		txt3->Visible = true;
		txt4->Visible = true;
		txt5->Visible = true;
		txt6->Visible = true;
		txt7->Visible = false;
		txt8->Visible = false;
		txt9->Visible = false;
		txt10->Visible = false;

		DernierPaiement->Visible = false;
		Paiement->Visible = false;

		btn_first4->Location = System::Drawing::Point(txt6->Left, txt6->Bottom + 10);
		btn_previous4->Location = System::Drawing::Point(btn_first4->Right + 6, btn_first4->Top);
		btn_next4->Location = System::Drawing::Point(btn_previous4->Right + 6, btn_first4->Top);
		btn_end4->Location = System::Drawing::Point(btn_next4->Right + 6, btn_first4->Top);

		btn_first4->Visible = true;
		btn_previous4->Visible = true;
		btn_next4->Visible = true;
		btn_end4->Visible = true;

		btn_sup->Location = System::Drawing::Point(ModePersonnel->Left, ModePersonnel->Top - (btn_sup->Bottom - btn_sup->Top) - 10);
		btn_modifier->Location = System::Drawing::Point(ModePersonnel->Left, btn_sup->Top - (btn_modifier->Bottom - btn_modifier->Top) - 10);
		btn_nouveau->Location = System::Drawing::Point(ModePersonnel->Left, btn_modifier->Top - (btn_sup->Bottom - btn_sup->Top) - 10);

		btn_nouveau->Visible = true;
		btn_modifier->Visible = true;
		btn_sup->Visible = true;

		lbl1->Text = "ID Personnel";
		lbl2->Text = "Nom Personnel";
		lbl3->Text = "Prenom Personnel";
		lbl4->Text = "ID Adresse";
		lbl5->Text = "ID Superieur";
		lbl6->Text = "Date Embauche";
		
		this->index = 0;
		this->loadData(this->index, sender, e);

	}
	private: System::Void ModeAdresse_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->mode2 = "Adresse";

		lbl1->Visible = true;
		lbl2->Visible = true;
		lbl3->Visible = true;
		lbl4->Visible = true;
		lbl5->Visible = false;
		lbl6->Visible = false;
		lbl7->Visible = false;
		lbl8->Visible = false;
		lbl9->Visible = false;
		lbl10->Visible = false;

		txt1->Visible = true;
		txt2->Visible = true;
		txt3->Visible = true;
		txt4->Visible = true;
		txt5->Visible = false;
		txt6->Visible = false;
		txt7->Visible = false;
		txt8->Visible = false;
		txt9->Visible = false;
		txt10->Visible = false;

		DernierPaiement->Visible = false;
		Paiement->Visible = false;

		btn_first4->Location = System::Drawing::Point(txt4->Left, txt4->Bottom + 10);
		btn_previous4->Location = System::Drawing::Point(btn_first4->Right + 6, btn_first4->Top);
		btn_next4->Location = System::Drawing::Point(btn_previous4->Right + 6, btn_first4->Top);
		btn_end4->Location = System::Drawing::Point(btn_next4->Right + 6, btn_first4->Top);
		
		btn_first4->Visible = true;
		btn_previous4->Visible = true;
		btn_next4->Visible = true;
		btn_end4->Visible = true;

		btn_sup->Location = System::Drawing::Point(ModeAdresse->Left, ModeAdresse->Top - (btn_sup->Bottom - btn_sup->Top) - 10);
		btn_modifier->Location = System::Drawing::Point(ModeAdresse->Left, btn_sup->Top - (btn_modifier->Bottom - btn_modifier->Top) - 10);
		btn_nouveau->Location = System::Drawing::Point(ModeAdresse->Left, btn_modifier->Top - (btn_sup->Bottom - btn_sup->Top) - 10);

		btn_nouveau->Visible = true;
		btn_modifier->Visible = true;
		btn_sup->Visible = true;

		lbl1->Text = "ID Adresse";
		lbl2->Text = "Adresse Rue";
		lbl3->Text = "Adresse Ville";
		lbl4->Text = "Adresse Code Postal";

		

		

		this->index = 0;
		this->loadData(this->index, sender, e);

	}
	private: System::Void ModeClient_Click_1(System::Object^ sender, System::EventArgs^ e) {


		this->mode2 = "Client";

		lbl1->Visible = true;
		lbl2->Visible = true;
		lbl3->Visible = true;
		lbl4->Visible = true;
		lbl5->Visible = true;
		lbl6->Visible = false;
		lbl7->Visible = false;
		lbl8->Visible = false;
		lbl9->Visible = false;
		lbl10->Visible = false;

		txt1->Visible = true;
		txt2->Visible = true;
		txt3->Visible = true;
		txt4->Visible = true;
		txt5->Visible = true;
		txt6->Visible = false;
		txt7->Visible = false;
		txt8->Visible = false;
		txt9->Visible = false;
		txt10->Visible = false;

		DernierPaiement->Visible = false;
		Paiement->Visible = false;

		btn_first4->Location = System::Drawing::Point(txt5->Left, txt5->Bottom + 10);
		btn_previous4->Location = System::Drawing::Point(btn_first4->Right + 6, btn_first4->Top);
		btn_next4->Location = System::Drawing::Point(btn_previous4->Right + 6, btn_first4->Top);
		btn_end4->Location = System::Drawing::Point(btn_next4->Right + 6, btn_first4->Top);
		
		btn_first4->Visible = true;
		btn_previous4->Visible = true;
		btn_next4->Visible = true;
		btn_end4->Visible = true;

		btn_sup->Location = System::Drawing::Point(ModeClient->Left, ModeClient->Top - (btn_sup->Bottom - btn_sup->Top) - 10);
		btn_modifier->Location = System::Drawing::Point(ModeClient->Left, btn_sup->Top - (btn_modifier->Bottom - btn_modifier->Top) - 10);
		btn_nouveau->Location = System::Drawing::Point(ModeClient->Left, btn_modifier->Top - (btn_sup->Bottom - btn_sup->Top) - 10);

		btn_nouveau->Visible = true;
		btn_modifier->Visible = true;
		btn_sup->Visible = true;

		lbl1->Text = "ID Client";
		lbl2->Text = "Nom Client";
		lbl3->Text = "Prenom Client";
		lbl4->Text = "Date De Naissance";
		lbl5->Text = "Numero Client";

		
		this->index = 0;
		this->loadData(this->index, sender, e);

	}
	private: System::Void ModeArticle_Click(System::Object^ sender, System::EventArgs^ e) {


		this->mode2 = "Article";

		lbl1->Visible = true;
		lbl2->Visible = true;
		lbl3->Visible = true;
		lbl4->Visible = true;
		lbl5->Visible = true;
		lbl6->Visible = true;
		lbl7->Visible = true;
		lbl8->Visible = true;
		lbl9->Visible = true;
		lbl10->Visible = true;

		txt1->Visible = true;
		txt2->Visible = true;
		txt3->Visible = true;
		txt4->Visible = true;
		txt5->Visible = true;
		txt6->Visible = true;
		txt7->Visible = true;
		txt8->Visible = true;
		txt9->Visible = true;
		txt10->Visible = true;

		DernierPaiement->Visible = false;
		Paiement->Visible = false;

		btn_first4->Location = System::Drawing::Point(txt10->Left, txt10->Bottom + 10);
		btn_previous4->Location = System::Drawing::Point(btn_first4->Right + 6, btn_first4->Top);
		btn_next4->Location = System::Drawing::Point(btn_previous4->Right + 6, btn_first4->Top);
		btn_end4->Location = System::Drawing::Point(btn_next4->Right + 6, btn_first4->Top);
		
		btn_first4->Visible = true;
		btn_previous4->Visible = true;
		btn_next4->Visible = true;
		btn_end4->Visible = true;

		btn_sup->Location = System::Drawing::Point(ModeArticle->Left, ModeArticle->Top - (btn_sup->Bottom - btn_sup->Top) - 10);
		btn_modifier->Location = System::Drawing::Point(ModeArticle->Left, btn_sup->Top - (btn_modifier->Bottom - btn_modifier->Top) - 10);
		btn_nouveau->Location = System::Drawing::Point(ModeArticle->Left, btn_modifier->Top - (btn_sup->Bottom - btn_sup->Top) - 10);

		btn_nouveau->Visible = true;
		btn_modifier->Visible = true;
		btn_sup->Visible = true;

		lbl1->Text = "ID Article";
		lbl2->Text = "Reference Article";
		lbl3->Text = "Nom Article";
		lbl4->Text = "Nature Article";
		lbl5->Text = "Prix UHT";
		lbl6->Text = "Montant TVA";
		lbl7->Text = "Prix UTTC";
		lbl8->Text = "Seuil De Reapprovisionnement";
		lbl9->Text = "Couleur";


		this->index = 0;
		this->loadData(this->index, sender, e);

	}
	private: System::Void ModeCommande_Click(System::Object^ sender, System::EventArgs^ e) {

		this->mode2 = "Commande";
		

		lbl1->Visible = true;
		lbl2->Visible = true;
		lbl3->Visible = true;
		lbl4->Visible = true;
		lbl5->Visible = true;
		lbl6->Visible = true;
		lbl7->Visible = true;
		lbl8->Visible = true;
		lbl9->Visible = false;
		lbl10->Visible = false;

		txt1->Visible = true;
		txt2->Visible = true;
		txt3->Visible = true;
		txt4->Visible = true;
		txt5->Visible = true;
		txt6->Visible = true;
		txt7->Visible = true;
		txt8->Visible = true;
		txt9->Visible = false;
		txt10->Visible = false;

		

		btn_first4->Location = System::Drawing::Point(txt8->Left, txt8->Bottom + 10);
		btn_previous4->Location = System::Drawing::Point(btn_first4->Right + 6, btn_first4->Top);
		btn_next4->Location = System::Drawing::Point(btn_previous4->Right + 6, btn_first4->Top);
		btn_end4->Location = System::Drawing::Point(btn_next4->Right + 6, btn_first4->Top);

		btn_first4->Visible = true;
		btn_previous4->Visible = true;
		btn_next4->Visible = true;
		btn_end4->Visible = true;

		btn_sup->Location = System::Drawing::Point(ModeCommande->Left, ModeCommande->Top - (btn_sup->Bottom - btn_sup->Top) - 10);
		btn_modifier->Location = System::Drawing::Point(ModeCommande->Left, btn_sup->Top - (btn_modifier->Bottom - btn_modifier->Top) - 10);
		btn_nouveau->Location = System::Drawing::Point(ModeCommande->Left, btn_modifier->Top - (btn_sup->Bottom - btn_sup->Top) - 10);

		btn_nouveau->Visible = true;
		btn_modifier->Visible = true;
		btn_sup->Visible = true;


		DernierPaiement->Text = "Ajouter un article";
		DernierPaiement->Location = System::Drawing::Point(btn_first4->Left, btn_first4->Bottom + 10);
		if (mode3 == "Paiement++")
		{
			DernierPaiement->Visible = true;
		}
		else
		{
			DernierPaiement->Visible = false;
		}

		Paiement->Location = System::Drawing::Point(DernierPaiement->Right + 6, btn_first4->Bottom + 10);

		Paiement->Visible = true;

		lbl1->Text = "ID Commande";
		lbl2->Text = "ID Client";
		lbl3->Text = "Reference Commande";
		lbl4->Text = "Nombre D'Article Commandé";
		lbl5->Text = "Montant Remise";
		lbl6->Text = "Montant Total";
		lbl7->Text = "Montant TotalTTC";
		lbl8->Text = "Date Solde";

		this->index = 0;
		this->loadData(this->index, sender, e);
	}

private: System::Void ModePaiement_Click(System::Object^ sender, System::EventArgs^ e) {

	this->mode2 = "Paiement";

	if (mode3 == "Paiement++")
	{
		txt2->Enabled = false;
	}

	lbl1->Visible = true;
	lbl2->Visible = true;
	lbl3->Visible = true;
	lbl4->Visible = true;
	lbl5->Visible = true;
	lbl6->Visible = false;
	lbl7->Visible = false;
	lbl8->Visible = false;
	lbl9->Visible = false;
	lbl10->Visible = false;

	txt1->Visible = true;
	txt2->Visible = true;
	txt3->Visible = true;
	txt4->Visible = true;
	txt5->Visible = true;
	txt6->Visible = false;
	txt7->Visible = false;
	txt8->Visible = false;
	txt9->Visible = false;
	txt10->Visible = false;


	btn_first4->Location = System::Drawing::Point(txt5->Left, txt5->Bottom + 10);
	btn_previous4->Location = System::Drawing::Point(btn_first4->Right + 6, btn_first4->Top);
	btn_next4->Location = System::Drawing::Point(btn_previous4->Right + 6, btn_first4->Top);
	btn_end4->Location = System::Drawing::Point(btn_next4->Right + 6, btn_first4->Top);

	btn_first4->Visible = true;
	btn_previous4->Visible = true;
	btn_next4->Visible = true;
	btn_end4->Visible = true;

	btn_sup->Location = System::Drawing::Point(ModePaiement->Left, ModePaiement->Top - (btn_sup->Bottom - btn_sup->Top) - 10);
	btn_modifier->Location = System::Drawing::Point(ModePaiement->Left, btn_sup->Top - (btn_modifier->Bottom - btn_modifier->Top) - 10);
	btn_nouveau->Location = System::Drawing::Point(ModePaiement->Left, btn_modifier->Top - (btn_sup->Bottom - btn_sup->Top) - 10);

	btn_nouveau->Visible = true;
	btn_modifier->Visible = true;
	btn_sup->Visible = true;

	DernierPaiement->Location = System::Drawing::Point(btn_first4->Left, btn_first4->Bottom + 10);
	DernierPaiement->Text = "Dernier Paiement";

	DernierPaiement->Visible = true;

	Paiement->Visible = false;

	lbl1->Text = "ID Paiement";
	lbl2->Text = "ID Commande";
	lbl3->Text = "Mode De Paiement";
	lbl4->Text = "Montant Du Paiement";
	lbl5->Text = "Date Du Paiement";

	this->index = 0;
	this->loadData(this->index, sender, e);
}
private: System::Void ModePasserCommande_Click(System::Object^ sender, System::EventArgs^ e) {

	this->mode2 = "PasserCommande";

	if (mode3 == "Article++")
	{
		txt2->Enabled = false;
	}

	lbl2->Visible = true;
	lbl3->Visible = true;
	lbl4->Visible = true;
	lbl5->Visible = false;
	lbl6->Visible = false;
	lbl7->Visible = false;
	lbl8->Visible = false;
	lbl9->Visible = false;
	lbl10->Visible = false;

	txt2->Visible = true;
	txt3->Visible = true;
	txt4->Visible = true;
	txt5->Visible = false;
	txt6->Visible = false;
	txt7->Visible = false;
	txt8->Visible = false;
	txt9->Visible = false;
	txt10->Visible = false;


	btn_first4->Location = System::Drawing::Point(txt4->Left, txt4->Bottom + 10);
	btn_previous4->Location = System::Drawing::Point(btn_first4->Right + 6, btn_first4->Top);
	btn_next4->Location = System::Drawing::Point(btn_previous4->Right + 6, btn_first4->Top);
	btn_end4->Location = System::Drawing::Point(btn_next4->Right + 6, btn_first4->Top);

	btn_first4->Visible = true;
	btn_previous4->Visible = true;
	btn_next4->Visible = true;
	btn_end4->Visible = true;

	btn_sup->Location = System::Drawing::Point(ModePasserCommande->Left, ModePasserCommande->Top - (btn_sup->Bottom - btn_sup->Top) - 10);
	btn_modifier->Location = System::Drawing::Point(ModePasserCommande->Left, btn_sup->Top - (btn_modifier->Bottom - btn_modifier->Top) - 10);
	btn_nouveau->Location = System::Drawing::Point(ModePasserCommande->Left, btn_modifier->Top - (btn_sup->Bottom - btn_sup->Top) - 10);

	btn_nouveau->Visible = true;
	btn_modifier->Visible = true;
	btn_sup->Visible = true;

	DernierPaiement->Location = System::Drawing::Point(btn_first4->Left, btn_first4->Bottom + 10);

	DernierPaiement->Visible = false;

	Paiement->Visible = false;

	lbl1->Text = "ID PasserCommande";
	lbl2->Text = "ID Commande";
	lbl3->Text = "ID Article";
	lbl4->Text = "Quantite Article";



	this->index = 0;
	this->loadData(this->index, sender, e);
}
private: System::Void ModeAvoir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode2 = "Avoir";

	lbl1->Visible = true;
	lbl2->Visible = true;
	lbl3->Visible = true;
	lbl4->Visible = true;
	lbl5->Visible = false;
	lbl6->Visible = false;
	lbl7->Visible = false;
	lbl8->Visible = false;
	lbl9->Visible = false;
	lbl10->Visible = false;

	txt1->Visible = true;
	txt2->Visible = true;
	txt3->Visible = true;
	txt4->Visible = true;
	txt5->Visible = false;
	txt6->Visible = false;
	txt7->Visible = false;
	txt8->Visible = false;
	txt9->Visible = false;
	txt10->Visible = false;


	btn_first4->Location = System::Drawing::Point(txt4->Left, txt4->Bottom + 10);
	btn_previous4->Location = System::Drawing::Point(btn_first4->Right + 6, btn_first4->Top);
	btn_next4->Location = System::Drawing::Point(btn_previous4->Right + 6, btn_first4->Top);
	btn_end4->Location = System::Drawing::Point(btn_next4->Right + 6, btn_first4->Top);

	btn_first4->Visible = true;
	btn_previous4->Visible = true;
	btn_next4->Visible = true;
	btn_end4->Visible = true;

	btn_sup->Location = System::Drawing::Point(ModeAvoir->Left, ModeAvoir->Top - (btn_sup->Bottom - btn_sup->Top) - 10);
	btn_modifier->Location = System::Drawing::Point(ModeAvoir->Left, btn_sup->Top - (btn_modifier->Bottom - btn_modifier->Top) - 10);
	btn_nouveau->Location = System::Drawing::Point(ModeAvoir->Left, btn_modifier->Top - (btn_sup->Bottom - btn_sup->Top) - 10);

	btn_nouveau->Visible = true;
	btn_modifier->Visible = true;
	btn_sup->Visible = true;

	DernierPaiement->Location = System::Drawing::Point(btn_first4->Left, btn_first4->Bottom + 10);

	DernierPaiement->Visible = false;

	Paiement->Visible = false;

	lbl1->Text = "ID Avoir";
	lbl2->Text = "ID Adresse";
	lbl3->Text = "ID Client";
	lbl4->Text = "Type Adresse";



	this->index = 0;
	this->loadData(this->index, sender, e);
}




private: System::Void txt4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (mode2 == "Commande")
	{
		char ch = e->KeyChar;

		if ((ch == 44 || ch == 46) && (txt4->Text->IndexOf('.') != -1 || txt4->Text->IndexOf(',') != -1))
		{
			e->Handled = true;
			return;
		}
		if (!Char::IsDigit(ch) && ch != 8 && ch != 44 && ch != 46)
		{
			e->Handled = true;
		}
	}
}

private: System::Void txt5_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (mode2 == "Article" || mode2 == "Commande")
	{
		char ch = e->KeyChar;

		if ((ch == 44 || ch == 46) && (txt5->Text->IndexOf('.') != -1 || txt5->Text->IndexOf(',') != -1))
		{
			e->Handled = true;
			return;
		}
		if (!Char::IsDigit(ch) && ch != 8 && ch != 44 && ch != 46)
		{
			e->Handled = true;
		}
	}
}
private: System::Void txt6_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (mode2 == "Article" || mode2 == "Commande")
	{
		char ch = e->KeyChar;

		if ((ch == 44 || ch == 46) && (txt6->Text->IndexOf('.') != -1 || txt6->Text->IndexOf(',') != -1))
		{
			e->Handled = true;
			return;
		}
		if (!Char::IsDigit(ch) && ch != 8 && ch != 44 && ch != 46)
		{
			e->Handled = true;
		}
		
		

		

	}
	else if (mode2 == "Personnel")
	{
		char ch = e->KeyChar;
		
	
		if (txt6->Text->Length > 1)
		{
			String^ stock = txt6->Text->Substring(txt6->Text->Trim()->Length - 2, 2);
			if (stock->Contains("/"))
			{
				if (ch == '/')
				{
					e->Handled = true;
				}
			}
		}
	}
}
private: System::Void txt7_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (mode2 == "Article")
	{
		char ch = e->KeyChar;

		if ((ch == 44 || ch == 46) && (txt7->Text->IndexOf('.') != -1 || txt7->Text->IndexOf(',') != -1))
		{
			e->Handled = true;
			return;
		}
		if (!Char::IsDigit(ch) && ch != 8 && ch != 44 && ch != 46)
		{
			e->Handled = true;
		}
	}
}
private: System::Void txt8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}








private: System::Void ViewPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshMode = "PERSONNEL";
	dataGridView1->Visible = true;
	BindingSource^ bSource = gcnew BindingSource();
	this->dt = this->processusPersonnes->listePersonnesAfficher("PERSONNEL");


	bSource->DataSource = this->dt;
	dataGridView1->DataSource = bSource;
}
private: System::Void ViewAdresse_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshMode = "ADRESSE";
	dataGridView1->Visible = true;
	this->dt = this->processusPersonnes->listePersonnesAfficher("ADRESSE");
	BindingSource^ bSource = gcnew BindingSource();

	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;

	if (mode3 == "Paiement++")
	{
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			idadressesearching2 = Convert::ToInt32(dataGridView1->Rows[i]->Cells["IDAdresse"]->Value);
			if (idadressesearching2 == idadressesearching)
			{
				adresseville = dataGridView1->Rows[i]->Cells["AdresseVille"]->Value->ToString();
			}
		}
	}
}
private: System::Void ViewClient_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshMode = "CLIENT";
	dataGridView1->Visible = true;
	this->dt = this->processusPersonnes->listePersonnesAfficher("CLIENT");
	BindingSource^ bSource = gcnew BindingSource();

	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;

	if (mode3 == "Paiement++")
	{
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			idclientsearching = Convert::ToInt32(dataGridView1->Rows[i]->Cells["IDClient"]->Value);
			if (idclientsearching == Convert::ToInt32(idclient))
			{
				annivclient = dataGridView1->Rows[i]->Cells["DateNaissance"]->Value->ToString();
				nomclient = dataGridView1->Rows[i]->Cells["NomClient"]->Value->ToString();
				prenomclient = dataGridView1->Rows[i]->Cells["PrenomClient"]->Value->ToString();
				annivclient = annivclient->Substring(0,5);
			}
		}
	}


}
private: System::Void ViewArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshMode = "ARTICLE";
	dataGridView1->Visible = true;
	this->dt = this->processusPersonnes->listePersonnesAfficher("ARTICLE");
	BindingSource^ bSource = gcnew BindingSource();

	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;

	if (mode3 == "Article++")
	{
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			idarticlesearching = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
			if (idarticlesearching == idarticle)
			{
				prixUTTC = Convert::ToDouble(dataGridView1->Rows[i]->Cells[6]->Value);
				ModeCommande_Click(sender, e);
			}
		}
	}

	
}
private: System::Void ViewCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshMode = "COMMANDE";
	dataGridView1->Visible = true;
	this->dt = this->processusPersonnes->listePersonnesAfficher("COMMANDE");
	BindingSource^ bSource = gcnew BindingSource();

	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;

	if (mode3 == "Paiement++")
	{
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			countidclient = Convert::ToInt32(dataGridView1->Rows[i]->Cells["IDClient"]->Value);
			if (countidclient == Convert::ToInt32(idclient))
			{
				incrementref = incrementref + 1;
				ModeCommande_Click(sender, e);
			}
		}
	}

}
private: System::Void ViewPaiement_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshMode = "PAIEMENT";
	dataGridView1->Visible = true;
	this->dt = this->processusPersonnes->listePersonnesAfficher("PAIEMENT");
	BindingSource^ bSource = gcnew BindingSource();

	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;

	if (mode3 == "Article++" || mode3 == "Paiement++")
	{
		for (int i = 0; i < dataGridView1->RowCount - 1; i++)
		{
			IDNULL = dataGridView1->Rows[i]->Cells["IDCommande"]->Value->ToString();
			if (IDNULL == String::Empty)
			{
				IDNULL = "";
			}

			if (IDNULL == "")
			{
				lastidpaiement = dataGridView1->Rows[i]->Cells["IDPaiement"]->Value->ToString();
				this->processusPersonnes->modifierPaiementIDCommande(Convert::ToInt32(lastidpaiement), lastidcommande);
			}
		}
	}
	

}
private: System::Void ViewPasserCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshMode = "PASSERCOMMANDE";
	dataGridView1->Visible = true;
	this->dt = this->processusPersonnes->listePersonnesAfficher("PASSERCOMMANDE");
	BindingSource^ bSource = gcnew BindingSource();

	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;

	if (mode3 == "Article++" || mode3 == "Paiement++")
	{
		for (int i = 0; i < dataGridView1->RowCount - 1; i++)
		{
			IDNULL = dataGridView1->Rows[i]->Cells["IDCommande"]->Value->ToString();
			if (IDNULL == String::Empty)
			{
				IDNULL = "";
			}

			if (IDNULL == "")
			{
				lastidpassercommande = dataGridView1->Rows[i]->Cells["IDPasserCommande"]->Value->ToString();
				this->processusPersonnes->modifierPasserCommandeIDCommande(Convert::ToInt32(lastidpassercommande), lastidcommande);
			}
		}
	}
	
}
private: System::Void ViewAvoir_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshMode = "AVOIR";
	dataGridView1->Visible = true;
	this->dt = this->processusPersonnes->listePersonnesAfficher("AVOIR");
	BindingSource^ bSource = gcnew BindingSource();

	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;
	if (mode3 == "Paiement++")
	{
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			idclientsearching2 = Convert::ToInt32(dataGridView1->Rows[i]->Cells["IDClient"]->Value);
			if (idclientsearching2 == Convert::ToInt32(idclient))
			{
				typeadresse = dataGridView1->Rows[i]->Cells["TypeAdresse"]->Value->ToString();
				if (typeadresse == "Livraison")
				{
					idadressesearching = Convert::ToInt32(dataGridView1->Rows[i]->Cells["IDAdresse"]->Value);
				}
			}
		}
	}
}





private: System::Void DernierPaiement_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	System::Windows::Forms::DialogResult result;

	if (mode2 == "Commande")
	{
		z = txt2->Text;
		r = txt4->Text;
		y = txt6->Text;

		result = MessageBox::Show("Souhaitez vous ajouter un article ?", "Une erreur a été détectée", buttons);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			mode3 = "Article++";
			ModePasserCommande_Click(sender, e);
		}
	}
	else if (mode2 == "Paiement")
	{
		result = MessageBox::Show("Ce paiement est-il bien le dernier pour la commande occurante ?", "Une erreur a été détectée", buttons);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			LastPaiement = "vrai";
		}
		else
		{
			LastPaiement = "faux";
		}
	}
	
}

private: System::Void Paiement_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	System::Windows::Forms::DialogResult result;

	if (mode2 == "Commande")
	{
		if (mode3 == "Article++")
		{
			lbl1->Text = y;
		}
		z = txt2->Text;
		r = txt4->Text;
		y = txt6->Text;

		idclient = txt2->Text;
		result = MessageBox::Show("Souhaitez vous entrer une methode de paiement ?", "Une erreur a été détectée", buttons);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			mode3 = "Paiement++";
			ModePaiement_Click(sender, e);
		}
	}
}

private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	BindingSource^ bSource = gcnew BindingSource();
	this->dt = this->processusPersonnes->listePersonnesAfficher(RefreshMode);

	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;	
}



private: System::Void btnpaniermoyen_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->dt = this->processusPersonnes->PANIERMOYENSTAT();
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;
	dataGridView1->Visible = false;

	paniermoyen = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
	txtpaniermoyen->Text = Convert::ToString(paniermoyen);
}
private: System::Void btnchiffreaffaire_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->dt = this->processusPersonnes->CHIFFREAFFAIRESTAT(txtchiffreaffaire->Text);
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;
	dataGridView1->Visible = false;

	chiffreaffaire = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
	txtchiffreaffaire->Text = Convert::ToString(chiffreaffaire);
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->dt = this->processusPersonnes->ARTICLEAPPROVISIONNEMENTSTAT();
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;
	dataGridView1->Visible = true;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dt = this->processusPersonnes->MONTANTTOTALTTCCLIENTSTAT(Convert::ToInt32(txtmontanttotalttcclient->Text));
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;
	dataGridView1->Visible = false;

	montanttotalttcclient = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
	txtmontanttotalttcclient->Text = Convert::ToString(montanttotalttcclient);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dt = this->processusPersonnes->TOP10VENTEARTICLESTAT();
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;
	dataGridView1->Visible = true;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dt = this->processusPersonnes->LESS10VENTEARTICLESTAT();
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;
	dataGridView1->Visible = true;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dt = this->processusPersonnes->VALEURACHATSTOCKSTAT();
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;
	dataGridView1->Visible = false;

	valeurachatstock = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
	txtvaleurachatstock->Text = Convert::ToString(valeurachatstock);
	
	if (txtvaleurachatstock->Text->Contains("."))
	{
		txtvaleurachatstock->Text = txtvaleurachatstock->Text->Replace(".", ",");
	}
	for (int i = 0; i < txtvaleurachatstock->Text->Length - 1; i++)
	{
		txtvaleurachatstock->Text->Substring(i, 1);
		if (txtvaleurachatstock->Text->Substring(i, 1) == ",")
		{
			if (txtvaleurachatstock->Text->Length - i > 2)
			{
				txtvaleurachatstock->Text = txtvaleurachatstock->Text->Substring(0, i + 3);
			}
			else
			{
				txtvaleurachatstock->Text = txtvaleurachatstock->Text->Substring(0, txtvaleurachatstock->Text->Length);

			}
		}
	}

}
private: System::Void btnvaleurcommercialestock_Click(System::Object^ sender, System::EventArgs^ e) {
	txtvaleurcommercialestock->Text = Convert::ToString( 1 - Convert::ToDouble(txtvaleurcommercialestock->Text) / 100 );
	if (txtvaleurcommercialestock->Text->Contains(","))
	{
		txtvaleurcommercialestock->Text = txtvaleurcommercialestock->Text->Replace(",", ".");
	}

	this->dt = this->processusPersonnes->VALEURCOMMERCIALESTOCKSTAT(txtvaleurcommercialestock->Text);
	BindingSource^ bSource = gcnew BindingSource();
	bSource->DataSource = dt;
	dataGridView1->DataSource = bSource;
	dataGridView1->Visible = true;

	valeurcommercialestock = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
	txtvaleurcommercialestock->Text = Convert::ToString(valeurcommercialestock);

	if (txtvaleurcommercialestock->Text->Contains("."))
	{
		txtvaleurcommercialestock->Text = txtvaleurcommercialestock->Text->Replace(".", ",");
	}
	for (int i = 0; i < txtvaleurcommercialestock->Text->Length - 1; i++)
	{
		txtvaleurcommercialestock->Text->Substring(i, 1);
		if (txtvaleurcommercialestock->Text->Substring(i, 1) == ",")
		{
			if (txtvaleurcommercialestock->Text->Length - i > 2)
			{
				txtvaleurcommercialestock->Text = txtvaleurcommercialestock->Text->Substring(0, i + 3);
			}
			else
			{
				txtvaleurcommercialestock->Text = txtvaleurcommercialestock->Text->Substring(0, txtvaleurcommercialestock->Text->Length);

			}
		}
	}

}
};
}