#pragma once
#include "TxRegistraEsdeveniment.h"
#include "UsuariIniciat.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistrarEsdevenimentUI
	/// </summary>
	public ref class RegistrarEsdevenimentUI : public System::Windows::Forms::Form
	{
	public:
		RegistrarEsdevenimentUI(void)
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
		~RegistrarEsdevenimentUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	protected:
	private: System::Windows::Forms::Panel^ panelDesktop;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelTitleBar;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ lblTipus;
	private: System::Windows::Forms::Label^ lblPuntsRegal;


	private: System::Windows::Forms::Label^ lblData;

	private: System::Windows::Forms::Label^ lblPreuPunts;

	private: System::Windows::Forms::Label^ lblAforament;



	private: System::Windows::Forms::TextBox^ txtBData;
	private: System::Windows::Forms::TextBox^ txtbAforament;
	private: System::Windows::Forms::TextBox^ txtBTipus;
	private: System::Windows::Forms::TextBox^ txtBPuntsRegal;


	private: System::Windows::Forms::TextBox^ txtBPreuPunts;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrarEsdevenimentUI::typeid));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->panelDesktop = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBData = (gcnew System::Windows::Forms::TextBox());
			this->txtbAforament = (gcnew System::Windows::Forms::TextBox());
			this->txtBTipus = (gcnew System::Windows::Forms::TextBox());
			this->txtBPuntsRegal = (gcnew System::Windows::Forms::TextBox());
			this->txtBPreuPunts = (gcnew System::Windows::Forms::TextBox());
			this->lblPuntsRegal = (gcnew System::Windows::Forms::Label());
			this->lblData = (gcnew System::Windows::Forms::Label());
			this->lblPreuPunts = (gcnew System::Windows::Forms::Label());
			this->lblAforament = (gcnew System::Windows::Forms::Label());
			this->lblTipus = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelTitleBar = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelDesktop->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panelTitleBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->panelDesktop->Controls->Add(this->label1);
			this->panelDesktop->Controls->Add(this->txtBData);
			this->panelDesktop->Controls->Add(this->txtbAforament);
			this->panelDesktop->Controls->Add(this->txtBTipus);
			this->panelDesktop->Controls->Add(this->txtBPuntsRegal);
			this->panelDesktop->Controls->Add(this->txtBPreuPunts);
			this->panelDesktop->Controls->Add(this->lblPuntsRegal);
			this->panelDesktop->Controls->Add(this->lblData);
			this->panelDesktop->Controls->Add(this->lblPreuPunts);
			this->panelDesktop->Controls->Add(this->lblAforament);
			this->panelDesktop->Controls->Add(this->lblTipus);
			this->panelDesktop->Controls->Add(this->button5);
			this->panelDesktop->Controls->Add(this->textBox4);
			this->panelDesktop->Controls->Add(this->label6);
			this->panelDesktop->Controls->Add(this->textBox3);
			this->panelDesktop->Controls->Add(this->label5);
			this->panelDesktop->Controls->Add(this->label4);
			this->panelDesktop->Controls->Add(this->textBox2);
			this->panelDesktop->Controls->Add(this->label3);
			this->panelDesktop->Controls->Add(this->label2);
			this->panelDesktop->Controls->Add(this->textBox1);
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Location = System::Drawing::Point(150, 49);
			this->panelDesktop->Margin = System::Windows::Forms::Padding(2);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(634, 392);
			this->panelDesktop->TabIndex = 7;
			this->panelDesktop->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RegistrarEsdevenimentUI::panelDesktop_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(322, 356);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 25);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Format YYYY-MM-DD";
			// 
			// txtBData
			// 
			this->txtBData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtBData->Location = System::Drawing::Point(94, 350);
			this->txtBData->Margin = System::Windows::Forms::Padding(2);
			this->txtBData->Name = L"txtBData";
			this->txtBData->Size = System::Drawing::Size(208, 31);
			this->txtBData->TabIndex = 30;
			// 
			// txtbAforament
			// 
			this->txtbAforament->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtbAforament->Location = System::Drawing::Point(139, 312);
			this->txtbAforament->Margin = System::Windows::Forms::Padding(2);
			this->txtbAforament->Name = L"txtbAforament";
			this->txtbAforament->Size = System::Drawing::Size(208, 31);
			this->txtbAforament->TabIndex = 29;
			// 
			// txtBTipus
			// 
			this->txtBTipus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtBTipus->Location = System::Drawing::Point(94, 225);
			this->txtBTipus->Margin = System::Windows::Forms::Padding(2);
			this->txtBTipus->Name = L"txtBTipus";
			this->txtBTipus->Size = System::Drawing::Size(208, 31);
			this->txtBTipus->TabIndex = 28;
			// 
			// txtBPuntsRegal
			// 
			this->txtBPuntsRegal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtBPuntsRegal->Location = System::Drawing::Point(191, 138);
			this->txtBPuntsRegal->Margin = System::Windows::Forms::Padding(2);
			this->txtBPuntsRegal->Name = L"txtBPuntsRegal";
			this->txtBPuntsRegal->Size = System::Drawing::Size(208, 31);
			this->txtBPuntsRegal->TabIndex = 27;
			// 
			// txtBPreuPunts
			// 
			this->txtBPreuPunts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtBPreuPunts->Location = System::Drawing::Point(161, 95);
			this->txtBPreuPunts->Margin = System::Windows::Forms::Padding(2);
			this->txtBPreuPunts->Name = L"txtBPreuPunts";
			this->txtBPreuPunts->Size = System::Drawing::Size(208, 31);
			this->txtBPreuPunts->TabIndex = 26;
			// 
			// lblPuntsRegal
			// 
			this->lblPuntsRegal->AutoSize = true;
			this->lblPuntsRegal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblPuntsRegal->Location = System::Drawing::Point(18, 138);
			this->lblPuntsRegal->Name = L"lblPuntsRegal";
			this->lblPuntsRegal->Size = System::Drawing::Size(159, 25);
			this->lblPuntsRegal->TabIndex = 25;
			this->lblPuntsRegal->Text = L"Punts de Regal";
			// 
			// lblData
			// 
			this->lblData->AutoSize = true;
			this->lblData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblData->Location = System::Drawing::Point(18, 353);
			this->lblData->Name = L"lblData";
			this->lblData->Size = System::Drawing::Size(63, 25);
			this->lblData->TabIndex = 24;
			this->lblData->Text = L"Data:";
			// 
			// lblPreuPunts
			// 
			this->lblPreuPunts->AutoSize = true;
			this->lblPreuPunts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblPreuPunts->Location = System::Drawing::Point(18, 95);
			this->lblPreuPunts->Name = L"lblPreuPunts";
			this->lblPreuPunts->Size = System::Drawing::Size(138, 25);
			this->lblPreuPunts->TabIndex = 23;
			this->lblPreuPunts->Text = L"Preu (Punts):";
			// 
			// lblAforament
			// 
			this->lblAforament->AutoSize = true;
			this->lblAforament->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblAforament->Location = System::Drawing::Point(18, 312);
			this->lblAforament->Name = L"lblAforament";
			this->lblAforament->Size = System::Drawing::Size(116, 25);
			this->lblAforament->TabIndex = 22;
			this->lblAforament->Text = L"Aforament:";
			// 
			// lblTipus
			// 
			this->lblTipus->AutoSize = true;
			this->lblTipus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblTipus->Location = System::Drawing::Point(18, 228);
			this->lblTipus->Name = L"lblTipus";
			this->lblTipus->Size = System::Drawing::Size(71, 25);
			this->lblTipus->TabIndex = 20;
			this->lblTipus->Text = L"Tipus:";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->button5->Location = System::Drawing::Point(435, 288);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 49);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Registrar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox4->Location = System::Drawing::Point(154, 268);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(210, 31);
			this->textBox4->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label6->Location = System::Drawing::Point(18, 271);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Ajuntament :";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox3->Location = System::Drawing::Point(141, 181);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(467, 31);
			this->textBox3->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label5->Location = System::Drawing::Point(18, 181);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Descripció:";
			this->label5->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label4->Location = System::Drawing::Point(186, 55);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox2->Location = System::Drawing::Point(89, 52);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 31);
			this->textBox2->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label3->Location = System::Drawing::Point(16, 55);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 25);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Preu: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label2->Location = System::Drawing::Point(16, 17);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Nom Esdeveniment:";
			this->label2->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox1->Location = System::Drawing::Point(224, 14);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(323, 31);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::textBox1_TextChanged);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panelMenu->Controls->Add(this->button4);
			this->panelMenu->Controls->Add(this->button3);
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 49);
			this->panelMenu->Margin = System::Windows::Forms::Padding(2);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(150, 392);
			this->panelMenu->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button4->Location = System::Drawing::Point(0, 120);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Reg. Esdev.";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::button4_Click);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button3->Location = System::Drawing::Point(0, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Homepage";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button2->Location = System::Drawing::Point(0, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Homepage";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Homepage";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panelTitleBar
			// 
			this->panelTitleBar->BackColor = System::Drawing::Color::White;
			this->panelTitleBar->Controls->Add(this->pictureBox3);
			this->panelTitleBar->Controls->Add(this->pictureBox1);
			this->panelTitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitleBar->Location = System::Drawing::Point(0, 0);
			this->panelTitleBar->Margin = System::Windows::Forms::Padding(2);
			this->panelTitleBar->Name = L"panelTitleBar";
			this->panelTitleBar->Size = System::Drawing::Size(784, 49);
			this->panelTitleBar->TabIndex = 6;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(732, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(49, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
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
			// 
			// RegistrarEsdevenimentUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 441);
			this->Controls->Add(this->panelDesktop);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panelTitleBar);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"RegistrarEsdevenimentUI";
			this->Text = L"RegistrarEsdevenimentUI";
			this->panelDesktop->ResumeLayout(false);
			this->panelDesktop->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			this->panelTitleBar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nomEsdeveniment = this->textBox1->Text;
		String^ preu = this->textBox2->Text;
		String^ descripcio = this->textBox3->Text;
		String^ ajuntament = this->textBox4->Text;
		String^ tipus = this->txtBTipus->Text;
		String^ aforamentS = this->txtbAforament->Text;
		int aforament = System::Convert::ToInt32(aforamentS);
		String^ puntsCostS = this->txtBPreuPunts->Text;
		int puntsCost = System::Convert::ToInt32(puntsCostS);
		String^ data = this->txtBData->Text;
		String^ puntsDescS = this->txtBPuntsRegal->Text;
		int puntsDesc = System::Convert::ToInt32(puntsDescS);
		UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
		PassarelaEntitat^ passEnt = safe_cast<PassarelaEntitat^>(usuario->getUsuari());
		/*int^ idE = passEnt->obteid();
		int idEsd = *idE;*/

		TxRegistraEsdeveniment tx1(5236, nomEsdeveniment, Convert::ToSingle(preu), descripcio, ajuntament, tipus, aforament, puntsCost, data, puntsDesc);
		tx1.executar();
		this->Close();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panelDesktop_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {



		panelMenu->Visible = !panelMenu->Visible;
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	};
}