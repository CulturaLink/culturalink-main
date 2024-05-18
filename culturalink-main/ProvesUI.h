#pragma once

//Forms:
#include "ConsultarUsuariUI.h"
#include "ComprarEsdevenimentUI.h"

//Passareles:
#include "PassarelaCiutada.h"
#include "PassarelaEntitat.h"
#include "PassarelaAjuntament.h"

// Transaccions:
#include "TxConsultaEsdeveniment.h"
#include "TxConsultaTotsEsdeveniments.h"
#include "TxConsultaEsdevenimentsAmbTipus.h"
#include "TxConsultaTotsEsdevenimentsPerEntitat.h"

// Altres:
#include "Esdeveniment.h"
#include "UsuariIniciat.h"

// Custom Tools
// #include "CustomButtonEsdeveniment.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProvesUI
	/// </summary>
	public ref class ProvesUI : public System::Windows::Forms::Form
	{
	public:
		ProvesUI(void)
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
		~ProvesUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTopBar;
	private: System::Windows::Forms::Panel^ pnlTopBarMinMaxClose;
	private: bool isNavBarExpanded = true;
	protected:

	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Button^ btnMaximize;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Panel^ pnlTopBarAppInfo;

	private: System::Windows::Forms::PictureBox^ AppIcon;
	private: System::Windows::Forms::Panel^ panelNavBar;

	private: System::Windows::Forms::Panel^ panelUserInfo;
	private: System::Windows::Forms::PictureBox^ picBoxUserPic;


	private: System::Windows::Forms::Label^ lblFullNameUser;
	private: System::Windows::Forms::Label^ lblUsername;
	private: System::Windows::Forms::Label^ lblTypeUser;
	private: System::Windows::Forms::Label^ lblNameApp;


	private: System::Windows::Forms::Panel^ pnlMainTop;

	private: System::Windows::Forms::Label^ lblTitlePage;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ pnlMain;
	private: System::Windows::Forms::Panel^ pnlInfoUsu;

	private: System::Windows::Forms::Button^ btnViewNavBar;
	private: System::Windows::Forms::Button^ btnFiltrGala;


	private: System::Windows::Forms::Button^ btnFiltreDeportivo;
	private: System::Windows::Forms::Panel^ pnlEsdevPauta;

	private: System::Windows::Forms::Label^ lblNameEsdev;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ pnlModEsdev;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Panel^ pnlMainModEsdv;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnSearch;

	private: System::Windows::Forms::Panel^ PANELPROVA;
	private: System::Windows::Forms::Label^ lblConsultEsdevEntit;
	private: System::Windows::Forms::Label^ lblConsultEsdevDesc;
	private: System::Windows::Forms::Label^ lblEsdevConsultPreu;
	private: System::Windows::Forms::Label^ lblEsdevConsultNom;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ lblConsultEsdevTipus;
	private: System::Windows::Forms::Label^ lblConsultEsdevPreuDesc;
	private: System::Windows::Forms::Label^ lblConsultEsdevData;
	private: System::Windows::Forms::Label^ lblConsultEsdevPuntsCost;
	private: System::Windows::Forms::Label^ lblConsultEsdevAfor;
	private: System::Windows::Forms::Label^ lblConsultEsdevAjunt;
	private: System::Windows::Forms::Button^ btnConsEsdevGoBack;
	private: System::Windows::Forms::Button^ btnConsEsdevComprar;
	private: System::Windows::Forms::Panel^ panel9;

	protected:

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
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProvesUI::typeid));
		this->pnlTopBar = (gcnew System::Windows::Forms::Panel());
		this->panel5 = (gcnew System::Windows::Forms::Panel());
		this->panel4 = (gcnew System::Windows::Forms::Panel());
		this->pnlTopBarAppInfo = (gcnew System::Windows::Forms::Panel());
		this->lblNameApp = (gcnew System::Windows::Forms::Label());
		this->AppIcon = (gcnew System::Windows::Forms::PictureBox());
		this->pnlTopBarMinMaxClose = (gcnew System::Windows::Forms::Panel());
		this->btnMinimize = (gcnew System::Windows::Forms::Button());
		this->btnMaximize = (gcnew System::Windows::Forms::Button());
		this->btnClose = (gcnew System::Windows::Forms::Button());
		this->panelNavBar = (gcnew System::Windows::Forms::Panel());
		this->pnlModEsdev = (gcnew System::Windows::Forms::Panel());
		this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
		this->button7 = (gcnew System::Windows::Forms::Button());
		this->panel7 = (gcnew System::Windows::Forms::Panel());
		this->button5 = (gcnew System::Windows::Forms::Button());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
		this->panel6 = (gcnew System::Windows::Forms::Panel());
		this->button4 = (gcnew System::Windows::Forms::Button());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
		this->panel3 = (gcnew System::Windows::Forms::Panel());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->panelUserInfo = (gcnew System::Windows::Forms::Panel());
		this->lblTypeUser = (gcnew System::Windows::Forms::Label());
		this->panel9 = (gcnew System::Windows::Forms::Panel());
		this->lblFullNameUser = (gcnew System::Windows::Forms::Label());
		this->lblUsername = (gcnew System::Windows::Forms::Label());
		this->picBoxUserPic = (gcnew System::Windows::Forms::PictureBox());
		this->pnlMainTop = (gcnew System::Windows::Forms::Panel());
		this->btnSearch = (gcnew System::Windows::Forms::Button());
		this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->btnFiltrGala = (gcnew System::Windows::Forms::Button());
		this->btnFiltreDeportivo = (gcnew System::Windows::Forms::Button());
		this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->lblTitlePage = (gcnew System::Windows::Forms::Label());
		this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->pnlEsdevPauta = (gcnew System::Windows::Forms::Panel());
		this->button6 = (gcnew System::Windows::Forms::Button());
		this->lblNameEsdev = (gcnew System::Windows::Forms::Label());
		this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
		this->pnlMain = (gcnew System::Windows::Forms::Panel());
		this->PANELPROVA = (gcnew System::Windows::Forms::Panel());
		this->btnConsEsdevComprar = (gcnew System::Windows::Forms::Button());
		this->btnConsEsdevGoBack = (gcnew System::Windows::Forms::Button());
		this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->lblEsdevConsultNom = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevTipus = (gcnew System::Windows::Forms::Label());
		this->lblEsdevConsultPreu = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevPreuDesc = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevDesc = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevData = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevEntit = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevPuntsCost = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevAjunt = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevAfor = (gcnew System::Windows::Forms::Label());
		this->pnlInfoUsu = (gcnew System::Windows::Forms::Panel());
		this->panel8 = (gcnew System::Windows::Forms::Panel());
		this->button8 = (gcnew System::Windows::Forms::Button());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
		this->pnlMainModEsdv = (gcnew System::Windows::Forms::Panel());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->btnViewNavBar = (gcnew System::Windows::Forms::Button());
		this->pnlTopBar->SuspendLayout();
		this->pnlTopBarAppInfo->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppIcon))->BeginInit();
		this->pnlTopBarMinMaxClose->SuspendLayout();
		this->panelNavBar->SuspendLayout();
		this->pnlModEsdev->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
		this->panel7->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
		this->panel6->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
		this->panel3->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
		this->panel2->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
		this->panel1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		this->panelUserInfo->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUserPic))->BeginInit();
		this->pnlMainTop->SuspendLayout();
		this->flowLayoutPanel2->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
		this->flowLayoutPanel1->SuspendLayout();
		this->pnlEsdevPauta->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
		this->pnlMain->SuspendLayout();
		this->PANELPROVA->SuspendLayout();
		this->tableLayoutPanel1->SuspendLayout();
		this->panel8->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
		this->pnlMainModEsdv->SuspendLayout();
		this->SuspendLayout();
		// 
		// pnlTopBar
		// 
		this->pnlTopBar->BackColor = System::Drawing::Color::Black;
		this->pnlTopBar->Controls->Add(this->panel5);
		this->pnlTopBar->Controls->Add(this->panel4);
		this->pnlTopBar->Controls->Add(this->pnlTopBarAppInfo);
		this->pnlTopBar->Controls->Add(this->pnlTopBarMinMaxClose);
		this->pnlTopBar->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnlTopBar->Location = System::Drawing::Point(0, 0);
		this->pnlTopBar->Margin = System::Windows::Forms::Padding(0);
		this->pnlTopBar->Name = L"pnlTopBar";
		this->pnlTopBar->Size = System::Drawing::Size(1779, 37);
		this->pnlTopBar->TabIndex = 0;
		// 
		// panel5
		// 
		this->panel5->BackColor = System::Drawing::Color::Silver;
		this->panel5->Location = System::Drawing::Point(461, 16);
		this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel5->Name = L"panel5";
		this->panel5->Size = System::Drawing::Size(181, 34);
		this->panel5->TabIndex = 5;
		this->panel5->Visible = false;
		// 
		// panel4
		// 
		this->panel4->BackColor = System::Drawing::Color::White;
		this->panel4->Location = System::Drawing::Point(276, 16);
		this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel4->Name = L"panel4";
		this->panel4->Size = System::Drawing::Size(181, 30);
		this->panel4->TabIndex = 4;
		this->panel4->Visible = false;
		// 
		// pnlTopBarAppInfo
		// 
		this->pnlTopBarAppInfo->Controls->Add(this->lblNameApp);
		this->pnlTopBarAppInfo->Controls->Add(this->AppIcon);
		this->pnlTopBarAppInfo->Location = System::Drawing::Point(0, 0);
		this->pnlTopBarAppInfo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->pnlTopBarAppInfo->Name = L"pnlTopBarAppInfo";
		this->pnlTopBarAppInfo->Size = System::Drawing::Size(276, 37);
		this->pnlTopBarAppInfo->TabIndex = 1;
		// 
		// lblNameApp
		// 
		this->lblNameApp->AutoSize = true;
		this->lblNameApp->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblNameApp->ForeColor = System::Drawing::Color::Silver;
		this->lblNameApp->Location = System::Drawing::Point(33, 9);
		this->lblNameApp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblNameApp->Name = L"lblNameApp";
		this->lblNameApp->Size = System::Drawing::Size(82, 20);
		this->lblNameApp->TabIndex = 1;
		this->lblNameApp->Text = L"CulturaLink";
		// 
		// AppIcon
		// 
		this->AppIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppIcon.Image")));
		this->AppIcon->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppIcon.InitialImage")));
		this->AppIcon->Location = System::Drawing::Point(7, 6);
		this->AppIcon->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->AppIcon->Name = L"AppIcon";
		this->AppIcon->Size = System::Drawing::Size(47, 37);
		this->AppIcon->TabIndex = 0;
		this->AppIcon->TabStop = false;
		// 
		// pnlTopBarMinMaxClose
		// 
		this->pnlTopBarMinMaxClose->Controls->Add(this->btnMinimize);
		this->pnlTopBarMinMaxClose->Controls->Add(this->btnMaximize);
		this->pnlTopBarMinMaxClose->Controls->Add(this->btnClose);
		this->pnlTopBarMinMaxClose->Dock = System::Windows::Forms::DockStyle::Right;
		this->pnlTopBarMinMaxClose->Location = System::Drawing::Point(1512, 0);
		this->pnlTopBarMinMaxClose->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->pnlTopBarMinMaxClose->Name = L"pnlTopBarMinMaxClose";
		this->pnlTopBarMinMaxClose->Size = System::Drawing::Size(267, 37);
		this->pnlTopBarMinMaxClose->TabIndex = 0;
		// 
		// btnMinimize
		// 
		this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnMinimize->Dock = System::Windows::Forms::DockStyle::Right;
		this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnMinimize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
		this->btnMinimize->Location = System::Drawing::Point(126, 0);
		this->btnMinimize->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->btnMinimize->Name = L"btnMinimize";
		this->btnMinimize->Size = System::Drawing::Size(47, 37);
		this->btnMinimize->TabIndex = 2;
		this->btnMinimize->UseVisualStyleBackColor = false;
		this->btnMinimize->Click += gcnew System::EventHandler(this, &ProvesUI::btnMinimize_Click);
		this->btnMinimize->MouseLeave += gcnew System::EventHandler(this, &ProvesUI::btnMinimize_MouseLeave);
		this->btnMinimize->MouseHover += gcnew System::EventHandler(this, &ProvesUI::btnMinimize_MouseHover);
		// 
		// btnMaximize
		// 
		this->btnMaximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnMaximize->Dock = System::Windows::Forms::DockStyle::Right;
		this->btnMaximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnMaximize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnMaximize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaximize.Image")));
		this->btnMaximize->Location = System::Drawing::Point(173, 0);
		this->btnMaximize->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->btnMaximize->Name = L"btnMaximize";
		this->btnMaximize->Size = System::Drawing::Size(47, 37);
		this->btnMaximize->TabIndex = 1;
		this->btnMaximize->UseVisualStyleBackColor = false;
		this->btnMaximize->Click += gcnew System::EventHandler(this, &ProvesUI::btnMaximize_Click);
		this->btnMaximize->MouseLeave += gcnew System::EventHandler(this, &ProvesUI::btnMaximize_MouseLeave);
		this->btnMaximize->MouseHover += gcnew System::EventHandler(this, &ProvesUI::btnMaximize_MouseHover);
		// 
		// btnClose
		// 
		this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnClose->Dock = System::Windows::Forms::DockStyle::Right;
		this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
		this->btnClose->Location = System::Drawing::Point(220, 0);
		this->btnClose->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->btnClose->Name = L"btnClose";
		this->btnClose->Size = System::Drawing::Size(47, 37);
		this->btnClose->TabIndex = 0;
		this->btnClose->UseVisualStyleBackColor = false;
		this->btnClose->Click += gcnew System::EventHandler(this, &ProvesUI::btnClose_Click);
		this->btnClose->MouseLeave += gcnew System::EventHandler(this, &ProvesUI::bntClose_MouseLeave);
		this->btnClose->MouseHover += gcnew System::EventHandler(this, &ProvesUI::bntClose_MouseHover);
		// 
		// panelNavBar
		// 
		this->panelNavBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
			static_cast<System::Int32>(static_cast<System::Byte>(40)));
		this->panelNavBar->Controls->Add(this->pnlModEsdev);
		this->panelNavBar->Controls->Add(this->panel7);
		this->panelNavBar->Controls->Add(this->panel6);
		this->panelNavBar->Controls->Add(this->panel3);
		this->panelNavBar->Controls->Add(this->panel2);
		this->panelNavBar->Controls->Add(this->panel1);
		this->panelNavBar->Controls->Add(this->panelUserInfo);
		this->panelNavBar->Dock = System::Windows::Forms::DockStyle::Left;
		this->panelNavBar->Location = System::Drawing::Point(0, 37);
		this->panelNavBar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->panelNavBar->Name = L"panelNavBar";
		this->panelNavBar->Size = System::Drawing::Size(276, 768);
		this->panelNavBar->TabIndex = 1;
		// 
		// pnlModEsdev
		// 
		this->pnlModEsdev->Controls->Add(this->pictureBox8);
		this->pnlModEsdev->Controls->Add(this->button7);
		this->pnlModEsdev->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnlModEsdev->Location = System::Drawing::Point(0, 345);
		this->pnlModEsdev->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->pnlModEsdev->Name = L"pnlModEsdev";
		this->pnlModEsdev->Size = System::Drawing::Size(276, 52);
		this->pnlModEsdev->TabIndex = 6;
		this->pnlModEsdev->Visible = false;
		// 
		// pictureBox8
		// 
		this->pictureBox8->BackColor = System::Drawing::Color::Black;
		this->pictureBox8->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox8->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.ErrorImage")));
		this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
		this->pictureBox8->Location = System::Drawing::Point(0, 0);
		this->pictureBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox8->Name = L"pictureBox8";
		this->pictureBox8->Size = System::Drawing::Size(53, 52);
		this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox8->TabIndex = 1;
		this->pictureBox8->TabStop = false;
		this->pictureBox8->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox8_Click);
		// 
		// button7
		// 
		this->button7->BackColor = System::Drawing::Color::Black;
		this->button7->Dock = System::Windows::Forms::DockStyle::Right;
		this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button7->ForeColor = System::Drawing::Color::Transparent;
		this->button7->Location = System::Drawing::Point(53, 0);
		this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->button7->Name = L"button7";
		this->button7->Size = System::Drawing::Size(223, 52);
		this->button7->TabIndex = 0;
		this->button7->Text = L"Modif. Esdevs";
		this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button7->UseVisualStyleBackColor = false;
		this->button7->Click += gcnew System::EventHandler(this, &ProvesUI::button7_Click);
		// 
		// panel7
		// 
		this->panel7->BackColor = System::Drawing::Color::Black;
		this->panel7->Controls->Add(this->button5);
		this->panel7->Controls->Add(this->label5);
		this->panel7->Controls->Add(this->pictureBox5);
		this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->panel7->Location = System::Drawing::Point(0, 716);
		this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel7->Name = L"panel7";
		this->panel7->Size = System::Drawing::Size(276, 52);
		this->panel7->TabIndex = 5;
		// 
		// button5
		// 
		this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button5->ForeColor = System::Drawing::Color::DimGray;
		this->button5->Location = System::Drawing::Point(53, 0);
		this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->button5->Name = L"button5";
		this->button5->Size = System::Drawing::Size(223, 52);
		this->button5->TabIndex = 6;
		this->button5->Text = L"Log out";
		this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button5->UseVisualStyleBackColor = true;
		this->button5->Click += gcnew System::EventHandler(this, &ProvesUI::button5_Click);
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label5->ForeColor = System::Drawing::Color::White;
		this->label5->Location = System::Drawing::Point(60, 14);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(83, 28);
		this->label5->TabIndex = 1;
		this->label5->Text = L"Log Out";
		// 
		// pictureBox5
		// 
		this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
		this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
		this->pictureBox5->Location = System::Drawing::Point(0, 0);
		this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox5->Name = L"pictureBox5";
		this->pictureBox5->Size = System::Drawing::Size(53, 52);
		this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox5->TabIndex = 0;
		this->pictureBox5->TabStop = false;
		this->pictureBox5->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox5_Click);
		// 
		// panel6
		// 
		this->panel6->BackColor = System::Drawing::Color::Black;
		this->panel6->Controls->Add(this->button4);
		this->panel6->Controls->Add(this->label4);
		this->panel6->Controls->Add(this->pictureBox4);
		this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel6->Location = System::Drawing::Point(0, 293);
		this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel6->Name = L"panel6";
		this->panel6->Size = System::Drawing::Size(276, 52);
		this->panel6->TabIndex = 4;
		// 
		// button4
		// 
		this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button4->ForeColor = System::Drawing::Color::Transparent;
		this->button4->Location = System::Drawing::Point(53, 0);
		this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->button4->Name = L"button4";
		this->button4->Size = System::Drawing::Size(223, 52);
		this->button4->TabIndex = 5;
		this->button4->Text = L"Settings";
		this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button4->UseVisualStyleBackColor = true;
		this->button4->Click += gcnew System::EventHandler(this, &ProvesUI::button4_Click);
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label4->ForeColor = System::Drawing::Color::White;
		this->label4->Location = System::Drawing::Point(60, 14);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(83, 28);
		this->label4->TabIndex = 1;
		this->label4->Text = L"Settings";
		// 
		// pictureBox4
		// 
		this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox4->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.ErrorImage")));
		this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
		this->pictureBox4->Location = System::Drawing::Point(0, 0);
		this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox4->Name = L"pictureBox4";
		this->pictureBox4->Size = System::Drawing::Size(53, 52);
		this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox4->TabIndex = 0;
		this->pictureBox4->TabStop = false;
		this->pictureBox4->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox4_Click);
		// 
		// panel3
		// 
		this->panel3->BackColor = System::Drawing::Color::Black;
		this->panel3->Controls->Add(this->button3);
		this->panel3->Controls->Add(this->label3);
		this->panel3->Controls->Add(this->pictureBox3);
		this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel3->Location = System::Drawing::Point(0, 241);
		this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel3->Name = L"panel3";
		this->panel3->Size = System::Drawing::Size(276, 52);
		this->panel3->TabIndex = 3;
		// 
		// button3
		// 
		this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button3->ForeColor = System::Drawing::Color::DimGray;
		this->button3->Location = System::Drawing::Point(53, 0);
		this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(223, 52);
		this->button3->TabIndex = 4;
		this->button3->Text = L"Registar-se en Esdev.";
		this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Click += gcnew System::EventHandler(this, &ProvesUI::button3_Click);
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label3->ForeColor = System::Drawing::Color::White;
		this->label3->Location = System::Drawing::Point(60, 12);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(193, 28);
		this->label3->TabIndex = 1;
		this->label3->Text = L"Registar-se en Esdev.";
		// 
		// pictureBox3
		// 
		this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
		this->pictureBox3->Location = System::Drawing::Point(0, 0);
		this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox3->Name = L"pictureBox3";
		this->pictureBox3->Size = System::Drawing::Size(53, 52);
		this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox3->TabIndex = 0;
		this->pictureBox3->TabStop = false;
		this->pictureBox3->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox3_Click);
		// 
		// panel2
		// 
		this->panel2->BackColor = System::Drawing::Color::Black;
		this->panel2->Controls->Add(this->button2);
		this->panel2->Controls->Add(this->label2);
		this->panel2->Controls->Add(this->pictureBox2);
		this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel2->Location = System::Drawing::Point(0, 189);
		this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(276, 52);
		this->panel2->TabIndex = 2;
		// 
		// button2
		// 
		this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button2->ForeColor = System::Drawing::Color::DimGray;
		this->button2->Location = System::Drawing::Point(53, 0);
		this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(223, 52);
		this->button2->TabIndex = 3;
		this->button2->Text = L"Consultar Esdev.";
		this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &ProvesUI::button2_Click);
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label2->ForeColor = System::Drawing::Color::White;
		this->label2->Location = System::Drawing::Point(60, 12);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(153, 28);
		this->label2->TabIndex = 1;
		this->label2->Text = L"Consultar Esdev.";
		// 
		// pictureBox2
		// 
		this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
		this->pictureBox2->Location = System::Drawing::Point(0, 0);
		this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox2->Name = L"pictureBox2";
		this->pictureBox2->Size = System::Drawing::Size(53, 52);
		this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox2->TabIndex = 0;
		this->pictureBox2->TabStop = false;
		this->pictureBox2->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox2_Click);
		// 
		// panel1
		// 
		this->panel1->BackColor = System::Drawing::Color::Black;
		this->panel1->Controls->Add(this->button1);
		this->panel1->Controls->Add(this->label1);
		this->panel1->Controls->Add(this->pictureBox1);
		this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel1->Location = System::Drawing::Point(0, 137);
		this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(276, 52);
		this->panel1->TabIndex = 1;
		// 
		// button1
		// 
		this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->button1->ForeColor = System::Drawing::Color::DimGray;
		this->button1->Location = System::Drawing::Point(53, 0);
		this->button1->Margin = System::Windows::Forms::Padding(0, 2, 0, 2);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(223, 52);
		this->button1->TabIndex = 2;
		this->button1->Text = L"HomePage";
		this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &ProvesUI::button1_Click_1);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->ForeColor = System::Drawing::Color::White;
		this->label1->Location = System::Drawing::Point(53, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(65, 28);
		this->label1->TabIndex = 1;
		this->label1->Text = L"Home";
		// 
		// pictureBox1
		// 
		this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
		this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
		this->pictureBox1->Location = System::Drawing::Point(0, 0);
		this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(53, 52);
		this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox1->TabIndex = 0;
		this->pictureBox1->TabStop = false;
		this->pictureBox1->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox1_Click);
		// 
		// panelUserInfo
		// 
		this->panelUserInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
			static_cast<System::Int32>(static_cast<System::Byte>(40)));
		this->panelUserInfo->Controls->Add(this->lblTypeUser);
		this->panelUserInfo->Controls->Add(this->panel9);
		this->panelUserInfo->Controls->Add(this->lblFullNameUser);
		this->panelUserInfo->Controls->Add(this->lblUsername);
		this->panelUserInfo->Controls->Add(this->picBoxUserPic);
		this->panelUserInfo->Dock = System::Windows::Forms::DockStyle::Top;
		this->panelUserInfo->Location = System::Drawing::Point(0, 0);
		this->panelUserInfo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->panelUserInfo->Name = L"panelUserInfo";
		this->panelUserInfo->Size = System::Drawing::Size(276, 137);
		this->panelUserInfo->TabIndex = 0;
		// 
		// lblTypeUser
		// 
		this->lblTypeUser->AutoSize = true;
		this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->lblTypeUser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->lblTypeUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->lblTypeUser->Location = System::Drawing::Point(128, 76);
		this->lblTypeUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblTypeUser->Name = L"lblTypeUser";
		this->lblTypeUser->Size = System::Drawing::Size(66, 19);
		this->lblTypeUser->TabIndex = 3;
		this->lblTypeUser->Text = L"UserType";
		// 
		// panel9
		// 
		this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->panel9->Location = System::Drawing::Point(276, 137);
		this->panel9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->panel9->Name = L"panel9";
		this->panel9->Size = System::Drawing::Size(1033, 558);
		this->panel9->TabIndex = 3;
		// 
		// lblFullNameUser
		// 
		this->lblFullNameUser->AutoSize = true;
		this->lblFullNameUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblFullNameUser->ForeColor = System::Drawing::Color::White;
		this->lblFullNameUser->Location = System::Drawing::Point(120, 22);
		this->lblFullNameUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblFullNameUser->Name = L"lblFullNameUser";
		this->lblFullNameUser->Size = System::Drawing::Size(150, 28);
		this->lblFullNameUser->TabIndex = 2;
		this->lblFullNameUser->Text = L"User Full Name";
		// 
		// lblUsername
		// 
		this->lblUsername->AutoSize = true;
		this->lblUsername->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblUsername->ForeColor = System::Drawing::Color::Silver;
		this->lblUsername->Location = System::Drawing::Point(121, 47);
		this->lblUsername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblUsername->Name = L"lblUsername";
		this->lblUsername->Size = System::Drawing::Size(82, 19);
		this->lblUsername->TabIndex = 1;
		this->lblUsername->Text = L"@username";
		// 
		// picBoxUserPic
		// 
		this->picBoxUserPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxUserPic.Image")));
		this->picBoxUserPic->Location = System::Drawing::Point(13, 18);
		this->picBoxUserPic->Margin = System::Windows::Forms::Padding(0);
		this->picBoxUserPic->Name = L"picBoxUserPic";
		this->picBoxUserPic->Size = System::Drawing::Size(105, 100);
		this->picBoxUserPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->picBoxUserPic->TabIndex = 0;
		this->picBoxUserPic->TabStop = false;
		this->picBoxUserPic->Click += gcnew System::EventHandler(this, &ProvesUI::picBoxUserPic_Click);
		// 
		// pnlMainTop
		// 
		this->pnlMainTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
			static_cast<System::Int32>(static_cast<System::Byte>(23)));
		this->pnlMainTop->Controls->Add(this->btnSearch);
		this->pnlMainTop->Controls->Add(this->flowLayoutPanel2);
		this->pnlMainTop->Controls->Add(this->pictureBox7);
		this->pnlMainTop->Controls->Add(this->textBox1);
		this->pnlMainTop->Controls->Add(this->lblTitlePage);
		this->pnlMainTop->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnlMainTop->Location = System::Drawing::Point(276, 37);
		this->pnlMainTop->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->pnlMainTop->Name = L"pnlMainTop";
		this->pnlMainTop->Size = System::Drawing::Size(1503, 223);
		this->pnlMainTop->TabIndex = 3;
		// 
		// btnSearch
		// 
		this->btnSearch->Location = System::Drawing::Point(879, 64);
		this->btnSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->btnSearch->Name = L"btnSearch";
		this->btnSearch->Size = System::Drawing::Size(75, 23);
		this->btnSearch->TabIndex = 5;
		this->btnSearch->Text = L"Search";
		this->btnSearch->UseVisualStyleBackColor = true;
		this->btnSearch->Click += gcnew System::EventHandler(this, &ProvesUI::button9_Click);
		// 
		// flowLayoutPanel2
		// 
		this->flowLayoutPanel2->BackColor = System::Drawing::Color::White;
		this->flowLayoutPanel2->Controls->Add(this->btnFiltrGala);
		this->flowLayoutPanel2->Controls->Add(this->btnFiltreDeportivo);
		this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->flowLayoutPanel2->Location = System::Drawing::Point(0, 137);
		this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
		this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(29, 10, 0, 0);
		this->flowLayoutPanel2->Size = System::Drawing::Size(1503, 86);
		this->flowLayoutPanel2->TabIndex = 4;
		this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ProvesUI::flowLayoutPanel2_Paint);
		// 
		// btnFiltrGala
		// 
		this->btnFiltrGala->BackColor = System::Drawing::Color::Crimson;
		this->btnFiltrGala->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->btnFiltrGala->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnFiltrGala->ForeColor = System::Drawing::Color::White;
		this->btnFiltrGala->Location = System::Drawing::Point(33, 14);
		this->btnFiltrGala->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->btnFiltrGala->Name = L"btnFiltrGala";
		this->btnFiltrGala->Size = System::Drawing::Size(100, 28);
		this->btnFiltrGala->TabIndex = 0;
		this->btnFiltrGala->Text = L"Gala";
		this->btnFiltrGala->UseVisualStyleBackColor = false;
		this->btnFiltrGala->Click += gcnew System::EventHandler(this, &ProvesUI::btnFiltrGala_Click);
		// 
		// btnFiltreDeportivo
		// 
		this->btnFiltreDeportivo->BackColor = System::Drawing::Color::Crimson;
		this->btnFiltreDeportivo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->btnFiltreDeportivo->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnFiltreDeportivo->ForeColor = System::Drawing::Color::White;
		this->btnFiltreDeportivo->Location = System::Drawing::Point(141, 14);
		this->btnFiltreDeportivo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->btnFiltreDeportivo->Name = L"btnFiltreDeportivo";
		this->btnFiltreDeportivo->Size = System::Drawing::Size(100, 28);
		this->btnFiltreDeportivo->TabIndex = 1;
		this->btnFiltreDeportivo->Text = L"Deportivo";
		this->btnFiltreDeportivo->UseVisualStyleBackColor = false;
		this->btnFiltreDeportivo->Click += gcnew System::EventHandler(this, &ProvesUI::btnFiltreDeportivo_Click);
		// 
		// pictureBox7
		// 
		this->pictureBox7->BackColor = System::Drawing::Color::White;
		this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
		this->pictureBox7->Location = System::Drawing::Point(961, 66);
		this->pictureBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->pictureBox7->Name = L"pictureBox7";
		this->pictureBox7->Size = System::Drawing::Size(21, 20);
		this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox7->TabIndex = 2;
		this->pictureBox7->TabStop = false;
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(985, 65);
		this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(512, 22);
		this->textBox1->TabIndex = 1;
		// 
		// lblTitlePage
		// 
		this->lblTitlePage->AutoSize = true;
		this->lblTitlePage->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->lblTitlePage->Location = System::Drawing::Point(21, 48);
		this->lblTitlePage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblTitlePage->Name = L"lblTitlePage";
		this->lblTitlePage->Size = System::Drawing::Size(220, 50);
		this->lblTitlePage->TabIndex = 0;
		this->lblTitlePage->Text = L"HOMEPAGE";
		// 
		// flowLayoutPanel1
		// 
		this->flowLayoutPanel1->Controls->Add(this->pnlEsdevPauta);
		this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
		this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
		this->flowLayoutPanel1->Padding = System::Windows::Forms::Padding(29, 0, 0, 0);
		this->flowLayoutPanel1->Size = System::Drawing::Size(1503, 545);
		this->flowLayoutPanel1->TabIndex = 3;
		this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ProvesUI::flowLayoutPanel1_Paint);
		// 
		// pnlEsdevPauta
		// 
		this->pnlEsdevPauta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->pnlEsdevPauta->Controls->Add(this->button6);
		this->pnlEsdevPauta->Controls->Add(this->lblNameEsdev);
		this->pnlEsdevPauta->Controls->Add(this->pictureBox6);
		this->pnlEsdevPauta->Location = System::Drawing::Point(33, 4);
		this->pnlEsdevPauta->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->pnlEsdevPauta->Name = L"pnlEsdevPauta";
		this->pnlEsdevPauta->Size = System::Drawing::Size(219, 258);
		this->pnlEsdevPauta->TabIndex = 2;
		this->pnlEsdevPauta->Visible = false;
		// 
		// button6
		// 
		this->button6->Location = System::Drawing::Point(117, 224);
		this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->button6->Name = L"button6";
		this->button6->Size = System::Drawing::Size(100, 28);
		this->button6->TabIndex = 2;
		this->button6->Text = L"Comprar";
		this->button6->UseVisualStyleBackColor = true;
		// 
		// lblNameEsdev
		// 
		this->lblNameEsdev->AutoSize = true;
		this->lblNameEsdev->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->lblNameEsdev->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblNameEsdev->Location = System::Drawing::Point(0, 233);
		this->lblNameEsdev->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblNameEsdev->Name = L"lblNameEsdev";
		this->lblNameEsdev->Size = System::Drawing::Size(70, 23);
		this->lblNameEsdev->TabIndex = 1;
		this->lblNameEsdev->Text = L"( Nom )";
		this->lblNameEsdev->Click += gcnew System::EventHandler(this, &ProvesUI::label6_Click);
		// 
		// pictureBox6
		// 
		this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Top;
		this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
		this->pictureBox6->Location = System::Drawing::Point(0, 0);
		this->pictureBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->pictureBox6->Name = L"pictureBox6";
		this->pictureBox6->Size = System::Drawing::Size(217, 203);
		this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox6->TabIndex = 3;
		this->pictureBox6->TabStop = false;
		// 
		// pnlMain
		// 
		this->pnlMain->Controls->Add(this->flowLayoutPanel1);
		this->pnlMain->Dock = System::Windows::Forms::DockStyle::Fill;
		this->pnlMain->Location = System::Drawing::Point(276, 260);
		this->pnlMain->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pnlMain->Name = L"pnlMain";
		this->pnlMain->Size = System::Drawing::Size(1503, 545);
		this->pnlMain->TabIndex = 4;
		// 
		// PANELPROVA
		// 
		this->PANELPROVA->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->PANELPROVA->Controls->Add(this->btnConsEsdevComprar);
		this->PANELPROVA->Controls->Add(this->btnConsEsdevGoBack);
		this->PANELPROVA->Controls->Add(this->tableLayoutPanel1);
		this->PANELPROVA->Location = System::Drawing::Point(890, 2);
		this->PANELPROVA->Margin = System::Windows::Forms::Padding(2);
		this->PANELPROVA->Name = L"PANELPROVA";
		this->PANELPROVA->Size = System::Drawing::Size(237, 443);
		this->PANELPROVA->TabIndex = 3;
		this->PANELPROVA->Visible = false;
		// 
		// btnConsEsdevComprar
		// 
		this->btnConsEsdevComprar->Location = System::Drawing::Point(118, 224);
		this->btnConsEsdevComprar->Margin = System::Windows::Forms::Padding(2);
		this->btnConsEsdevComprar->Name = L"btnConsEsdevComprar";
		this->btnConsEsdevComprar->Size = System::Drawing::Size(56, 19);
		this->btnConsEsdevComprar->TabIndex = 12;
		this->btnConsEsdevComprar->Text = L"Comprar";
		this->btnConsEsdevComprar->UseVisualStyleBackColor = true;
		// 
		// btnConsEsdevGoBack
		// 
		this->btnConsEsdevGoBack->Location = System::Drawing::Point(24, 224);
		this->btnConsEsdevGoBack->Margin = System::Windows::Forms::Padding(2);
		this->btnConsEsdevGoBack->Name = L"btnConsEsdevGoBack";
		this->btnConsEsdevGoBack->Size = System::Drawing::Size(56, 19);
		this->btnConsEsdevGoBack->TabIndex = 11;
		this->btnConsEsdevGoBack->Text = L"Enrere";
		this->btnConsEsdevGoBack->UseVisualStyleBackColor = true;
		this->btnConsEsdevGoBack->Click += gcnew System::EventHandler(this, &ProvesUI::button10_Click);
		// 
		// tableLayoutPanel1
		// 
		this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
		this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetPartial;
		this->tableLayoutPanel1->ColumnCount = 2;
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			15.64417F)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			84.35583F)));
		this->tableLayoutPanel1->Controls->Add(this->lblEsdevConsultNom, 1, 0);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevTipus, 1, 9);
		this->tableLayoutPanel1->Controls->Add(this->lblEsdevConsultPreu, 1, 1);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevPreuDesc, 1, 8);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevDesc, 1, 2);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevData, 1, 7);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevEntit, 1, 3);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevPuntsCost, 1, 6);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevAjunt, 1, 4);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevAfor, 1, 5);
		this->tableLayoutPanel1->Location = System::Drawing::Point(24, 24);
		this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
		this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		this->tableLayoutPanel1->RowCount = 10;
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->Size = System::Drawing::Size(244, 195);
		this->tableLayoutPanel1->TabIndex = 10;
		// 
		// lblEsdevConsultNom
		// 
		this->lblEsdevConsultNom->AutoSize = true;
		this->lblEsdevConsultNom->Location = System::Drawing::Point(44, 3);
		this->lblEsdevConsultNom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblEsdevConsultNom->Name = L"lblEsdevConsultNom";
		this->lblEsdevConsultNom->Size = System::Drawing::Size(44, 16);
		this->lblEsdevConsultNom->TabIndex = 0;
		this->lblEsdevConsultNom->Text = L"(Nom)";
		// 
		// lblConsultEsdevTipus
		// 
		this->lblConsultEsdevTipus->AutoSize = true;
		this->lblConsultEsdevTipus->Location = System::Drawing::Point(44, 176);
		this->lblConsultEsdevTipus->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevTipus->Name = L"lblConsultEsdevTipus";
		this->lblConsultEsdevTipus->Size = System::Drawing::Size(49, 16);
		this->lblConsultEsdevTipus->TabIndex = 9;
		this->lblConsultEsdevTipus->Text = L"(Tipus)";
		// 
		// lblEsdevConsultPreu
		// 
		this->lblEsdevConsultPreu->AutoSize = true;
		this->lblEsdevConsultPreu->Location = System::Drawing::Point(44, 23);
		this->lblEsdevConsultPreu->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblEsdevConsultPreu->Name = L"lblEsdevConsultPreu";
		this->lblEsdevConsultPreu->Size = System::Drawing::Size(43, 16);
		this->lblEsdevConsultPreu->TabIndex = 1;
		this->lblEsdevConsultPreu->Text = L"(Preu)";
		// 
		// lblConsultEsdevPreuDesc
		// 
		this->lblConsultEsdevPreuDesc->AutoSize = true;
		this->lblConsultEsdevPreuDesc->Location = System::Drawing::Point(44, 157);
		this->lblConsultEsdevPreuDesc->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevPreuDesc->Name = L"lblConsultEsdevPreuDesc";
		this->lblConsultEsdevPreuDesc->Size = System::Drawing::Size(118, 16);
		this->lblConsultEsdevPreuDesc->TabIndex = 8;
		this->lblConsultEsdevPreuDesc->Text = L"(PuntsDescompte)";
		// 
		// lblConsultEsdevDesc
		// 
		this->lblConsultEsdevDesc->AutoSize = true;
		this->lblConsultEsdevDesc->Location = System::Drawing::Point(44, 43);
		this->lblConsultEsdevDesc->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevDesc->Name = L"lblConsultEsdevDesc";
		this->lblConsultEsdevDesc->Size = System::Drawing::Size(80, 16);
		this->lblConsultEsdevDesc->TabIndex = 2;
		this->lblConsultEsdevDesc->Text = L"(Descripció)";
		// 
		// lblConsultEsdevData
		// 
		this->lblConsultEsdevData->AutoSize = true;
		this->lblConsultEsdevData->Location = System::Drawing::Point(44, 138);
		this->lblConsultEsdevData->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevData->Name = L"lblConsultEsdevData";
		this->lblConsultEsdevData->Size = System::Drawing::Size(44, 16);
		this->lblConsultEsdevData->TabIndex = 7;
		this->lblConsultEsdevData->Text = L"(Data)";
		// 
		// lblConsultEsdevEntit
		// 
		this->lblConsultEsdevEntit->AutoSize = true;
		this->lblConsultEsdevEntit->Location = System::Drawing::Point(44, 62);
		this->lblConsultEsdevEntit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevEntit->Name = L"lblConsultEsdevEntit";
		this->lblConsultEsdevEntit->Size = System::Drawing::Size(51, 16);
		this->lblConsultEsdevEntit->TabIndex = 3;
		this->lblConsultEsdevEntit->Text = L"(Entitat)";
		// 
		// lblConsultEsdevPuntsCost
		// 
		this->lblConsultEsdevPuntsCost->AutoSize = true;
		this->lblConsultEsdevPuntsCost->Location = System::Drawing::Point(44, 119);
		this->lblConsultEsdevPuntsCost->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevPuntsCost->Name = L"lblConsultEsdevPuntsCost";
		this->lblConsultEsdevPuntsCost->Size = System::Drawing::Size(75, 16);
		this->lblConsultEsdevPuntsCost->TabIndex = 6;
		this->lblConsultEsdevPuntsCost->Text = L"(PuntsCost)";
		// 
		// lblConsultEsdevAjunt
		// 
		this->lblConsultEsdevAjunt->AutoSize = true;
		this->lblConsultEsdevAjunt->Location = System::Drawing::Point(44, 81);
		this->lblConsultEsdevAjunt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevAjunt->Name = L"lblConsultEsdevAjunt";
		this->lblConsultEsdevAjunt->Size = System::Drawing::Size(81, 16);
		this->lblConsultEsdevAjunt->TabIndex = 4;
		this->lblConsultEsdevAjunt->Text = L"(Ajuntament)";
		// 
		// lblConsultEsdevAfor
		// 
		this->lblConsultEsdevAfor->AutoSize = true;
		this->lblConsultEsdevAfor->Location = System::Drawing::Point(44, 100);
		this->lblConsultEsdevAfor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevAfor->Name = L"lblConsultEsdevAfor";
		this->lblConsultEsdevAfor->Size = System::Drawing::Size(76, 16);
		this->lblConsultEsdevAfor->TabIndex = 5;
		this->lblConsultEsdevAfor->Text = L"(Aforament)";
		// 
		// pnlInfoUsu
		// 
		this->pnlInfoUsu->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->pnlInfoUsu->Dock = System::Windows::Forms::DockStyle::Fill;
		this->pnlInfoUsu->Location = System::Drawing::Point(207, 211);
		this->pnlInfoUsu->Margin = System::Windows::Forms::Padding(2);
		this->pnlInfoUsu->Name = L"pnlInfoUsu";
		this->pnlInfoUsu->Size = System::Drawing::Size(1127, 443);
		this->pnlInfoUsu->TabIndex = 4;
		// 
		// panel8
		// 
		this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel8->Controls->Add(this->button8);
		this->panel8->Controls->Add(this->label6);
		this->panel8->Controls->Add(this->pictureBox9);
		this->panel8->Location = System::Drawing::Point(4, 4);
		this->panel8->Margin = System::Windows::Forms::Padding(4);
		this->panel8->Name = L"panel8";
		this->panel8->Size = System::Drawing::Size(219, 258);
		this->panel8->TabIndex = 2;
		this->panel8->Visible = false;
		// 
		// button8
		// 
		this->button8->Location = System::Drawing::Point(117, 224);
		this->button8->Margin = System::Windows::Forms::Padding(4);
		this->button8->Name = L"button8";
		this->button8->Size = System::Drawing::Size(100, 28);
		this->button8->TabIndex = 2;
		this->button8->Text = L"Comprar";
		this->button8->UseVisualStyleBackColor = true;
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label6->Location = System::Drawing::Point(0, 233);
		this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(70, 23);
		this->label6->TabIndex = 1;
		this->label6->Text = L"( Nom )";
		// 
		// pictureBox9
		// 
		this->pictureBox9->Dock = System::Windows::Forms::DockStyle::Top;
		this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
		this->pictureBox9->Location = System::Drawing::Point(0, 0);
		this->pictureBox9->Margin = System::Windows::Forms::Padding(4);
		this->pictureBox9->Name = L"pictureBox9";
		this->pictureBox9->Size = System::Drawing::Size(217, 203);
		this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox9->TabIndex = 3;
		this->pictureBox9->TabStop = false;
		// 
		// pnlMainModEsdv
		// 
		this->pnlMainModEsdv->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->pnlMainModEsdv->Controls->Add(this->label7);
		this->pnlMainModEsdv->Dock = System::Windows::Forms::DockStyle::Fill;
		this->pnlMainModEsdv->Location = System::Drawing::Point(0, 86);
		this->pnlMainModEsdv->Margin = System::Windows::Forms::Padding(4);
		this->pnlMainModEsdv->Name = L"pnlMainModEsdv";
		this->pnlMainModEsdv->Size = System::Drawing::Size(1503, 545);
		this->pnlMainModEsdv->TabIndex = 6;
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Location = System::Drawing::Point(49, 50);
		this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(44, 16);
		this->label7->TabIndex = 0;
		this->label7->Text = L"label7";
		// 
		// btnViewNavBar
		// 
		this->btnViewNavBar->BackColor = System::Drawing::Color::Black;
		this->btnViewNavBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnViewNavBar->ForeColor = System::Drawing::Color::Black;
		this->btnViewNavBar->Location = System::Drawing::Point(0, 0);
		this->btnViewNavBar->Margin = System::Windows::Forms::Padding(0);
		this->btnViewNavBar->Name = L"btnViewNavBar";
		this->btnViewNavBar->Size = System::Drawing::Size(17, 46);
		this->btnViewNavBar->TabIndex = 3;
		this->btnViewNavBar->UseVisualStyleBackColor = false;
		this->btnViewNavBar->Click += gcnew System::EventHandler(this, &ProvesUI::btnViewNavBar_Click);
		// 
		// ProvesUI
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->ClientSize = System::Drawing::Size(1779, 805);
		this->Controls->Add(this->btnViewNavBar);
		this->Controls->Add(this->pnlMain);
		this->Controls->Add(this->pnlMainTop);
		this->Controls->Add(this->panelNavBar);
		this->Controls->Add(this->pnlTopBar);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->Location = System::Drawing::Point(2, 0);
		this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->Name = L"ProvesUI";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"ProvesUI";
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		this->Load += gcnew System::EventHandler(this, &ProvesUI::ProvesUI_Load);
		this->pnlTopBar->ResumeLayout(false);
		this->pnlTopBarAppInfo->ResumeLayout(false);
		this->pnlTopBarAppInfo->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppIcon))->EndInit();
		this->pnlTopBarMinMaxClose->ResumeLayout(false);
		this->panelNavBar->ResumeLayout(false);
		this->pnlModEsdev->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
		this->panel7->ResumeLayout(false);
		this->panel7->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
		this->panel6->ResumeLayout(false);
		this->panel6->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
		this->panel3->ResumeLayout(false);
		this->panel3->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
		this->panel2->ResumeLayout(false);
		this->panel2->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
		this->panel1->ResumeLayout(false);
		this->panel1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		this->panelUserInfo->ResumeLayout(false);
		this->panelUserInfo->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUserPic))->EndInit();
		this->pnlMainTop->ResumeLayout(false);
		this->pnlMainTop->PerformLayout();
		this->flowLayoutPanel2->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
		this->flowLayoutPanel1->ResumeLayout(false);
		this->pnlEsdevPauta->ResumeLayout(false);
		this->pnlEsdevPauta->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
		this->pnlMain->ResumeLayout(false);
		this->PANELPROVA->ResumeLayout(false);
		this->tableLayoutPanel1->ResumeLayout(false);
		this->tableLayoutPanel1->PerformLayout();
		this->panel8->ResumeLayout(false);
		this->panel8->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
		this->pnlMainModEsdv->ResumeLayout(false);
		this->pnlMainModEsdv->PerformLayout();
		this->ResumeLayout(false);

	}
