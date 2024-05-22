#pragma once

#include "TxConsultaEsdevenimentsAjuntament.h"
#include "TxCanviaEstatPeticio.h"
#include "CustomButtonEsdev.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CustomControls;
	/// <summary>
	/// Resumen de BandejaEntradaSolAjuntament
	/// </summary>
	public ref class BandejaEntradaSolAjuntament : public System::Windows::Forms::Form
	{
	public:
		BandejaEntradaSolAjuntament(void)
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
		~BandejaEntradaSolAjuntament()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	//private: CustomButtonEsdev^ customButton;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label16;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ pnlExample;
	private: System::Windows::Forms::Label^ lblExData;

	private: System::Windows::Forms::Label^ lblExNomEsdev;
	private: System::Windows::Forms::Label^ lblExIdEnt;
	private: System::Windows::Forms::Button^ btnExDenegar;

	private: System::Windows::Forms::Button^ btnExAcceptar;

	private: System::Windows::Forms::Button^ btnExViewDesc;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlExample = (gcnew System::Windows::Forms::Panel());
			this->btnExDenegar = (gcnew System::Windows::Forms::Button());
			this->btnExAcceptar = (gcnew System::Windows::Forms::Button());
			this->btnExViewDesc = (gcnew System::Windows::Forms::Button());
			this->lblExData = (gcnew System::Windows::Forms::Label());
			this->lblExNomEsdev = (gcnew System::Windows::Forms::Label());
			this->lblExIdEnt = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->pnlExample->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1061, 110);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 22);
			this->textBox1->TabIndex = 26;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::DarkGray;
			this->panel9->Controls->Add(this->label17);
			this->panel9->ForeColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(42, 53);
			this->panel9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(143, 30);
			this->panel9->TabIndex = 23;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(43, 6);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(61, 17);
			this->label17->TabIndex = 0;
			this->label17->Text = L"DEFAULT";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::LimeGreen;
			this->panel8->Controls->Add(this->label16);
			this->panel8->ForeColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(42, 153);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(143, 30);
			this->panel8->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(39, 6);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 17);
			this->label16->TabIndex = 0;
			this->label16->Text = L"APROVAT";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::OrangeRed;
			this->panel6->Controls->Add(this->label14);
			this->panel6->ForeColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(42, 103);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(143, 30);
			this->panel6->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(43, 6);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 17);
			this->label14->TabIndex = 0;
			this->label14->Text = L"DENEGAT";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"2020", L"2021", L"2022", L"2023", L"2024", L"2025",
					L"2026", L"2027", L"2028", L"2029", L"2030"
			});
			this->listBox2->Location = System::Drawing::Point(344, 113);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(69, 20);
			this->listBox2->TabIndex = 21;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &BandejaEntradaSolAjuntament::listBox2_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"GENER", L"FEBRER", L"MARÇ", L"ABRIL", L"MAIG",
					L"JUNY", L"JULIOL", L"AGOST", L"SETEMBRE", L"OCTUBRE", L"NOVEMBRE", L"DECEMBRE"
			});
			this->listBox1->Location = System::Drawing::Point(235, 113);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(104, 20);
			this->listBox1->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(231, 66);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(357, 31);
			this->label13->TabIndex = 19;
			this->label13->Text = L"BANDEJA ENTRADA SOLICITUDES";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanel1->Controls->Add(this->pnlExample);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(235, 184);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1168, 544);
			this->flowLayoutPanel1->TabIndex = 18;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BandejaEntradaSolAjuntament::flowLayoutPanel1_Paint);
			// 
			// pnlExample
			// 
			this->pnlExample->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlExample->Controls->Add(this->btnExDenegar);
			this->pnlExample->Controls->Add(this->btnExAcceptar);
			this->pnlExample->Controls->Add(this->btnExViewDesc);
			this->pnlExample->Controls->Add(this->lblExData);
			this->pnlExample->Controls->Add(this->lblExNomEsdev);
			this->pnlExample->Controls->Add(this->lblExIdEnt);
			this->pnlExample->Location = System::Drawing::Point(3, 3);
			this->pnlExample->Name = L"pnlExample";
			this->pnlExample->Size = System::Drawing::Size(1162, 53);
			this->pnlExample->TabIndex = 0;
			this->pnlExample->Visible = false;
			// 
			// btnExDenegar
			// 
			this->btnExDenegar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExDenegar->Location = System::Drawing::Point(1025, 16);
			this->btnExDenegar->Name = L"btnExDenegar";
			this->btnExDenegar->Size = System::Drawing::Size(98, 25);
			this->btnExDenegar->TabIndex = 6;
			this->btnExDenegar->Text = L"DENEGAR";
			this->btnExDenegar->UseVisualStyleBackColor = true;
			// 
			// btnExAcceptar
			// 
			this->btnExAcceptar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExAcceptar->Location = System::Drawing::Point(905, 16);
			this->btnExAcceptar->Name = L"btnExAcceptar";
			this->btnExAcceptar->Size = System::Drawing::Size(98, 25);
			this->btnExAcceptar->TabIndex = 5;
			this->btnExAcceptar->Text = L"ACCEPTAR";
			this->btnExAcceptar->UseVisualStyleBackColor = true;
			// 
			// btnExViewDesc
			// 
			this->btnExViewDesc->Location = System::Drawing::Point(608, 16);
			this->btnExViewDesc->Name = L"btnExViewDesc";
			this->btnExViewDesc->Size = System::Drawing::Size(85, 23);
			this->btnExViewDesc->TabIndex = 4;
			this->btnExViewDesc->Text = L"View Desc.";
			this->btnExViewDesc->UseVisualStyleBackColor = true;
			// 
			// lblExData
			// 
			this->lblExData->AutoSize = true;
			this->lblExData->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExData->Location = System::Drawing::Point(391, 18);
			this->lblExData->Name = L"lblExData";
			this->lblExData->Size = System::Drawing::Size(70, 17);
			this->lblExData->TabIndex = 2;
			this->lblExData->Text = L"01-01-2000";
			// 
			// lblExNomEsdev
			// 
			this->lblExNomEsdev->AutoSize = true;
			this->lblExNomEsdev->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExNomEsdev->Location = System::Drawing::Point(158, 18);
			this->lblExNomEsdev->Name = L"lblExNomEsdev";
			this->lblExNomEsdev->Size = System::Drawing::Size(123, 17);
			this->lblExNomEsdev->TabIndex = 1;
			this->lblExNomEsdev->Text = L"NomEsdeveniment";
			// 
			// lblExIdEnt
			// 
			this->lblExIdEnt->AutoSize = true;
			this->lblExIdEnt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExIdEnt->Location = System::Drawing::Point(12, 18);
			this->lblExIdEnt->Name = L"lblExIdEnt";
			this->lblExIdEnt->Size = System::Drawing::Size(56, 17);
			this->lblExIdEnt->TabIndex = 0;
			this->lblExIdEnt->Text = L"XXXXXX";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(0, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(0, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 23);
			this->label10->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 23);
			this->label9->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(235, 151);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1162, 32);
			this->panel1->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(928, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"SEL.LECCIONAR ESTAT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(608, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"DESCRIPCIÓ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(152, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"ESDEVENIMENT";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(367, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"DATA SOL.LICITUD";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(32, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::ForestGreen;
			this->label8->Location = System::Drawing::Point(648, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(769, 16);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Comentari Arturo: Una vegada enviat (previament cal sel.leccionar l\'estat) cal qu"
				L"e el panell de l\'esdeveniment tractat desapareixi";
			// 
			// BandejaEntradaSolAjuntament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1530, 805);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"BandejaEntradaSolAjuntament";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BandejaEntradaSolAjuntament";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &BandejaEntradaSolAjuntament::BandejaEntradaSolAjuntament_Load);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->pnlExample->ResumeLayout(false);
			this->pnlExample->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void BandejaEntradaSolAjuntament_Load(System::Object^ sender, System::EventArgs^ e) {

		int comptEsdevAjunt = 0;

		TxConsultaEsdevenimentsAjuntament txConsEsdevAj;
		UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
		PassarelaAjuntament^ passAj = safe_cast<PassarelaAjuntament^>(usuario->getUsuari());
		txConsEsdevAj.executar(passAj->getNom());
		List<String^>^ res;
		res = txConsEsdevAj.getResult();
		// Verificar si hay resultados antes de acceder al primer elemento
		comptEsdevAjunt = res->Count;
		for (int i = 0; i < comptEsdevAjunt; i = i+4) {
			if (i + 3 < res->Count) {
				addDynamicPanel(res[i], res[i + 1], res[i + 2], res[i + 3]);
			}
			else {
				// Handle the case where there are not enough elements
				// This could be logging an error, breaking the loop, or any other error handling
				break; // or continue; or any other handling logic
			}
		}		
	}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: Void addDynamicPanel(String^ lblIdEnt, String^ lblNomEsdev, String^ data, String^ descEsdev) {
	////CUST BUTTON
	//CustomControls::CustomButton^ customButton = (gcnew CustomControls::CustomButton());
	//customButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
	//	static_cast<System::Int32>(static_cast<System::Byte>(0)));
	//customButton->Location = System::Drawing::Point(900, 8);
	//customButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
	//customButton->Name = L"custButt";
	//customButton->Size = System::Drawing::Size(95, 31);
	//customButton->TabIndex = 7;
	//customButton->Text = L"CUST APROVAR";
	//customButton->UseVisualStyleBackColor = false;

	System::Windows::Forms::Panel^ pnlDyn = gcnew Panel;
	System::Windows::Forms::Label^ lblDynIdEnt = gcnew Label;
	System::Windows::Forms::Label^ lblDynNomEsdev = gcnew Label;
	System::Windows::Forms::Label^ lblDynData = gcnew Label;
	CustomButton^ btnDynViewDesc = gcnew CustomButton;
	CustomButton^ btnDynAcceptar = gcnew CustomButton;
	CustomButton^ btnDynDenegar = gcnew CustomButton;

	System::Windows::Forms::Label^ lblViewDesc = gcnew Label;


	pnlDyn->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	pnlDyn->Location = System::Drawing::Point(3, 3);
	pnlDyn->Name = L"pnlDyn";
	//pnlDyn->Dock = System::Windows::Forms::DockStyle::Fill;
	pnlDyn->Size = System::Drawing::Size(1162, 53);
	pnlDyn->TabIndex = 0;

	// 
	// btnExDenegar
	// 
	btnDynDenegar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	btnDynDenegar->Location = System::Drawing::Point(1025, 16);
	btnDynDenegar->Name = L"btnExDenegar";
	btnDynDenegar->Size = System::Drawing::Size(98, 25);
	btnDynDenegar->TabIndex = 6;
	btnDynDenegar->Text = L"DENEGAR";
	btnDynDenegar->UseVisualStyleBackColor = true;
	btnDynDenegar->Click += gcnew EventHandler(this, &BandejaEntradaSolAjuntament::ButtonCancelar_Click);
	btnDynDenegar->NomEsdev = lblNomEsdev;
	// 
	// btnExAcceptar
	// 
	btnDynAcceptar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	btnDynAcceptar->Location = System::Drawing::Point(905, 16);
	btnDynAcceptar->Name = L"btnExAcceptar";
	btnDynAcceptar->Size = System::Drawing::Size(98, 25);
	btnDynAcceptar->TabIndex = 5;
	btnDynAcceptar->Text = L"ACCEPTAR";
	btnDynAcceptar->UseVisualStyleBackColor = true;
	btnDynAcceptar->Click += gcnew EventHandler(this, &BandejaEntradaSolAjuntament::ButtonAcceptar_Click);
	btnDynAcceptar->NomEsdev = lblNomEsdev;

	// 
	// btnExViewDesc
	// 
	btnDynViewDesc->Location = System::Drawing::Point(608-160, 16);
	btnDynViewDesc->Name = L"btnExViewDesc";
	btnDynViewDesc->Size = System::Drawing::Size(85, 23);
	btnDynViewDesc->TabIndex = 4;
	btnDynViewDesc->Text = L"Ver Desc.";
	btnDynViewDesc->UseVisualStyleBackColor = true;
	btnDynViewDesc->Click += gcnew EventHandler(this, &BandejaEntradaSolAjuntament::ButtonViewDesc_Click);
	btnDynViewDesc->NomEsdev = descEsdev;
	

	// 
	// lblExData
	// 
	lblDynData->AutoSize = true;
	lblDynData->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblDynData->Location = System::Drawing::Point(391-120, 18);
	lblDynData->Name = L"lblExData";
	lblDynData->Size = System::Drawing::Size(70, 17);
	lblDynData->TabIndex = 2;
	lblDynData->Text = L"01-01-2000";
	// 
	// lblExNomEsdev
	// 
	lblDynNomEsdev->AutoSize = true;
	this->lblExNomEsdev->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblDynNomEsdev->Location = System::Drawing::Point(158-50, 18);
	lblDynNomEsdev->Name = L"lblExNomEsdev";
	lblDynNomEsdev->Size = System::Drawing::Size(123, 17);
	lblDynNomEsdev->TabIndex = 1;
	lblDynNomEsdev->Text = L"NomEsdeveniment";
	// 
	// lblExIdEnt
	// 
	lblDynIdEnt->AutoSize = true;
	lblDynIdEnt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblDynIdEnt->Location = System::Drawing::Point(12, 18);
	lblDynIdEnt->Name = L"lblExIdEnt";
	lblDynIdEnt->Size = System::Drawing::Size(56, 17);
	lblDynIdEnt->TabIndex = 0;
	lblDynIdEnt->Text = L"XXXXXX";

	//String^ lblIdEnt, String^ lblNomEsdev, String^ data, String^ descEsdev
	if (lblIdEnt->Length != 0) {
		lblDynIdEnt->Text = lblIdEnt;
	}
	if (lblNomEsdev->Length != 0) {
		lblDynNomEsdev->Text = lblNomEsdev;
	}
	if (data->Length != 0) {
		lblDynData->Text = data;
	}

	pnlDyn->Controls->Add(btnDynDenegar);
	pnlDyn->Controls->Add(btnDynAcceptar);
	pnlDyn->Controls->Add(btnDynViewDesc);
	pnlDyn->Controls->Add(lblDynData);
	pnlDyn->Controls->Add(lblDynNomEsdev);
	pnlDyn->Controls->Add(lblDynIdEnt);

	this->flowLayoutPanel1->Controls->Add(pnlDyn);
}

private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
	   
void ButtonViewDesc_Click(Object^ sender, EventArgs^ e)
{
	CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);
	if (clickedButton != nullptr) {
		String^ descEsdev = clickedButton->NomEsdev;
		MessageBox::Show(descEsdev);
	}
}

void ButtonAcceptar_Click(Object^ sender, EventArgs^ e) {
	//Button^ clickedButton = dynamic_cast<Button^>(sender);
	CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);

	if (clickedButton != nullptr)
	{
		// Find the parent control of the clicked button
		Control^ parent = clickedButton->Parent;

		// Remove the parent control (panel) from its container
		if (parent != nullptr)
		{
			this->flowLayoutPanel1->Controls->Remove(parent); // Borra DynPanel del flowPanel.
		}
	}

	String^ nomEsdev = clickedButton->NomEsdev;
	TxCanviaEstatPeticio txCanvEstPet(nomEsdev, true);
	txCanvEstPet.executar();
}
void ButtonCancelar_Click(Object^ sender, EventArgs^ e) {
	//Button^ clickedButton = dynamic_cast<Button^>(sender);
	CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);

	if (clickedButton != nullptr)
	{
		// Find the parent control of the clicked button
		Control^ parent = clickedButton->Parent;

		// Remove the parent control (panel) from its container
		if (parent != nullptr) {
			this->flowLayoutPanel1->Controls->Remove(parent); // Borra DynPanel del flowPanel.
		}
	}

	String^ nomEsdev = clickedButton->NomEsdev;
	TxCanviaEstatPeticio txCanvEstPet(nomEsdev, false);
	txCanvEstPet.executar();
}
};
}
