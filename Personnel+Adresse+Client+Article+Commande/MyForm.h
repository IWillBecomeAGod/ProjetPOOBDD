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

	private: int index, index2, index3, index4, index5, index6;
	private: String^ mode;
	private: String^ mode2;
	private: System::Windows::Forms::TextBox^ txt_IDAdresse;

	private: System::Windows::Forms::Label^ lbl_IDAdresse;
	private: System::Windows::Forms::TextBox^ txt_IDSuperieur;

	private: System::Windows::Forms::Label^ lbl_IDSuperieur;
	private: System::Windows::Forms::TextBox^ txt_DateEmbauche;

	private: System::Windows::Forms::Label^ lbl_DateEmbauche;
	private: System::Windows::Forms::TextBox^ txt_adresseCodePostal;

	private: System::Windows::Forms::Label^ lbl_adresseCodePostal;



	private: System::Windows::Forms::TextBox^ txt_adresseVille;

	private: System::Windows::Forms::Label^ lbl_adresseville;

	private: System::Windows::Forms::TextBox^ txt_adresseRue;

	private: System::Windows::Forms::Label^ lbl_adresseRue;

	private: System::Windows::Forms::TextBox^ txt_IDAdresseo;

	private: System::Windows::Forms::Label^ lbl_IDAdresseo;

	private: System::Windows::Forms::Button^ ModeAdresse;
	private: System::Windows::Forms::Button^ ModePersonnel;
	private: System::Windows::Forms::TextBox^ txt_IDClient;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_DateNaissance;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_PrenomClient;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_NomClient;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_NumeroClient;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btn_end2;

	private: System::Windows::Forms::Button^ btn_next2;

	private: System::Windows::Forms::Button^ btn_previous2;

	private: System::Windows::Forms::Button^ btn_first2;
	private: System::Windows::Forms::Button^ btn_end3;


	private: System::Windows::Forms::Button^ btn_next3;

	private: System::Windows::Forms::Button^ btn_previous3;

	private: System::Windows::Forms::Button^ btn_first3;
private: System::Windows::Forms::Button^ ModeClient;
private: System::Windows::Forms::TextBox^ txt_PrixUHT;

private: System::Windows::Forms::Label^ lbl_PrixUHT;
private: System::Windows::Forms::TextBox^ txt_IDArticle;


private: System::Windows::Forms::Label^ lbl_IDArticle;
private: System::Windows::Forms::TextBox^ txt_NatureArticle;


private: System::Windows::Forms::Label^ lbl_NatureArticle;

private: System::Windows::Forms::TextBox^ txt_NomArticle;

private: System::Windows::Forms::Label^ lbl_NomArticle;

private: System::Windows::Forms::TextBox^ txt_ReferenceArticle;

private: System::Windows::Forms::Label^ lbl_ReferenceArticle;
private: System::Windows::Forms::TextBox^ txt_IDCommande;



private: System::Windows::Forms::Label^ lbl_IDCommande;
private: System::Windows::Forms::TextBox^ txt_SeuilReaprovisionnement;



private: System::Windows::Forms::Label^ lbl_SeuilReaprovisionnement;
private: System::Windows::Forms::Button^ btn_end4;


private: System::Windows::Forms::Button^ btn_next4;

private: System::Windows::Forms::Button^ btn_previous4;

private: System::Windows::Forms::Button^ btn_first4;
private: System::Windows::Forms::Button^ ModeArticle;
private: System::Windows::Forms::TextBox^ txt_PrixUTTC;
private: System::Windows::Forms::Label^ lbl_PrixUTTC;
private: System::Windows::Forms::TextBox^ txt_MontantTVA;
private: System::Windows::Forms::Label^ lbl_MontantTVA;
private: System::Windows::Forms::TextBox^ txt_MontantTotalTTC;
private: System::Windows::Forms::Label^ lbl_MontantTotalTTC;
private: System::Windows::Forms::TextBox^ txt_MontantRemise;
private: System::Windows::Forms::Label^ lbl_MontantRemise;
private: System::Windows::Forms::TextBox^ txt_NombreArticle;
private: System::Windows::Forms::Label^ lbl_NombreArticle;
private: System::Windows::Forms::Button^ btn_end5;

private: System::Windows::Forms::Button^ btn_next5;

private: System::Windows::Forms::Button^ btn_previous5;

private: System::Windows::Forms::Button^ btn_first5;

