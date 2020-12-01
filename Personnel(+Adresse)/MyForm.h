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
	private: System::Windows::Forms::Label^ lbl_id;
	private: System::Windows::Forms::TextBox^ txt_IDPersonnel;
	private: System::Windows::Forms::Label^ lbl_nomPersonnel;
	private: System::Windows::Forms::TextBox^ txt_nomPersonnel;
	private: System::Windows::Forms::Label^ lbl_prenomPersonnel;
	private: System::Windows::Forms::TextBox^ txt_prenomPersonnel;
	private: System::Windows::Forms::Label^ lbl_message;
	private: System::Windows::Forms::TextBox^ txt_message;
	private: System::Windows::Forms::Button^ btn_first;
	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_end;
	private: System::Windows::Forms::Button^ btn_nouveau;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_sup;
	private: System::Windows::Forms::Button^ btn_enregistrer;
	private: NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: int index;
	private: String^ mode;
	private: System::Windows::Forms::TextBox^ txt_IDAdresse;

	private: System::Windows::Forms::Label^ lbl_IDAdresse;
	private: System::Windows::Forms::TextBox^ txt_IDSuperieur;

	private: System::Windows::Forms::Label^ lbl_IDSuperieur;
	private: System::Windows::Forms::TextBox^ txt_DateEmbauche;

	private: System::Windows::Forms::Label^ lbl_DateEmbauche;
	private: System::Windows::Forms::TextBox^ txt_adresseCodePostal;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_adresseVille;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_adresseRue;
	private: System::Windows::Forms::Label^ lbl_AdresseRue;
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
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->txt_IDPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nomPersonnel = (gcnew System::Windows::Forms::Label());
			this->txt_nomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->lbl_prenomPersonnel = (gcnew System::Windows::Forms::Label());
			this->txt_prenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->lbl_message = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_end = (gcnew System::Windows::Forms::Button());
			this->btn_nouveau = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_sup = (gcnew System::Windows::Forms::Button());
			this->btn_enregistrer = (gcnew System::Windows::Forms::Button());
			this->txt_IDAdresse = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IDAdresse = (gcnew System::Windows::Forms::Label());
			this->txt_IDSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IDSuperieur = (gcnew System::Windows::Forms::Label());
			this->txt_DateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->lbl_DateEmbauche = (gcnew System::Windows::Forms::Label());
			this->txt_adresseCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_adresseVille = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_adresseRue = (gcnew System::Windows::Forms::TextBox());
			this->lbl_AdresseRue = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Location = System::Drawing::Point(12, 11);
			this->lbl_id->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(86, 17);
			this->lbl_id->TabIndex = 0;
			this->lbl_id->Text = L"ID Personne";
			// 
			// txt_IDPersonnel
			// 
			this->txt_IDPersonnel->Location = System::Drawing::Point(16, 31);
			this->txt_IDPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDPersonnel->Name = L"txt_IDPersonnel";
			this->txt_IDPersonnel->ReadOnly = true;
			this->txt_IDPersonnel->Size = System::Drawing::Size(268, 22);
			this->txt_IDPersonnel->TabIndex = 1;
			// 
			// lbl_nomPersonnel
			// 
			this->lbl_nomPersonnel->AutoSize = true;
			this->lbl_nomPersonnel->Location = System::Drawing::Point(12, 63);
			this->lbl_nomPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_nomPersonnel->Name = L"lbl_nomPersonnel";
			this->lbl_nomPersonnel->Size = System::Drawing::Size(37, 17);
			this->lbl_nomPersonnel->TabIndex = 2;
			this->lbl_nomPersonnel->Text = L"Nom";
			// 
			// txt_nomPersonnel
			// 
			this->txt_nomPersonnel->Location = System::Drawing::Point(16, 82);
			this->txt_nomPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->txt_nomPersonnel->Name = L"txt_nomPersonnel";
			this->txt_nomPersonnel->Size = System::Drawing::Size(268, 22);
			this->txt_nomPersonnel->TabIndex = 3;
			// 
			// lbl_prenomPersonnel
			// 
			this->lbl_prenomPersonnel->AutoSize = true;
			this->lbl_prenomPersonnel->Location = System::Drawing::Point(12, 114);
			this->lbl_prenomPersonnel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_prenomPersonnel->Name = L"lbl_prenomPersonnel";
			this->lbl_prenomPersonnel->Size = System::Drawing::Size(57, 17);
			this->lbl_prenomPersonnel->TabIndex = 4;
			this->lbl_prenomPersonnel->Text = L"Prénom";
			// 
			// txt_prenomPersonnel
			// 
			this->txt_prenomPersonnel->Location = System::Drawing::Point(16, 134);
			this->txt_prenomPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenomPersonnel->Name = L"txt_prenomPersonnel";
			this->txt_prenomPersonnel->Size = System::Drawing::Size(268, 22);
			this->txt_prenomPersonnel->TabIndex = 5;
			// 
			// lbl_message
			// 
			this->lbl_message->AutoSize = true;
			this->lbl_message->Location = System::Drawing::Point(11, 495);
			this->lbl_message->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_message->Name = L"lbl_message";
			this->lbl_message->Size = System::Drawing::Size(65, 17);
			this->lbl_message->TabIndex = 6;
			this->lbl_message->Text = L"Message";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(15, 514);
			this->txt_message->Margin = System::Windows::Forms::Padding(4);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(548, 61);
			this->txt_message->TabIndex = 7;
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(15, 453);
			this->btn_first->Margin = System::Windows::Forms::Padding(4);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(61, 28);
			this->btn_first->TabIndex = 8;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &MyForm::btn_first_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(84, 453);
			this->btn_previous->Margin = System::Windows::Forms::Padding(4);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(61, 28);
			this->btn_previous->TabIndex = 9;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &MyForm::btn_previous_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(154, 453);
			this->btn_next->Margin = System::Windows::Forms::Padding(4);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(61, 28);
			this->btn_next->TabIndex = 10;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &MyForm::btn_next_Click);
			// 
			// btn_end
			// 
			this->btn_end->Location = System::Drawing::Point(223, 453);
			this->btn_end->Margin = System::Windows::Forms::Padding(4);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(61, 28);
			this->btn_end->TabIndex = 11;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &MyForm::btn_end_Click);
			// 
			// btn_nouveau
			// 
			this->btn_nouveau->Location = System::Drawing::Point(317, 31);
			this->btn_nouveau->Margin = System::Windows::Forms::Padding(4);
			this->btn_nouveau->Name = L"btn_nouveau";
			this->btn_nouveau->Size = System::Drawing::Size(107, 44);
			this->btn_nouveau->TabIndex = 12;
			this->btn_nouveau->Text = L"Nouveau";
			this->btn_nouveau->UseVisualStyleBackColor = true;
			this->btn_nouveau->Click += gcnew System::EventHandler(this, &MyForm::btn_nouveau_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(317, 97);
			this->btn_modifier->Margin = System::Windows::Forms::Padding(4);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(107, 44);
			this->btn_modifier->TabIndex = 13;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm::btn_modifier_Click);
			// 
			// btn_sup
			// 
			this->btn_sup->Location = System::Drawing::Point(317, 164);
			this->btn_sup->Margin = System::Windows::Forms::Padding(4);
			this->btn_sup->Name = L"btn_sup";
			this->btn_sup->Size = System::Drawing::Size(107, 44);
			this->btn_sup->TabIndex = 14;
			this->btn_sup->Text = L"Supprimer";
			this->btn_sup->UseVisualStyleBackColor = true;
			this->btn_sup->Click += gcnew System::EventHandler(this, &MyForm::btn_sup_Click);
			// 
			// btn_enregistrer
			// 
			this->btn_enregistrer->Location = System::Drawing::Point(435, 31);
			this->btn_enregistrer->Margin = System::Windows::Forms::Padding(4);
			this->btn_enregistrer->Name = L"btn_enregistrer";
			this->btn_enregistrer->Size = System::Drawing::Size(131, 177);
			this->btn_enregistrer->TabIndex = 15;
			this->btn_enregistrer->Text = L"ENREGISTRER";
			this->btn_enregistrer->UseVisualStyleBackColor = true;
			this->btn_enregistrer->Click += gcnew System::EventHandler(this, &MyForm::btn_enregistrer_Click);
			// 
			// txt_IDAdresse
			// 
			this->txt_IDAdresse->Location = System::Drawing::Point(16, 186);
			this->txt_IDAdresse->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDAdresse->Name = L"txt_IDAdresse";
			this->txt_IDAdresse->Size = System::Drawing::Size(268, 22);
			this->txt_IDAdresse->TabIndex = 17;
			// 
			// lbl_IDAdresse
			// 
			this->lbl_IDAdresse->AutoSize = true;
			this->lbl_IDAdresse->Location = System::Drawing::Point(12, 166);
			this->lbl_IDAdresse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_IDAdresse->Name = L"lbl_IDAdresse";
			this->lbl_IDAdresse->Size = System::Drawing::Size(73, 17);
			this->lbl_IDAdresse->TabIndex = 16;
			this->lbl_IDAdresse->Text = L"IDAdresse";
			// 
			// txt_IDSuperieur
			// 
			this->txt_IDSuperieur->Location = System::Drawing::Point(16, 376);
			this->txt_IDSuperieur->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDSuperieur->Name = L"txt_IDSuperieur";
			this->txt_IDSuperieur->Size = System::Drawing::Size(268, 22);
			this->txt_IDSuperieur->TabIndex = 19;
			// 
			// lbl_IDSuperieur
			// 
			this->lbl_IDSuperieur->AutoSize = true;
			this->lbl_IDSuperieur->Location = System::Drawing::Point(12, 356);
			this->lbl_IDSuperieur->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_IDSuperieur->Name = L"lbl_IDSuperieur";
			this->lbl_IDSuperieur->Size = System::Drawing::Size(83, 17);
			this->lbl_IDSuperieur->TabIndex = 18;
			this->lbl_IDSuperieur->Text = L"IDSuperieur";
			// 
			// txt_DateEmbauche
			// 
			this->txt_DateEmbauche->Location = System::Drawing::Point(16, 423);
			this->txt_DateEmbauche->Margin = System::Windows::Forms::Padding(4);
			this->txt_DateEmbauche->Name = L"txt_DateEmbauche";
			this->txt_DateEmbauche->Size = System::Drawing::Size(268, 22);
			this->txt_DateEmbauche->TabIndex = 21;
			// 
			// lbl_DateEmbauche
			// 
			this->lbl_DateEmbauche->AutoSize = true;
			this->lbl_DateEmbauche->Location = System::Drawing::Point(12, 403);
			this->lbl_DateEmbauche->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_DateEmbauche->Name = L"lbl_DateEmbauche";
			this->lbl_DateEmbauche->Size = System::Drawing::Size(105, 17);
			this->lbl_DateEmbauche->TabIndex = 20;
			this->lbl_DateEmbauche->Text = L"DateEmbauche";
			// 
			// txt_adresseCodePostal
			// 
			this->txt_adresseCodePostal->Location = System::Drawing::Point(15, 330);
			this->txt_adresseCodePostal->Margin = System::Windows::Forms::Padding(4);
			this->txt_adresseCodePostal->Name = L"txt_adresseCodePostal";
			this->txt_adresseCodePostal->Size = System::Drawing::Size(268, 22);
			this->txt_adresseCodePostal->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 310);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 17);
			this->label1->TabIndex = 26;
			this->label1->Text = L"AdressecodePostal";
			// 
			// txt_adresseVille
			// 
			this->txt_adresseVille->Location = System::Drawing::Point(15, 283);
			this->txt_adresseVille->Margin = System::Windows::Forms::Padding(4);
			this->txt_adresseVille->Name = L"txt_adresseVille";
			this->txt_adresseVille->Size = System::Drawing::Size(268, 22);
			this->txt_adresseVille->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 263);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 17);
			this->label2->TabIndex = 24;
			this->label2->Text = L"AdresseVille";
			// 
			// txt_adresseRue
			// 
			this->txt_adresseRue->Location = System::Drawing::Point(15, 232);
			this->txt_adresseRue->Margin = System::Windows::Forms::Padding(4);
			this->txt_adresseRue->Name = L"txt_adresseRue";
			this->txt_adresseRue->Size = System::Drawing::Size(268, 22);
			this->txt_adresseRue->TabIndex = 23;
			// 
			// lbl_AdresseRue
			// 
			this->lbl_AdresseRue->AutoSize = true;
			this->lbl_AdresseRue->Location = System::Drawing::Point(11, 212);
			this->lbl_AdresseRue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_AdresseRue->Name = L"lbl_AdresseRue";
			this->lbl_AdresseRue->Size = System::Drawing::Size(86, 17);
			this->lbl_AdresseRue->TabIndex = 22;
			this->lbl_AdresseRue->Text = L"AdresseRue";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 588);
			this->Controls->Add(this->txt_adresseCodePostal);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_adresseVille);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_adresseRue);
			this->Controls->Add(this->lbl_AdresseRue);
			this->Controls->Add(this->txt_DateEmbauche);
			this->Controls->Add(this->lbl_DateEmbauche);
			this->Controls->Add(this->txt_IDSuperieur);
			this->Controls->Add(this->lbl_IDSuperieur);
			this->Controls->Add(this->txt_IDAdresse);
			this->Controls->Add(this->lbl_IDAdresse);
			this->Controls->Add(this->btn_enregistrer);
			this->Controls->Add(this->btn_sup);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_nouveau);
			this->Controls->Add(this->btn_end);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_message);
			this->Controls->Add(this->txt_prenomPersonnel);
			this->Controls->Add(this->lbl_prenomPersonnel);
			this->Controls->Add(this->txt_nomPersonnel);
			this->Controls->Add(this->lbl_nomPersonnel);
			this->Controls->Add(this->txt_IDPersonnel);
			this->Controls->Add(this->lbl_id);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"A2 POO Corbeille 6";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->mode = "RIEN";
		this->ds = gcnew Data::DataSet();
		this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
		this->loadData(this->index);
		this->txt_message->Text = "Data chargées";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
	
		this->ds = this->processusPersonnes->listeAdresses("ADRESSE");

		this->txt_IDAdresse->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index]->ItemArray[0]);
		this->txt_adresseRue->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index]->ItemArray[1]);
		this->txt_adresseVille->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index]->ItemArray[2]);
		this->txt_adresseCodePostal->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index]->ItemArray[3]);

		this->ds = this->processusPersonnes->listePersonnes("PERSONNEL");

		this->txt_IDPersonnel->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[0]);
		this->txt_nomPersonnel->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[1]);
		this->txt_prenomPersonnel->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[2]);
		this->txt_IDSuperieur->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[4]);
		this->txt_DateEmbauche->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[5]);



	}
	private: System::Void btn_first_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
	}
	private: System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index > 0)
		{
			this->index--;
			this->loadData(this->index);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		}
	}private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index < this->ds->Tables["PERSONNEL"]->Rows->Count - 1)
		{
			this->index++;
			this->loadData(this->index);
			this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		}
	}private: System::Void btn_end_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = this->ds->Tables["PERSONNEL"]->Rows->Count - 1;
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
	}private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->txt_IDPersonnel->Clear();
		this->txt_nomPersonnel->Clear();
		this->txt_prenomPersonnel->Clear();
		this->txt_IDAdresse->Clear();
		this->txt_adresseRue->Clear();
		this->txt_adresseVille->Clear();
		this->txt_adresseCodePostal->Clear();
		this->txt_IDSuperieur->Clear();
		this->txt_DateEmbauche->Clear();
		this->mode = "nouv";
		this->txt_message->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
	}private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "maj";
		this->txt_message->Text = "Veuillez modifier les information de la nouvelle courante et enregistrer.";
	}private: System::Void btn_sup_Click(System::Object^ sender, System::EventArgs^ e)
	{

		this->mode = "sup";

		this->txt_message->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";

	}private: System::Void btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->mode == "nouv")
		{
			int Id;
			Id = this->processusPersonnes->ajouter(this->txt_nomPersonnel->Text, this->txt_prenomPersonnel->Text, this->txt_adresseRue->Text, this->txt_adresseVille->Text, this->txt_adresseCodePostal->Text, Convert::ToInt32(this->txt_IDSuperieur->Text), this->txt_DateEmbauche->Text);
			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}
		else if (this->mode == "maj")
		{
			this->processusPersonnes->modifier(Convert::ToInt32(this->txt_IDPersonnel->Text), this->txt_nomPersonnel->Text, this->txt_prenomPersonnel->Text, Convert::ToInt32(this->txt_IDAdresse->Text), Convert::ToInt32(this->txt_IDSuperieur->Text), this->txt_DateEmbauche->Text);
		}
		else if (this->mode == "sup")
		{
			this->processusPersonnes->supprimer(Convert::ToInt32(this->txt_IDPersonnel->Text));
		}this->index = 0;
		this->loadData(this->index);
		this->txt_message->Text += "Traitement terminé.";
	}
	};
}
