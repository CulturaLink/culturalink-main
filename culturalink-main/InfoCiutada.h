#pragma once
#include "UsuariIniciat.h"
#include "PassarelaCiutada.h"

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
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->logOut = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panelDesktop->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->panelDesktop->Location = System::Drawing::Point(127, 49);
			this->panelDesktop->Margin = System::Windows::Forms::Padding(2);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(657, 392);
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
			this->panelMenu->Size = System::Drawing::Size(127, 392);
			this->panelMenu->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 68);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 34);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Hist. Compres";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Modifica";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// logOut
			// 
			this->logOut->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->logOut->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->logOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logOut->Location = System::Drawing::Point(0, 358);
			this->logOut->Name = L"logOut";
			this->logOut->Size = System::Drawing::Size(127, 34);
			this->logOut->TabIndex = 3;
			this->logOut->Text = L"Tancar Sessio";
			this->logOut->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 34);
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
			this->panelTitleBar->Size = System::Drawing::Size(784, 49);
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
			this->pictureBox2->Location = System::Drawing::Point(735, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 49);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// InfoCiutada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 441);
			this->Controls->Add(this->panelDesktop);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelTitleBar);
			this->Name = L"InfoCiutada";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InfoCiutada";
			this->Load += gcnew System::EventHandler(this, &InfoCiutada::InfoCiutada_Load);
			this->panelDesktop->ResumeLayout(false);
			this->panelDesktop->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			this->panelTitleBar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void InfoCiutada_Load(System::Object^ sender, System::EventArgs^ e) {
	UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
	Object^ usuariIniciat = usuari->getUsuari();
	TipoPassarela tipusUsuari = usuari->getTipoPassarela();

	// Verificar si el tipo de passarela es Ciutada
	if (tipusUsuari == TipoPassarela::Ciutada) {
		// Convertir el objeto de passarela al tipo PassarelaCiutada^
		PassarelaCiutada^ passarelaCiutada = safe_cast<PassarelaCiutada^>(usuariIniciat);

		// Utilizar los métodos y propiedades específicos de PassarelaCiutada
		lNick->Text = passarelaCiutada->getNickname();
		lNom->Text = passarelaCiutada->getNomComplet();
		lCorreu->Text = passarelaCiutada->getCorreu();
		lData->Text = passarelaCiutada->getDataNaix();
		lSaldo->Text = passarelaCiutada->getDiners()->ToString();
		lPunts->Text = passarelaCiutada->getPunts()->ToString();
	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMenu->Visible = !panelMenu->Visible;
}
};
}