private: System::Windows::Forms::TextBox^ txt_ReferenceCommande;
private: System::Windows::Forms::Label^ lbl_ReferenceCommande;
private: System::Windows::Forms::TextBox^ txt_IDCliento;
private: System::Windows::Forms::Label^ lbl_IDCliento;
private: System::Windows::Forms::TextBox^ txt_IDCommandeo;
private: System::Windows::Forms::Label^ lbl_IDCommandeo;
private: System::Windows::Forms::TextBox^ txt_DateSolde;
private: System::Windows::Forms::Label^ lbl_DateSolde;
private: System::Windows::Forms::Button^ ModeCommande;









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
			this->lbl_adresseCodePostal = (gcnew System::Windows::Forms::Label());
			this->txt_adresseVille = (gcnew System::Windows::Forms::TextBox());
			this->lbl_adresseville = (gcnew System::Windows::Forms::Label());
			this->txt_adresseRue = (gcnew System::Windows::Forms::TextBox());
			this->lbl_adresseRue = (gcnew System::Windows::Forms::Label());
			this->txt_IDAdresseo = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IDAdresseo = (gcnew System::Windows::Forms::Label());
			this->ModeAdresse = (gcnew System::Windows::Forms::Button());
			this->ModePersonnel = (gcnew System::Windows::Forms::Button());
			this->txt_IDClient = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_DateNaissance = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_PrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_NomClient = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_NumeroClient = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_end2 = (gcnew System::Windows::Forms::Button());
			this->btn_next2 = (gcnew System::Windows::Forms::Button());
			this->btn_previous2 = (gcnew System::Windows::Forms::Button());
			this->btn_first2 = (gcnew System::Windows::Forms::Button());
			this->btn_end3 = (gcnew System::Windows::Forms::Button());
			this->btn_next3 = (gcnew System::Windows::Forms::Button());
			this->btn_previous3 = (gcnew System::Windows::Forms::Button());
			this->btn_first3 = (gcnew System::Windows::Forms::Button());
			this->ModeClient = (gcnew System::Windows::Forms::Button());
			this->txt_PrixUHT = (gcnew System::Windows::Forms::TextBox());
			this->lbl_PrixUHT = (gcnew System::Windows::Forms::Label());
			this->txt_IDArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IDArticle = (gcnew System::Windows::Forms::Label());
			this->txt_NatureArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbl_NatureArticle = (gcnew System::Windows::Forms::Label());
			this->txt_NomArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbl_NomArticle = (gcnew System::Windows::Forms::Label());
			this->txt_ReferenceArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ReferenceArticle = (gcnew System::Windows::Forms::Label());
			this->txt_IDCommande = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IDCommande = (gcnew System::Windows::Forms::Label());
			this->txt_SeuilReaprovisionnement = (gcnew System::Windows::Forms::TextBox());
			this->lbl_SeuilReaprovisionnement = (gcnew System::Windows::Forms::Label());
			this->btn_end4 = (gcnew System::Windows::Forms::Button());
			this->btn_next4 = (gcnew System::Windows::Forms::Button());
			this->btn_previous4 = (gcnew System::Windows::Forms::Button());
			this->btn_first4 = (gcnew System::Windows::Forms::Button());
			this->ModeArticle = (gcnew System::Windows::Forms::Button());
			this->txt_PrixUTTC = (gcnew System::Windows::Forms::TextBox());
			this->lbl_PrixUTTC = (gcnew System::Windows::Forms::Label());
			this->txt_MontantTVA = (gcnew System::Windows::Forms::TextBox());
			this->lbl_MontantTVA = (gcnew System::Windows::Forms::Label());
			this->txt_MontantTotalTTC = (gcnew System::Windows::Forms::TextBox());
			this->lbl_MontantTotalTTC = (gcnew System::Windows::Forms::Label());
			this->txt_MontantRemise = (gcnew System::Windows::Forms::TextBox());
			this->lbl_MontantRemise = (gcnew System::Windows::Forms::Label());
			this->txt_NombreArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbl_NombreArticle = (gcnew System::Windows::Forms::Label());
			this->btn_end5 = (gcnew System::Windows::Forms::Button());
			this->btn_next5 = (gcnew System::Windows::Forms::Button());
			this->btn_previous5 = (gcnew System::Windows::Forms::Button());
			this->btn_first5 = (gcnew System::Windows::Forms::Button());
			this->txt_ReferenceCommande = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ReferenceCommande = (gcnew System::Windows::Forms::Label());
			this->txt_IDCliento = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IDCliento = (gcnew System::Windows::Forms::Label());
			this->txt_IDCommandeo = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IDCommandeo = (gcnew System::Windows::Forms::Label());
			this->txt_DateSolde = (gcnew System::Windows::Forms::TextBox());
			this->lbl_DateSolde = (gcnew System::Windows::Forms::Label());
			this->ModeCommande = (gcnew System::Windows::Forms::Button());
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
			this->lbl_message->Location = System::Drawing::Point(6, 558);
			this->lbl_message->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_message->Name = L"lbl_message";
			this->lbl_message->Size = System::Drawing::Size(65, 17);
			this->lbl_message->TabIndex = 6;
			this->lbl_message->Text = L"Message";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(1, 579);
			this->txt_message->Margin = System::Windows::Forms::Padding(4);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(548, 61);
			this->txt_message->TabIndex = 7;
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(15, 314);
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
			this->btn_previous->Location = System::Drawing::Point(84, 314);
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
			this->btn_next->Location = System::Drawing::Point(154, 314);
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
			this->btn_end->Location = System::Drawing::Point(223, 314);
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
			this->btn_nouveau->Location = System::Drawing::Point(16, 350);
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
			this->btn_modifier->Location = System::Drawing::Point(16, 416);
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
			this->btn_sup->Location = System::Drawing::Point(16, 483);
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
			this->btn_enregistrer->Location = System::Drawing::Point(134, 350);
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
			this->txt_IDSuperieur->Location = System::Drawing::Point(16, 237);
			this->txt_IDSuperieur->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDSuperieur->Name = L"txt_IDSuperieur";
			this->txt_IDSuperieur->Size = System::Drawing::Size(268, 22);
			this->txt_IDSuperieur->TabIndex = 19;
			// 
			// lbl_IDSuperieur
			// 
			this->lbl_IDSuperieur->AutoSize = true;
			this->lbl_IDSuperieur->Location = System::Drawing::Point(12, 217);
			this->lbl_IDSuperieur->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_IDSuperieur->Name = L"lbl_IDSuperieur";
			this->lbl_IDSuperieur->Size = System::Drawing::Size(83, 17);
			this->lbl_IDSuperieur->TabIndex = 18;
			this->lbl_IDSuperieur->Text = L"IDSuperieur";
			// 
			// txt_DateEmbauche
			// 
			this->txt_DateEmbauche->Location = System::Drawing::Point(16, 284);
			this->txt_DateEmbauche->Margin = System::Windows::Forms::Padding(4);
			this->txt_DateEmbauche->Name = L"txt_DateEmbauche";
			this->txt_DateEmbauche->Size = System::Drawing::Size(268, 22);
			this->txt_DateEmbauche->TabIndex = 21;
			// 
			// lbl_DateEmbauche
			// 
			this->lbl_DateEmbauche->AutoSize = true;
			this->lbl_DateEmbauche->Location = System::Drawing::Point(12, 264);
			this->lbl_DateEmbauche->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_DateEmbauche->Name = L"lbl_DateEmbauche";
			this->lbl_DateEmbauche->Size = System::Drawing::Size(105, 17);
			this->lbl_DateEmbauche->TabIndex = 20;
			this->lbl_DateEmbauche->Text = L"DateEmbauche";
			// 
			// txt_adresseCodePostal
			// 
			this->txt_adresseCodePostal->Location = System::Drawing::Point(291, 186);
			this->txt_adresseCodePostal->Margin = System::Windows::Forms::Padding(4);
			this->txt_adresseCodePostal->Name = L"txt_adresseCodePostal";
			this->txt_adresseCodePostal->Size = System::Drawing::Size(268, 22);
			this->txt_adresseCodePostal->TabIndex = 34;
			// 
			// lbl_adresseCodePostal
			// 
			this->lbl_adresseCodePostal->AutoSize = true;
			this->lbl_adresseCodePostal->Location = System::Drawing::Point(287, 166);
			this->lbl_adresseCodePostal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_adresseCodePostal->Name = L"lbl_adresseCodePostal";
			this->lbl_adresseCodePostal->Size = System::Drawing::Size(130, 17);
			this->lbl_adresseCodePostal->TabIndex = 33;
			this->lbl_adresseCodePostal->Text = L"AdressecodePostal";
			// 
			// txt_adresseVille
			// 
			this->txt_adresseVille->Location = System::Drawing::Point(292, 134);
			this->txt_adresseVille->Margin = System::Windows::Forms::Padding(4);
			this->txt_adresseVille->Name = L"txt_adresseVille";
			this->txt_adresseVille->Size = System::Drawing::Size(268, 22);
			this->txt_adresseVille->TabIndex = 32;
			// 
			// lbl_adresseville
			// 
			this->lbl_adresseville->AutoSize = true;
			this->lbl_adresseville->Location = System::Drawing::Point(288, 114);
			this->lbl_adresseville->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_adresseville->Name = L"lbl_adresseville";
			this->lbl_adresseville->Size = System::Drawing::Size(86, 17);
			this->lbl_adresseville->TabIndex = 31;
			this->lbl_adresseville->Text = L"AdresseVille";
			// 
			// txt_adresseRue
			// 
			this->txt_adresseRue->Location = System::Drawing::Point(292, 83);
			this->txt_adresseRue->Margin = System::Windows::Forms::Padding(4);
			this->txt_adresseRue->Name = L"txt_adresseRue";
			this->txt_adresseRue->Size = System::Drawing::Size(268, 22);
			this->txt_adresseRue->TabIndex = 30;
			// 
			// lbl_adresseRue
			// 
			this->lbl_adresseRue->AutoSize = true;
			this->lbl_adresseRue->Location = System::Drawing::Point(288, 63);
			this->lbl_adresseRue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_adresseRue->Name = L"lbl_adresseRue";
			this->lbl_adresseRue->Size = System::Drawing::Size(86, 17);
			this->lbl_adresseRue->TabIndex = 29;
			this->lbl_adresseRue->Text = L"AdresseRue";
			// 
			// txt_IDAdresseo
			// 
			this->txt_IDAdresseo->Location = System::Drawing::Point(292, 31);
			this->txt_IDAdresseo->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDAdresseo->Name = L"txt_IDAdresseo";
			this->txt_IDAdresseo->Size = System::Drawing::Size(268, 22);
			this->txt_IDAdresseo->TabIndex = 36;
			// 
			// lbl_IDAdresseo
			// 
			this->lbl_IDAdresseo->AutoSize = true;
			this->lbl_IDAdresseo->Location = System::Drawing::Point(288, 11);
			this->lbl_IDAdresseo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_IDAdresseo->Name = L"lbl_IDAdresseo";
			this->lbl_IDAdresseo->Size = System::Drawing::Size(73, 17);
			this->lbl_IDAdresseo->TabIndex = 35;
			this->lbl_IDAdresseo->Text = L"IDAdresse";
			// 
			// ModeAdresse
			// 
			this->ModeAdresse->Location = System::Drawing::Point(273, 416);
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
			this->ModePersonnel->Location = System::Drawing::Point(273, 355);
			this->ModePersonnel->Margin = System::Windows::Forms::Padding(4);
			this->ModePersonnel->Name = L"ModePersonnel";
			this->ModePersonnel->Size = System::Drawing::Size(107, 44);
			this->ModePersonnel->TabIndex = 38;
			this->ModePersonnel->Text = L"Personnel";
			this->ModePersonnel->UseVisualStyleBackColor = true;
			this->ModePersonnel->Click += gcnew System::EventHandler(this, &MyForm::ModePersonnel_Click);
			// 
			// txt_IDClient
			// 
			this->txt_IDClient->Location = System::Drawing::Point(568, 31);
			this->txt_IDClient->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDClient->Name = L"txt_IDClient";
			this->txt_IDClient->Size = System::Drawing::Size(268, 22);
			this->txt_IDClient->TabIndex = 46;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(564, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 45;
			this->label1->Text = L"IDClient";
			// 
			// txt_DateNaissance
			// 
			this->txt_DateNaissance->Location = System::Drawing::Point(567, 186);
			this->txt_DateNaissance->Margin = System::Windows::Forms::Padding(4);
			this->txt_DateNaissance->Name = L"txt_DateNaissance";
			this->txt_DateNaissance->Size = System::Drawing::Size(268, 22);
			this->txt_DateNaissance->TabIndex = 44;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(563, 166);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 17);
			this->label2->TabIndex = 43;
			this->label2->Text = L"DateNaissance";
			// 
			// txt_PrenomClient
			// 
			this->txt_PrenomClient->Location = System::Drawing::Point(568, 134);
			this->txt_PrenomClient->Margin = System::Windows::Forms::Padding(4);
			this->txt_PrenomClient->Name = L"txt_PrenomClient";
			this->txt_PrenomClient->Size = System::Drawing::Size(268, 22);
			this->txt_PrenomClient->TabIndex = 42;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(564, 114);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 17);
			this->label3->TabIndex = 41;
			this->label3->Text = L"PrenomClient";
			// 
			// txt_NomClient
			// 
			this->txt_NomClient->Location = System::Drawing::Point(568, 83);
			this->txt_NomClient->Margin = System::Windows::Forms::Padding(4);
			this->txt_NomClient->Name = L"txt_NomClient";
			this->txt_NomClient->Size = System::Drawing::Size(268, 22);
			this->txt_NomClient->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(564, 63);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 17);
			this->label4->TabIndex = 39;
			this->label4->Text = L"NomClient";
			// 
			// txt_NumeroClient
			// 
			this->txt_NumeroClient->Location = System::Drawing::Point(566, 237);
			this->txt_NumeroClient->Margin = System::Windows::Forms::Padding(4);
			this->txt_NumeroClient->Name = L"txt_NumeroClient";
			this->txt_NumeroClient->Size = System::Drawing::Size(268, 22);
			this->txt_NumeroClient->TabIndex = 48;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(562, 217);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 17);
			this->label5->TabIndex = 47;
			this->label5->Text = L"NumeroClient";
			// 
			// btn_end2
			// 
			this->btn_end2->Location = System::Drawing::Point(498, 216);
			this->btn_end2->Margin = System::Windows::Forms::Padding(4);
			this->btn_end2->Name = L"btn_end2";
			this->btn_end2->Size = System::Drawing::Size(61, 28);
			this->btn_end2->TabIndex = 52;
			this->btn_end2->Text = L">>";
			this->btn_end2->UseVisualStyleBackColor = true;
			this->btn_end2->Click += gcnew System::EventHandler(this, &MyForm::btn_end2_Click);
			// 
			// btn_next2
			// 
			this->btn_next2->Location = System::Drawing::Point(429, 216);
			this->btn_next2->Margin = System::Windows::Forms::Padding(4);
			this->btn_next2->Name = L"btn_next2";
			this->btn_next2->Size = System::Drawing::Size(61, 28);
			this->btn_next2->TabIndex = 51;
			this->btn_next2->Text = L">";
			this->btn_next2->UseVisualStyleBackColor = true;
			this->btn_next2->Click += gcnew System::EventHandler(this, &MyForm::btn_next2_Click);
			// 
			// btn_previous2
			// 
			this->btn_previous2->Location = System::Drawing::Point(359, 216);
			this->btn_previous2->Margin = System::Windows::Forms::Padding(4);
			this->btn_previous2->Name = L"btn_previous2";
			this->btn_previous2->Size = System::Drawing::Size(61, 28);
			this->btn_previous2->TabIndex = 50;
			this->btn_previous2->Text = L"<";
			this->btn_previous2->UseVisualStyleBackColor = true;
			this->btn_previous2->Click += gcnew System::EventHandler(this, &MyForm::btn_previous2_Click);
			// 
			// btn_first2
			// 
			this->btn_first2->Location = System::Drawing::Point(290, 216);
			this->btn_first2->Margin = System::Windows::Forms::Padding(4);
			this->btn_first2->Name = L"btn_first2";
			this->btn_first2->Size = System::Drawing::Size(61, 28);
			this->btn_first2->TabIndex = 49;
			this->btn_first2->Text = L"<<";
			this->btn_first2->UseVisualStyleBackColor = true;
			this->btn_first2->Click += gcnew System::EventHandler(this, &MyForm::btn_first2_Click);
			// 
			// btn_end3
			// 
			this->btn_end3->Location = System::Drawing::Point(773, 267);
			this->btn_end3->Margin = System::Windows::Forms::Padding(4);
			this->btn_end3->Name = L"btn_end3";
			this->btn_end3->Size = System::Drawing::Size(61, 28);
			this->btn_end3->TabIndex = 56;
			this->btn_end3->Text = L">>";
			this->btn_end3->UseVisualStyleBackColor = true;
			this->btn_end3->Click += gcnew System::EventHandler(this, &MyForm::btn_end3_Click);
			// 
			// btn_next3
			// 
			this->btn_next3->Location = System::Drawing::Point(704, 267);
			this->btn_next3->Margin = System::Windows::Forms::Padding(4);
			this->btn_next3->Name = L"btn_next3";
			this->btn_next3->Size = System::Drawing::Size(61, 28);
			this->btn_next3->TabIndex = 55;
			this->btn_next3->Text = L">";
			this->btn_next3->UseVisualStyleBackColor = true;
			this->btn_next3->Click += gcnew System::EventHandler(this, &MyForm::btn_next3_Click);
			// 
			// btn_previous3
			// 
			this->btn_previous3->Location = System::Drawing::Point(634, 267);
			this->btn_previous3->Margin = System::Windows::Forms::Padding(4);
			this->btn_previous3->Name = L"btn_previous3";
			this->btn_previous3->Size = System::Drawing::Size(61, 28);
			this->btn_previous3->TabIndex = 54;
			this->btn_previous3->Text = L"<";
			this->btn_previous3->UseVisualStyleBackColor = true;
			this->btn_previous3->Click += gcnew System::EventHandler(this, &MyForm::btn_previous3_Click);
			// 
			// btn_first3
			// 
			this->btn_first3->Location = System::Drawing::Point(565, 267);
			this->btn_first3->Margin = System::Windows::Forms::Padding(4);
			this->btn_first3->Name = L"btn_first3";
			this->btn_first3->Size = System::Drawing::Size(61, 28);
			this->btn_first3->TabIndex = 53;
			this->btn_first3->Text = L"<<";
			this->btn_first3->UseVisualStyleBackColor = true;
			this->btn_first3->Click += gcnew System::EventHandler(this, &MyForm::btn_first3_Click);
			// 
			// ModeClient
			// 
			this->ModeClient->Location = System::Drawing::Point(273, 468);
			this->ModeClient->Margin = System::Windows::Forms::Padding(4);
			this->ModeClient->Name = L"ModeClient";
			this->ModeClient->Size = System::Drawing::Size(107, 44);
			this->ModeClient->TabIndex = 57;
			this->ModeClient->Text = L"Client";
			this->ModeClient->UseVisualStyleBackColor = true;
			this->ModeClient->Click += gcnew System::EventHandler(this, &MyForm::ModeClient_Click_1);
			// 
			// txt_PrixUHT
			// 
			this->txt_PrixUHT->Location = System::Drawing::Point(842, 237);
			this->txt_PrixUHT->Margin = System::Windows::Forms::Padding(4);
			this->txt_PrixUHT->Name = L"txt_PrixUHT";
			this->txt_PrixUHT->Size = System::Drawing::Size(268, 22);
			this->txt_PrixUHT->TabIndex = 67;
			this->txt_PrixUHT->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_PrixUHT_TextChanged);
			this->txt_PrixUHT->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_PrixUHT_KeyPress);
			// 
			// lbl_PrixUHT
			// 
			this->lbl_PrixUHT->AutoSize = true;
			this->lbl_PrixUHT->Location = System::Drawing::Point(838, 217);
			this->lbl_PrixUHT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_PrixUHT->Name = L"lbl_PrixUHT";
			this->lbl_PrixUHT->Size = System::Drawing::Size(60, 17);
			this->lbl_PrixUHT->TabIndex = 66;
			this->lbl_PrixUHT->Text = L"PrixUHT";
			// 
			// txt_IDArticle
			// 
			this->txt_IDArticle->Location = System::Drawing::Point(844, 31);
			this->txt_IDArticle->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDArticle->Name = L"txt_IDArticle";
			this->txt_IDArticle->Size = System::Drawing::Size(268, 22);
			this->txt_IDArticle->TabIndex = 65;
			// 
			// lbl_IDArticle
			// 
			this->lbl_IDArticle->AutoSize = true;
			this->lbl_IDArticle->Location = System::Drawing::Point(840, 11);
			this->lbl_IDArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_IDArticle->Name = L"lbl_IDArticle";
			this->lbl_IDArticle->Size = System::Drawing::Size(60, 17);
			this->lbl_IDArticle->TabIndex = 64;
			this->lbl_IDArticle->Text = L"IDArticle";
			// 
			// txt_NatureArticle
			// 
			this->txt_NatureArticle->Location = System::Drawing::Point(843, 186);
			this->txt_NatureArticle->Margin = System::Windows::Forms::Padding(4);
			this->txt_NatureArticle->Name = L"txt_NatureArticle";
			this->txt_NatureArticle->Size = System::Drawing::Size(268, 22);
			this->txt_NatureArticle->TabIndex = 63;
			// 
			// lbl_NatureArticle
			// 
			this->lbl_NatureArticle->AutoSize = true;
			this->lbl_NatureArticle->Location = System::Drawing::Point(839, 166);
			this->lbl_NatureArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_NatureArticle->Name = L"lbl_NatureArticle";
			this->lbl_NatureArticle->Size = System::Drawing::Size(90, 17);
			this->lbl_NatureArticle->TabIndex = 62;
			this->lbl_NatureArticle->Text = L"NatureArticle";
			// 
			// txt_NomArticle
			// 
			this->txt_NomArticle->Location = System::Drawing::Point(844, 134);
			this->txt_NomArticle->Margin = System::Windows::Forms::Padding(4);
			this->txt_NomArticle->Name = L"txt_NomArticle";
			this->txt_NomArticle->Size = System::Drawing::Size(268, 22);
			this->txt_NomArticle->TabIndex = 61;
			// 
			// lbl_NomArticle
			// 
			this->lbl_NomArticle->AutoSize = true;
			this->lbl_NomArticle->Location = System::Drawing::Point(840, 114);
			this->lbl_NomArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_NomArticle->Name = L"lbl_NomArticle";
			this->lbl_NomArticle->Size = System::Drawing::Size(76, 17);
			this->lbl_NomArticle->TabIndex = 60;
			this->lbl_NomArticle->Text = L"NomArticle";
			// 
			// txt_ReferenceArticle
			// 
			this->txt_ReferenceArticle->Location = System::Drawing::Point(844, 83);
			this->txt_ReferenceArticle->Margin = System::Windows::Forms::Padding(4);
			this->txt_ReferenceArticle->Name = L"txt_ReferenceArticle";
			this->txt_ReferenceArticle->Size = System::Drawing::Size(268, 22);
			this->txt_ReferenceArticle->TabIndex = 59;
			// 
			// lbl_ReferenceArticle
			// 
			this->lbl_ReferenceArticle->AutoSize = true;
			this->lbl_ReferenceArticle->Location = System::Drawing::Point(840, 63);
			this->lbl_ReferenceArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_ReferenceArticle->Name = L"lbl_ReferenceArticle";
			this->lbl_ReferenceArticle->Size = System::Drawing::Size(113, 17);
			this->lbl_ReferenceArticle->TabIndex = 58;
			this->lbl_ReferenceArticle->Text = L"ReferenceArticle";
			// 
			// txt_IDCommande
			// 
			this->txt_IDCommande->Location = System::Drawing::Point(840, 437);
			this->txt_IDCommande->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDCommande->Name = L"txt_IDCommande";
			this->txt_IDCommande->Size = System::Drawing::Size(268, 22);
			this->txt_IDCommande->TabIndex = 71;
			// 
			// lbl_IDCommande
			// 
			this->lbl_IDCommande->AutoSize = true;
			this->lbl_IDCommande->Location = System::Drawing::Point(836, 417);
			this->lbl_IDCommande->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_IDCommande->Name = L"lbl_IDCommande";
			this->lbl_IDCommande->Size = System::Drawing::Size(92, 17);
			this->lbl_IDCommande->TabIndex = 70;
			this->lbl_IDCommande->Text = L"IDCommande";
			// 
			// txt_SeuilReaprovisionnement
			// 
			this->txt_SeuilReaprovisionnement->Location = System::Drawing::Point(841, 386);
			this->txt_SeuilReaprovisionnement->Margin = System::Windows::Forms::Padding(4);
			this->txt_SeuilReaprovisionnement->Name = L"txt_SeuilReaprovisionnement";
			this->txt_SeuilReaprovisionnement->Size = System::Drawing::Size(268, 22);
			this->txt_SeuilReaprovisionnement->TabIndex = 69;
			// 
			// lbl_SeuilReaprovisionnement
			// 
			this->lbl_SeuilReaprovisionnement->AutoSize = true;
			this->lbl_SeuilReaprovisionnement->Location = System::Drawing::Point(837, 366);
			this->lbl_SeuilReaprovisionnement->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_SeuilReaprovisionnement->Name = L"lbl_SeuilReaprovisionnement";
			this->lbl_SeuilReaprovisionnement->Size = System::Drawing::Size(169, 17);
			this->lbl_SeuilReaprovisionnement->TabIndex = 68;
			this->lbl_SeuilReaprovisionnement->Text = L"SeuilReaprovisionnement";
			// 
			// btn_end4
			// 
			this->btn_end4->Location = System::Drawing::Point(1047, 467);
			this->btn_end4->Margin = System::Windows::Forms::Padding(4);
			this->btn_end4->Name = L"btn_end4";
			this->btn_end4->Size = System::Drawing::Size(61, 28);
			this->btn_end4->TabIndex = 75;
			this->btn_end4->Text = L">>";
			this->btn_end4->UseVisualStyleBackColor = true;
			this->btn_end4->Click += gcnew System::EventHandler(this, &MyForm::btn_end4_Click_1);
			// 
			// btn_next4
			// 
			this->btn_next4->Location = System::Drawing::Point(978, 467);
			this->btn_next4->Margin = System::Windows::Forms::Padding(4);
			this->btn_next4->Name = L"btn_next4";
			this->btn_next4->Size = System::Drawing::Size(61, 28);
			this->btn_next4->TabIndex = 74;
			this->btn_next4->Text = L">";
			this->btn_next4->UseVisualStyleBackColor = true;
			this->btn_next4->Click += gcnew System::EventHandler(this, &MyForm::btn_next4_Click_1);
			// 
			// btn_previous4
			// 
			this->btn_previous4->Location = System::Drawing::Point(908, 467);
			this->btn_previous4->Margin = System::Windows::Forms::Padding(4);
			this->btn_previous4->Name = L"btn_previous4";
			this->btn_previous4->Size = System::Drawing::Size(61, 28);
			this->btn_previous4->TabIndex = 73;
			this->btn_previous4->Text = L"<";
			this->btn_previous4->UseVisualStyleBackColor = true;
			this->btn_previous4->Click += gcnew System::EventHandler(this, &MyForm::btn_previous4_Click_1);
			// 
			// btn_first4
			// 
			this->btn_first4->Location = System::Drawing::Point(839, 467);
			this->btn_first4->Margin = System::Windows::Forms::Padding(4);
			this->btn_first4->Name = L"btn_first4";
			this->btn_first4->Size = System::Drawing::Size(61, 28);
			this->btn_first4->TabIndex = 72;
			this->btn_first4->Text = L"<<";
			this->btn_first4->UseVisualStyleBackColor = true;
			this->btn_first4->Click += gcnew System::EventHandler(this, &MyForm::btn_first4_Click_1);
			// 
			// ModeArticle
			// 
			this->ModeArticle->Location = System::Drawing::Point(273, 520);
			this->ModeArticle->Margin = System::Windows::Forms::Padding(4);
			this->ModeArticle->Name = L"ModeArticle";
			this->ModeArticle->Size = System::Drawing::Size(107, 44);
			this->ModeArticle->TabIndex = 76;
			this->ModeArticle->Text = L"Article";
			this->ModeArticle->UseVisualStyleBackColor = true;
			this->ModeArticle->Click += gcnew System::EventHandler(this, &MyForm::ModeArticle_Click);
			// 
			// txt_PrixUTTC
			// 
			this->txt_PrixUTTC->Location = System::Drawing::Point(841, 338);
			this->txt_PrixUTTC->Margin = System::Windows::Forms::Padding(4);
			this->txt_PrixUTTC->Name = L"txt_PrixUTTC";
			this->txt_PrixUTTC->Size = System::Drawing::Size(268, 22);
			this->txt_PrixUTTC->TabIndex = 80;
			this->txt_PrixUTTC->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_PrixUTTC_KeyPress);
			// 
			// lbl_PrixUTTC
			// 
			this->lbl_PrixUTTC->AutoSize = true;
			this->lbl_PrixUTTC->Location = System::Drawing::Point(837, 318);
			this->lbl_PrixUTTC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_PrixUTTC->Name = L"lbl_PrixUTTC";
			this->lbl_PrixUTTC->Size = System::Drawing::Size(68, 17);
			this->lbl_PrixUTTC->TabIndex = 79;
			this->lbl_PrixUTTC->Text = L"PrixUTTC";
			// 
			// txt_MontantTVA
			// 
			this->txt_MontantTVA->Location = System::Drawing::Point(842, 287);
			this->txt_MontantTVA->Margin = System::Windows::Forms::Padding(4);
			this->txt_MontantTVA->Name = L"txt_MontantTVA";
			this->txt_MontantTVA->Size = System::Drawing::Size(268, 22);
			this->txt_MontantTVA->TabIndex = 78;
			this->txt_MontantTVA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_MontantTVA_KeyPress);
			// 
			// lbl_MontantTVA
			// 
			this->lbl_MontantTVA->AutoSize = true;
			this->lbl_MontantTVA->Location = System::Drawing::Point(838, 267);
			this->lbl_MontantTVA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_MontantTVA->Name = L"lbl_MontantTVA";
			this->lbl_MontantTVA->Size = System::Drawing::Size(86, 17);
			this->lbl_MontantTVA->TabIndex = 77;
			this->lbl_MontantTVA->Text = L"MontantTVA";
			// 
			// txt_MontantTotalTTC
			// 
			this->txt_MontantTotalTTC->Location = System::Drawing::Point(1120, 287);
			this->txt_MontantTotalTTC->Margin = System::Windows::Forms::Padding(4);
			this->txt_MontantTotalTTC->Name = L"txt_MontantTotalTTC";
			this->txt_MontantTotalTTC->Size = System::Drawing::Size(268, 22);
			this->txt_MontantTotalTTC->TabIndex = 96;
			// 
			// lbl_MontantTotalTTC
			// 
			this->lbl_MontantTotalTTC->AutoSize = true;
			this->lbl_MontantTotalTTC->Location = System::Drawing::Point(1116, 267);
			this->lbl_MontantTotalTTC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_MontantTotalTTC->Name = L"lbl_MontantTotalTTC";
			this->lbl_MontantTotalTTC->Size = System::Drawing::Size(118, 17);
			this->lbl_MontantTotalTTC->TabIndex = 95;
			this->lbl_MontantTotalTTC->Text = L"MontantTotalTTC";
			// 
			// txt_MontantRemise
			// 
			this->txt_MontantRemise->Location = System::Drawing::Point(1120, 237);
			this->txt_MontantRemise->Margin = System::Windows::Forms::Padding(4);
			this->txt_MontantRemise->Name = L"txt_MontantRemise";
			this->txt_MontantRemise->Size = System::Drawing::Size(268, 22);
			this->txt_MontantRemise->TabIndex = 94;
			// 
			// lbl_MontantRemise
			// 
			this->lbl_MontantRemise->AutoSize = true;
			this->lbl_MontantRemise->Location = System::Drawing::Point(1116, 217);
			this->lbl_MontantRemise->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_MontantRemise->Name = L"lbl_MontantRemise";
			this->lbl_MontantRemise->Size = System::Drawing::Size(106, 17);
			this->lbl_MontantRemise->TabIndex = 93;
			this->lbl_MontantRemise->Text = L"MontantRemise";
			// 
			// txt_NombreArticle
			// 
			this->txt_NombreArticle->Location = System::Drawing::Point(1120, 186);
			this->txt_NombreArticle->Margin = System::Windows::Forms::Padding(4);
			this->txt_NombreArticle->Name = L"txt_NombreArticle";
			this->txt_NombreArticle->Size = System::Drawing::Size(268, 22);
			this->txt_NombreArticle->TabIndex = 92;
			// 
			// lbl_NombreArticle
			// 
			this->lbl_NombreArticle->AutoSize = true;
			this->lbl_NombreArticle->Location = System::Drawing::Point(1116, 166);
			this->lbl_NombreArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_NombreArticle->Name = L"lbl_NombreArticle";
			this->lbl_NombreArticle->Size = System::Drawing::Size(97, 17);
			this->lbl_NombreArticle->TabIndex = 91;
			this->lbl_NombreArticle->Text = L"NombreArticle";
			// 
			// btn_end5
			// 
			this->btn_end5->Location = System::Drawing::Point(1328, 366);
			this->btn_end5->Margin = System::Windows::Forms::Padding(4);
			this->btn_end5->Name = L"btn_end5";
			this->btn_end5->Size = System::Drawing::Size(61, 28);
			this->btn_end5->TabIndex = 90;
			this->btn_end5->Text = L">>";
			this->btn_end5->UseVisualStyleBackColor = true;
			this->btn_end5->Click += gcnew System::EventHandler(this, &MyForm::btn_end5_Click);
			// 
			// btn_next5
			// 
			this->btn_next5->Location = System::Drawing::Point(1259, 366);
			this->btn_next5->Margin = System::Windows::Forms::Padding(4);
			this->btn_next5->Name = L"btn_next5";
			this->btn_next5->Size = System::Drawing::Size(61, 28);
			this->btn_next5->TabIndex = 89;
			this->btn_next5->Text = L">";
			this->btn_next5->UseVisualStyleBackColor = true;
			this->btn_next5->Click += gcnew System::EventHandler(this, &MyForm::btn_next5_Click);
			// 
			// btn_previous5
			// 
			this->btn_previous5->Location = System::Drawing::Point(1189, 366);
			this->btn_previous5->Margin = System::Windows::Forms::Padding(4);
			this->btn_previous5->Name = L"btn_previous5";
			this->btn_previous5->Size = System::Drawing::Size(61, 28);
			this->btn_previous5->TabIndex = 88;
			this->btn_previous5->Text = L"<";
			this->btn_previous5->UseVisualStyleBackColor = true;
			this->btn_previous5->Click += gcnew System::EventHandler(this, &MyForm::btn_previous5_Click);
			// 
			// btn_first5
			// 
			this->btn_first5->Location = System::Drawing::Point(1120, 366);
			this->btn_first5->Margin = System::Windows::Forms::Padding(4);
			this->btn_first5->Name = L"btn_first5";
			this->btn_first5->Size = System::Drawing::Size(61, 28);
			this->btn_first5->TabIndex = 87;
			this->btn_first5->Text = L"<<";
			this->btn_first5->UseVisualStyleBackColor = true;
			this->btn_first5->Click += gcnew System::EventHandler(this, &MyForm::btn_first5_Click);
			// 
			// txt_ReferenceCommande
			// 
			this->txt_ReferenceCommande->Location = System::Drawing::Point(1120, 134);
			this->txt_ReferenceCommande->Margin = System::Windows::Forms::Padding(4);
			this->txt_ReferenceCommande->Name = L"txt_ReferenceCommande";
			this->txt_ReferenceCommande->Size = System::Drawing::Size(268, 22);
			this->txt_ReferenceCommande->TabIndex = 86;
			// 
			// lbl_ReferenceCommande
			// 
			this->lbl_ReferenceCommande->AutoSize = true;
			this->lbl_ReferenceCommande->Location = System::Drawing::Point(1116, 114);
			this->lbl_ReferenceCommande->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_ReferenceCommande->Name = L"lbl_ReferenceCommande";
			this->lbl_ReferenceCommande->Size = System::Drawing::Size(145, 17);
			this->lbl_ReferenceCommande->TabIndex = 85;
			this->lbl_ReferenceCommande->Text = L"ReferenceCommande";
			// 
			// txt_IDCliento
			// 
			this->txt_IDCliento->Location = System::Drawing::Point(1120, 82);
			this->txt_IDCliento->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDCliento->Name = L"txt_IDCliento";
			this->txt_IDCliento->Size = System::Drawing::Size(268, 22);
			this->txt_IDCliento->TabIndex = 84;
			// 
			// lbl_IDCliento
			// 
			this->lbl_IDCliento->AutoSize = true;
			this->lbl_IDCliento->Location = System::Drawing::Point(1116, 63);
			this->lbl_IDCliento->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_IDCliento->Name = L"lbl_IDCliento";
			this->lbl_IDCliento->Size = System::Drawing::Size(56, 17);
			this->lbl_IDCliento->TabIndex = 83;
			this->lbl_IDCliento->Text = L"IDClient";
			// 
			// txt_IDCommandeo
			// 
			this->txt_IDCommandeo->Location = System::Drawing::Point(1120, 31);
			this->txt_IDCommandeo->Margin = System::Windows::Forms::Padding(4);
			this->txt_IDCommandeo->Name = L"txt_IDCommandeo";
			this->txt_IDCommandeo->ReadOnly = true;
			this->txt_IDCommandeo->Size = System::Drawing::Size(268, 22);
			this->txt_IDCommandeo->TabIndex = 82;
			// 
			// lbl_IDCommandeo
			// 
			this->lbl_IDCommandeo->AutoSize = true;
			this->lbl_IDCommandeo->Location = System::Drawing::Point(1116, 11);
			this->lbl_IDCommandeo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_IDCommandeo->Name = L"lbl_IDCommandeo";
			this->lbl_IDCommandeo->Size = System::Drawing::Size(92, 17);
			this->lbl_IDCommandeo->TabIndex = 81;
			this->lbl_IDCommandeo->Text = L"IDCommande";
			// 
			// txt_DateSolde
			// 
			this->txt_DateSolde->Location = System::Drawing::Point(1120, 338);
			this->txt_DateSolde->Margin = System::Windows::Forms::Padding(4);
			this->txt_DateSolde->Name = L"txt_DateSolde";
			this->txt_DateSolde->Size = System::Drawing::Size(268, 22);
			this->txt_DateSolde->TabIndex = 98;
			// 
			// lbl_DateSolde
			// 
			this->lbl_DateSolde->AutoSize = true;
			this->lbl_DateSolde->Location = System::Drawing::Point(1116, 318);
			this->lbl_DateSolde->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_DateSolde->Name = L"lbl_DateSolde";
			this->lbl_DateSolde->Size = System::Drawing::Size(74, 17);
			this->lbl_DateSolde->TabIndex = 97;
			this->lbl_DateSolde->Text = L"DateSolde";
			// 
			// ModeCommande
			// 
			this->ModeCommande->Location = System::Drawing::Point(388, 355);
			this->ModeCommande->Margin = System::Windows::Forms::Padding(4);
			this->ModeCommande->Name = L"ModeCommande";
			this->ModeCommande->Size = System::Drawing::Size(107, 44);
			this->ModeCommande->TabIndex = 99;
			this->ModeCommande->Text = L"Commande";
			this->ModeCommande->UseVisualStyleBackColor = true;
			this->ModeCommande->Click += gcnew System::EventHandler(this, &MyForm::ModeCommande_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1501, 643);
			this->Controls->Add(this->ModeCommande);
			this->Controls->Add(this->txt_DateSolde);
			this->Controls->Add(this->lbl_DateSolde);
			this->Controls->Add(this->txt_MontantTotalTTC);
			this->Controls->Add(this->lbl_MontantTotalTTC);
			this->Controls->Add(this->txt_MontantRemise);
			this->Controls->Add(this->lbl_MontantRemise);
			this->Controls->Add(this->txt_NombreArticle);
			this->Controls->Add(this->lbl_NombreArticle);
			this->Controls->Add(this->btn_end5);
			this->Controls->Add(this->btn_next5);
			this->Controls->Add(this->btn_previous5);
			this->Controls->Add(this->btn_first5);
			this->Controls->Add(this->txt_ReferenceCommande);
			this->Controls->Add(this->lbl_ReferenceCommande);
			this->Controls->Add(this->txt_IDCliento);
			this->Controls->Add(this->lbl_IDCliento);
			this->Controls->Add(this->txt_IDCommandeo);
			this->Controls->Add(this->lbl_IDCommandeo);
			this->Controls->Add(this->txt_PrixUTTC);
			this->Controls->Add(this->lbl_PrixUTTC);
			this->Controls->Add(this->txt_MontantTVA);
			this->Controls->Add(this->lbl_MontantTVA);
			this->Controls->Add(this->ModeArticle);
			this->Controls->Add(this->btn_end4);
			this->Controls->Add(this->btn_next4);
			this->Controls->Add(this->btn_previous4);
			this->Controls->Add(this->btn_first4);
			this->Controls->Add(this->txt_IDCommande);
			this->Controls->Add(this->lbl_IDCommande);
			this->Controls->Add(this->txt_SeuilReaprovisionnement);
			this->Controls->Add(this->lbl_SeuilReaprovisionnement);
			this->Controls->Add(this->txt_PrixUHT);
			this->Controls->Add(this->lbl_PrixUHT);
			this->Controls->Add(this->txt_IDArticle);
			this->Controls->Add(this->lbl_IDArticle);
			this->Controls->Add(this->txt_NatureArticle);
			this->Controls->Add(this->lbl_NatureArticle);
			this->Controls->Add(this->txt_NomArticle);
			this->Controls->Add(this->lbl_NomArticle);
			this->Controls->Add(this->txt_ReferenceArticle);
			this->Controls->Add(this->lbl_ReferenceArticle);
			this->Controls->Add(this->ModeClient);
			this->Controls->Add(this->btn_end3);
			this->Controls->Add(this->btn_next3);
			this->Controls->Add(this->btn_previous3);
			this->Controls->Add(this->btn_first3);
			this->Controls->Add(this->btn_end2);
			this->Controls->Add(this->btn_next2);
			this->Controls->Add(this->btn_previous2);
			this->Controls->Add(this->btn_first2);
			this->Controls->Add(this->txt_NumeroClient);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_IDClient);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_DateNaissance);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_PrenomClient);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_NomClient);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ModePersonnel);
			this->Controls->Add(this->ModeAdresse);
			this->Controls->Add(this->txt_IDAdresseo);
			this->Controls->Add(this->lbl_IDAdresseo);
			this->Controls->Add(this->txt_adresseCodePostal);
			this->Controls->Add(this->lbl_adresseCodePostal);
			this->Controls->Add(this->txt_adresseVille);
			this->Controls->Add(this->lbl_adresseville);
			this->Controls->Add(this->txt_adresseRue);
			this->Controls->Add(this->lbl_adresseRue);
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
			this->Text = L"Projet POO";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->index2 = 0;
		this->index3= 0;
		this->index4 = 0;
		this->index5 = 0;
		this->mode = "RIEN";
		this->ds = gcnew Data::DataSet();
		this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
		this->loadData(this->index);
		this->txt_message->Text = "Data chargées";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
			this->ds = this->processusPersonnes->listePersonnes("PERSONNEL","ADRESSE","CLIENT","ARTICLE","COMMANDE");

			this->txt_IDPersonnel->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[0]);
			this->txt_nomPersonnel->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[1]);
			this->txt_prenomPersonnel->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[2]);
			this->txt_IDAdresse->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[3]);
			this->txt_IDSuperieur->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[4]);
			this->txt_DateEmbauche->Text = Convert::ToString(this->ds->Tables["PERSONNEL"]->Rows[this->index]->ItemArray[5]);
		
			this->txt_IDAdresseo->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index2]->ItemArray[0]);
			this->txt_adresseRue->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index2]->ItemArray[1]);
			this->txt_adresseVille->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index2]->ItemArray[2]);
			this->txt_adresseCodePostal->Text = Convert::ToString(this->ds->Tables["ADRESSE"]->Rows[this->index2]->ItemArray[3]);

			this->txt_IDClient->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index3]->ItemArray[0]);
			this->txt_NomClient->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index3]->ItemArray[1]);
			this->txt_PrenomClient->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index3]->ItemArray[2]);
			this->txt_DateNaissance->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index3]->ItemArray[3]);
			this->txt_NumeroClient->Text = Convert::ToString(this->ds->Tables["CLIENT"]->Rows[this->index3]->ItemArray[4]);

			this->txt_IDArticle->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index4]->ItemArray[0]);
			this->txt_ReferenceArticle->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index4]->ItemArray[1]);
			this->txt_NomArticle->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index4]->ItemArray[2]);
			this->txt_NatureArticle->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index4]->ItemArray[3]);
			this->txt_PrixUHT->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index4]->ItemArray[4]);
			this->txt_MontantTVA->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index4]->ItemArray[5]);
			this->txt_PrixUTTC->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index4]->ItemArray[6]);
			this->txt_SeuilReaprovisionnement->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index4]->ItemArray[7]);
			this->txt_IDCommande->Text = Convert::ToString(this->ds->Tables["ARTICLE"]->Rows[this->index4]->ItemArray[8]);

			this->txt_IDCommandeo->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index5]->ItemArray[0]);
			this->txt_IDCliento->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index5]->ItemArray[1]);
			this->txt_ReferenceCommande->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index5]->ItemArray[2]);
			this->txt_NombreArticle->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index5]->ItemArray[3]);
			this->txt_MontantRemise->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index5]->ItemArray[4]);
			this->txt_MontantTotalTTC->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index5]->ItemArray[5]);
			this->txt_DateSolde->Text = Convert::ToString(this->ds->Tables["COMMANDE"]->Rows[this->index5]->ItemArray[6]);

		
	}