// ------------------------------------FI DECLARACIÓ OBJECTES UI-------------------------------------------------

#pragma endregion

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void btnMaximize_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->WindowState == System::Windows::Forms::FormWindowState::Maximized) {
			this->WindowState = System::Windows::Forms::FormWindowState::Normal;
			int centerX = Screen::PrimaryScreen->Bounds.Width / 2;
			int centerY = Screen::PrimaryScreen->Bounds.Height / 2;

			// Calculate the offset to position the form in the middle
			int offsetX = centerX - (this->Width / 2);
			int offsetY = centerY - (this->Height / 2);

			// Set the location of the form
			this->Location = System::Drawing::Point(offsetX, offsetY);
		}
		else {
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		}
	}
	private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}
	private: System::Void bntClose_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
	}
	private: System::Void bntClose_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
	}
	private: System::Void btnMaximize_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->btnMaximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
			static_cast<System::Int32>(static_cast<System::Byte>(70)));
	}
	private: System::Void btnMaximize_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnMaximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
	}
	private: System::Void btnMinimize_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
			static_cast<System::Int32>(static_cast<System::Byte>(62)));
	}
	private: System::Void btnMinimize_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
	}
	private: System::Void btnViewNavBar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int y = Screen::PrimaryScreen->Bounds.Height / 2;

		if (isNavBarExpanded) {
			panelNavBar->Size = System::Drawing::Size(40, 235);
			this->picBoxUserPic->Size = System::Drawing::Size(30, 30);
			this->btnViewNavBar->Location = System::Drawing::Point(43, y);
		}
		else {
			panelNavBar->Size = System::Drawing::Size(207, 235);
			this->picBoxUserPic->Size = System::Drawing::Size(79, 81);
			this->btnViewNavBar->Location = System::Drawing::Point(210, y);
		}
		isNavBarExpanded = !isNavBarExpanded;
	}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "HOMEPAGE";

	this->flowLayoutPanel1->Visible = true;
	this->flowLayoutPanel2->Visible = true;
	this->pnlMainTop->Size = System::Drawing::Size(1127, 181);

	this->pnlMain->Visible = true;
	this->pnlInfoUsu->Visible = false;

	//this->pnlMain->Visible = true;
	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaTotsEsdeveniments txConsTotsEsdevs;
	txConsTotsEsdevs.executar();

	List<String^>^ totsEsdevs = txConsTotsEsdevs.getResult();

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = totsEsdevs->Count;

	for (int i = 0; i < num_filtre_panel; i += 2) {
		String^ nom = totsEsdevs[i];
		String^ preu = totsEsdevs[i + 1];
		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "CONSULTAR ESDEVENIMENTS";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "REGISTAR-SE EN ESDEVENIMENTS";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "SETTINGS";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	usuario->logOut();
	this->Close();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnFiltrGala_Click(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaEsdevenimentsAmbTipus txConsEsdevs("Gala");
	txConsEsdevs.executar();

	List<String^>^ esdevsGala = txConsEsdevs.getResult();
	/*List<String^>^ esdevsGalaNoms = txConsEsdevs.getNoms();
	List<String^>^ esdevsGalaPreus = txConsEsdevs.getPreus();*/

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = esdevsGala->Count;

	for (int i = 0; i < num_filtre_panel; i+=2) {
		String^ nom = esdevsGala[i];
		String^ preu = esdevsGala[i+1];
		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}

}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: Void addBntFiltreToUI() {

}

private: System::Void btnConsultar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->flowLayoutPanel1->Visible = true;
	/*this->PANELPROVA->Visible = true;
	this->PANELPROVA->Dock = System::Windows::Forms::DockStyle::Fill;*/

	ComprarEsdevenimentUI^ formComprEsdev = gcnew ComprarEsdevenimentUI;
	formComprEsdev->ShowDialog();

	//// CODI PER MOSTRAR DADES ALS LABELS

	//TxConsultaEsdeveniment^ txConsEsdev = gcnew TxConsultaEsdeveniment("MessiExperience");
	//txConsEsdev->executar();

	//String^ idEnt = txConsEsdev->getResult()[0];
	//String^ preu = txConsEsdev->getResult()[1];
	//String^ ajunt = txConsEsdev->getResult()[2];
	//String^ desc = txConsEsdev->getResult()[3];
	//String^ nom = txConsEsdev->getResult()[4];
	//String^ tipus = "-";
	//String^ aforament = "-";
	//String^ puntsCost = "-";
	//String^ data = "-";
	//String^ puntsDesc = "-";

	////Esdeveniment^ esdev = gcnew Esdeveniment(idEnt, preu, ajunt, desc, nom, tipus,
	//	//aforament, puntsCost, data, puntsDesc);

	////addEsdevToUI_Mod(esdev);

	//this->lblConsultEsdevEntit->Text = idEnt;
	//this->lblEsdevConsultPreu->Text = preu;
	//this->lblConsultEsdevAjunt->Text = ajunt;
	//this->lblConsultEsdevDesc->Text = desc;
	//this->lblEsdevConsultNom->Text = nom;
}

