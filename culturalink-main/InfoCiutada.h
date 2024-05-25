#pragma once
#include "UsuariIniciat.h"
#include "PassarelaCiutada.h"
#include "TxConsultaCiutada.h"
#include "TxConsultaInscripcions.h"
#include "CtrlModificaCiutada.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de InfoCiutada
	/// </summary>
	public ref class InfoCiutada : public System::Windows::Forms::Form
	{
	public:
		InfoCiutada(void)
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
		~InfoCiutada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: CtrlModificaCiutada ctrlModCit;
	private: System::Windows::Forms::Panel^ panelDesktop;
	private: System::Windows::Forms::Label^ lSaldo;
	private: System::Windows::Forms::Label^ lData;
	private: System::Windows::Forms::Label^ lCorreu;

	protected:



	private: System::Windows::Forms::Label^ lNom;


	private: System::Windows::Forms::Label^ lNick;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelTitleBar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ logOut;
	private: System::Windows::Forms::Label^ lPunts;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ TitleCC;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Panel^ panel2;










	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ NpaswdR;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Npaswd;

	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::TextBox^ Nname;
	private: System::Windows::Forms::TextBox^ Ncorr;






	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ Ndat;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label9;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoCiutada::typeid));
			this->panelDesktop = (gcnew System::Windows::Forms::Panel());
			this->lPunts = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lSaldo = (gcnew System::Windows::Forms::Label());
			this->lData = (gcnew System::Windows::Forms::Label());
			this->lCorreu = (gcnew System::Windows::Forms::Label());
			this->lNom = (gcnew System::Windows::Forms::Label());
			this->lNick = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TitleCC = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->logOut = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->NpaswdR = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Npaswd = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Nname = (gcnew System::Windows::Forms::TextBox());
			this->Ncorr = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Ndat = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panelDesktop->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelDesktop
			// 
			this->panelDesktop->AutoSize = true;
			this->panelDesktop->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelDesktop->BackColor = System::Drawing::Color::LightSalmon;
			this->panelDesktop->Controls->Add(this->lPunts);
			this->panelDesktop->Controls->Add(this->label7);
			this->panelDesktop->Controls->Add(this->lSaldo);
			this->panelDesktop->Controls->Add(this->lData);
			this->panelDesktop->Controls->Add(this->lCorreu);
			this->panelDesktop->Controls->Add(this->lNom);
			this->panelDesktop->Controls->Add(this->lNick);
			this->panelDesktop->Controls->Add(this->label5);
			this->panelDesktop->Controls->Add(this->label4);
			this->panelDesktop->Controls->Add(this->label3);
			this->panelDesktop->Controls->Add(this->label2);
			this->panelDesktop->Controls->Add(this->label1);
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Location = System::Drawing::Point(150, 49);
			this->panelDesktop->Margin = System::Windows::Forms::Padding(2);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(576, 381);
			this->panelDesktop->TabIndex = 7;
			// 
			// lPunts
			// 
			this->lPunts->AutoSize = true;
			this->lPunts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lPunts->Location = System::Drawing::Point(28, 287);
			this->lPunts->Name = L"lPunts";
			this->lPunts->Size = System::Drawing::Size(56, 18);
			this->lPunts->TabIndex = 12;
			this->lPunts->Text = L"********";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(5, 263);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(207, 24);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Punts de descompte:";
			// 
			// lSaldo
			// 
			this->lSaldo->AutoSize = true;
			this->lSaldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lSaldo->Location = System::Drawing::Point(28, 235);
			this->lSaldo->Name = L"lSaldo";
			this->lSaldo->Size = System::Drawing::Size(56, 18);
			this->lSaldo->TabIndex = 10;
			this->lSaldo->Text = L"********";
			// 
			// lData
			// 
			this->lData->AutoSize = true;
			this->lData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lData->Location = System::Drawing::Point(28, 185);
			this->lData->Name = L"lData";
			this->lData->Size = System::Drawing::Size(56, 18);
			this->lData->TabIndex = 9;
			this->lData->Text = L"********";
			// 
			// lCorreu
			// 
			this->lCorreu->AutoSize = true;
			this->lCorreu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lCorreu->Location = System::Drawing::Point(28, 133);
			this->lCorreu->Name = L"lCorreu";
			this->lCorreu->Size = System::Drawing::Size(56, 18);
			this->lCorreu->TabIndex = 8;
			this->lCorreu->Text = L"********";
			// 
			// lNom
			// 
			this->lNom->AutoSize = true;
			this->lNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lNom->Location = System::Drawing::Point(28, 81);
			this->lNom->Name = L"lNom";
			this->lNom->Size = System::Drawing::Size(56, 18);
			this->lNom->TabIndex = 6;
			this->lNom->Text = L"********";
			// 
			// lNick
			// 
			this->lNick->AutoSize = true;
			this->lNick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lNick->Location = System::Drawing::Point(28, 31);
			this->lNick->Name = L"lNick";
			this->lNick->Size = System::Drawing::Size(46, 18);
			this->lNick->TabIndex = 5;
			this->lNick->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(5, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Saldo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(5, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Data de Naixement:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correu:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuari:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->TitleCC);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(150, 49);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(576, 381);
			this->panel1->TabIndex = 13;
			// 
			// TitleCC
			// 
			this->TitleCC->AutoSize = true;
			this->TitleCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleCC->Location = System::Drawing::Point(6, 5);
			this->TitleCC->Name = L"TitleCC";
			this->TitleCC->Size = System::Drawing::Size(498, 55);
			this->TitleCC->TabIndex = 1;
			this->TitleCC->Text = L"Compres realitzades:";
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(9, 63);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(555, 292);
			this->listBox1->Sorted = true;
			this->listBox1->TabIndex = 0;
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->button3);
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->logOut);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 49);
			this->panelMenu->Margin = System::Windows::Forms::Padding(2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(150, 381);
			this->panelMenu->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button3->Location = System::Drawing::Point(0, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 40);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Hist. Compres";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &InfoCiutada::button3_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button2->Location = System::Drawing::Point(0, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 40);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Modifica";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InfoCiutada::button2_Click);
			// 
			// logOut
			// 
			this->logOut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logOut->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->logOut->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->logOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->logOut->Location = System::Drawing::Point(0, 341);
			this->logOut->Name = L"logOut";
			this->logOut->Size = System::Drawing::Size(150, 40);
			this->logOut->TabIndex = 3;
			this->logOut->Text = L"Tancar Sessio";
			this->logOut->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Homepage";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InfoCiutada::button1_Click);
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::White;
			this->panelTitleBar->Controls->Add(this->pictureBox1);
			this->panelTitleBar->Controls->Add(this->pictureBox2);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(0, 0);
			this->panelTitleBar->Margin = System::Windows::Forms::Padding(2);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(726, 49);
			this->panelTitleBar->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 49);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &InfoCiutada::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(677, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 49);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &InfoCiutada::pictureBox2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Linen;
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->NpaswdR);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->Npaswd);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->Ndat);
			this->panel2->Controls->Add(this->Nname);
			this->panel2->Controls->Add(this->Ncorr);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(150, 49);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(576, 381);
			this->panel2->TabIndex = 14;
			this->panel2->Visible = false;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button4->Location = System::Drawing::Point(387, 331);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 47);
			this->button4->TabIndex = 32;
			this->button4->Text = L"Acceptar canvis";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &InfoCiutada::button4_Click);
			// 
			// NpaswdR
			// 
			this->NpaswdR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NpaswdR->Location = System::Drawing::Point(38, 286);
			this->NpaswdR->Name = L"NpaswdR";
			this->NpaswdR->PasswordChar = '*';
			this->NpaswdR->Size = System::Drawing::Size(239, 26);
			this->NpaswdR->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(250, 24);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Repetir nova Contrasenya";
			// 
			// Npaswd
			// 
			this->Npaswd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Npaswd->Location = System::Drawing::Point(38, 230);
			this->Npaswd->Name = L"Npaswd";
			this->Npaswd->PasswordChar = '*';
			this->Npaswd->Size = System::Drawing::Size(239, 26);
			this->Npaswd->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(180, 24);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Nova Contrasenya";
			// 
			// Nname
			// 
			this->Nname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nname->Location = System::Drawing::Point(38, 34);
			this->Nname->Name = L"Nname";
			this->Nname->Size = System::Drawing::Size(239, 26);
			this->Nname->TabIndex = 26;
			// 
			// Ncorr
			// 
			this->Ncorr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ncorr->Location = System::Drawing::Point(38, 88);
			this->Ncorr->Name = L"Ncorr";
			this->Ncorr->Size = System::Drawing::Size(239, 26);
			this->Ncorr->TabIndex = 25;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(12, 7);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(188, 24);
			this->label17->TabIndex = 14;
			this->label17->Text = L"Nou Nom Complet:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(12, 63);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(125, 24);
			this->label18->TabIndex = 13;
			this->label18->Text = L"Nou Correu:";
			// 
			// Ndat
			// 
			this->Ndat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ndat->Location = System::Drawing::Point(38, 146);
			this->Ndat->Name = L"Ndat";
			this->Ndat->Size = System::Drawing::Size(117, 26);
			this->Ndat->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(12, 119);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(246, 24);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Nova Data de Naixament:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label9->Location = System::Drawing::Point(161, 149);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 18);
			this->label9->TabIndex = 33;
			this->label9->Text = L"(AAAA-MM-DD)";
			// 
			// InfoCiutada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 430);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panelDesktop);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelTitleBar);
			this->Name = L"InfoCiutada";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InfoCiutada";
			this->Load += gcnew System::EventHandler(this, &InfoCiutada::InfoCiutada_Load);
			this->panelDesktop->ResumeLayout(false);
			this->panelDesktop->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			this->panelTitleBar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void InfoCiutada_Load(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		TxConsultaCiutada tc;
		tc.executar();
		List<String^>^ res = tc.getResult();
		this->lNick->Text = res[0];
		this->lNom->Text = res[1];
		this->lCorreu->Text = res[2];
		this->lData->Text = res[3];
		this->lSaldo->Text = res[4];
		this->lPunts->Text = res[5];
	}
	catch (const std::exception& e)
	{
		// Convertir la excepción de C++ a System::String^
		String^ mensajeError = gcnew String(e.what());
		MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	//carreguem llista de compres del usuari
	TxConsultaInscripcions tI;
	tI.executar();
	List<String^>^ result = tI.getResult();
	for each (String ^ line in result)
		this->listBox1->Items->Add(line);

	panel1->Visible = false;
	panel2->Visible = false;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMenu->Visible = !panelMenu->Visible;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panelDesktop->Visible = false;
	panel2->Visible = false;
	panel1->Visible = true;
	panel1->Invalidate(); // Force redraw if necessary
	panel1->PerformLayout(); // Recalculate layout if necessary
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panelDesktop->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Npaswd->Text == NpaswdR->Text) {
		try {
			ctrlModCit.modificaCiutada(Nname->Text, Ncorr->Text, Ndat->Text, Npaswd->Text);
			//this->Close();
			MessageBox::Show("Les dades s'han actualitzat amb èxit!");
		}
		catch (CorreuExisteix^ e1) {
			MessageBox::Show(e1->Message);
		}
	}
	else {
		MessageBox::Show("Els camps de nova contrassenya i repetició no coincideixe, torna a intentar.");
	}
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Visible = true;
	panel1->Visible = false;
	panelDesktop->Visible = false;
}
};
}