private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->txt_IDPersonnel->Clear();
	this->txt_nomPersonnel->Clear();
	this->txt_prenomPersonnel->Clear();
	this->txt_IDAdresse->Clear();
	this->txt_IDAdresseo->Clear();
	this->txt_adresseRue->Clear();
	this->txt_adresseVille->Clear();
	this->txt_adresseCodePostal->Clear();
	this->txt_IDSuperieur->Clear();
	this->txt_DateEmbauche->Clear();
	this->txt_IDClient->Clear();
	this->txt_NomClient->Clear();
	this->txt_PrenomClient->Clear();
	this->txt_DateNaissance->Clear();
	this->txt_NumeroClient->Clear();
	this->txt_IDArticle->Clear();
	this->txt_ReferenceArticle->Clear();
	this->txt_NomArticle->Clear();
	this->txt_NatureArticle->Clear();
	this->txt_PrixUHT->Clear();
	this->txt_MontantTVA->Clear();
	this->txt_PrixUTTC->Clear();
	this->txt_SeuilReaprovisionnement->Clear();
	this->txt_IDCommande->Clear();
	this->txt_IDCommandeo->Clear();
	this->txt_IDCliento->Clear();
	this->txt_ReferenceCommande->Clear();
	this->txt_NombreArticle->Clear();
	this->txt_MontantRemise->Clear();
	this->txt_MontantTotalTTC->Clear();
	this->txt_DateSolde->Clear();

	this->mode = "nouv";
	this->txt_message->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
}