private: System::Void btnComprar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//this->pnlMain->Controls->Add();
}
private: System::Void btnFiltreDeportivo_Click(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaEsdevenimentsAmbTipus txConsEsdevs("Deportivo");
	txConsEsdevs.executar();

	List<String^>^ esdevsGala = txConsEsdevs.getResult();

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = esdevsGala->Count;

	for (int i = 0; i < num_filtre_panel; i += 2) {

		String^ nom = esdevsGala[i];
		String^ preu = esdevsGala[i + 1];
		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}
}
private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "MODIFICAR ESDEVENIMENTS";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)  // btnSearch
{
	String^ val = this->textBox1->Text;

	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaEsdevenimentsAmbTipus txConsEsdevs(val);
	txConsEsdevs.executar();

	List<String^>^ esdevsGala = txConsEsdevs.getResult();

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = esdevsGala->Count;

	for (int i = 0; i < num_filtre_panel; i += 2) {

		String^ nom = esdevsGala[i];
		String^ preu = esdevsGala[i + 1];

		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) { // btn Tornar enrere
	this->flowLayoutPanel1->Visible = true;
	this->PANELPROVA->Visible = false;
	this->PANELPROVA->Dock = System::Windows::Forms::DockStyle::Right;
}

// CIUTADÀ------------------------------------------------------------------------------
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "HOMEPAGE";
	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaTotsEsdeveniments txConsTotsEsdevs;
	txConsTotsEsdevs.executar();

	List<String^>^ totsEsdevs = txConsTotsEsdevs.getResult();

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = totsEsdevs->Count;

	for (int i = 0; i < num_filtre_panel; i += 2) {
		String^ nom = totsEsdevs[i];
		String^ preu = totsEsdevs[i + 1];
		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "CONSULTAR ESDEVENIMENTS";
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "REGISTAR-SE EN ESDEVENIMENTS";
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "SETTINGS";
}
// Creació de panells amb l'Esdeveniment donat (+ Info)
private: Void addEsdevToUI(Esdeveniment^ esdev)
{
	System::Windows::Forms::Panel^ pnlEsdev = gcnew Panel;
	pnlEsdev->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	pnlEsdev->Location = System::Drawing::Point(0, 0);
	pnlEsdev->Name = String::Format("pnlEsdev{0}", esdev->getNom());
	pnlEsdev->Size = System::Drawing::Size(165, 235);
	pnlEsdev->TabIndex = 2;
	pnlEsdev->Visible = true;

	System::Windows::Forms::Label^ lblEsdev = gcnew Label;
	lblEsdev->Name = String::Format("lblEsdev{0}", esdev->getNom());
	lblEsdev->Text = esdev->getNom();
	lblEsdev->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblEsdev->Location = System::Drawing::Point(59, 168);
	lblEsdev->Dock = System::Windows::Forms::DockStyle::Bottom;

	System::Windows::Forms::Label^ lblEsdevPreu = gcnew Label;
	lblEsdevPreu->Name = String::Format("lblEsdevPreu{0}", esdev->getPreu());
	lblEsdevPreu->Text = esdev->getPreu() + " €";
	lblEsdevPreu->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblEsdevPreu->Location = System::Drawing::Point(59, 168);
	lblEsdevPreu->Dock = System::Windows::Forms::DockStyle::Bottom;

	//CustomButton^ btnConsultar = gcnew CustomButton("Messi", "Gala");
	Button^ btnConsultar = gcnew Button;
	btnConsultar->Name = "btnMoreInfo{0}";
	btnConsultar->Text = "+ Info";
	btnConsultar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	btnConsultar->BackColor = System::Drawing::Color::Black;
	btnConsultar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
	btnConsultar->ForeColor = System::Drawing::Color::White;
	btnConsultar->Dock = System::Windows::Forms::DockStyle::Bottom;

	btnConsultar->Click += gcnew System::EventHandler(this, &ProvesUI::btnConsultar_Click);

	pnlEsdev->Controls->Add(this->pictureBox6);
	pnlEsdev->Controls->Add(lblEsdev);
	pnlEsdev->Controls->Add(lblEsdevPreu);
	pnlEsdev->Controls->Add(btnConsultar);

	this->flowLayoutPanel1->Controls->Add(pnlEsdev);
}
// Creació de panells amb l'Esdeveniment donat (Modificar)
private: Void addEsdevToUI_Mod(Esdeveniment^ esdev)
{
	System::Windows::Forms::Panel^ pnlEsdev = gcnew Panel;
	pnlEsdev->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	pnlEsdev->Location = System::Drawing::Point(0, 0);
	pnlEsdev->Name = String::Format("pnlEsdev{0}", esdev->getNom());
	pnlEsdev->Size = System::Drawing::Size(165, 235);
	pnlEsdev->TabIndex = 2;
	pnlEsdev->Visible = true;

	System::Windows::Forms::Label^ lblEsdev = gcnew Label;
	lblEsdev->Name = String::Format("lblEsdev{0}", esdev->getNom());
	lblEsdev->Text = esdev->getNom();
	lblEsdev->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblEsdev->Location = System::Drawing::Point(59, 168);
	lblEsdev->Dock = System::Windows::Forms::DockStyle::Bottom;

	System::Windows::Forms::Label^ lblEsdevPreu = gcnew Label;
	lblEsdevPreu->Name = String::Format("lblEsdevPreu{0}", esdev->getPreu());
	//lblEsdevPreu->Text = esdev->getPreu() + " €";
	lblEsdevPreu->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblEsdevPreu->Location = System::Drawing::Point(59, 168);
	lblEsdevPreu->Dock = System::Windows::Forms::DockStyle::Bottom;

	System::Windows::Forms::Button^ btnComprar = gcnew Button;
	btnComprar->Name = "btnComprar{0}";
	btnComprar->Text = "Modificar";
	btnComprar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	btnComprar->Dock = System::Windows::Forms::DockStyle::Bottom;

	btnComprar->Click += gcnew System::EventHandler(this, &ProvesUI::btnComprar_Click);

	pnlEsdev->Controls->Add(this->pictureBox6);
	pnlEsdev->Controls->Add(lblEsdev);
	pnlEsdev->Controls->Add(lblEsdevPreu);
	pnlEsdev->Controls->Add(btnComprar);

}
// Creació de botons de filtres
private: Void addFiltrButtonToUI(String^ tipus)
{
	System::Windows::Forms::Button^ btnFiltrType = gcnew Button;
	btnFiltrType->BackColor = System::Drawing::Color::Crimson;
	btnFiltrType->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
	btnFiltrType->Name = String::Format("btnFiltr{0}", tipus);
	btnFiltrType->Text = tipus;
	btnFiltrType->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	btnFiltrType->ForeColor = System::Drawing::Color::White;
	btnFiltrType->Size = System::Drawing::Size(75, 23);
	btnFiltrType->Click += gcnew System::EventHandler(this, &ProvesUI::btnFiltrGala_Click);

	this->flowLayoutPanel2->Controls->Add(btnFiltrType);
}
// ENTITAT------------------------------------------------------------------------------
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "MODIFICAR ESDEVENIMENTS";
}
// AJUNTAMENT---------------------------------------------------------------------------



