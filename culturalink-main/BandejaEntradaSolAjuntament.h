#pragma once

#include "TxConsultaEsdevenimentsAjuntament.h"
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
			//this->panel2 = (gcnew System::Windows::Forms::Panel());
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
			//this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(861, 66);
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
			this->panel9->Location = System::Drawing::Point(735, 706);
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
			this->panel8->Location = System::Drawing::Point(1057, 706);
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
			this->panel6->Location = System::Drawing::Point(897, 706);
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
			this->listBox2->Location = System::Drawing::Point(144, 69);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(69, 20);
			this->listBox2->TabIndex = 21;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"GENER", L"FEBRER", L"MARÇ", L"ABRIL", L"MAIG",
					L"JUNY", L"JULIOL", L"AGOST", L"SETEMBRE", L"OCTUBRE", L"NOVEMBRE", L"DECEMBRE"
			});
			this->listBox1->Location = System::Drawing::Point(35, 69);
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
			this->label13->Location = System::Drawing::Point(31, 22);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(357, 31);
			this->label13->TabIndex = 19;
			this->label13->Text = L"BANDEJA ENTRADA SOLICITUDES";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::White;
			//this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(35, 140);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1167, 544);
			this->flowLayoutPanel1->TabIndex = 18;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BandejaEntradaSolAjuntament::flowLayoutPanel1_Paint);
			//// 
			//// button3
			//// 
			//this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			//	static_cast<System::Int32>(static_cast<System::Byte>(0)));
			//this->button3->Location = System::Drawing::Point(926, 8);
			//this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			//this->button3->Name = L"button3";
			//this->button3->Size = System::Drawing::Size(95, 31);
			//this->button3->TabIndex = 7;
			//this->button3->Text = L"APROVAR";
			//this->button3->UseVisualStyleBackColor = false;
			//this->button3->Click += gcnew System::EventHandler(this, &BandejaEntradaSolAjuntament::button3_Click);
			//// 
			//// button2
			//// 
			//this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
			//	static_cast<System::Int32>(static_cast<System::Byte>(0)));
			//this->button2->Location = System::Drawing::Point(1048, 8);
			//this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			//this->button2->Name = L"button2";
			//this->button2->Size = System::Drawing::Size(95, 31);
			//this->button2->TabIndex = 6;
			//this->button2->Text = L"DENEGAR";
			//this->button2->UseVisualStyleBackColor = false;
			//// 
			//// button1
			//// 
			//this->button1->Location = System::Drawing::Point(607, 12);
			//this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			//this->button1->Name = L"button1";
			//this->button1->Size = System::Drawing::Size(95, 23);
			//this->button1->TabIndex = 5;
			//this->button1->Text = L"Veure Desc.";
			//this->button1->UseVisualStyleBackColor = true;
			//this->button1->Click += gcnew System::EventHandler(this, &BandejaEntradaSolAjuntament::button1_Click);
			//// 
			//// label10
			//// 
			//this->label10->AutoSize = true;
			//this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			//	static_cast<System::Byte>(0)));
			//this->label10->Location = System::Drawing::Point(157, 16);
			//this->label10->Name = L"label10";
			//this->label10->Size = System::Drawing::Size(88, 17);
			//this->label10->TabIndex = 4;
			//this->label10->Text = L"Esdeveniment";
			//this->label10->Click += gcnew System::EventHandler(this, &BandejaEntradaSolAjuntament::label10_Click);
			//// 
			//// label9
			//// 
			//this->label9->AutoSize = true;
			//this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			//	static_cast<System::Byte>(0)));
			//this->label9->Location = System::Drawing::Point(393, 16);
			//this->label9->Name = L"label9";
			//this->label9->Size = System::Drawing::Size(74, 17);
			//this->label9->TabIndex = 3;
			//this->label9->Text = L"01/01/2024";
			//this->label9->Click += gcnew System::EventHandler(this, &BandejaEntradaSolAjuntament::label9_Click);
			//// 
			//// label6
			//// 
			//this->label6->AutoSize = true;
			//this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			//	static_cast<System::Byte>(0)));
			//this->label6->Location = System::Drawing::Point(28, 16);
			//this->label6->Name = L"label6";
			//this->label6->Size = System::Drawing::Size(56, 17);
			//this->label6->TabIndex = 0;
			//this->label6->Text = L"XXXXXX";
			//this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			//this->label6->Click += gcnew System::EventHandler(this, &BandejaEntradaSolAjuntament::label6_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(35, 107);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1165, 32);
			this->panel1->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(948, 9);
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
			this->label8->Location = System::Drawing::Point(448, 9);
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
			this->ClientSize = System::Drawing::Size(1239, 759);
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
			this->Text = L"BandejaEntradaSolAjuntament";
			this->Load += gcnew System::EventHandler(this, &BandejaEntradaSolAjuntament::BandejaEntradaSolAjuntament_Load);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			/*this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();*/
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void BandejaEntradaSolAjuntament_Load(System::Object^ sender, System::EventArgs^ e) {

		addDynamicPanel();
		//TxConsultaEsdevenimentsAjuntament txConsEsdevAj;
		//UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
		//PassarelaAjuntament^ passAj = safe_cast<PassarelaAjuntament^>(usuario->getUsuari());
		//txConsEsdevAj.executar(passAj->getNom());
		//List<String^>^ res;
		//res = txConsEsdevAj.getResult();
		//// Verificar si hay resultados antes de acceder al primer elemento
		//if (res->Count > 0) {
		//	label6->Text = res[0];
		//	label10->Text = res[1];
		//	label9->Text = res[2];
		//}
		//else {
		//	label6->Text = passAj->getNom();
		//}
		
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
private: Void addDynamicPanel() {
	System::Windows::Forms::Panel^ pnlEsdev = gcnew Panel;
	pnlEsdev->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	/*pnlEsdev->Controls->Add(this->button3);
	pnlEsdev->Controls->Add(this->customButton);
	pnlEsdev->Controls->Add(this->button2);
	pnlEsdev->Controls->Add(this->button1);
	pnlEsdev->Controls->Add(this->label10);
	pnlEsdev->Controls->Add(this->label9);
	pnlEsdev->Controls->Add(this->label6);*/
	pnlEsdev->Location = System::Drawing::Point(3, 2);
	pnlEsdev->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
	pnlEsdev->Name = L"panel2";
	pnlEsdev->Size = System::Drawing::Size(1165, 48);
	pnlEsdev->TabIndex = 0;

	//CUST BUTTON
	CustomControls::CustomButton^ customButton = (gcnew CustomControls::CustomButton());
	customButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	customButton->Location = System::Drawing::Point(900, 8);
	customButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
	customButton->Name = L"custButt";
	customButton->Size = System::Drawing::Size(95, 31);
	customButton->TabIndex = 7;
	customButton->Text = L"CUST APROVAR";
	customButton->UseVisualStyleBackColor = false;

	pnlEsdev->Controls->Add(customButton);

	this->flowLayoutPanel1->Controls->Add(pnlEsdev);
}
//private: Void addEsdevToUI(Esdeveniment^ esdev)
//{
//	System::Windows::Forms::Panel^ pnlEsdev = gcnew Panel;
//	pnlEsdev->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
//	pnlEsdev->Location = System::Drawing::Point(0, 0);
//	pnlEsdev->Name = String::Format("pnlEsdev{0}", esdev->getNom());
//	pnlEsdev->Size = System::Drawing::Size(165, 235);
//	pnlEsdev->TabIndex = 2;
//	pnlEsdev->Visible = true;
//
//	System::Windows::Forms::Label^ lblEsdev = gcnew Label;
//	lblEsdev->Name = String::Format("lblEsdev{0}", esdev->getNom());
//	lblEsdev->Text = esdev->getNom();
//	lblEsdev->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
//		static_cast<System::Byte>(0)));
//	lblEsdev->Location = System::Drawing::Point(59, 168);
//	lblEsdev->Dock = System::Windows::Forms::DockStyle::Bottom;
//
//	System::Windows::Forms::Label^ lblEsdevPreu = gcnew Label;
//	lblEsdevPreu->Name = String::Format("lblEsdevPreu{0}", esdev->getPreu());
//	lblEsdevPreu->Text = esdev->getPreu() + " €";
//	lblEsdevPreu->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
//		static_cast<System::Byte>(0)));
//	lblEsdevPreu->Location = System::Drawing::Point(59, 168);
//	lblEsdevPreu->Dock = System::Windows::Forms::DockStyle::Bottom;
//
//	//CustomButton^ btnConsultar = gcnew CustomButton("Messi", "Gala");
//	Button^ btnConsultar = gcnew Button;
//	btnConsultar->Name = "btnMoreInfo{0}";
//	btnConsultar->Text = "+ Info";
//	btnConsultar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
//		static_cast<System::Byte>(0)));
//	btnConsultar->BackColor = System::Drawing::Color::Black;
//	btnConsultar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
//	btnConsultar->ForeColor = System::Drawing::Color::White;
//	btnConsultar->Dock = System::Windows::Forms::DockStyle::Bottom;
//
//	btnConsultar->Click += gcnew System::EventHandler(this, &ProvesUI::btnConsultar_Click);
//
//	pnlEsdev->Controls->Add(this->pictureBox6);
//	pnlEsdev->Controls->Add(lblEsdev);
//	pnlEsdev->Controls->Add(lblEsdevPreu);
//	pnlEsdev->Controls->Add(btnConsultar);
//
//	this->flowLayoutPanel1->Controls->Add(pnlEsdev);
//}
};
}