private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
{
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
			int Id;
			if (this->txt_IDSuperieur->Text == "")
			{
				Id = this->processusPersonnes->ajouterPersonnelNULL(this->txt_nomPersonnel->Text, this->txt_prenomPersonnel->Text, Convert::ToInt32(this->txt_IDAdresse->Text), this->txt_DateEmbauche->Text);
			}
			else
			{
				Id = this->processusPersonnes->ajouterPersonnel(this->txt_nomPersonnel->Text, this->txt_prenomPersonnel->Text, Convert::ToInt32(this->txt_IDAdresse->Text), Convert::ToInt32(this->txt_IDSuperieur->Text), this->txt_DateEmbauche->Text);
			}

			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}
		else if (this->mode == "maj")
		{
			if (this->txt_IDSuperieur->Text == "")
			{
				this->processusPersonnes->modifierPersonnelNULL(Convert::ToInt32(this->txt_IDPersonnel->Text), this->txt_nomPersonnel->Text, this->txt_prenomPersonnel->Text, Convert::ToInt32(this->txt_IDAdresse->Text), this->txt_DateEmbauche->Text);
			}
			else
			{
				this->processusPersonnes->modifierPersonnel(Convert::ToInt32(this->txt_IDPersonnel->Text), this->txt_nomPersonnel->Text, this->txt_prenomPersonnel->Text, Convert::ToInt32(this->txt_IDAdresse->Text), Convert::ToInt32(this->txt_IDSuperieur->Text), this->txt_DateEmbauche->Text);
			}
		}
		else if (this->mode == "sup")
		{
			this->processusPersonnes->supprimerPersonnel(Convert::ToInt32(this->txt_IDPersonnel->Text));
			this->index = this->index - 1;

		}
	}

	else if (this->mode2 == "Adresse")
	{
		if (this->mode == "nouv")
		{
			int Id;
			Id = this->processusPersonnes->ajouterAdresse(this->txt_adresseRue->Text, this->txt_adresseVille->Text, this->txt_adresseCodePostal->Text);
			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";

		}
		else if (this->mode == "maj")
		{
			this->processusPersonnes->modifierAdresse(Convert::ToInt32(this->txt_IDAdresseo->Text), this->txt_adresseRue->Text, this->txt_adresseVille->Text, this->txt_adresseCodePostal->Text);
		}
		else if (this->mode == "sup")
		{
			this->processusPersonnes->supprimerAdresse(Convert::ToInt32(this->txt_IDAdresseo->Text));
			this->index2 = this->index2 - 1;
		}
	}
		
	else if (this->mode2 == "Client")
	{
		if (this->mode == "nouv")
		{
			int Id;
			Id = this->processusPersonnes->ajouterClient(this->txt_NomClient->Text, this->txt_PrenomClient->Text, this->txt_DateNaissance->Text, this->txt_NumeroClient->Text);
			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}
		else if (this->mode == "maj")
		{
			this->processusPersonnes->modifierClient(Convert::ToInt32(this->txt_IDClient->Text), this->txt_NomClient->Text, this->txt_PrenomClient->Text, this->txt_DateNaissance->Text, this->txt_NumeroClient->Text);
		}
		else if (this->mode == "sup")
		{
			this->processusPersonnes->supprimerClient(Convert::ToInt32(this->txt_IDClient->Text));
			this->index3 = this->index3 - 1;
		}
	}

	else if (this->mode2 == "Article")
	{
		if (this->mode == "nouv")
		{		
			int Id;
			if (this->txt_IDCommande->Text == "")
			{
				Id = this->processusPersonnes->ajouterArticleNULL(this->txt_ReferenceArticle->Text, this->txt_NomArticle->Text, this->txt_NatureArticle->Text, this->txt_PrixUHT->Text, this->txt_MontantTVA->Text, this->txt_PrixUTTC->Text, this->txt_SeuilReaprovisionnement->Text);
			}
			else
			{
				Id = this->processusPersonnes->ajouterArticle(this->txt_ReferenceArticle->Text, this->txt_NomArticle->Text, this->txt_NatureArticle->Text, this->txt_PrixUHT->Text, this->txt_MontantTVA->Text, this->txt_PrixUTTC->Text, this->txt_SeuilReaprovisionnement->Text, Convert::ToInt32(this->txt_IDCommande->Text));
			}
				
			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}
		else if (this->mode == "maj")
		{
			if (this->txt_IDCommande->Text == "")
			{
				this->processusPersonnes->modifierArticleNULL(Convert::ToInt32(this->txt_IDArticle->Text), this->txt_ReferenceArticle->Text, this->txt_NomArticle->Text, this->txt_NatureArticle->Text, this->txt_PrixUHT->Text, this->txt_MontantTVA->Text, this->txt_PrixUTTC->Text, this->txt_SeuilReaprovisionnement->Text);
			}
			else
			{
				this->processusPersonnes->modifierArticle(Convert::ToInt32(this->txt_IDArticle->Text), this->txt_ReferenceArticle->Text, this->txt_NomArticle->Text, this->txt_NatureArticle->Text, this->txt_PrixUHT->Text, this->txt_MontantTVA->Text, this->txt_PrixUTTC->Text, this->txt_SeuilReaprovisionnement->Text, Convert::ToInt32(this->txt_IDCommande->Text));
			}
		}
		else if (this->mode == "sup")
		{
			this->processusPersonnes->supprimerArticle(Convert::ToInt32(this->txt_IDArticle->Text));
			this->index4 = this->index4 - 1;
		}
	}
	else if (this->mode2 == "Commande")
	{
	if (this->mode == "nouv")
	{
		int Id;
		if (this->txt_DateSolde->Text == "")
		{
			Id = this->processusPersonnes->ajouterCommandeNULL(Convert::ToInt32(this->txt_IDCliento->Text), this->txt_ReferenceCommande->Text, this->txt_NombreArticle->Text, this->txt_MontantRemise->Text, this->txt_MontantTotalTTC->Text);
		}
		else
		{
			Id = this->processusPersonnes->ajouterCommande(Convert::ToInt32(this->txt_IDCliento->Text), this->txt_ReferenceCommande->Text, this->txt_NombreArticle->Text, this->txt_MontantRemise->Text, this->txt_MontantTotalTTC->Text, this->txt_DateSolde->Text);
		}

		this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
	}
	
	else if (this->mode == "maj")
	{
		if (this->txt_DateSolde->Text == "")
		{
			this->processusPersonnes->modifierCommandeNULL(Convert::ToInt32(this->txt_IDCommandeo->Text), Convert::ToInt32(this->txt_IDCliento->Text), this->txt_ReferenceCommande->Text, this->txt_NombreArticle->Text, this->txt_MontantRemise->Text, this->txt_MontantTotalTTC->Text);
		}
		else
		{
			this->processusPersonnes->modifierCommande(Convert::ToInt32(this->txt_IDCommandeo->Text), Convert::ToInt32(this->txt_IDCliento->Text), this->txt_ReferenceCommande->Text, this->txt_NombreArticle->Text, this->txt_MontantRemise->Text, this->txt_MontantTotalTTC->Text, this->txt_DateSolde->Text);
		}
	}
	else if (this->mode == "sup")
	{
		this->processusPersonnes->supprimerCommande(Convert::ToInt32(this->txt_IDCommande->Text));
		this->index5 = this->index5 - 1;
	}
	}


	if (this->mode != "sup")
	{
		this->index = 0;
		this->index2 = 0;
		this->index3 = 0;
		this->index4 = 0;
		this->index5 = 0;
	}

	this->loadData(0);

	this->txt_message->Text += "Traitement terminé.";
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
}
private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->index < this->ds->Tables["PERSONNEL"]->Rows->Count - 1)
	{
		this->index++;
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
	}
}
private: System::Void btn_end_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->index = this->ds->Tables["PERSONNEL"]->Rows->Count - 1;
	this->loadData(this->index);
	this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
}