// COMPARTIT----------------------------------------------------------------------------
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	usuario->logOut();
	this->Close();
}
// Consultar Usuari (Ciutadà, Entitat, Ajuntament)
private: System::Void picBoxUserPic_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "PROFILE";
	this->flowLayoutPanel1->Visible = false;
	this->flowLayoutPanel2->Visible = false;
	this->pnlMainTop->Size = System::Drawing::Size(1127, 111);

	this->pnlMain->Visible = false;
	this->pnlInfoUsu->Visible = true;

	ConsultarUsuariUI^ formConsultUsu = gcnew ConsultarUsuariUI;
	formConsultUsu->ShowDialog();
}
// Main
private: System::Void ProvesUI_Load(System::Object^ sender, System::EventArgs^ e) {

	this->pnlMainModEsdv->Visible = false;

	int y = Screen::PrimaryScreen->Bounds.Height / 2;
	this->btnViewNavBar->Location = System::Drawing::Point(210, y);

	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	PassarelaCiutada^ passCiu;
	PassarelaEntitat^ passEnt;
	PassarelaAjuntament^ passAj;

	String^ fullName;
	String^ fl;
	String^ rl;
	String^ userName;

	TxConsultaTotsEsdeveniments txConsTotsEsdevs;
	int num_filtre_panel = 0;
	List<String^>^ totsEsdevs;

	TxConsultaTotsEsdevenimentsPerEntitat txConsTotsEsdevsEnt;
	int num_filtre_panel2 = 0;
	List<String^>^ totsEsdevsEnt;

	switch (usuario->getTipoPassarela())
	{
	case TipoPassarela::Ciutada:
		this->lblTypeUser->Text = L"Ciutadà";
		this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));

		passCiu = safe_cast<PassarelaCiutada^>(usuario->getUsuari());

		fullName = passCiu->getNomComplet();
		userName = passCiu->getNickname();

		fl = fullName->Substring(0, 1)->ToUpper();
		rl = fullName->Substring(1)->ToLower();

		fullName = fl + rl;

		lblFullNameUser->Text = L"" + fullName;
		lblUsername->Text = L"" + "@" + userName;

		flowLayoutPanel1->Visible = true;

		this->flowLayoutPanel1->Controls->Clear();

		txConsTotsEsdevs.executar();

		totsEsdevs = txConsTotsEsdevs.getResult();

		List<System::Windows::Forms::Panel^>^ list_esdevs;

		num_filtre_panel = totsEsdevs->Count;

		for (int i = 0; i < num_filtre_panel; i += 2) {
			String^ nom = totsEsdevs[i];
			String^ preu = totsEsdevs[i + 1];
			Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
			addEsdevToUI(esdev);
		}

		this->flowLayoutPanel1->Visible = true;

		break;
	case TipoPassarela::Entitat:
		this->lblTypeUser->Text = L"Entitat";
		this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(246)),
			static_cast<System::Int32>(static_cast<System::Byte>(210)),
			static_cast<System::Int32>(static_cast<System::Byte>(60)));

		passEnt = safe_cast<PassarelaEntitat^>(usuario->getUsuari());

		fullName = passEnt->obteNom();
		userName = passEnt->obteid()->ToString();

		fl = fullName->Substring(0, 1)->ToUpper();
		rl = fullName->Substring(1)->ToLower();

		fullName = fl + rl;

		lblFullNameUser->Text = L"" + fullName;
		lblUsername->Text = L"" + userName;

		//Visibilitat Opcions NavBar:
		//panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = false;
		panel4->Visible = false;
		panel5->Visible = false;
		panel6->Visible = false;
		//panel7->Visible = false;

		this->pnlModEsdev->Visible = true;

		flowLayoutPanel1->Visible = false;
		flowLayoutPanel2->Visible = true;

		this->pnlMainTop->Size = System::Drawing::Size(1503, 112);;

		// Entitat:
		txConsTotsEsdevsEnt.executar(userName);
		totsEsdevsEnt = txConsTotsEsdevsEnt.getResult();
		num_filtre_panel2 = totsEsdevsEnt->Count;
		for (int i = 0; i < num_filtre_panel2; i += 2) {
			String^ nom = totsEsdevsEnt[i];
			String^ preu = totsEsdevsEnt[i + 1];
			Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
			addEsdevToUI_Mod(esdev);
		}

		//this->pnlMainModEsdv->Visible = true;

		break;
	case TipoPassarela::Ajuntament:
		this->lblTypeUser->Text = L"Ajuntament";
		this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(168)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));

		passAj = safe_cast<PassarelaAjuntament^>(usuario->getUsuari());

		fullName = passAj->getNom();
		userName = passAj->getClau();

		fl = fullName->Substring(0, 1)->ToUpper();
		rl = fullName->Substring(1)->ToLower();

		fullName = fl + rl;

		lblFullNameUser->Text = L"" + fullName;
		lblUsername->Text = L"" + userName;

		//Visibilitat Opcions NavBar:
		//panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = false;
		panel4->Visible = false;
		panel5->Visible = false;
		panel6->Visible = false;
		//panel7->Visible = false;

		flowLayoutPanel1->Visible = false;
		break;
	}

	List<String^>^ tipus = gcnew List<String^>();

	tipus->Add("Gastronómico");
	tipus->Add("Artístico");
	tipus->Add("Deportivo");
	tipus->Add("Educativo");
	tipus->Add("Tecnológico");
	tipus->Add("Carnaval");
	tipus->Add("Musical");
	tipus->Add("Cinematográfico");
	tipus->Add("Taller");
	tipus->Add("Exposición");
	tipus->Add("Concierto");
	tipus->Add("Festival");
	tipus->Add("Competición");
	tipus->Add("Torneo");
	tipus->Add("Ceremonia");
	tipus->Add("Gala");

	int num_filtre_btn = tipus->Count;

	for (int i = 0; i < num_filtre_btn; ++i) {
		addFiltrButtonToUI(tipus[i]);
	}
}
};

}
