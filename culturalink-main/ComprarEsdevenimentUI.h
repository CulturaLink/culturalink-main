#pragma once
#include "TxConsultaEsdeveniment.h"

//#include "TxCompraEntradaEsdevenimentPunts.h"
//#include "TxCompraEntradaEsdevenimentDiners.h"
//#include "FormulariCompraEntrada.h"

const string ErrorUsuari = "No hi ha cap usuari amb sessio iniciada";

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ComprarEsdevenimentUI
	/// </summary>
	public ref class ComprarEsdevenimentUI : public System::Windows::Forms::Form
	{
	public:
		ComprarEsdevenimentUI(void)
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
		~ComprarEsdevenimentUI()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::Button^ btnGoBackCONS;
private: System::Windows::Forms::Button^ btnComprarCONS;
private: System::Windows::Forms::Panel^ pnlConsultarCompra;
private: System::Windows::Forms::Panel^ pnlDescCONS;
private: System::Windows::Forms::Panel^ pnlDescTitleCONS;
private: System::Windows::Forms::Label^ lblDescCONSen;
private: System::Windows::Forms::Label^ lblDescEsdevCONS;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::Panel^ pnlPreusCONS;
private: System::Windows::Forms::Label^ lblPreuEsdevCONSgran;
private: System::Windows::Forms::Panel^ pnlNomEsdevTitleCONS;
private: System::Windows::Forms::Label^ lblNomEsdevCONS;
private: System::Windows::Forms::Panel^ pnlFlowTipusCapsesCONSex;
private: System::Windows::Forms::Button^ btnFiltreGalaCONSex;
private: System::Windows::Forms::Button^ btnFiltreDeportivoCONSex;
private: System::Windows::Forms::Panel^ panelCONS;
private: System::Windows::Forms::Panel^ pnl5CONS;
private: System::Windows::Forms::Label^ lblPuntsRegCONSen;
private: System::Windows::Forms::Panel^ pnl51CONS;
private: System::Windows::Forms::Label^ lblPuntsRegCONS;
private: System::Windows::Forms::Panel^ pnl6CONS;
private: System::Windows::Forms::Label^ lblDataCONSen;
private: System::Windows::Forms::Panel^ pnl61CONS;
private: System::Windows::Forms::Label^ lblDataCONS;
private: System::Windows::Forms::Panel^ pnl4CONS;
private: System::Windows::Forms::Label^ lblPreuPuntsCONSen;
private: System::Windows::Forms::Panel^ pnl41CONS;
private: System::Windows::Forms::Label^ lblPreuPuntsCONS;
private: System::Windows::Forms::Panel^ pnl3CONS;
private: System::Windows::Forms::Label^ lblAforamCONSen;
private: System::Windows::Forms::Panel^ pnl31CONS;
private: System::Windows::Forms::Label^ lblAforamCONS;
private: System::Windows::Forms::Panel^ pnl2CONS;
private: System::Windows::Forms::Label^ lblTipusCONSen;
private: System::Windows::Forms::Panel^ pnl21CONS;
private: System::Windows::Forms::Label^ lblTipusCONS;
private: System::Windows::Forms::Panel^ pnl1CONS;
private: System::Windows::Forms::Label^ lblAjuntEsdevCONSen;
private: System::Windows::Forms::Panel^ pnl11CONS;
private: System::Windows::Forms::Label^ lblAjuntEsdevCONS;
private: System::Windows::Forms::PictureBox^ picBoxEsdevCONS;

	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ComprarEsdevenimentUI::typeid));
			this->btnGoBackCONS = (gcnew System::Windows::Forms::Button());
			this->btnComprarCONS = (gcnew System::Windows::Forms::Button());
			this->pnlConsultarCompra = (gcnew System::Windows::Forms::Panel());
			this->picBoxEsdevCONS = (gcnew System::Windows::Forms::PictureBox());
			this->panelCONS = (gcnew System::Windows::Forms::Panel());
			this->pnl5CONS = (gcnew System::Windows::Forms::Panel());
			this->lblPuntsRegCONSen = (gcnew System::Windows::Forms::Label());
			this->pnl51CONS = (gcnew System::Windows::Forms::Panel());
			this->lblPuntsRegCONS = (gcnew System::Windows::Forms::Label());
			this->pnl6CONS = (gcnew System::Windows::Forms::Panel());
			this->lblDataCONSen = (gcnew System::Windows::Forms::Label());
			this->pnl61CONS = (gcnew System::Windows::Forms::Panel());
			this->lblDataCONS = (gcnew System::Windows::Forms::Label());
			this->pnl4CONS = (gcnew System::Windows::Forms::Panel());
			this->lblPreuPuntsCONSen = (gcnew System::Windows::Forms::Label());
			this->pnl41CONS = (gcnew System::Windows::Forms::Panel());
			this->lblPreuPuntsCONS = (gcnew System::Windows::Forms::Label());
			this->pnl3CONS = (gcnew System::Windows::Forms::Panel());
			this->lblAforamCONSen = (gcnew System::Windows::Forms::Label());
			this->pnl31CONS = (gcnew System::Windows::Forms::Panel());
			this->lblAforamCONS = (gcnew System::Windows::Forms::Label());
			this->pnl2CONS = (gcnew System::Windows::Forms::Panel());
			this->lblTipusCONSen = (gcnew System::Windows::Forms::Label());
			this->pnl21CONS = (gcnew System::Windows::Forms::Panel());
			this->lblTipusCONS = (gcnew System::Windows::Forms::Label());
			this->pnl1CONS = (gcnew System::Windows::Forms::Panel());
			this->lblAjuntEsdevCONSen = (gcnew System::Windows::Forms::Label());
			this->pnl11CONS = (gcnew System::Windows::Forms::Panel());
			this->lblAjuntEsdevCONS = (gcnew System::Windows::Forms::Label());
			this->pnlFlowTipusCapsesCONSex = (gcnew System::Windows::Forms::Panel());
			this->btnFiltreGalaCONSex = (gcnew System::Windows::Forms::Button());
			this->btnFiltreDeportivoCONSex = (gcnew System::Windows::Forms::Button());
			this->pnlDescCONS = (gcnew System::Windows::Forms::Panel());
			this->lblDescEsdevCONS = (gcnew System::Windows::Forms::Label());
			this->pnlDescTitleCONS = (gcnew System::Windows::Forms::Panel());
			this->lblDescCONSen = (gcnew System::Windows::Forms::Label());
			this->pnlPreusCONS = (gcnew System::Windows::Forms::Panel());
			this->lblPreuEsdevCONSgran = (gcnew System::Windows::Forms::Label());
			this->pnlNomEsdevTitleCONS = (gcnew System::Windows::Forms::Panel());
			this->lblNomEsdevCONS = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->pnlConsultarCompra->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEsdevCONS))->BeginInit();
			this->panelCONS->SuspendLayout();
			this->pnl5CONS->SuspendLayout();
			this->pnl51CONS->SuspendLayout();
			this->pnl6CONS->SuspendLayout();
			this->pnl61CONS->SuspendLayout();
			this->pnl4CONS->SuspendLayout();
			this->pnl41CONS->SuspendLayout();
			this->pnl3CONS->SuspendLayout();
			this->pnl31CONS->SuspendLayout();
			this->pnl2CONS->SuspendLayout();
			this->pnl21CONS->SuspendLayout();
			this->pnl1CONS->SuspendLayout();
			this->pnl11CONS->SuspendLayout();
			this->pnlFlowTipusCapsesCONSex->SuspendLayout();
			this->pnlDescCONS->SuspendLayout();
			this->pnlDescTitleCONS->SuspendLayout();
			this->pnlPreusCONS->SuspendLayout();
			this->pnlNomEsdevTitleCONS->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGoBackCONS
			// 
			this->btnGoBackCONS->Location = System::Drawing::Point(500, 613);
			this->btnGoBackCONS->Margin = System::Windows::Forms::Padding(4);
			this->btnGoBackCONS->Name = L"btnGoBackCONS";
			this->btnGoBackCONS->Size = System::Drawing::Size(119, 46);
			this->btnGoBackCONS->TabIndex = 0;
			this->btnGoBackCONS->Text = L"Atrás";
			this->btnGoBackCONS->UseVisualStyleBackColor = true;
			this->btnGoBackCONS->Click += gcnew System::EventHandler(this, &ComprarEsdevenimentUI::btnGoBackCONS_Click);
			// 
			// btnComprarCONS
			// 
			this->btnComprarCONS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnComprarCONS->Location = System::Drawing::Point(627, 613);
			this->btnComprarCONS->Margin = System::Windows::Forms::Padding(4);
			this->btnComprarCONS->Name = L"btnComprarCONS";
			this->btnComprarCONS->Size = System::Drawing::Size(218, 46);
			this->btnComprarCONS->TabIndex = 1;
			this->btnComprarCONS->Text = L"Comprar";
			this->btnComprarCONS->UseVisualStyleBackColor = false;
			this->btnComprarCONS->Click += gcnew System::EventHandler(this, &ComprarEsdevenimentUI::btnComprarCONS_Click);
			// 
			// pnlConsultarCompra
			// 
			this->pnlConsultarCompra->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlConsultarCompra->Controls->Add(this->picBoxEsdevCONS);
			this->pnlConsultarCompra->Controls->Add(this->panelCONS);
			this->pnlConsultarCompra->Controls->Add(this->pnlFlowTipusCapsesCONSex);
			this->pnlConsultarCompra->Controls->Add(this->pnlDescCONS);
			this->pnlConsultarCompra->Controls->Add(this->pnlPreusCONS);
			this->pnlConsultarCompra->Controls->Add(this->pnlNomEsdevTitleCONS);
			this->pnlConsultarCompra->Controls->Add(this->btnComprarCONS);
			this->pnlConsultarCompra->Controls->Add(this->btnGoBackCONS);
			this->pnlConsultarCompra->Location = System::Drawing::Point(91, 12);
			this->pnlConsultarCompra->Name = L"pnlConsultarCompra";
			this->pnlConsultarCompra->Size = System::Drawing::Size(867, 670);
			this->pnlConsultarCompra->TabIndex = 5;
			// 
			// picBoxEsdevCONS
			// 
			this->picBoxEsdevCONS->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxEsdevCONS.Image")));
			this->picBoxEsdevCONS->Location = System::Drawing::Point(21, 64);
			this->picBoxEsdevCONS->Margin = System::Windows::Forms::Padding(4);
			this->picBoxEsdevCONS->Name = L"picBoxEsdevCONS";
			this->picBoxEsdevCONS->Size = System::Drawing::Size(262, 305);
			this->picBoxEsdevCONS->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxEsdevCONS->TabIndex = 4;
			this->picBoxEsdevCONS->TabStop = false;
			// 
			// panelCONS
			// 
			this->panelCONS->Controls->Add(this->pnl5CONS);
			this->panelCONS->Controls->Add(this->pnl6CONS);
			this->panelCONS->Controls->Add(this->pnl4CONS);
			this->panelCONS->Controls->Add(this->pnl3CONS);
			this->panelCONS->Controls->Add(this->pnl2CONS);
			this->panelCONS->Controls->Add(this->pnl1CONS);
			this->panelCONS->Location = System::Drawing::Point(297, 64);
			this->panelCONS->Name = L"panelCONS";
			this->panelCONS->Size = System::Drawing::Size(548, 260);
			this->panelCONS->TabIndex = 5;
			// 
			// pnl5CONS
			// 
			this->pnl5CONS->BackColor = System::Drawing::Color::Black;
			this->pnl5CONS->Controls->Add(this->lblPuntsRegCONSen);
			this->pnl5CONS->Controls->Add(this->pnl51CONS);
			this->pnl5CONS->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl5CONS->Location = System::Drawing::Point(0, 210);
			this->pnl5CONS->Name = L"pnl5CONS";
			this->pnl5CONS->Size = System::Drawing::Size(548, 42);
			this->pnl5CONS->TabIndex = 8;
			// 
			// lblPuntsRegCONSen
			// 
			this->lblPuntsRegCONSen->AutoSize = true;
			this->lblPuntsRegCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPuntsRegCONSen->ForeColor = System::Drawing::Color::White;
			this->lblPuntsRegCONSen->Location = System::Drawing::Point(3, 9);
			this->lblPuntsRegCONSen->Name = L"lblPuntsRegCONSen";
			this->lblPuntsRegCONSen->Size = System::Drawing::Size(211, 23);
			this->lblPuntsRegCONSen->TabIndex = 3;
			this->lblPuntsRegCONSen->Text = L"Punts Regal per la compra";
			// 
			// pnl51CONS
			// 
			this->pnl51CONS->BackColor = System::Drawing::Color::White;
			this->pnl51CONS->Controls->Add(this->lblPuntsRegCONS);
			this->pnl51CONS->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnl51CONS->Location = System::Drawing::Point(230, 0);
			this->pnl51CONS->Name = L"pnl51CONS";
			this->pnl51CONS->Size = System::Drawing::Size(318, 42);
			this->pnl51CONS->TabIndex = 0;
			// 
			// lblPuntsRegCONS
			// 
			this->lblPuntsRegCONS->AutoSize = true;
			this->lblPuntsRegCONS->BackColor = System::Drawing::Color::White;
			this->lblPuntsRegCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPuntsRegCONS->ForeColor = System::Drawing::Color::Black;
			this->lblPuntsRegCONS->Location = System::Drawing::Point(19, 7);
			this->lblPuntsRegCONS->Name = L"lblPuntsRegCONS";
			this->lblPuntsRegCONS->Size = System::Drawing::Size(220, 25);
			this->lblPuntsRegCONS->TabIndex = 2;
			this->lblPuntsRegCONS->Text = L"Punts Regal Esdeveniment";
			this->lblPuntsRegCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pnl6CONS
			// 
			this->pnl6CONS->BackColor = System::Drawing::Color::Black;
			this->pnl6CONS->Controls->Add(this->lblDataCONSen);
			this->pnl6CONS->Controls->Add(this->pnl61CONS);
			this->pnl6CONS->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl6CONS->Location = System::Drawing::Point(0, 168);
			this->pnl6CONS->Name = L"pnl6CONS";
			this->pnl6CONS->Size = System::Drawing::Size(548, 42);
			this->pnl6CONS->TabIndex = 7;
			// 
			// lblDataCONSen
			// 
			this->lblDataCONSen->AutoSize = true;
			this->lblDataCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDataCONSen->ForeColor = System::Drawing::Color::White;
			this->lblDataCONSen->Location = System::Drawing::Point(86, 10);
			this->lblDataCONSen->Name = L"lblDataCONSen";
			this->lblDataCONSen->Size = System::Drawing::Size(50, 23);
			this->lblDataCONSen->TabIndex = 3;
			this->lblDataCONSen->Text = L"Data:";
			// 
			// pnl61CONS
			// 
			this->pnl61CONS->BackColor = System::Drawing::Color::White;
			this->pnl61CONS->Controls->Add(this->lblDataCONS);
			this->pnl61CONS->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnl61CONS->Location = System::Drawing::Point(230, 0);
			this->pnl61CONS->Name = L"pnl61CONS";
			this->pnl61CONS->Size = System::Drawing::Size(318, 42);
			this->pnl61CONS->TabIndex = 0;
			// 
			// lblDataCONS
			// 
			this->lblDataCONS->AutoSize = true;
			this->lblDataCONS->BackColor = System::Drawing::Color::White;
			this->lblDataCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDataCONS->ForeColor = System::Drawing::Color::Black;
			this->lblDataCONS->Location = System::Drawing::Point(19, 8);
			this->lblDataCONS->Name = L"lblDataCONS";
			this->lblDataCONS->Size = System::Drawing::Size(164, 25);
			this->lblDataCONS->TabIndex = 2;
			this->lblDataCONS->Text = L"Data Esdeveniment";
			this->lblDataCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pnl4CONS
			// 
			this->pnl4CONS->BackColor = System::Drawing::Color::Black;
			this->pnl4CONS->Controls->Add(this->lblPreuPuntsCONSen);
			this->pnl4CONS->Controls->Add(this->pnl41CONS);
			this->pnl4CONS->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl4CONS->Location = System::Drawing::Point(0, 126);
			this->pnl4CONS->Name = L"pnl4CONS";
			this->pnl4CONS->Size = System::Drawing::Size(548, 42);
			this->pnl4CONS->TabIndex = 6;
			// 
			// lblPreuPuntsCONSen
			// 
			this->lblPreuPuntsCONSen->AutoSize = true;
			this->lblPreuPuntsCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPreuPuntsCONSen->ForeColor = System::Drawing::Color::White;
			this->lblPreuPuntsCONSen->Location = System::Drawing::Point(65, 9);
			this->lblPreuPuntsCONSen->Name = L"lblPreuPuntsCONSen";
			this->lblPreuPuntsCONSen->Size = System::Drawing::Size(97, 23);
			this->lblPreuPuntsCONSen->TabIndex = 3;
			this->lblPreuPuntsCONSen->Text = L"Preu Punts:";
			// 
			// pnl41CONS
			// 
			this->pnl41CONS->BackColor = System::Drawing::Color::White;
			this->pnl41CONS->Controls->Add(this->lblPreuPuntsCONS);
			this->pnl41CONS->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnl41CONS->Location = System::Drawing::Point(230, 0);
			this->pnl41CONS->Name = L"pnl41CONS";
			this->pnl41CONS->Size = System::Drawing::Size(318, 42);
			this->pnl41CONS->TabIndex = 0;
			// 
			// lblPreuPuntsCONS
			// 
			this->lblPreuPuntsCONS->AutoSize = true;
			this->lblPreuPuntsCONS->BackColor = System::Drawing::Color::White;
			this->lblPreuPuntsCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPreuPuntsCONS->ForeColor = System::Drawing::Color::Black;
			this->lblPreuPuntsCONS->Location = System::Drawing::Point(19, 7);
			this->lblPreuPuntsCONS->Name = L"lblPreuPuntsCONS";
			this->lblPreuPuntsCONS->Size = System::Drawing::Size(211, 25);
			this->lblPreuPuntsCONS->TabIndex = 2;
			this->lblPreuPuntsCONS->Text = L"Preu Punts Esdeveniment";
			this->lblPreuPuntsCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pnl3CONS
			// 
			this->pnl3CONS->BackColor = System::Drawing::Color::Black;
			this->pnl3CONS->Controls->Add(this->lblAforamCONSen);
			this->pnl3CONS->Controls->Add(this->pnl31CONS);
			this->pnl3CONS->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl3CONS->Location = System::Drawing::Point(0, 84);
			this->pnl3CONS->Name = L"pnl3CONS";
			this->pnl3CONS->Size = System::Drawing::Size(548, 42);
			this->pnl3CONS->TabIndex = 5;
			// 
			// lblAforamCONSen
			// 
			this->lblAforamCONSen->AutoSize = true;
			this->lblAforamCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAforamCONSen->ForeColor = System::Drawing::Color::White;
			this->lblAforamCONSen->Location = System::Drawing::Point(65, 10);
			this->lblAforamCONSen->Name = L"lblAforamCONSen";
			this->lblAforamCONSen->Size = System::Drawing::Size(95, 23);
			this->lblAforamCONSen->TabIndex = 3;
			this->lblAforamCONSen->Text = L"Aforament:";
			// 
			// pnl31CONS
			// 
			this->pnl31CONS->BackColor = System::Drawing::Color::White;
			this->pnl31CONS->Controls->Add(this->lblAforamCONS);
			this->pnl31CONS->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnl31CONS->Location = System::Drawing::Point(230, 0);
			this->pnl31CONS->Name = L"pnl31CONS";
			this->pnl31CONS->Size = System::Drawing::Size(318, 42);
			this->pnl31CONS->TabIndex = 0;
			// 
			// lblAforamCONS
			// 
			this->lblAforamCONS->AutoSize = true;
			this->lblAforamCONS->BackColor = System::Drawing::Color::White;
			this->lblAforamCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAforamCONS->ForeColor = System::Drawing::Color::Black;
			this->lblAforamCONS->Location = System::Drawing::Point(19, 8);
			this->lblAforamCONS->Name = L"lblAforamCONS";
			this->lblAforamCONS->Size = System::Drawing::Size(212, 25);
			this->lblAforamCONS->TabIndex = 2;
			this->lblAforamCONS->Text = L"Aforament Esdeveniment";
			this->lblAforamCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pnl2CONS
			// 
			this->pnl2CONS->BackColor = System::Drawing::Color::Black;
			this->pnl2CONS->Controls->Add(this->lblTipusCONSen);
			this->pnl2CONS->Controls->Add(this->pnl21CONS);
			this->pnl2CONS->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl2CONS->Location = System::Drawing::Point(0, 42);
			this->pnl2CONS->Name = L"pnl2CONS";
			this->pnl2CONS->Size = System::Drawing::Size(548, 42);
			this->pnl2CONS->TabIndex = 4;
			// 
			// lblTipusCONSen
			// 
			this->lblTipusCONSen->AutoSize = true;
			this->lblTipusCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTipusCONSen->ForeColor = System::Drawing::Color::White;
			this->lblTipusCONSen->Location = System::Drawing::Point(82, 10);
			this->lblTipusCONSen->Name = L"lblTipusCONSen";
			this->lblTipusCONSen->Size = System::Drawing::Size(54, 23);
			this->lblTipusCONSen->TabIndex = 3;
			this->lblTipusCONSen->Text = L"Tipus:";
			// 
			// pnl21CONS
			// 
			this->pnl21CONS->BackColor = System::Drawing::Color::White;
			this->pnl21CONS->Controls->Add(this->lblTipusCONS);
			this->pnl21CONS->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnl21CONS->Location = System::Drawing::Point(230, 0);
			this->pnl21CONS->Name = L"pnl21CONS";
			this->pnl21CONS->Size = System::Drawing::Size(318, 42);
			this->pnl21CONS->TabIndex = 0;
			// 
			// lblTipusCONS
			// 
			this->lblTipusCONS->AutoSize = true;
			this->lblTipusCONS->BackColor = System::Drawing::Color::White;
			this->lblTipusCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTipusCONS->ForeColor = System::Drawing::Color::Black;
			this->lblTipusCONS->Location = System::Drawing::Point(19, 8);
			this->lblTipusCONS->Name = L"lblTipusCONS";
			this->lblTipusCONS->Size = System::Drawing::Size(169, 25);
			this->lblTipusCONS->TabIndex = 2;
			this->lblTipusCONS->Text = L"Tipus Esdeveniment";
			this->lblTipusCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pnl1CONS
			// 
			this->pnl1CONS->BackColor = System::Drawing::Color::Black;
			this->pnl1CONS->Controls->Add(this->lblAjuntEsdevCONSen);
			this->pnl1CONS->Controls->Add(this->pnl11CONS);
			this->pnl1CONS->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl1CONS->Location = System::Drawing::Point(0, 0);
			this->pnl1CONS->Name = L"pnl1CONS";
			this->pnl1CONS->Size = System::Drawing::Size(548, 42);
			this->pnl1CONS->TabIndex = 2;
			// 
			// lblAjuntEsdevCONSen
			// 
			this->lblAjuntEsdevCONSen->AutoSize = true;
			this->lblAjuntEsdevCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAjuntEsdevCONSen->ForeColor = System::Drawing::Color::White;
			this->lblAjuntEsdevCONSen->Location = System::Drawing::Point(16, 9);
			this->lblAjuntEsdevCONSen->Name = L"lblAjuntEsdevCONSen";
			this->lblAjuntEsdevCONSen->Size = System::Drawing::Size(188, 23);
			this->lblAjuntEsdevCONSen->TabIndex = 3;
			this->lblAjuntEsdevCONSen->Text = L"Ajuntament Relacionat:";
			// 
			// pnl11CONS
			// 
			this->pnl11CONS->BackColor = System::Drawing::Color::White;
			this->pnl11CONS->Controls->Add(this->lblAjuntEsdevCONS);
			this->pnl11CONS->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnl11CONS->Location = System::Drawing::Point(230, 0);
			this->pnl11CONS->Name = L"pnl11CONS";
			this->pnl11CONS->Size = System::Drawing::Size(318, 42);
			this->pnl11CONS->TabIndex = 0;
			// 
			// lblAjuntEsdevCONS
			// 
			this->lblAjuntEsdevCONS->AutoSize = true;
			this->lblAjuntEsdevCONS->BackColor = System::Drawing::Color::White;
			this->lblAjuntEsdevCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAjuntEsdevCONS->ForeColor = System::Drawing::Color::Black;
			this->lblAjuntEsdevCONS->Location = System::Drawing::Point(19, 9);
			this->lblAjuntEsdevCONS->Name = L"lblAjuntEsdevCONS";
			this->lblAjuntEsdevCONS->Size = System::Drawing::Size(219, 25);
			this->lblAjuntEsdevCONS->TabIndex = 2;
			this->lblAjuntEsdevCONS->Text = L"Ajuntament Esdeveniment";
			this->lblAjuntEsdevCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pnlFlowTipusCapsesCONSex
			// 
			this->pnlFlowTipusCapsesCONSex->BackColor = System::Drawing::Color::White;
			this->pnlFlowTipusCapsesCONSex->Controls->Add(this->btnFiltreGalaCONSex);
			this->pnlFlowTipusCapsesCONSex->Controls->Add(this->btnFiltreDeportivoCONSex);
			this->pnlFlowTipusCapsesCONSex->Location = System::Drawing::Point(289, 377);
			this->pnlFlowTipusCapsesCONSex->Name = L"pnlFlowTipusCapsesCONSex";
			this->pnlFlowTipusCapsesCONSex->Size = System::Drawing::Size(556, 49);
			this->pnlFlowTipusCapsesCONSex->TabIndex = 9;
			// 
			// btnFiltreGalaCONSex
			// 
			this->btnFiltreGalaCONSex->BackColor = System::Drawing::Color::Crimson;
			this->btnFiltreGalaCONSex->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnFiltreGalaCONSex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFiltreGalaCONSex->ForeColor = System::Drawing::Color::White;
			this->btnFiltreGalaCONSex->Location = System::Drawing::Point(116, 10);
			this->btnFiltreGalaCONSex->Margin = System::Windows::Forms::Padding(4);
			this->btnFiltreGalaCONSex->Name = L"btnFiltreGalaCONSex";
			this->btnFiltreGalaCONSex->Size = System::Drawing::Size(100, 28);
			this->btnFiltreGalaCONSex->TabIndex = 11;
			this->btnFiltreGalaCONSex->Text = L"Gala";
			this->btnFiltreGalaCONSex->UseVisualStyleBackColor = false;
			// 
			// btnFiltreDeportivoCONSex
			// 
			this->btnFiltreDeportivoCONSex->BackColor = System::Drawing::Color::Crimson;
			this->btnFiltreDeportivoCONSex->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnFiltreDeportivoCONSex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFiltreDeportivoCONSex->ForeColor = System::Drawing::Color::White;
			this->btnFiltreDeportivoCONSex->Location = System::Drawing::Point(8, 10);
			this->btnFiltreDeportivoCONSex->Margin = System::Windows::Forms::Padding(4);
			this->btnFiltreDeportivoCONSex->Name = L"btnFiltreDeportivoCONSex";
			this->btnFiltreDeportivoCONSex->Size = System::Drawing::Size(100, 28);
			this->btnFiltreDeportivoCONSex->TabIndex = 10;
			this->btnFiltreDeportivoCONSex->Text = L"Deportivo";
			this->btnFiltreDeportivoCONSex->UseVisualStyleBackColor = false;
			// 
			// pnlDescCONS
			// 
			this->pnlDescCONS->BackColor = System::Drawing::Color::White;
			this->pnlDescCONS->Controls->Add(this->lblDescEsdevCONS);
			this->pnlDescCONS->Controls->Add(this->pnlDescTitleCONS);
			this->pnlDescCONS->Location = System::Drawing::Point(21, 432);
			this->pnlDescCONS->Name = L"pnlDescCONS";
			this->pnlDescCONS->Size = System::Drawing::Size(824, 169);
			this->pnlDescCONS->TabIndex = 6;
			// 
			// lblDescEsdevCONS
			// 
			this->lblDescEsdevCONS->Location = System::Drawing::Point(18, 56);
			this->lblDescEsdevCONS->Name = L"lblDescEsdevCONS";
			this->lblDescEsdevCONS->Size = System::Drawing::Size(751, 100);
			this->lblDescEsdevCONS->TabIndex = 1;
			this->lblDescEsdevCONS->Text = resources->GetString(L"lblDescEsdevCONS.Text");
			// 
			// pnlDescTitleCONS
			// 
			this->pnlDescTitleCONS->BackColor = System::Drawing::Color::Black;
			this->pnlDescTitleCONS->Controls->Add(this->lblDescCONSen);
			this->pnlDescTitleCONS->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlDescTitleCONS->Location = System::Drawing::Point(0, 0);
			this->pnlDescTitleCONS->Name = L"pnlDescTitleCONS";
			this->pnlDescTitleCONS->Size = System::Drawing::Size(824, 42);
			this->pnlDescTitleCONS->TabIndex = 0;
			// 
			// lblDescCONSen
			// 
			this->lblDescCONSen->AutoSize = true;
			this->lblDescCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDescCONSen->ForeColor = System::Drawing::Color::White;
			this->lblDescCONSen->Location = System::Drawing::Point(17, 10);
			this->lblDescCONSen->Name = L"lblDescCONSen";
			this->lblDescCONSen->Size = System::Drawing::Size(88, 23);
			this->lblDescCONSen->TabIndex = 4;
			this->lblDescCONSen->Text = L"Descripció";
			// 
			// pnlPreusCONS
			// 
			this->pnlPreusCONS->BackColor = System::Drawing::Color::White;
			this->pnlPreusCONS->Controls->Add(this->lblPreuEsdevCONSgran);
			this->pnlPreusCONS->Location = System::Drawing::Point(21, 377);
			this->pnlPreusCONS->Name = L"pnlPreusCONS";
			this->pnlPreusCONS->Size = System::Drawing::Size(262, 49);
			this->pnlPreusCONS->TabIndex = 8;
			// 
			// lblPreuEsdevCONSgran
			// 
			this->lblPreuEsdevCONSgran->AutoSize = true;
			this->lblPreuEsdevCONSgran->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPreuEsdevCONSgran->Location = System::Drawing::Point(15, 10);
			this->lblPreuEsdevCONSgran->Name = L"lblPreuEsdevCONSgran";
			this->lblPreuEsdevCONSgran->Size = System::Drawing::Size(90, 31);
			this->lblPreuEsdevCONSgran->TabIndex = 0;
			this->lblPreuEsdevCONSgran->Text = L"0,00 € |";
			// 
			// pnlNomEsdevTitleCONS
			// 
			this->pnlNomEsdevTitleCONS->BackColor = System::Drawing::Color::Black;
			this->pnlNomEsdevTitleCONS->Controls->Add(this->lblNomEsdevCONS);
			this->pnlNomEsdevTitleCONS->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlNomEsdevTitleCONS->Location = System::Drawing::Point(0, 0);
			this->pnlNomEsdevTitleCONS->Name = L"pnlNomEsdevTitleCONS";
			this->pnlNomEsdevTitleCONS->Size = System::Drawing::Size(867, 48);
			this->pnlNomEsdevTitleCONS->TabIndex = 7;
			// 
			// lblNomEsdevCONS
			// 
			this->lblNomEsdevCONS->AutoSize = true;
			this->lblNomEsdevCONS->BackColor = System::Drawing::Color::Black;
			this->lblNomEsdevCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomEsdevCONS->ForeColor = System::Drawing::Color::White;
			this->lblNomEsdevCONS->Location = System::Drawing::Point(15, 9);
			this->lblNomEsdevCONS->Name = L"lblNomEsdevCONS";
			this->lblNomEsdevCONS->Size = System::Drawing::Size(216, 31);
			this->lblNomEsdevCONS->TabIndex = 0;
			this->lblNomEsdevCONS->Text = L"Nom Esdeveniment";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// ComprarEsdevenimentUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1269, 716);
			this->Controls->Add(this->pnlConsultarCompra);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ComprarEsdevenimentUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ComprarEsdevenimentUI";
			this->Load += gcnew System::EventHandler(this, &ComprarEsdevenimentUI::ComprarEsdevenimentUI_Load);
			this->pnlConsultarCompra->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEsdevCONS))->EndInit();
			this->panelCONS->ResumeLayout(false);
			this->pnl5CONS->ResumeLayout(false);
			this->pnl5CONS->PerformLayout();
			this->pnl51CONS->ResumeLayout(false);
			this->pnl51CONS->PerformLayout();
			this->pnl6CONS->ResumeLayout(false);
			this->pnl6CONS->PerformLayout();
			this->pnl61CONS->ResumeLayout(false);
			this->pnl61CONS->PerformLayout();
			this->pnl4CONS->ResumeLayout(false);
			this->pnl4CONS->PerformLayout();
			this->pnl41CONS->ResumeLayout(false);
			this->pnl41CONS->PerformLayout();
			this->pnl3CONS->ResumeLayout(false);
			this->pnl3CONS->PerformLayout();
			this->pnl31CONS->ResumeLayout(false);
			this->pnl31CONS->PerformLayout();
			this->pnl2CONS->ResumeLayout(false);
			this->pnl2CONS->PerformLayout();
			this->pnl21CONS->ResumeLayout(false);
			this->pnl21CONS->PerformLayout();
			this->pnl1CONS->ResumeLayout(false);
			this->pnl1CONS->PerformLayout();
			this->pnl11CONS->ResumeLayout(false);
			this->pnl11CONS->PerformLayout();
			this->pnlFlowTipusCapsesCONSex->ResumeLayout(false);
			this->pnlDescCONS->ResumeLayout(false);
			this->pnlDescTitleCONS->ResumeLayout(false);
			this->pnlDescTitleCONS->PerformLayout();
			this->pnlPreusCONS->ResumeLayout(false);
			this->pnlPreusCONS->PerformLayout();
			this->pnlNomEsdevTitleCONS->ResumeLayout(false);
			this->pnlNomEsdevTitleCONS->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void ComprarEsdevenimentUI_Load(System::Object^ sender, System::EventArgs^ e) {

		String^ nomEsdev = "MessiExperience";

		TxConsultaEsdeveniment^ txConsEsdev = gcnew TxConsultaEsdeveniment(nomEsdev);
		txConsEsdev->executar();

		String^ idEnt = txConsEsdev->getResult()[0];
		String^ preu = txConsEsdev->getResult()[1];
		String^ ajunt = txConsEsdev->getResult()[2];
		String^ desc = txConsEsdev->getResult()[3];
		String^ nom = txConsEsdev->getResult()[4];
		String^ tipus = txConsEsdev->getResult()[5];
		String^ aforament = txConsEsdev->getResult()[6];
		String^ puntsCost = txConsEsdev->getResult()[7];
		String^ data = txConsEsdev->getResult()[8];
		String^ puntsDesc = txConsEsdev->getResult()[9];

		this->lblPreuEsdevCONSgran->Text = preu + " € ";
		this->lblAjuntEsdevCONS->Text = ajunt;
		this->lblDescEsdevCONS->Text = desc;
		this->lblNomEsdevCONS->Text = nom;
		this->lblTipusCONS->Text = tipus;
		this->lblAforamCONS->Text = aforament;
		this->lblPreuPuntsCONS->Text = puntsCost;
		this->lblDataCONS->Text = data;
		this->lblPuntsRegCONS->Text = puntsDesc;

	}

private: System::Void btnGoBackCONS_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnComprarCONS_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