private: System::Void btn_first2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->index2 = 0;
	this->loadData(this->index2);
	this->txt_message->Text = "Enregistrement n° : " + (this->index2 + 1);
}
private: System::Void btn_previous2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (this->index2 > 0)
	{
		this->index2--;
		this->loadData(this->index2);
		this->txt_message->Text = "Enregistrement n° : " + (this->index2 + 1);
	}
}
private: System::Void btn_next2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index2 < this->ds->Tables["ADRESSE"]->Rows->Count - 1)
	{
		this->index2++;
		this->loadData(this->index2);
		this->txt_message->Text = "Enregistrement n° : " + (this->index2 + 1);
	}
}
private: System::Void btn_end2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->index2 = this->ds->Tables["ADRESSE"]->Rows->Count - 1;
	this->loadData(this->index2);
	this->txt_message->Text = "Enregistrement n° : " + (this->index2 + 1);
}







private: System::Void btn_first3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->index3 = 0;
	this->loadData(this->index3);
	this->txt_message->Text = "Enregistrement n° : " + (this->index3 + 1);
}
private: System::Void btn_previous3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index3 > 0)
	{
		this->index3--;
		this->loadData(this->index3);
		this->txt_message->Text = "Enregistrement n° : " + (this->index3 + 1);
	}
}
private: System::Void btn_next3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index3 < this->ds->Tables["CLIENT"]->Rows->Count - 1)
	{
		this->index3++;
		this->loadData(this->index3);
		this->txt_message->Text = "Enregistrement n° : " + (this->index3 + 1);
	}
}
private: System::Void btn_end3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->index3 = this->ds->Tables["CLIENT"]->Rows->Count - 1;
	this->loadData(this->index3);
	this->txt_message->Text = "Enregistrement n° : " + (this->index3 + 1);
}






