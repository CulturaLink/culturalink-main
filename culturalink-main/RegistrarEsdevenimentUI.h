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









	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ lbl_nom_REGESD;


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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbl_preu_REGESD;

	private: System::Windows::Forms::Panel^ PANEL_registrar_esdeveniment;
	private: System::Windows::Forms::Label^ label2;

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
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->panelDesktop = (gcnew System::Windows::Forms::Panel());
			this->PANEL_registrar_esdeveniment = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_nom_REGESD = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_preu_REGESD = (gcnew System::Windows::Forms::Label());
			this->txtBData = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->txtbAforament = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtBTipus = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->txtBPuntsRegal = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtBPreuPunts = (gcnew System::Windows::Forms::TextBox());
			this->lblTipus = (gcnew System::Windows::Forms::Label());
			this->lblPuntsRegal = (gcnew System::Windows::Forms::Label());
			this->lblAforament = (gcnew System::Windows::Forms::Label());
			this->lblData = (gcnew System::Windows::Forms::Label());
			this->lblPreuPunts = (gcnew System::Windows::Forms::Label());
			this->panelDesktop->SuspendLayout();
			this->PANEL_registrar_esdeveniment->SuspendLayout();
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
			this->panelDesktop->BackColor = System::Drawing::SystemColors::Control;
			this->panelDesktop->Controls->Add(this->label2);
			this->panelDesktop->Controls->Add(this->PANEL_registrar_esdeveniment);
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Location = System::Drawing::Point(0, 0);
			this->panelDesktop->Margin = System::Windows::Forms::Padding(2);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(837, 624);
			this->panelDesktop->TabIndex = 7;
			this->panelDesktop->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RegistrarEsdevenimentUI::panelDesktop_Paint);
			// 
			// PANEL_registrar_esdeveniment
			// 
			this->PANEL_registrar_esdeveniment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->PANEL_registrar_esdeveniment->Controls->Add(this->lbl_nom_REGESD);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->label1);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->button1);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->button5);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->label7);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->textBox4);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->textBox1);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->lbl_preu_REGESD);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->txtBData);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->textBox2);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->txtbAforament);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->label5);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->txtBTipus);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->textBox3);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->txtBPuntsRegal);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->label6);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->txtBPreuPunts);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->lblTipus);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->lblPuntsRegal);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->lblAforament);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->lblData);
			this->PANEL_registrar_esdeveniment->Controls->Add(this->lblPreuPunts);
			this->PANEL_registrar_esdeveniment->Location = System::Drawing::Point(33, 83);
			this->PANEL_registrar_esdeveniment->Name = L"PANEL_registrar_esdeveniment";
			this->PANEL_registrar_esdeveniment->Size = System::Drawing::Size(774, 513);
			this->PANEL_registrar_esdeveniment->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(766, 60);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Registre Esdeveniment";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_nom_REGESD
			// 
			this->lbl_nom_REGESD->AutoSize = true;
			this->lbl_nom_REGESD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lbl_nom_REGESD->Location = System::Drawing::Point(36, 16);
			this->lbl_nom_REGESD->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_nom_REGESD->Name = L"lbl_nom_REGESD";
			this->lbl_nom_REGESD->Size = System::Drawing::Size(198, 25);
			this->lbl_nom_REGESD->TabIndex = 11;
			this->lbl_nom_REGESD->Text = L"Nom Esdeveniment";
			this->lbl_nom_REGESD->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(457, 393);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 25);
			this->label1->TabIndex = 31;
			this->label1->Text = L"yyyy-mm-dd";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->button1->Location = System::Drawing::Point(618, 451);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 49);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->button5->Location = System::Drawing::Point(444, 451);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 49);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Registrar";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label7->Location = System::Drawing::Point(336, 58);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 25);
			this->label7->TabIndex = 33;
			this->label7->Text = L"€";
			this->label7->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::label7_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox4->Location = System::Drawing::Point(238, 313);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(522, 31);
			this->textBox4->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox1->Location = System::Drawing::Point(238, 13);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(522, 31);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::textBox1_TextChanged);
			// 
			// lbl_preu_REGESD
			// 
			this->lbl_preu_REGESD->AutoSize = true;
			this->lbl_preu_REGESD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lbl_preu_REGESD->Location = System::Drawing::Point(178, 58);
			this->lbl_preu_REGESD->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_preu_REGESD->Name = L"lbl_preu_REGESD";
			this->lbl_preu_REGESD->Size = System::Drawing::Size(57, 25);
			this->lbl_preu_REGESD->TabIndex = 12;
			this->lbl_preu_REGESD->Text = L"Preu";
			this->lbl_preu_REGESD->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::label3_Click);
			// 
			// txtBData
			// 
			this->txtBData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtBData->Location = System::Drawing::Point(238, 390);
			this->txtBData->Margin = System::Windows::Forms::Padding(2);
			this->txtBData->Name = L"txtBData";
			this->txtBData->Size = System::Drawing::Size(208, 31);
			this->txtBData->TabIndex = 30;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox2->Location = System::Drawing::Point(239, 55);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 31);
			this->textBox2->TabIndex = 13;
			// 
			// txtbAforament
			// 
			this->txtbAforament->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtbAforament->Location = System::Drawing::Point(238, 351);
			this->txtbAforament->Margin = System::Windows::Forms::Padding(2);
			this->txtbAforament->Name = L"txtbAforament";
			this->txtbAforament->Size = System::Drawing::Size(128, 31);
			this->txtbAforament->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label5->Location = System::Drawing::Point(122, 184);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Descripció";
			this->label5->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::label5_Click);
			// 
			// txtBTipus
			// 
			this->txtBTipus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtBTipus->Location = System::Drawing::Point(238, 267);
			this->txtBTipus->Margin = System::Windows::Forms::Padding(2);
			this->txtBTipus->Name = L"txtBTipus";
			this->txtBTipus->Size = System::Drawing::Size(522, 31);
			this->txtBTipus->TabIndex = 28;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->textBox3->Location = System::Drawing::Point(239, 181);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(521, 70);
			this->textBox3->TabIndex = 16;
			// 
			// txtBPuntsRegal
			// 
			this->txtBPuntsRegal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtBPuntsRegal->Location = System::Drawing::Point(239, 141);
			this->txtBPuntsRegal->Margin = System::Windows::Forms::Padding(2);
			this->txtBPuntsRegal->Name = L"txtBPuntsRegal";
			this->txtBPuntsRegal->Size = System::Drawing::Size(93, 31);
			this->txtBPuntsRegal->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label6->Location = System::Drawing::Point(54, 316);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(181, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Ajuntament (nom)";
			// 
			// txtBPreuPunts
			// 
			this->txtBPreuPunts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->txtBPreuPunts->Location = System::Drawing::Point(239, 95);
			this->txtBPreuPunts->Margin = System::Windows::Forms::Padding(2);
			this->txtBPreuPunts->Name = L"txtBPreuPunts";
			this->txtBPreuPunts->Size = System::Drawing::Size(93, 31);
			this->txtBPreuPunts->TabIndex = 26;
			// 
			// lblTipus
			// 
			this->lblTipus->AutoSize = true;
			this->lblTipus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblTipus->Location = System::Drawing::Point(170, 270);
			this->lblTipus->Name = L"lblTipus";
			this->lblTipus->Size = System::Drawing::Size(65, 25);
			this->lblTipus->TabIndex = 20;
			this->lblTipus->Text = L"Tipus";
			// 
			// lblPuntsRegal
			// 
			this->lblPuntsRegal->AutoSize = true;
			this->lblPuntsRegal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblPuntsRegal->Location = System::Drawing::Point(83, 144);
			this->lblPuntsRegal->Name = L"lblPuntsRegal";
			this->lblPuntsRegal->Size = System::Drawing::Size(151, 25);
			this->lblPuntsRegal->TabIndex = 25;
			this->lblPuntsRegal->Text = L"Punts de regal";
			// 
			// lblAforament
			// 
			this->lblAforament->AutoSize = true;
			this->lblAforament->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblAforament->Location = System::Drawing::Point(15, 354);
			this->lblAforament->Name = L"lblAforament";
			this->lblAforament->Size = System::Drawing::Size(219, 25);
			this->lblAforament->TabIndex = 22;
			this->lblAforament->Text = L"Aforament (persones)";
			// 
			// lblData
			// 
			this->lblData->AutoSize = true;
			this->lblData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblData->Location = System::Drawing::Point(177, 393);
			this->lblData->Name = L"lblData";
			this->lblData->Size = System::Drawing::Size(57, 25);
			this->lblData->TabIndex = 24;
			this->lblData->Text = L"Data";
			// 
			// lblPreuPunts
			// 
			this->lblPreuPunts->AutoSize = true;
			this->lblPreuPunts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->lblPreuPunts->Location = System::Drawing::Point(104, 98);
			this->lblPreuPunts->Name = L"lblPreuPunts";
			this->lblPreuPunts->Size = System::Drawing::Size(130, 25);
			this->lblPreuPunts->TabIndex = 23;
			this->lblPreuPunts->Text = L"Preu (punts)";
			this->lblPreuPunts->Click += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::lblPreuPunts_Click);
			// 
			// RegistrarEsdevenimentUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 624);
			this->Controls->Add(this->panelDesktop);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"RegistrarEsdevenimentUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegistrarEsdevenimentUI";
			this->Load += gcnew System::EventHandler(this, &RegistrarEsdevenimentUI::RegistrarEsdevenimentUI_Load);
			this->panelDesktop->ResumeLayout(false);
			this->PANEL_registrar_esdeveniment->ResumeLayout(false);
			this->PANEL_registrar_esdeveniment->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Obtención de valores de los controles
			String^ nomEsdeveniment = this->lbl_nom_REGESD->Text;
			String^ preu = this->lbl_preu_REGESD->Text;
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

			// Obtención de usuario y entidad
			UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
			PassarelaEntitat^ passEnt = safe_cast<PassarelaEntitat^>(usuario->getUsuari());

			// Creación de la transacción y ejecución
			TxRegistraEsdeveniment tx1(5236, nomEsdeveniment, Convert::ToSingle(preu), descripcio, ajuntament, tipus, aforament, puntsCost, data, puntsDesc);
			tx1.executar();

			// Cierre de la ventana
			this->Close();
		}
		catch (FormatException^ ex) {
			MessageBox::Show("Error en el formato de los datos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (OverflowException^ ex) {
			MessageBox::Show("Valor fuera de rango: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ha ocurrido un error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panelDesktop_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}



private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblPreuPunts_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistrarEsdevenimentUI_Load(System::Object^ sender, System::EventArgs^ e) {
}





private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}