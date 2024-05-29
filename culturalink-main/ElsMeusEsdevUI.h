#pragma once

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ElsMeusEsdevUI
	/// </summary>
	public ref class ElsMeusEsdevUI : public System::Windows::Forms::Form
	{
	public:
		ElsMeusEsdevUI(void)
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
		~ElsMeusEsdevUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PANELMeusEsdevs;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanelMESDEV;
	private: System::Windows::Forms::Panel^ pnlDynMESDEVex;
	private: System::Windows::Forms::Label^ lblNomEsdevMESDEVex;
	private: System::Windows::Forms::Label^ lblDataMESDEVex;
	private: System::Windows::Forms::Label^ lblPreuMESDEVex;
	private: System::Windows::Forms::Panel^ pnlMetodeFMESDEVex;
	private: System::Windows::Forms::Label^ lblMetodeMESDEVex;
	private: System::Windows::Forms::Panel^ pnlTitlesMESDEV;
	private: System::Windows::Forms::Label^ lblNomEsdevMESDEVen;
	private: System::Windows::Forms::Label^ lblDataMESDEVen;
	private: System::Windows::Forms::Label^ lblPreuMESDEVen;
	private: System::Windows::Forms::Label^ lblMetPagMESDEVen;
	private: System::Windows::Forms::Panel^ pnlTotGastatEsqMESDEV;
	private: System::Windows::Forms::Label^ lblTotGastatMESDEVen;
	private: System::Windows::Forms::Panel^ pnlTotGastatDretaMESDEV;
	private: System::Windows::Forms::Label^ lblTotGastatMESDEV;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ElsMeusEsdevUI::typeid));
			this->PANELMeusEsdevs = (gcnew System::Windows::Forms::Panel());
			this->pnlTotGastatEsqMESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblTotGastatMESDEVen = (gcnew System::Windows::Forms::Label());
			this->pnlTotGastatDretaMESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblTotGastatMESDEV = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanelMESDEV = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlDynMESDEVex = (gcnew System::Windows::Forms::Panel());
			this->lblNomEsdevMESDEVex = (gcnew System::Windows::Forms::Label());
			this->lblDataMESDEVex = (gcnew System::Windows::Forms::Label());
			this->lblPreuMESDEVex = (gcnew System::Windows::Forms::Label());
			this->pnlMetodeFMESDEVex = (gcnew System::Windows::Forms::Panel());
			this->lblMetodeMESDEVex = (gcnew System::Windows::Forms::Label());
			this->pnlTitlesMESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblNomEsdevMESDEVen = (gcnew System::Windows::Forms::Label());
			this->lblDataMESDEVen = (gcnew System::Windows::Forms::Label());
			this->lblPreuMESDEVen = (gcnew System::Windows::Forms::Label());
			this->lblMetPagMESDEVen = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PANELMeusEsdevs->SuspendLayout();
			this->pnlTotGastatEsqMESDEV->SuspendLayout();
			this->pnlTotGastatDretaMESDEV->SuspendLayout();
			this->flowLayoutPanelMESDEV->SuspendLayout();
			this->pnlDynMESDEVex->SuspendLayout();
			this->pnlMetodeFMESDEVex->SuspendLayout();
			this->pnlTitlesMESDEV->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// PANELMeusEsdevs
			// 
			this->PANELMeusEsdevs->BackColor = System::Drawing::Color::WhiteSmoke;
			this->PANELMeusEsdevs->Controls->Add(this->pnlTotGastatEsqMESDEV);
			this->PANELMeusEsdevs->Controls->Add(this->flowLayoutPanelMESDEV);
			this->PANELMeusEsdevs->Controls->Add(this->pnlTitlesMESDEV);
			this->PANELMeusEsdevs->Location = System::Drawing::Point(27, 22);
			this->PANELMeusEsdevs->Name = L"PANELMeusEsdevs";
			this->PANELMeusEsdevs->Size = System::Drawing::Size(792, 628);
			this->PANELMeusEsdevs->TabIndex = 0;
			// 
			// pnlTotGastatEsqMESDEV
			// 
			this->pnlTotGastatEsqMESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlTotGastatEsqMESDEV->Controls->Add(this->lblTotGastatMESDEVen);
			this->pnlTotGastatEsqMESDEV->Controls->Add(this->pnlTotGastatDretaMESDEV);
			this->pnlTotGastatEsqMESDEV->Location = System::Drawing::Point(468, 552);
			this->pnlTotGastatEsqMESDEV->Name = L"pnlTotGastatEsqMESDEV";
			this->pnlTotGastatEsqMESDEV->Size = System::Drawing::Size(324, 41);
			this->pnlTotGastatEsqMESDEV->TabIndex = 4;
			// 
			// lblTotGastatMESDEVen
			// 
			this->lblTotGastatMESDEVen->AutoSize = true;
			this->lblTotGastatMESDEVen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotGastatMESDEVen->ForeColor = System::Drawing::Color::White;
			this->lblTotGastatMESDEVen->Location = System::Drawing::Point(27, 12);
			this->lblTotGastatMESDEVen->Name = L"lblTotGastatMESDEVen";
			this->lblTotGastatMESDEVen->Size = System::Drawing::Size(97, 17);
			this->lblTotGastatMESDEVen->TabIndex = 1;
			this->lblTotGastatMESDEVen->Text = L"TOTAL GASTAT:";
			// 
			// pnlTotGastatDretaMESDEV
			// 
			this->pnlTotGastatDretaMESDEV->BackColor = System::Drawing::Color::White;
			this->pnlTotGastatDretaMESDEV->Controls->Add(this->lblTotGastatMESDEV);
			this->pnlTotGastatDretaMESDEV->Location = System::Drawing::Point(140, 3);
			this->pnlTotGastatDretaMESDEV->Name = L"pnlTotGastatDretaMESDEV";
			this->pnlTotGastatDretaMESDEV->Size = System::Drawing::Size(181, 35);
			this->pnlTotGastatDretaMESDEV->TabIndex = 0;
			// 
			// lblTotGastatMESDEV
			// 
			this->lblTotGastatMESDEV->AutoSize = true;
			this->lblTotGastatMESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotGastatMESDEV->Location = System::Drawing::Point(74, 9);
			this->lblTotGastatMESDEV->Name = L"lblTotGastatMESDEV";
			this->lblTotGastatMESDEV->Size = System::Drawing::Size(43, 17);
			this->lblTotGastatMESDEV->TabIndex = 0;
			this->lblTotGastatMESDEV->Text = L"0.00 €";
			// 
			// flowLayoutPanelMESDEV
			// 
			this->flowLayoutPanelMESDEV->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanelMESDEV->Controls->Add(this->pnlDynMESDEVex);
			this->flowLayoutPanelMESDEV->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanelMESDEV->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanelMESDEV->Location = System::Drawing::Point(0, 32);
			this->flowLayoutPanelMESDEV->Name = L"flowLayoutPanelMESDEV";
			this->flowLayoutPanelMESDEV->Size = System::Drawing::Size(792, 488);
			this->flowLayoutPanelMESDEV->TabIndex = 3;
			// 
			// pnlDynMESDEVex
			// 
			this->pnlDynMESDEVex->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlDynMESDEVex->Controls->Add(this->lblNomEsdevMESDEVex);
			this->pnlDynMESDEVex->Controls->Add(this->lblDataMESDEVex);
			this->pnlDynMESDEVex->Controls->Add(this->lblPreuMESDEVex);
			this->pnlDynMESDEVex->Controls->Add(this->pnlMetodeFMESDEVex);
			this->pnlDynMESDEVex->Location = System::Drawing::Point(3, 3);
			this->pnlDynMESDEVex->Name = L"pnlDynMESDEVex";
			this->pnlDynMESDEVex->Size = System::Drawing::Size(786, 48);
			this->pnlDynMESDEVex->TabIndex = 0;
			// 
			// lblNomEsdevMESDEVex
			// 
			this->lblNomEsdevMESDEVex->AutoSize = true;
			this->lblNomEsdevMESDEVex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomEsdevMESDEVex->Location = System::Drawing::Point(36, 17);
			this->lblNomEsdevMESDEVex->Name = L"lblNomEsdevMESDEVex";
			this->lblNomEsdevMESDEVex->Size = System::Drawing::Size(123, 17);
			this->lblNomEsdevMESDEVex->TabIndex = 4;
			this->lblNomEsdevMESDEVex->Text = L"NomEsdeveniment";
			// 
			// lblDataMESDEVex
			// 
			this->lblDataMESDEVex->AutoSize = true;
			this->lblDataMESDEVex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDataMESDEVex->Location = System::Drawing::Point(245, 14);
			this->lblDataMESDEVex->Name = L"lblDataMESDEVex";
			this->lblDataMESDEVex->Size = System::Drawing::Size(74, 17);
			this->lblDataMESDEVex->TabIndex = 3;
			this->lblDataMESDEVex->Text = L"01/01/2024";
			// 
			// lblPreuMESDEVex
			// 
			this->lblPreuMESDEVex->AutoSize = true;
			this->lblPreuMESDEVex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPreuMESDEVex->Location = System::Drawing::Point(451, 14);
			this->lblPreuMESDEVex->Name = L"lblPreuMESDEVex";
			this->lblPreuMESDEVex->Size = System::Drawing::Size(43, 17);
			this->lblPreuMESDEVex->TabIndex = 2;
			this->lblPreuMESDEVex->Text = L"0.00 €";
			// 
			// pnlMetodeFMESDEVex
			// 
			this->pnlMetodeFMESDEVex->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->pnlMetodeFMESDEVex->Controls->Add(this->lblMetodeMESDEVex);
			this->pnlMetodeFMESDEVex->Location = System::Drawing::Point(599, 7);
			this->pnlMetodeFMESDEVex->Name = L"pnlMetodeFMESDEVex";
			this->pnlMetodeFMESDEVex->Size = System::Drawing::Size(143, 29);
			this->pnlMetodeFMESDEVex->TabIndex = 1;
			// 
			// lblMetodeMESDEVex
			// 
			this->lblMetodeMESDEVex->AutoSize = true;
			this->lblMetodeMESDEVex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMetodeMESDEVex->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->lblMetodeMESDEVex->Location = System::Drawing::Point(26, 6);
			this->lblMetodeMESDEVex->Name = L"lblMetodeMESDEVex";
			this->lblMetodeMESDEVex->Size = System::Drawing::Size(93, 17);
			this->lblMetodeMESDEVex->TabIndex = 0;
			this->lblMetodeMESDEVex->Text = L"Trageta Crèdit";
			// 
			// pnlTitlesMESDEV
			// 
			this->pnlTitlesMESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlTitlesMESDEV->Controls->Add(this->lblNomEsdevMESDEVen);
			this->pnlTitlesMESDEV->Controls->Add(this->lblDataMESDEVen);
			this->pnlTitlesMESDEV->Controls->Add(this->lblPreuMESDEVen);
			this->pnlTitlesMESDEV->Controls->Add(this->lblMetPagMESDEVen);
			this->pnlTitlesMESDEV->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTitlesMESDEV->Location = System::Drawing::Point(0, 0);
			this->pnlTitlesMESDEV->Name = L"pnlTitlesMESDEV";
			this->pnlTitlesMESDEV->Size = System::Drawing::Size(792, 32);
			this->pnlTitlesMESDEV->TabIndex = 2;
			// 
			// lblNomEsdevMESDEVen
			// 
			this->lblNomEsdevMESDEVen->AutoSize = true;
			this->lblNomEsdevMESDEVen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomEsdevMESDEVen->ForeColor = System::Drawing::Color::White;
			this->lblNomEsdevMESDEVen->Location = System::Drawing::Point(37, 8);
			this->lblNomEsdevMESDEVen->Name = L"lblNomEsdevMESDEVen";
			this->lblNomEsdevMESDEVen->Size = System::Drawing::Size(126, 16);
			this->lblNomEsdevMESDEVen->TabIndex = 4;
			this->lblNomEsdevMESDEVen->Text = L"ESDEVENIMENT";
			// 
			// lblDataMESDEVen
			// 
			this->lblDataMESDEVen->AutoSize = true;
			this->lblDataMESDEVen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDataMESDEVen->ForeColor = System::Drawing::Color::White;
			this->lblDataMESDEVen->Location = System::Drawing::Point(223, 9);
			this->lblDataMESDEVen->Name = L"lblDataMESDEVen";
			this->lblDataMESDEVen->Size = System::Drawing::Size(148, 16);
			this->lblDataMESDEVen->TabIndex = 3;
			this->lblDataMESDEVen->Text = L"DATA FACTURACIÓ";
			// 
			// lblPreuMESDEVen
			// 
			this->lblPreuMESDEVen->AutoSize = true;
			this->lblPreuMESDEVen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPreuMESDEVen->ForeColor = System::Drawing::Color::White;
			this->lblPreuMESDEVen->Location = System::Drawing::Point(449, 9);
			this->lblPreuMESDEVen->Name = L"lblPreuMESDEVen";
			this->lblPreuMESDEVen->Size = System::Drawing::Size(56, 16);
			this->lblPreuMESDEVen->TabIndex = 2;
			this->lblPreuMESDEVen->Text = L"TOTAL";
			// 
			// lblMetPagMESDEVen
			// 
			this->lblMetPagMESDEVen->AutoSize = true;
			this->lblMetPagMESDEVen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMetPagMESDEVen->ForeColor = System::Drawing::Color::White;
			this->lblMetPagMESDEVen->Location = System::Drawing::Point(596, 8);
			this->lblMetPagMESDEVen->Name = L"lblMetPagMESDEVen";
			this->lblMetPagMESDEVen->Size = System::Drawing::Size(159, 16);
			this->lblMetPagMESDEVen->TabIndex = 1;
			this->lblMetPagMESDEVen->Text = L"MÈTODE PAGAMENT";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(886, 54);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(206, 243);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Location = System::Drawing::Point(0, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label1->Location = System::Drawing::Point(0, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(206, 183);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// ElsMeusEsdevUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1387, 724);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->PANELMeusEsdevs);
			this->Name = L"ElsMeusEsdevUI";
			this->Text = L"ElsMeusEsdevUI";
			this->Load += gcnew System::EventHandler(this, &ElsMeusEsdevUI::ElsMeusEsdevUI_Load);
			this->PANELMeusEsdevs->ResumeLayout(false);
			this->pnlTotGastatEsqMESDEV->ResumeLayout(false);
			this->pnlTotGastatEsqMESDEV->PerformLayout();
			this->pnlTotGastatDretaMESDEV->ResumeLayout(false);
			this->pnlTotGastatDretaMESDEV->PerformLayout();
			this->flowLayoutPanelMESDEV->ResumeLayout(false);
			this->pnlDynMESDEVex->ResumeLayout(false);
			this->pnlDynMESDEVex->PerformLayout();
			this->pnlMetodeFMESDEVex->ResumeLayout(false);
			this->pnlMetodeFMESDEVex->PerformLayout();
			this->pnlTitlesMESDEV->ResumeLayout(false);
			this->pnlTitlesMESDEV->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void ElsMeusEsdevUI_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