private: System::Void btn_first4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->index4 = 0;
	this->loadData(this->index4);
	this->txt_message->Text = "Enregistrement n° : " + (this->index4 + 1);
}
private: System::Void btn_previous4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->index4 > 0)
	{
		this->index4--;
		this->loadData(this->index4);
		this->txt_message->Text = "Enregistrement n° : " + (this->index4 + 1);
	}
}
private: System::Void btn_next4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->index4 < this->ds->Tables["ARTICLE"]->Rows->Count - 1)
	{
		this->index4++;
		this->loadData(this->index4);
		this->txt_message->Text = "Enregistrement n° : " + (this->index4 + 1);
	}
}
private: System::Void btn_end4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->index4 = this->ds->Tables["ARTICLE"]->Rows->Count - 1;
	this->loadData(this->index4);
	this->txt_message->Text = "Enregistrement n° : " + (this->index4 + 1);
}






private: System::Void btn_first5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->index5 = 0;
	this->loadData(this->index5);
	this->txt_message->Text = "Enregistrement n° : " + (this->index5 + 1);
}
private: System::Void btn_previous5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index5 > 0)
	{
		this->index5--;
		this->loadData(this->index5);
		this->txt_message->Text = "Enregistrement n° : " + (this->index5 + 1);
	}
}
private: System::Void btn_next5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index5 < this->ds->Tables["COMMANDE"]->Rows->Count - 1)
	{
		this->index5++;
		this->loadData(this->index5);
		this->txt_message->Text = "Enregistrement n° : " + (this->index5 + 1);
	}
}
private: System::Void btn_end5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->index5 = this->ds->Tables["COMMANDE"]->Rows->Count - 1;
	this->loadData(this->index5);
	this->txt_message->Text = "Enregistrement n° : " + (this->index5 + 1);
}






