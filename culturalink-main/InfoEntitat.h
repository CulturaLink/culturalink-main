#pragma once
#include "TxConsultaEntitat.h"
namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InfoAjuntament
	/// </summary>
	public ref class InfoEntitat : public System::Windows::Forms::Form
	{
	public:
		InfoEntitat(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InfoEntitat()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;


	private: System::Windows::Forms::Panel^ panelDesktop;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelTitleBar;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Lcorreu;
	private: System::Windows::Forms::Label^ Ltelefon;



	private: System::Windows::Forms::Label^ Lnom;
	private: System::Windows::Forms::Label^ Lclau;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoEntitat::typeid));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->panelDesktop = (gcnew System::Windows::Forms::Panel());
			this->Lcorreu = (gcnew System::Windows::Forms::Label());
			this->Ltelefon = (gcnew System::Windows::Forms::Label());
			this->Lnom = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Lclau = (gcnew System::Windows::Forms::Label());
			this->panelDesktop->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// panelDesktop
			// 
			this->panelDesktop->AutoSize = true;
			this->panelDesktop->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelDesktop->BackColor = System::Drawing::Color::LightSalmon;
			this->panelDesktop->Controls->Add(this->Lclau);
			this->panelDesktop->Controls->Add(this->Lcorreu);
			this->panelDesktop->Controls->Add(this->Ltelefon);
			this->panelDesktop->Controls->Add(this->Lnom);
			this->panelDesktop->Controls->Add(this->label5);
			this->panelDesktop->Controls->Add(this->label4);
			this->panelDesktop->Controls->Add(this->label2);
			this->panelDesktop->Controls->Add(this->label1);
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Location = System::Drawing::Point(127, 49);
			this->panelDesktop->Margin = System::Windows::Forms::Padding(2);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(496, 299);
			this->panelDesktop->TabIndex = 4;
			// 
			// Lcorreu
			// 
			this->Lcorreu->AutoSize = true;
			this->Lcorreu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lcorreu->Location = System::Drawing::Point(28, 205);
			this->Lcorreu->Name = L"Lcorreu";
			this->Lcorreu->Size = System::Drawing::Size(56, 18);
			this->Lcorreu->TabIndex = 10;
			this->Lcorreu->Text = L"********";
			// 
			// Ltelefon
			// 
			this->Ltelefon->AutoSize = true;
			this->Ltelefon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ltelefon->Location = System::Drawing::Point(28, 142);
			this->Ltelefon->Name = L"Ltelefon";
			this->Ltelefon->Size = System::Drawing::Size(56, 18);
			this->Ltelefon->TabIndex = 9;
			this->Ltelefon->Text = L"********";
			// 
			// Lnom
			// 
			this->Lnom->AutoSize = true;
			this->Lnom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lnom->Location = System::Drawing::Point(28, 31);
			this->Lnom->Name = L"Lnom";
			this->Lnom->Size = System::Drawing::Size(46, 18);
			this->Lnom->TabIndex = 5;
			this->Lnom->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(5, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Correu de contacte:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-2, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Telefon de contacte:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Id:";
			this->label2->Click += gcnew System::EventHandler(this, &InfoEntitat::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom:";
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 49);
			this->panelMenu->Margin = System::Windows::Forms::Padding(2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(127, 299);
			this->panelMenu->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Homepage";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InfoEntitat::button1_Click);
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
			this->panelTitleBar->Size = System::Drawing::Size(623, 49);
			this->panelTitleBar->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &InfoEntitat::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(571, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 49);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &InfoEntitat::pictureBox2_Click);
			// 
			// Lclau
			// 
			this->Lclau->AutoSize = true;
			this->Lclau->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lclau->Location = System::Drawing::Point(28, 81);
			this->Lclau->Name = L"Lclau";
			this->Lclau->Size = System::Drawing::Size(56, 18);
			this->Lclau->TabIndex = 11;
			this->Lclau->Text = L"********";
			// 
			// InfoEntitat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 348);
			this->Controls->Add(this->panelDesktop);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelTitleBar);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InfoEntitat";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Info Entitat";
			this->Load += gcnew System::EventHandler(this, &InfoEntitat::InfoAjuntament_Load);
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
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void InfoAjuntament_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			TxConsultaEntitat tc;
			tc.executar();
			List<String^>^ res = tc.obteResultat();
			this->Lnom->Text = res[1];
			this->Lclau->Text = res[0];
			this->Ltelefon->Text = res[2];
			this->Lcorreu->Text = res[4];
		}
		catch (const std::exception& e)
		{
			// Convertir la excepción de C++ a System::String^
			String^ mensajeError = gcnew String(e.what());
			MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	}; 
}

