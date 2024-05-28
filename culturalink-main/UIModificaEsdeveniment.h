#pragma once

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UIModificaEsdeveniment
	/// </summary>
	public ref class UIModificaEsdeveniment : public System::Windows::Forms::Form
	{
	public:
		UIModificaEsdeveniment(void)
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
		~UIModificaEsdeveniment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PANELmodificaEsdev;
	protected:
	private: System::Windows::Forms::Panel^ pnlTopTitlesMODESDEV;
	private: System::Windows::Forms::Panel^ pnlNomEsdevMODESDEV;
	private: System::Windows::Forms::TextBox^ textBoxNomEsdevMODESDEV;
	private: System::Windows::Forms::Label^ lblNomEsdevMODESDEV;



	private: System::Windows::Forms::Panel^ pnlTipusMODESDEV;

	private: System::Windows::Forms::TextBox^ textBoxTipusMODESDEV;


	private: System::Windows::Forms::Panel^ pnlDescMODESDEV;
	private: System::Windows::Forms::TextBox^ textBoxDescMODESDEV;


	private: System::Windows::Forms::Panel^ pnlPreuMODESDEV;
	private: System::Windows::Forms::TextBox^ textBoxPreuMODESDEV;
	private: System::Windows::Forms::Label^ lblDescMODESDEV;



	private: System::Windows::Forms::Label^ lblPreuMODESDEV;
	private: System::Windows::Forms::Label^ lblTipusMODESDEV;
	private: System::Windows::Forms::Button^ btnAtrasMODESDEV;



	private: System::Windows::Forms::Button^ btnModificaMODESDEV;

	private: System::Windows::Forms::Panel^ pnlDataMODESDEV;
	private: System::Windows::Forms::Label^ lblDataMODESDEV;


	private: System::Windows::Forms::TextBox^ textBoxDataMODESDEV;

	private: System::Windows::Forms::Panel^ pnlPuntsCostMODESDEV;
	private: System::Windows::Forms::Label^ lblPuntsCostMODESDEV;


	private: System::Windows::Forms::TextBox^ textBoxPuntsCostMODESDEV;

	private: System::Windows::Forms::Panel^ pnlAforamentMODESDEV;
	private: System::Windows::Forms::Label^ lblAforamentMODESDEV;


	private: System::Windows::Forms::TextBox^ textBoxAforamentMODESDEV;
	private: System::Windows::Forms::Label^ lblTitleIDEsdevMODESDEV;



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
			/*this->PANELmodificaEsdev = (gcnew System::Windows::Forms::Panel());
			this->btnAtrasMODESDEV = (gcnew System::Windows::Forms::Button());
			this->btnModificaMODESDEV = (gcnew System::Windows::Forms::Button());
			this->pnlDataMODESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblDataMODESDEV = (gcnew System::Windows::Forms::Label());
			this->textBoxDataMODESDEV = (gcnew System::Windows::Forms::TextBox());
			this->pnlPuntsCostMODESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblPuntsCostMODESDEV = (gcnew System::Windows::Forms::Label());
			this->textBoxPuntsCostMODESDEV = (gcnew System::Windows::Forms::TextBox());
			this->pnlAforamentMODESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblAforamentMODESDEV = (gcnew System::Windows::Forms::Label());
			this->textBoxAforamentMODESDEV = (gcnew System::Windows::Forms::TextBox());
			this->pnlTipusMODESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblTipusMODESDEV = (gcnew System::Windows::Forms::Label());
			this->textBoxTipusMODESDEV = (gcnew System::Windows::Forms::TextBox());
			this->pnlDescMODESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblDescMODESDEV = (gcnew System::Windows::Forms::Label());
			this->textBoxDescMODESDEV = (gcnew System::Windows::Forms::TextBox());
			this->pnlPreuMODESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblPreuMODESDEV = (gcnew System::Windows::Forms::Label());
			this->textBoxPreuMODESDEV = (gcnew System::Windows::Forms::TextBox());
			this->pnlNomEsdevMODESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblNomEsdevMODESDEV = (gcnew System::Windows::Forms::Label());
			this->textBoxNomEsdevMODESDEV = (gcnew System::Windows::Forms::TextBox());
			this->pnlTopTitlesMODESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblTitleIDEsdevMODESDEV = (gcnew System::Windows::Forms::Label());*/
			this->PANELmodificaEsdev->SuspendLayout();
			this->pnlDataMODESDEV->SuspendLayout();
			this->pnlPuntsCostMODESDEV->SuspendLayout();
			this->pnlAforamentMODESDEV->SuspendLayout();
			this->pnlTipusMODESDEV->SuspendLayout();
			this->pnlDescMODESDEV->SuspendLayout();
			this->pnlPreuMODESDEV->SuspendLayout();
			this->pnlNomEsdevMODESDEV->SuspendLayout();
			this->pnlTopTitlesMODESDEV->SuspendLayout();
			this->SuspendLayout();
			// 
			// PANELmodificaEsdev
			// 
			this->PANELmodificaEsdev->Controls->Add(this->btnAtrasMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->btnModificaMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->pnlDataMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->textBoxDataMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->pnlPuntsCostMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->textBoxPuntsCostMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->pnlAforamentMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->textBoxAforamentMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->pnlTipusMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->textBoxTipusMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->pnlDescMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->textBoxDescMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->pnlPreuMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->textBoxPreuMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->pnlNomEsdevMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->textBoxNomEsdevMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->pnlTopTitlesMODESDEV);
			this->PANELmodificaEsdev->Location = System::Drawing::Point(286, 59);
			this->PANELmodificaEsdev->Name = L"PANELmodificaEsdev";
			this->PANELmodificaEsdev->Size = System::Drawing::Size(570, 552);
			this->PANELmodificaEsdev->TabIndex = 0;
			// 
			// btnAtrasMODESDEV
			// 
			this->btnAtrasMODESDEV->Location = System::Drawing::Point(367, 505);
			this->btnAtrasMODESDEV->Name = L"btnAtrasMODESDEV";
			this->btnAtrasMODESDEV->Size = System::Drawing::Size(75, 23);
			this->btnAtrasMODESDEV->TabIndex = 17;
			this->btnAtrasMODESDEV->Text = L"Atrás";
			this->btnAtrasMODESDEV->UseVisualStyleBackColor = true;
			// 
			// btnModificaMODESDEV
			// 
			this->btnModificaMODESDEV->Location = System::Drawing::Point(448, 505);
			this->btnModificaMODESDEV->Name = L"btnModificaMODESDEV";
			this->btnModificaMODESDEV->Size = System::Drawing::Size(75, 23);
			this->btnModificaMODESDEV->TabIndex = 16;
			this->btnModificaMODESDEV->Text = L"Modifica";
			this->btnModificaMODESDEV->UseVisualStyleBackColor = true;
			// 
			// pnlDataMODESDEV
			// 
			this->pnlDataMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlDataMODESDEV->Controls->Add(this->lblDataMODESDEV);
			this->pnlDataMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlDataMODESDEV->Location = System::Drawing::Point(41, 440);
			this->pnlDataMODESDEV->Name = L"pnlDataMODESDEV";
			this->pnlDataMODESDEV->Size = System::Drawing::Size(221, 22);
			this->pnlDataMODESDEV->TabIndex = 15;
			// 
			// lblDataMODESDEV
			// 
			this->lblDataMODESDEV->AutoSize = true;
			this->lblDataMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblDataMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblDataMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblDataMODESDEV->Location = System::Drawing::Point(92, 2);
			this->lblDataMODESDEV->Name = L"lblDataMODESDEV";
			this->lblDataMODESDEV->Size = System::Drawing::Size(36, 17);
			this->lblDataMODESDEV->TabIndex = 12;
			this->lblDataMODESDEV->Text = L"Data";
			// 
			// textBoxDataMODESDEV
			// 
			this->textBoxDataMODESDEV->Location = System::Drawing::Point(259, 440);
			this->textBoxDataMODESDEV->Name = L"textBoxDataMODESDEV";
			this->textBoxDataMODESDEV->Size = System::Drawing::Size(264, 22);
			this->textBoxDataMODESDEV->TabIndex = 14;
			// 
			// pnlPuntsCostMODESDEV
			// 
			this->pnlPuntsCostMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlPuntsCostMODESDEV->Controls->Add(this->lblPuntsCostMODESDEV);
			this->pnlPuntsCostMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlPuntsCostMODESDEV->Location = System::Drawing::Point(41, 391);
			this->pnlPuntsCostMODESDEV->Name = L"pnlPuntsCostMODESDEV";
			this->pnlPuntsCostMODESDEV->Size = System::Drawing::Size(221, 22);
			this->pnlPuntsCostMODESDEV->TabIndex = 13;
			// 
			// lblPuntsCostMODESDEV
			// 
			this->lblPuntsCostMODESDEV->AutoSize = true;
			this->lblPuntsCostMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblPuntsCostMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblPuntsCostMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblPuntsCostMODESDEV->Location = System::Drawing::Point(73, 2);
			this->lblPuntsCostMODESDEV->Name = L"lblPuntsCostMODESDEV";
			this->lblPuntsCostMODESDEV->Size = System::Drawing::Size(74, 17);
			this->lblPuntsCostMODESDEV->TabIndex = 12;
			this->lblPuntsCostMODESDEV->Text = L"Punts Cost";
			// 
			// textBoxPuntsCostMODESDEV
			// 
			this->textBoxPuntsCostMODESDEV->Location = System::Drawing::Point(259, 391);
			this->textBoxPuntsCostMODESDEV->Name = L"textBoxPuntsCostMODESDEV";
			this->textBoxPuntsCostMODESDEV->Size = System::Drawing::Size(264, 22);
			this->textBoxPuntsCostMODESDEV->TabIndex = 12;
			// 
			// pnlAforamentMODESDEV
			// 
			this->pnlAforamentMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlAforamentMODESDEV->Controls->Add(this->lblAforamentMODESDEV);
			this->pnlAforamentMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlAforamentMODESDEV->Location = System::Drawing::Point(41, 343);
			this->pnlAforamentMODESDEV->Name = L"pnlAforamentMODESDEV";
			this->pnlAforamentMODESDEV->Size = System::Drawing::Size(221, 22);
			this->pnlAforamentMODESDEV->TabIndex = 11;
			// 
			// lblAforamentMODESDEV
			// 
			this->lblAforamentMODESDEV->AutoSize = true;
			this->lblAforamentMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblAforamentMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblAforamentMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblAforamentMODESDEV->Location = System::Drawing::Point(73, 2);
			this->lblAforamentMODESDEV->Name = L"lblAforamentMODESDEV";
			this->lblAforamentMODESDEV->Size = System::Drawing::Size(73, 17);
			this->lblAforamentMODESDEV->TabIndex = 12;
			this->lblAforamentMODESDEV->Text = L"Aforament";
			// 
			// textBoxAforamentMODESDEV
			// 
			this->textBoxAforamentMODESDEV->Location = System::Drawing::Point(259, 343);
			this->textBoxAforamentMODESDEV->Name = L"textBoxAforamentMODESDEV";
			this->textBoxAforamentMODESDEV->Size = System::Drawing::Size(264, 22);
			this->textBoxAforamentMODESDEV->TabIndex = 10;
			// 
			// pnlTipusMODESDEV
			// 
			this->pnlTipusMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlTipusMODESDEV->Controls->Add(this->lblTipusMODESDEV);
			this->pnlTipusMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlTipusMODESDEV->Location = System::Drawing::Point(41, 297);
			this->pnlTipusMODESDEV->Name = L"pnlTipusMODESDEV";
			this->pnlTipusMODESDEV->Size = System::Drawing::Size(221, 22);
			this->pnlTipusMODESDEV->TabIndex = 8;
			// 
			// lblTipusMODESDEV
			// 
			this->lblTipusMODESDEV->AutoSize = true;
			this->lblTipusMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblTipusMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblTipusMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblTipusMODESDEV->Location = System::Drawing::Point(88, 2);
			this->lblTipusMODESDEV->Name = L"lblTipusMODESDEV";
			this->lblTipusMODESDEV->Size = System::Drawing::Size(40, 17);
			this->lblTipusMODESDEV->TabIndex = 12;
			this->lblTipusMODESDEV->Text = L"Tipus";
			// 
			// textBoxTipusMODESDEV
			// 
			this->textBoxTipusMODESDEV->Location = System::Drawing::Point(259, 297);
			this->textBoxTipusMODESDEV->Name = L"textBoxTipusMODESDEV";
			this->textBoxTipusMODESDEV->Size = System::Drawing::Size(264, 22);
			this->textBoxTipusMODESDEV->TabIndex = 7;
			// 
			// pnlDescMODESDEV
			// 
			this->pnlDescMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlDescMODESDEV->Controls->Add(this->lblDescMODESDEV);
			this->pnlDescMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlDescMODESDEV->Location = System::Drawing::Point(41, 171);
			this->pnlDescMODESDEV->Name = L"pnlDescMODESDEV";
			this->pnlDescMODESDEV->Size = System::Drawing::Size(221, 22);
			this->pnlDescMODESDEV->TabIndex = 6;
			// 
			// lblDescMODESDEV
			// 
			this->lblDescMODESDEV->AutoSize = true;
			this->lblDescMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblDescMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblDescMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblDescMODESDEV->Location = System::Drawing::Point(73, 2);
			this->lblDescMODESDEV->Name = L"lblDescMODESDEV";
			this->lblDescMODESDEV->Size = System::Drawing::Size(69, 17);
			this->lblDescMODESDEV->TabIndex = 11;
			this->lblDescMODESDEV->Text = L"Descripció";
			// 
			// textBoxDescMODESDEV
			// 
			this->textBoxDescMODESDEV->Location = System::Drawing::Point(41, 193);
			this->textBoxDescMODESDEV->Multiline = true;
			this->textBoxDescMODESDEV->Name = L"textBoxDescMODESDEV";
			this->textBoxDescMODESDEV->Size = System::Drawing::Size(482, 80);
			this->textBoxDescMODESDEV->TabIndex = 5;
			// 
			// pnlPreuMODESDEV
			// 
			this->pnlPreuMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlPreuMODESDEV->Controls->Add(this->lblPreuMODESDEV);
			this->pnlPreuMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlPreuMODESDEV->Location = System::Drawing::Point(41, 121);
			this->pnlPreuMODESDEV->Name = L"pnlPreuMODESDEV";
			this->pnlPreuMODESDEV->Size = System::Drawing::Size(221, 22);
			this->pnlPreuMODESDEV->TabIndex = 4;
			// 
			// lblPreuMODESDEV
			// 
			this->lblPreuMODESDEV->AutoSize = true;
			this->lblPreuMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblPreuMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblPreuMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblPreuMODESDEV->Location = System::Drawing::Point(88, 2);
			this->lblPreuMODESDEV->Name = L"lblPreuMODESDEV";
			this->lblPreuMODESDEV->Size = System::Drawing::Size(36, 17);
			this->lblPreuMODESDEV->TabIndex = 10;
			this->lblPreuMODESDEV->Text = L"Preu";
			// 
			// textBoxPreuMODESDEV
			// 
			this->textBoxPreuMODESDEV->Location = System::Drawing::Point(259, 121);
			this->textBoxPreuMODESDEV->Name = L"textBoxPreuMODESDEV";
			this->textBoxPreuMODESDEV->Size = System::Drawing::Size(264, 22);
			this->textBoxPreuMODESDEV->TabIndex = 3;
			// 
			// pnlNomEsdevMODESDEV
			// 
			this->pnlNomEsdevMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlNomEsdevMODESDEV->Controls->Add(this->lblNomEsdevMODESDEV);
			this->pnlNomEsdevMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlNomEsdevMODESDEV->Location = System::Drawing::Point(41, 73);
			this->pnlNomEsdevMODESDEV->Name = L"pnlNomEsdevMODESDEV";
			this->pnlNomEsdevMODESDEV->Size = System::Drawing::Size(221, 22);
			this->pnlNomEsdevMODESDEV->TabIndex = 2;
			// 
			// lblNomEsdevMODESDEV
			// 
			this->lblNomEsdevMODESDEV->AutoSize = true;
			this->lblNomEsdevMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblNomEsdevMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblNomEsdevMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblNomEsdevMODESDEV->Location = System::Drawing::Point(50, 2);
			this->lblNomEsdevMODESDEV->Name = L"lblNomEsdevMODESDEV";
			this->lblNomEsdevMODESDEV->Size = System::Drawing::Size(127, 17);
			this->lblNomEsdevMODESDEV->TabIndex = 9;
			this->lblNomEsdevMODESDEV->Text = L"Nom Esdeveniment";
			// 
			// textBoxNomEsdevMODESDEV
			// 
			this->textBoxNomEsdevMODESDEV->Location = System::Drawing::Point(259, 73);
			this->textBoxNomEsdevMODESDEV->Name = L"textBoxNomEsdevMODESDEV";
			this->textBoxNomEsdevMODESDEV->Size = System::Drawing::Size(264, 22);
			this->textBoxNomEsdevMODESDEV->TabIndex = 1;
			this->textBoxNomEsdevMODESDEV->TextChanged += gcnew System::EventHandler(this, &UIModificaEsdeveniment::textBox1_TextChanged);
			// 
			// pnlTopTitlesMODESDEV
			// 
			this->pnlTopTitlesMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlTopTitlesMODESDEV->Controls->Add(this->lblTitleIDEsdevMODESDEV);
			this->pnlTopTitlesMODESDEV->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTopTitlesMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlTopTitlesMODESDEV->Location = System::Drawing::Point(0, 0);
			this->pnlTopTitlesMODESDEV->Name = L"pnlTopTitlesMODESDEV";
			this->pnlTopTitlesMODESDEV->Size = System::Drawing::Size(570, 32);
			this->pnlTopTitlesMODESDEV->TabIndex = 0;
			// 
			// lblTitleIDEsdevMODESDEV
			// 
			this->lblTitleIDEsdevMODESDEV->AutoSize = true;
			this->lblTitleIDEsdevMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblTitleIDEsdevMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblTitleIDEsdevMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblTitleIDEsdevMODESDEV->Location = System::Drawing::Point(18, 7);
			this->lblTitleIDEsdevMODESDEV->Name = L"lblTitleIDEsdevMODESDEV";
			this->lblTitleIDEsdevMODESDEV->Size = System::Drawing::Size(120, 17);
			this->lblTitleIDEsdevMODESDEV->TabIndex = 10;
			this->lblTitleIDEsdevMODESDEV->Text = L"ID ESDEVENIMENT";
			// 
			// UIModificaEsdeveniment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1230, 698);
			this->Controls->Add(this->PANELmodificaEsdev);
			this->Name = L"UIModificaEsdeveniment";
			this->Text = L"UIModificaEsdeveniment";
			this->Load += gcnew System::EventHandler(this, &UIModificaEsdeveniment::UIModificaEsdeveniment_Load);
			this->PANELmodificaEsdev->ResumeLayout(false);
			this->PANELmodificaEsdev->PerformLayout();
			this->pnlDataMODESDEV->ResumeLayout(false);
			this->pnlDataMODESDEV->PerformLayout();
			this->pnlPuntsCostMODESDEV->ResumeLayout(false);
			this->pnlPuntsCostMODESDEV->PerformLayout();
			this->pnlAforamentMODESDEV->ResumeLayout(false);
			this->pnlAforamentMODESDEV->PerformLayout();
			this->pnlTipusMODESDEV->ResumeLayout(false);
			this->pnlTipusMODESDEV->PerformLayout();
			this->pnlDescMODESDEV->ResumeLayout(false);
			this->pnlDescMODESDEV->PerformLayout();
			this->pnlPreuMODESDEV->ResumeLayout(false);
			this->pnlPreuMODESDEV->PerformLayout();
			this->pnlNomEsdevMODESDEV->ResumeLayout(false);
			this->pnlNomEsdevMODESDEV->PerformLayout();
			this->pnlTopTitlesMODESDEV->ResumeLayout(false);
			this->pnlTopTitlesMODESDEV->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void UIModificaEsdeveniment_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