private: System::Void ModePersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode2 = "Personnel";
}
private: System::Void ModeAdresse_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode2 = "Adresse";
}
private: System::Void ModeClient_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->mode2 = "Client";
}
private: System::Void ModeArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode2 = "Article";
}
private: System::Void ModeCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode2 = "Commande";
}








private: System::Void txt_PrixUHT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void txt_PrixUHT_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
	char ch = e->KeyChar;

	if ( (ch == 44 || ch == 46) && (txt_PrixUHT->Text->IndexOf('.') != -1 || txt_PrixUHT->Text->IndexOf(',') != -1) )
	{
		e->Handled=true;
		return;
	}
	if (!Char::IsDigit(ch) && ch != 8 && ch != 44 && ch != 46)
	{
		e->Handled = true;
	}
}
private: System::Void txt_MontantTVA_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	char ch = e->KeyChar;

	if ((ch == 44 || ch == 46) && (txt_MontantTVA->Text->IndexOf('.') != -1 || txt_MontantTVA->Text->IndexOf(',') != -1))
	{
		e->Handled = true;
		return;
	}
	if (!Char::IsDigit(ch) && ch != 8 && ch != 44 && ch != 46)
	{
		e->Handled = true;
	}
}
private: System::Void txt_PrixUTTC_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	char ch = e->KeyChar;

	if ((ch == 44 || ch == 46) && (txt_PrixUTTC->Text->IndexOf('.') != -1 || txt_PrixUTTC->Text->IndexOf(',') != -1))
	{
		e->Handled = true;
		return;
	}
	if (!Char::IsDigit(ch) && ch != 8 && ch != 44 && ch != 46)
	{
		e->Handled = true;
	}
}











};
}
