#pragma once
#include "TxConsultaAjuntament.h"
#include "TxConsultaEntitat.h"
#include "UsuariIniciat.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultarUsuariUI
	/// </summary>
	public ref class ConsultarUsuariUI : public System::Windows::Forms::Form
	{
	public:
		ConsultarUsuariUI(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultarUsuariUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlInfoCiutada;
	private: System::Windows::Forms::Panel^ pnlInfoEntitat;
	private: System::Windows::Forms::Panel^ pnlInfojuntament;
	private: System::Windows::Forms::PictureBox^ picBoxCiutada;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^ picBoxEntitat;
	private: System::Windows::Forms::PictureBox^ picBoxAjuntament;

	private: System::Windows::Forms::Label^ lblPuntsCiu;
	private: System::Windows::Forms::Label^ labelPuntsCiu;
	private: System::Windows::Forms::Label^ lblSaldoCiu;
	private: System::Windows::Forms::Label^ lblDataCiu;
	private: System::Windows::Forms::Label^ lblCorreuCiu;
	private: System::Windows::Forms::Label^ lblNomCiu;
	private: System::Windows::Forms::Label^ lblUsuariCiu;
	private: System::Windows::Forms::Label^ labelSaldCiu;
	private: System::Windows::Forms::Label^ labelDatCiu;
	private: System::Windows::Forms::Label^ labelCorrCiu;
	private: System::Windows::Forms::Label^ labelNomCiu;
	private: System::Windows::Forms::Label^ labelUsuCiu;
	private: System::Windows::Forms::Label^ lblIdEnt;
	private: System::Windows::Forms::Label^ lblCorrEnt;
	private: System::Windows::Forms::Label^ lblTelEnt;
	private: System::Windows::Forms::Label^ lblNomEnt;
	private: System::Windows::Forms::Label^ labelCorrEnt;
	private: System::Windows::Forms::Label^ labelTelEnt;
	private: System::Windows::Forms::Label^ labelIdEnt;
	private: System::Windows::Forms::Label^ labelNomEnt;
	private: System::Windows::Forms::Label^ lblCorreuAj;
	private: System::Windows::Forms::Label^ lblTelAj;
	private: System::Windows::Forms::Label^ lblPobAj;
	private: System::Windows::Forms::Button^ Bshow;
	private: System::Windows::Forms::Label^ lblClauAj;
	private: System::Windows::Forms::Label^ lblNomAj;
	private: System::Windows::Forms::Label^ labelCorrAj;

	private: System::Windows::Forms::Label^ labelTelAj;
	private: System::Windows::Forms::Label^ labelPobAj;
	private: System::Windows::Forms::Label^ labelClauAj;
	private: System::Windows::Forms::Label^ labelNomAj;
	private: System::Windows::Forms::Button^ btnCloseInfoCiu;
	private: System::Windows::Forms::Button^ btnCloseInfoEnt;
	private: System::Windows::Forms::Button^ btnCloseInfoAj;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultarUsuariUI::typeid));
			this->pnlInfoCiutada = (gcnew System::Windows::Forms::Panel());
			this->btnCloseInfoCiu = (gcnew System::Windows::Forms::Button());
			this->lblPuntsCiu = (gcnew System::Windows::Forms::Label());
			this->labelPuntsCiu = (gcnew System::Windows::Forms::Label());
			this->lblSaldoCiu = (gcnew System::Windows::Forms::Label());
			this->lblDataCiu = (gcnew System::Windows::Forms::Label());
			this->lblCorreuCiu = (gcnew System::Windows::Forms::Label());
			this->lblNomCiu = (gcnew System::Windows::Forms::Label());
			this->lblUsuariCiu = (gcnew System::Windows::Forms::Label());
			this->labelSaldCiu = (gcnew System::Windows::Forms::Label());
			this->labelDatCiu = (gcnew System::Windows::Forms::Label());
			this->labelCorrCiu = (gcnew System::Windows::Forms::Label());
			this->labelNomCiu = (gcnew System::Windows::Forms::Label());
			this->labelUsuCiu = (gcnew System::Windows::Forms::Label());
			this->picBoxCiutada = (gcnew System::Windows::Forms::PictureBox());
			this->pnlInfoEntitat = (gcnew System::Windows::Forms::Panel());
			this->btnCloseInfoEnt = (gcnew System::Windows::Forms::Button());
			this->lblIdEnt = (gcnew System::Windows::Forms::Label());
			this->lblCorrEnt = (gcnew System::Windows::Forms::Label());
			this->lblTelEnt = (gcnew System::Windows::Forms::Label());
			this->lblNomEnt = (gcnew System::Windows::Forms::Label());
			this->labelCorrEnt = (gcnew System::Windows::Forms::Label());
			this->labelTelEnt = (gcnew System::Windows::Forms::Label());
			this->labelIdEnt = (gcnew System::Windows::Forms::Label());
			this->labelNomEnt = (gcnew System::Windows::Forms::Label());
			this->picBoxEntitat = (gcnew System::Windows::Forms::PictureBox());
			this->pnlInfojuntament = (gcnew System::Windows::Forms::Panel());
			this->btnCloseInfoAj = (gcnew System::Windows::Forms::Button());
			this->lblCorreuAj = (gcnew System::Windows::Forms::Label());
			this->lblTelAj = (gcnew System::Windows::Forms::Label());
			this->lblPobAj = (gcnew System::Windows::Forms::Label());
			this->Bshow = (gcnew System::Windows::Forms::Button());
			this->lblClauAj = (gcnew System::Windows::Forms::Label());
			this->lblNomAj = (gcnew System::Windows::Forms::Label());
			this->labelCorrAj = (gcnew System::Windows::Forms::Label());
			this->labelTelAj = (gcnew System::Windows::Forms::Label());
			this->labelPobAj = (gcnew System::Windows::Forms::Label());
			this->labelClauAj = (gcnew System::Windows::Forms::Label());
			this->labelNomAj = (gcnew System::Windows::Forms::Label());
			this->picBoxAjuntament = (gcnew System::Windows::Forms::PictureBox());
			this->pnlInfoCiutada->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCiutada))->BeginInit();
			this->pnlInfoEntitat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEntitat))->BeginInit();
			this->pnlInfojuntament->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxAjuntament))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlInfoCiutada
			// 
			this->pnlInfoCiutada->Controls->Add(this->btnCloseInfoCiu);
			this->pnlInfoCiutada->Controls->Add(this->lblPuntsCiu);
			this->pnlInfoCiutada->Controls->Add(this->labelPuntsCiu);
			this->pnlInfoCiutada->Controls->Add(this->lblSaldoCiu);
			this->pnlInfoCiutada->Controls->Add(this->lblDataCiu);
			this->pnlInfoCiutada->Controls->Add(this->lblCorreuCiu);
			this->pnlInfoCiutada->Controls->Add(this->lblNomCiu);
			this->pnlInfoCiutada->Controls->Add(this->lblUsuariCiu);
			this->pnlInfoCiutada->Controls->Add(this->labelSaldCiu);
			this->pnlInfoCiutada->Controls->Add(this->labelDatCiu);
			this->pnlInfoCiutada->Controls->Add(this->labelCorrCiu);
			this->pnlInfoCiutada->Controls->Add(this->labelNomCiu);
			this->pnlInfoCiutada->Controls->Add(this->labelUsuCiu);
			this->pnlInfoCiutada->Controls->Add(this->picBoxCiutada);
			this->pnlInfoCiutada->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlInfoCiutada->Location = System::Drawing::Point(0, 0);
			this->pnlInfoCiutada->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pnlInfoCiutada->Name = L"pnlInfoCiutada";
			this->pnlInfoCiutada->Size = System::Drawing::Size(719, 404);
			this->pnlInfoCiutada->TabIndex = 0;
			// 
			// btnCloseInfoCiu
			// 
			this->btnCloseInfoCiu->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCloseInfoCiu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCloseInfoCiu->Location = System::Drawing::Point(581, 353);
			this->btnCloseInfoCiu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCloseInfoCiu->Name = L"btnCloseInfoCiu";
			this->btnCloseInfoCiu->Size = System::Drawing::Size(100, 28);
			this->btnCloseInfoCiu->TabIndex = 25;
			this->btnCloseInfoCiu->Text = L"OK";
			this->btnCloseInfoCiu->UseVisualStyleBackColor = false;
			this->btnCloseInfoCiu->Click += gcnew System::EventHandler(this, &ConsultarUsuariUI::btnCloseInfoCiu_Click);
			// 
			// lblPuntsCiu
			// 
			this->lblPuntsCiu->AutoSize = true;
			this->lblPuntsCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPuntsCiu->Location = System::Drawing::Point(176, 359);
			this->lblPuntsCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPuntsCiu->Name = L"lblPuntsCiu";
			this->lblPuntsCiu->Size = System::Drawing::Size(66, 24);
			this->lblPuntsCiu->TabIndex = 24;
			this->lblPuntsCiu->Text = L"********";
			// 
			// labelPuntsCiu
			// 
			this->labelPuntsCiu->AutoSize = true;
			this->labelPuntsCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPuntsCiu->Location = System::Drawing::Point(145, 330);
			this->labelPuntsCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPuntsCiu->Name = L"labelPuntsCiu";
			this->labelPuntsCiu->Size = System::Drawing::Size(258, 29);
			this->labelPuntsCiu->TabIndex = 23;
			this->labelPuntsCiu->Text = L"Punts de descompte:";
			// 
			// lblSaldoCiu
			// 
			this->lblSaldoCiu->AutoSize = true;
			this->lblSaldoCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSaldoCiu->Location = System::Drawing::Point(176, 295);
			this->lblSaldoCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSaldoCiu->Name = L"lblSaldoCiu";
			this->lblSaldoCiu->Size = System::Drawing::Size(66, 24);
			this->lblSaldoCiu->TabIndex = 22;
			this->lblSaldoCiu->Text = L"********";
			// 
			// lblDataCiu
			// 
			this->lblDataCiu->AutoSize = true;
			this->lblDataCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDataCiu->Location = System::Drawing::Point(176, 234);
			this->lblDataCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDataCiu->Name = L"lblDataCiu";
			this->lblDataCiu->Size = System::Drawing::Size(66, 24);
			this->lblDataCiu->TabIndex = 21;
			this->lblDataCiu->Text = L"********";
			// 
			// lblCorreuCiu
			// 
			this->lblCorreuCiu->AutoSize = true;
			this->lblCorreuCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreuCiu->Location = System::Drawing::Point(176, 170);
			this->lblCorreuCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCorreuCiu->Name = L"lblCorreuCiu";
			this->lblCorreuCiu->Size = System::Drawing::Size(66, 24);
			this->lblCorreuCiu->TabIndex = 20;
			this->lblCorreuCiu->Text = L"********";
			// 
			// lblNomCiu
			// 
			this->lblNomCiu->AutoSize = true;
			this->lblNomCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomCiu->Location = System::Drawing::Point(176, 106);
			this->lblNomCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomCiu->Name = L"lblNomCiu";
			this->lblNomCiu->Size = System::Drawing::Size(66, 24);
			this->lblNomCiu->TabIndex = 19;
			this->lblNomCiu->Text = L"********";
			// 
			// lblUsuariCiu
			// 
			this->lblUsuariCiu->AutoSize = true;
			this->lblUsuariCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsuariCiu->Location = System::Drawing::Point(176, 44);
			this->lblUsuariCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblUsuariCiu->Name = L"lblUsuariCiu";
			this->lblUsuariCiu->Size = System::Drawing::Size(60, 24);
			this->lblUsuariCiu->TabIndex = 18;
			this->lblUsuariCiu->Text = L"label6";
			// 
			// labelSaldCiu
			// 
			this->labelSaldCiu->AutoSize = true;
			this->labelSaldCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSaldCiu->Location = System::Drawing::Point(145, 266);
			this->labelSaldCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSaldCiu->Name = L"labelSaldCiu";
			this->labelSaldCiu->Size = System::Drawing::Size(88, 29);
			this->labelSaldCiu->TabIndex = 17;
			this->labelSaldCiu->Text = L"Saldo:";
			// 
			// labelDatCiu
			// 
			this->labelDatCiu->AutoSize = true;
			this->labelDatCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDatCiu->Location = System::Drawing::Point(145, 204);
			this->labelDatCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDatCiu->Name = L"labelDatCiu";
			this->labelDatCiu->Size = System::Drawing::Size(241, 29);
			this->labelDatCiu->TabIndex = 16;
			this->labelDatCiu->Text = L"Data de Naixement:";
			// 
			// labelCorrCiu
			// 
			this->labelCorrCiu->AutoSize = true;
			this->labelCorrCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCorrCiu->Location = System::Drawing::Point(145, 140);
			this->labelCorrCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCorrCiu->Name = L"labelCorrCiu";
			this->labelCorrCiu->Size = System::Drawing::Size(100, 29);
			this->labelCorrCiu->TabIndex = 15;
			this->labelCorrCiu->Text = L"Correu:";
			// 
			// labelNomCiu
			// 
			this->labelNomCiu->AutoSize = true;
			this->labelNomCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNomCiu->Location = System::Drawing::Point(145, 76);
			this->labelNomCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNomCiu->Name = L"labelNomCiu";
			this->labelNomCiu->Size = System::Drawing::Size(75, 29);
			this->labelNomCiu->TabIndex = 14;
			this->labelNomCiu->Text = L"Nom:";
			// 
			// labelUsuCiu
			// 
			this->labelUsuCiu->AutoSize = true;
			this->labelUsuCiu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsuCiu->Location = System::Drawing::Point(145, 15);
			this->labelUsuCiu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelUsuCiu->Name = L"labelUsuCiu";
			this->labelUsuCiu->Size = System::Drawing::Size(95, 29);
			this->labelUsuCiu->TabIndex = 13;
			this->labelUsuCiu->Text = L"Usuari:";
			// 
			// picBoxCiutada
			// 
			this->picBoxCiutada->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxCiutada.Image")));
			this->picBoxCiutada->Location = System::Drawing::Point(17, 15);
			this->picBoxCiutada->Margin = System::Windows::Forms::Padding(0);
			this->picBoxCiutada->Name = L"picBoxCiutada";
			this->picBoxCiutada->Size = System::Drawing::Size(105, 100);
			this->picBoxCiutada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxCiutada->TabIndex = 1;
			this->picBoxCiutada->TabStop = false;
			this->picBoxCiutada->Click += gcnew System::EventHandler(this, &ConsultarUsuariUI::picBoxCiutada_Click);
			// 
			// pnlInfoEntitat
			// 
			this->pnlInfoEntitat->Controls->Add(this->btnCloseInfoEnt);
			this->pnlInfoEntitat->Controls->Add(this->lblIdEnt);
			this->pnlInfoEntitat->Controls->Add(this->lblCorrEnt);
			this->pnlInfoEntitat->Controls->Add(this->lblTelEnt);
			this->pnlInfoEntitat->Controls->Add(this->lblNomEnt);
			this->pnlInfoEntitat->Controls->Add(this->labelCorrEnt);
			this->pnlInfoEntitat->Controls->Add(this->labelTelEnt);
			this->pnlInfoEntitat->Controls->Add(this->labelIdEnt);
			this->pnlInfoEntitat->Controls->Add(this->labelNomEnt);
			this->pnlInfoEntitat->Controls->Add(this->picBoxEntitat);
			this->pnlInfoEntitat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlInfoEntitat->Location = System::Drawing::Point(0, 0);
			this->pnlInfoEntitat->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pnlInfoEntitat->Name = L"pnlInfoEntitat";
			this->pnlInfoEntitat->Size = System::Drawing::Size(719, 404);
			this->pnlInfoEntitat->TabIndex = 1;
			// 
			// btnCloseInfoEnt
			// 
			this->btnCloseInfoEnt->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCloseInfoEnt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCloseInfoEnt->Location = System::Drawing::Point(581, 353);
			this->btnCloseInfoEnt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCloseInfoEnt->Name = L"btnCloseInfoEnt";
			this->btnCloseInfoEnt->Size = System::Drawing::Size(100, 28);
			this->btnCloseInfoEnt->TabIndex = 20;
			this->btnCloseInfoEnt->Text = L"OK";
			this->btnCloseInfoEnt->UseVisualStyleBackColor = false;
			this->btnCloseInfoEnt->Click += gcnew System::EventHandler(this, &ConsultarUsuariUI::btnCloseInfoEnt_Click);
			// 
			// lblIdEnt
			// 
			this->lblIdEnt->AutoSize = true;
			this->lblIdEnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIdEnt->Location = System::Drawing::Point(179, 106);
			this->lblIdEnt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblIdEnt->Name = L"lblIdEnt";
			this->lblIdEnt->Size = System::Drawing::Size(66, 24);
			this->lblIdEnt->TabIndex = 19;
			this->lblIdEnt->Text = L"********";
			// 
			// lblCorrEnt
			// 
			this->lblCorrEnt->AutoSize = true;
			this->lblCorrEnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorrEnt->Location = System::Drawing::Point(179, 258);
			this->lblCorrEnt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCorrEnt->Name = L"lblCorrEnt";
			this->lblCorrEnt->Size = System::Drawing::Size(66, 24);
			this->lblCorrEnt->TabIndex = 18;
			this->lblCorrEnt->Text = L"********";
			// 
			// lblTelEnt
			// 
			this->lblTelEnt->AutoSize = true;
			this->lblTelEnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTelEnt->Location = System::Drawing::Point(179, 181);
			this->lblTelEnt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTelEnt->Name = L"lblTelEnt";
			this->lblTelEnt->Size = System::Drawing::Size(66, 24);
			this->lblTelEnt->TabIndex = 17;
			this->lblTelEnt->Text = L"********";
			// 
			// lblNomEnt
			// 
			this->lblNomEnt->AutoSize = true;
			this->lblNomEnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomEnt->Location = System::Drawing::Point(179, 44);
			this->lblNomEnt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomEnt->Name = L"lblNomEnt";
			this->lblNomEnt->Size = System::Drawing::Size(60, 24);
			this->lblNomEnt->TabIndex = 16;
			this->lblNomEnt->Text = L"label6";
			// 
			// labelCorrEnt
			// 
			this->labelCorrEnt->AutoSize = true;
			this->labelCorrEnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCorrEnt->Location = System::Drawing::Point(148, 214);
			this->labelCorrEnt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCorrEnt->Name = L"labelCorrEnt";
			this->labelCorrEnt->Size = System::Drawing::Size(242, 29);
			this->labelCorrEnt->TabIndex = 15;
			this->labelCorrEnt->Text = L"Correu de contacte:";
			// 
			// labelTelEnt
			// 
			this->labelTelEnt->AutoSize = true;
			this->labelTelEnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTelEnt->Location = System::Drawing::Point(139, 140);
			this->labelTelEnt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTelEnt->Name = L"labelTelEnt";
			this->labelTelEnt->Size = System::Drawing::Size(252, 29);
			this->labelTelEnt->TabIndex = 14;
			this->labelTelEnt->Text = L"Telefon de contacte:";
			// 
			// labelIdEnt
			// 
			this->labelIdEnt->AutoSize = true;
			this->labelIdEnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIdEnt->Location = System::Drawing::Point(148, 76);
			this->labelIdEnt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelIdEnt->Name = L"labelIdEnt";
			this->labelIdEnt->Size = System::Drawing::Size(42, 29);
			this->labelIdEnt->TabIndex = 13;
			this->labelIdEnt->Text = L"Id:";
			// 
			// labelNomEnt
			// 
			this->labelNomEnt->AutoSize = true;
			this->labelNomEnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNomEnt->Location = System::Drawing::Point(148, 15);
			this->labelNomEnt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNomEnt->Name = L"labelNomEnt";
			this->labelNomEnt->Size = System::Drawing::Size(75, 29);
			this->labelNomEnt->TabIndex = 12;
			this->labelNomEnt->Text = L"Nom:";
			// 
			// picBoxEntitat
			// 
			this->picBoxEntitat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxEntitat.Image")));
			this->picBoxEntitat->Location = System::Drawing::Point(15, 15);
			this->picBoxEntitat->Margin = System::Windows::Forms::Padding(0);
			this->picBoxEntitat->Name = L"picBoxEntitat";
			this->picBoxEntitat->Size = System::Drawing::Size(105, 100);
			this->picBoxEntitat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxEntitat->TabIndex = 2;
			this->picBoxEntitat->TabStop = false;
			this->picBoxEntitat->Click += gcnew System::EventHandler(this, &ConsultarUsuariUI::picBoxEntitat_Click);
			// 
			// pnlInfojuntament
			// 
			this->pnlInfojuntament->Controls->Add(this->btnCloseInfoAj);
			this->pnlInfojuntament->Controls->Add(this->lblCorreuAj);
			this->pnlInfojuntament->Controls->Add(this->lblTelAj);
			this->pnlInfojuntament->Controls->Add(this->lblPobAj);
			this->pnlInfojuntament->Controls->Add(this->Bshow);
			this->pnlInfojuntament->Controls->Add(this->lblClauAj);
			this->pnlInfojuntament->Controls->Add(this->lblNomAj);
			this->pnlInfojuntament->Controls->Add(this->labelCorrAj);
			this->pnlInfojuntament->Controls->Add(this->labelTelAj);
			this->pnlInfojuntament->Controls->Add(this->labelPobAj);
			this->pnlInfojuntament->Controls->Add(this->labelClauAj);
			this->pnlInfojuntament->Controls->Add(this->labelNomAj);
			this->pnlInfojuntament->Controls->Add(this->picBoxAjuntament);
			this->pnlInfojuntament->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlInfojuntament->Location = System::Drawing::Point(0, 0);
			this->pnlInfojuntament->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pnlInfojuntament->Name = L"pnlInfojuntament";
			this->pnlInfojuntament->Size = System::Drawing::Size(719, 404);
			this->pnlInfojuntament->TabIndex = 2;
			this->pnlInfojuntament->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ConsultarUsuariUI::pnlInfojuntament_Paint);
			// 
			// btnCloseInfoAj
			// 
			this->btnCloseInfoAj->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCloseInfoAj->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCloseInfoAj->Location = System::Drawing::Point(581, 353);
			this->btnCloseInfoAj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCloseInfoAj->Name = L"btnCloseInfoAj";
			this->btnCloseInfoAj->Size = System::Drawing::Size(100, 28);
			this->btnCloseInfoAj->TabIndex = 22;
			this->btnCloseInfoAj->Text = L"OK";
			this->btnCloseInfoAj->UseVisualStyleBackColor = false;
			this->btnCloseInfoAj->Click += gcnew System::EventHandler(this, &ConsultarUsuariUI::btnCloseInfoAj_Click);
			// 
			// lblCorreuAj
			// 
			this->lblCorreuAj->AutoSize = true;
			this->lblCorreuAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreuAj->Location = System::Drawing::Point(191, 295);
			this->lblCorreuAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCorreuAj->Name = L"lblCorreuAj";
			this->lblCorreuAj->Size = System::Drawing::Size(66, 24);
			this->lblCorreuAj->TabIndex = 21;
			this->lblCorreuAj->Text = L"********";
			// 
			// lblTelAj
			// 
			this->lblTelAj->AutoSize = true;
			this->lblTelAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTelAj->Location = System::Drawing::Point(191, 234);
			this->lblTelAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTelAj->Name = L"lblTelAj";
			this->lblTelAj->Size = System::Drawing::Size(66, 24);
			this->lblTelAj->TabIndex = 20;
			this->lblTelAj->Text = L"********";
			// 
			// lblPobAj
			// 
			this->lblPobAj->AutoSize = true;
			this->lblPobAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPobAj->Location = System::Drawing::Point(191, 170);
			this->lblPobAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPobAj->Name = L"lblPobAj";
			this->lblPobAj->Size = System::Drawing::Size(66, 24);
			this->lblPobAj->TabIndex = 19;
			this->lblPobAj->Text = L"********";
			// 
			// Bshow
			// 
			this->Bshow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Bshow.BackgroundImage")));
			this->Bshow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Bshow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bshow->Location = System::Drawing::Point(245, 76);
			this->Bshow->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Bshow->Name = L"Bshow";
			this->Bshow->Size = System::Drawing::Size(32, 30);
			this->Bshow->TabIndex = 18;
			this->Bshow->UseVisualStyleBackColor = true;
			this->Bshow->Click += gcnew System::EventHandler(this, &ConsultarUsuariUI::Bshow_Click);
			// 
			// lblClauAj
			// 
			this->lblClauAj->AutoSize = true;
			this->lblClauAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblClauAj->Location = System::Drawing::Point(191, 106);
			this->lblClauAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblClauAj->Name = L"lblClauAj";
			this->lblClauAj->Size = System::Drawing::Size(66, 24);
			this->lblClauAj->TabIndex = 17;
			this->lblClauAj->Text = L"********";
			this->lblClauAj->Visible = false;
			// 
			// lblNomAj
			// 
			this->lblNomAj->AutoSize = true;
			this->lblNomAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomAj->Location = System::Drawing::Point(191, 44);
			this->lblNomAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomAj->Name = L"lblNomAj";
			this->lblNomAj->Size = System::Drawing::Size(60, 24);
			this->lblNomAj->TabIndex = 16;
			this->lblNomAj->Text = L"label6";
			// 
			// labelCorrAj
			// 
			this->labelCorrAj->AutoSize = true;
			this->labelCorrAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCorrAj->Location = System::Drawing::Point(160, 266);
			this->labelCorrAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCorrAj->Name = L"labelCorrAj";
			this->labelCorrAj->Size = System::Drawing::Size(242, 29);
			this->labelCorrAj->TabIndex = 15;
			this->labelCorrAj->Text = L"Correu de contacte:";
			// 
			// labelTelAj
			// 
			this->labelTelAj->AutoSize = true;
			this->labelTelAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTelAj->Location = System::Drawing::Point(160, 204);
			this->labelTelAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTelAj->Name = L"labelTelAj";
			this->labelTelAj->Size = System::Drawing::Size(252, 29);
			this->labelTelAj->TabIndex = 14;
			this->labelTelAj->Text = L"Telefon de contacte:";
			// 
			// labelPobAj
			// 
			this->labelPobAj->AutoSize = true;
			this->labelPobAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPobAj->Location = System::Drawing::Point(160, 140);
			this->labelPobAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPobAj->Name = L"labelPobAj";
			this->labelPobAj->Size = System::Drawing::Size(123, 29);
			this->labelPobAj->TabIndex = 13;
			this->labelPobAj->Text = L"Poblacio:";
			// 
			// labelClauAj
			// 
			this->labelClauAj->AutoSize = true;
			this->labelClauAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelClauAj->Location = System::Drawing::Point(160, 76);
			this->labelClauAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelClauAj->Name = L"labelClauAj";
			this->labelClauAj->Size = System::Drawing::Size(73, 29);
			this->labelClauAj->TabIndex = 12;
			this->labelClauAj->Text = L"Clau:";
			// 
			// labelNomAj
			// 
			this->labelNomAj->AutoSize = true;
			this->labelNomAj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNomAj->Location = System::Drawing::Point(160, 15);
			this->labelNomAj->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNomAj->Name = L"labelNomAj";
			this->labelNomAj->Size = System::Drawing::Size(75, 29);
			this->labelNomAj->TabIndex = 11;
			this->labelNomAj->Text = L"Nom:";
			// 
			// picBoxAjuntament
			// 
			this->picBoxAjuntament->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxAjuntament.Image")));
			this->picBoxAjuntament->Location = System::Drawing::Point(17, 15);
			this->picBoxAjuntament->Margin = System::Windows::Forms::Padding(0);
			this->picBoxAjuntament->Name = L"picBoxAjuntament";
			this->picBoxAjuntament->Size = System::Drawing::Size(105, 100);
			this->picBoxAjuntament->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxAjuntament->TabIndex = 3;
			this->picBoxAjuntament->TabStop = false;
			this->picBoxAjuntament->Click += gcnew System::EventHandler(this, &ConsultarUsuariUI::picBoxAjuntament_Click);
			// 
			// ConsultarUsuariUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 404);
			this->Controls->Add(this->pnlInfojuntament);
			this->Controls->Add(this->pnlInfoEntitat);
			this->Controls->Add(this->pnlInfoCiutada);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ConsultarUsuariUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ConsultarUsuariUI";
			this->Load += gcnew System::EventHandler(this, &ConsultarUsuariUI::ConsultarUsuariUI_Load);
			this->pnlInfoCiutada->ResumeLayout(false);
			this->pnlInfoCiutada->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCiutada))->EndInit();
			this->pnlInfoEntitat->ResumeLayout(false);
			this->pnlInfoEntitat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEntitat))->EndInit();
			this->pnlInfojuntament->ResumeLayout(false);
			this->pnlInfojuntament->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxAjuntament))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void ConsultarUsuariUI_Load(System::Object^ sender, System::EventArgs^ e) {

	this->pnlInfoCiutada->Visible = false;
	this->pnlInfoEntitat->Visible = false;
	this->pnlInfojuntament->Visible = false;

	UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
	Object^ usuariIniciat = usuari->getUsuari();
	TipoPassarela tipusUsuari = usuari->getTipoPassarela();

	// Verificar si el tipo de passarela es Ciutada
	if (tipusUsuari == TipoPassarela::Ciutada) {
		// Convertir el objeto de passarela al tipo PassarelaCiutada^
		PassarelaCiutada^ passarelaCiutada = safe_cast<PassarelaCiutada^>(usuariIniciat);

		// Utilizar los métodos y propiedades específicos de PassarelaCiutada
		this->lblUsuariCiu->Text = passarelaCiutada->getNickname();
		this->lblNomCiu->Text = passarelaCiutada->getNomComplet();
		this->lblCorreuCiu->Text = passarelaCiutada->getCorreu();
		this->lblDataCiu->Text = passarelaCiutada->getDataNaix();
		this->lblSaldoCiu->Text = passarelaCiutada->getDiners()->ToString();
		this->lblPuntsCiu->Text = passarelaCiutada->getPunts()->ToString();

		this->pnlInfoCiutada->Visible = true;
	}
	else if (tipusUsuari == TipoPassarela::Entitat) {
		TxConsultaEntitat tc;
		tc.executar();
		List<String^>^ res = tc.obteResultat();
		this->lblNomEnt->Text = res[1];
		this->lblIdEnt->Text = res[0];
		this->lblCorrEnt->Text = res[2];
		this->lblTelEnt->Text = res[4];

		this->pnlInfoEntitat->Visible = true;
	}
	else if (tipusUsuari == TipoPassarela::Ajuntament) {
		TxConsultaAjuntament tc;
		tc.executar();
		List<String^>^ res = tc.getResult();
		this->lblNomAj->Text = res[0];
		this->lblClauAj->Text = res[1];
		this->lblPobAj->Text = res[2];
		this->lblTelAj->Text = res[3];
		this->lblCorreuAj->Text = res[4];

		this->pnlInfojuntament->Visible = true;
	}
}
private: System::Void btnCloseInfoCiu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnCloseInfoEnt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnCloseInfoAj_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
// PER FER: Al Clickar en foto de perfil -> Ampliar imatge al centre de pantalla.
private: System::Void picBoxCiutada_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void picBoxEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void picBoxAjuntament_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Bshow_Click(System::Object^ sender, System::EventArgs^ e) {
	lblClauAj->Visible = !lblClauAj->Visible;
}
private: System::Void pnlInfojuntament_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
