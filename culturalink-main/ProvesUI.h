#pragma once

//Forms:

//Passareles:
#include "PassarelaCiutada.h"
#include "PassarelaEntitat.h"
#include "PassarelaAjuntament.h"

// Altres:
#include "UsuariIniciat.h"

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
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ pnlMain;

	private: System::Windows::Forms::Button^ btnViewNavBar;





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
			this->lblFullNameUser = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->picBoxUserPic = (gcnew System::Windows::Forms::PictureBox());
			this->pnlMainTop = (gcnew System::Windows::Forms::Panel());
			this->lblTitlePage = (gcnew System::Windows::Forms::Label());
			this->pnlMain = (gcnew System::Windows::Forms::Panel());
			this->btnViewNavBar = (gcnew System::Windows::Forms::Button());
			this->pnlTopBar->SuspendLayout();
			this->pnlTopBarAppInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppIcon))->BeginInit();
			this->pnlTopBarMinMaxClose->SuspendLayout();
			this->panelNavBar->SuspendLayout();
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
			this->panel5->Location = System::Drawing::Point(462, 16);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(181, 34);
			this->panel5->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(276, 16);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(181, 30);
			this->panel4->TabIndex = 4;
			// 
			// pnlTopBarAppInfo
			// 
			this->pnlTopBarAppInfo->Controls->Add(this->lblNameApp);
			this->pnlTopBarAppInfo->Controls->Add(this->AppIcon);
			this->pnlTopBarAppInfo->Location = System::Drawing::Point(0, 0);
			this->pnlTopBarAppInfo->Margin = System::Windows::Forms::Padding(4);
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
			this->AppIcon->Margin = System::Windows::Forms::Padding(4);
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
			this->pnlTopBarMinMaxClose->Margin = System::Windows::Forms::Padding(4);
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
			this->btnMinimize->Margin = System::Windows::Forms::Padding(4);
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
			this->btnMaximize->Margin = System::Windows::Forms::Padding(4);
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
			this->btnClose->Margin = System::Windows::Forms::Padding(4);
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
			this->panelNavBar->Controls->Add(this->panel7);
			this->panelNavBar->Controls->Add(this->panel6);
			this->panelNavBar->Controls->Add(this->panel3);
			this->panelNavBar->Controls->Add(this->panel2);
			this->panelNavBar->Controls->Add(this->panel1);
			this->panelNavBar->Controls->Add(this->panelUserInfo);
			this->panelNavBar->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelNavBar->Location = System::Drawing::Point(0, 37);
			this->panelNavBar->Margin = System::Windows::Forms::Padding(4);
			this->panelNavBar->Name = L"panelNavBar";
			this->panelNavBar->Size = System::Drawing::Size(276, 768);
			this->panelNavBar->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->pictureBox5);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(0, 716);
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
			this->button5->Location = System::Drawing::Point(54, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(222, 52);
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
			this->label5->Location = System::Drawing::Point(60, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 28);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Log Out";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(54, 52);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Black;
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 293);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(276, 52);
			this->panel6->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			this->button4->ForeColor = System::Drawing::Color::DimGray;
			this->button4->Location = System::Drawing::Point(54, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(222, 52);
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
			this->label4->Location = System::Drawing::Point(60, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 28);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Settings";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox4->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.ErrorImage")));
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(54, 52);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 241);
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
			this->button3->Location = System::Drawing::Point(54, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(222, 52);
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
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 52);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 189);
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
			this->button2->Location = System::Drawing::Point(54, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 52);
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
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(54, 52);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 137);
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
			this->button1->Location = System::Drawing::Point(54, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0, 3, 0, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 52);
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
			this->label1->Location = System::Drawing::Point(54, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Home";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(54, 52);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelUserInfo
			// 
			this->panelUserInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panelUserInfo->Controls->Add(this->lblTypeUser);
			this->panelUserInfo->Controls->Add(this->lblFullNameUser);
			this->panelUserInfo->Controls->Add(this->lblUsername);
			this->panelUserInfo->Controls->Add(this->picBoxUserPic);
			this->panelUserInfo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelUserInfo->Location = System::Drawing::Point(0, 0);
			this->panelUserInfo->Margin = System::Windows::Forms::Padding(4);
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
			this->picBoxUserPic->Location = System::Drawing::Point(13, 19);
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
			this->pnlMainTop->Controls->Add(this->lblTitlePage);
			this->pnlMainTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlMainTop->Location = System::Drawing::Point(276, 37);
			this->pnlMainTop->Margin = System::Windows::Forms::Padding(4);
			this->pnlMainTop->Name = L"pnlMainTop";
			this->pnlMainTop->Size = System::Drawing::Size(1503, 137);
			this->pnlMainTop->TabIndex = 3;
			// 
			// lblTitlePage
			// 
			this->lblTitlePage->AutoSize = true;
			this->lblTitlePage->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitlePage->Location = System::Drawing::Point(21, 16);
			this->lblTitlePage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTitlePage->Name = L"lblTitlePage";
			this->lblTitlePage->Size = System::Drawing::Size(220, 50);
			this->lblTitlePage->TabIndex = 0;
			this->lblTitlePage->Text = L"HOMEPAGE";
			// 
			// pnlMain
			// 
			this->pnlMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlMain->Location = System::Drawing::Point(276, 174);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->Size = System::Drawing::Size(1503, 631);
			this->pnlMain->TabIndex = 4;
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
			this->Margin = System::Windows::Forms::Padding(4);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ProvesUI_Load(System::Object^ sender, System::EventArgs^ e) {
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
			break;
		}

		// Crear passarela per obtenir FullName, username i profilePic.
		//this->lblFullNameUser->Text = L"Arturo Aragón"; 
		//this->lblUsername->Text = L"@artuaragon";
	}
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
		panelNavBar->Visible = !panelNavBar->Visible;
		
		int y = Screen::PrimaryScreen->Bounds.Height / 2;
		if (panelNavBar->Visible == true) {
			this->btnViewNavBar->Location = System::Drawing::Point(210, y);
		}
		else {
			this->btnViewNavBar->Location = System::Drawing::Point(2, y);
		}
	}
private: System::Void picBoxUserPic_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "PROFILE";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "HOMEPAGE";
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
	this->Close();
}
};
}
