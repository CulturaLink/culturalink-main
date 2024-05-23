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
	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPnlBndEntrAj;
	protected:

	protected:
	//private: CustomButtonEsdev^ customButton;












	private: System::Windows::Forms::Panel^ panel2;

















	private: System::Windows::Forms::Panel^ pnlExample;
	private: System::Windows::Forms::Label^ lblExData;

	private: System::Windows::Forms::Label^ lblExNomEsdev;
	private: System::Windows::Forms::Label^ lblExIdEnt;
	private: System::Windows::Forms::Button^ btnExDenegar;

	private: System::Windows::Forms::Button^ btnExAcceptar;

	private: System::Windows::Forms::Button^ btnExViewDesc;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnlTitles;
	private: System::Windows::Forms::Label^ lblTitleESTAT;
	private: System::Windows::Forms::Label^ lblTitleDESC;
	private: System::Windows::Forms::Label^ lblTitleESDEV;
	private: System::Windows::Forms::Label^ lblTitleDATA;
	private: System::Windows::Forms::Label^ lblTitleID;

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
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->pnlExample = (gcnew System::Windows::Forms::Panel());
			this->btnExDenegar = (gcnew System::Windows::Forms::Button());
			this->btnExAcceptar = (gcnew System::Windows::Forms::Button());
			this->btnExViewDesc = (gcnew System::Windows::Forms::Button());
			this->lblExData = (gcnew System::Windows::Forms::Label());
			this->lblExNomEsdev = (gcnew System::Windows::Forms::Label());
			this->lblExIdEnt = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPnlBndEntrAj = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlTitles = (gcnew System::Windows::Forms::Panel());
			this->lblTitleESTAT = (gcnew System::Windows::Forms::Label());
			this->lblTitleDESC = (gcnew System::Windows::Forms::Label());
			this->lblTitleESDEV = (gcnew System::Windows::Forms::Label());
			this->lblTitleDATA = (gcnew System::Windows::Forms::Label());
			this->lblTitleID = (gcnew System::Windows::Forms::Label());
			this->pnlExample->SuspendLayout();
			this->flowLayoutPnlBndEntrAj->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pnlTitles->SuspendLayout();
			this->SuspendLayout();
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TITLE->Location = System::Drawing::Point(231, 66);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(592, 50);
			this->TITLE->TabIndex = 19;
			this->TITLE->Text = L"BANDEJA ENTRADA SOLICITUDES";
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
			this->pnlExample->Size = System::Drawing::Size(1044, 53);
			this->pnlExample->TabIndex = 0;
			this->pnlExample->Visible = false;
			// 
			// btnExDenegar
			// 
			this->btnExDenegar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExDenegar->Location = System::Drawing::Point(868, 14);
			this->btnExDenegar->Name = L"btnExDenegar";
			this->btnExDenegar->Size = System::Drawing::Size(98, 25);
			this->btnExDenegar->TabIndex = 6;
			this->btnExDenegar->Text = L"DENEGAR";
			this->btnExDenegar->UseVisualStyleBackColor = true;
			// 
			// btnExAcceptar
			// 
			this->btnExAcceptar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnExAcceptar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExAcceptar->Location = System::Drawing::Point(752, 14);
			this->btnExAcceptar->Name = L"btnExAcceptar";
			this->btnExAcceptar->Size = System::Drawing::Size(98, 25);
			this->btnExAcceptar->TabIndex = 5;
			this->btnExAcceptar->Text = L"ACCEPTAR";
			this->btnExAcceptar->UseVisualStyleBackColor = true;
			// 
			// btnExViewDesc
			// 
			this->btnExViewDesc->Location = System::Drawing::Point(574, 16);
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
			// flowLayoutPnlBndEntrAj
			// 
			this->flowLayoutPnlBndEntrAj->AutoSize = true;
			this->flowLayoutPnlBndEntrAj->BackColor = System::Drawing::Color::White;
			this->flowLayoutPnlBndEntrAj->Controls->Add(this->pnlExample);
			this->flowLayoutPnlBndEntrAj->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPnlBndEntrAj->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPnlBndEntrAj->Location = System::Drawing::Point(0, 32);
			this->flowLayoutPnlBndEntrAj->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPnlBndEntrAj->Name = L"flowLayoutPnlBndEntrAj";
			this->flowLayoutPnlBndEntrAj->Size = System::Drawing::Size(1050, 545);
			this->flowLayoutPnlBndEntrAj->TabIndex = 18;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->flowLayoutPnlBndEntrAj);
			this->panel1->Controls->Add(this->pnlTitles);
			this->panel1->Location = System::Drawing::Point(110, 152);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1050, 577);
			this->panel1->TabIndex = 20;
			// 
			// pnlTitles
			// 
			this->pnlTitles->BackColor = System::Drawing::Color::Black;
			this->pnlTitles->Controls->Add(this->lblTitleESTAT);
			this->pnlTitles->Controls->Add(this->lblTitleDESC);
			this->pnlTitles->Controls->Add(this->lblTitleESDEV);
			this->pnlTitles->Controls->Add(this->lblTitleDATA);
			this->pnlTitles->Controls->Add(this->lblTitleID);
			this->pnlTitles->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTitles->Location = System::Drawing::Point(0, 0);
			this->pnlTitles->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlTitles->Name = L"pnlTitles";
			this->pnlTitles->Size = System::Drawing::Size(1050, 32);
			this->pnlTitles->TabIndex = 19;
			// 
			// lblTitleESTAT
			// 
			this->lblTitleESTAT->AutoSize = true;
			this->lblTitleESTAT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitleESTAT->ForeColor = System::Drawing::Color::White;
			this->lblTitleESTAT->Location = System::Drawing::Point(778, 9);
			this->lblTitleESTAT->Name = L"lblTitleESTAT";
			this->lblTitleESTAT->Size = System::Drawing::Size(178, 16);
			this->lblTitleESTAT->TabIndex = 6;
			this->lblTitleESTAT->Text = L"SEL.LECCIONAR ESTAT";
			// 
			// lblTitleDESC
			// 
			this->lblTitleDESC->AutoSize = true;
			this->lblTitleDESC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitleDESC->ForeColor = System::Drawing::Color::White;
			this->lblTitleDESC->Location = System::Drawing::Point(575, 9);
			this->lblTitleDESC->Name = L"lblTitleDESC";
			this->lblTitleDESC->Size = System::Drawing::Size(98, 16);
			this->lblTitleDESC->TabIndex = 5;
			this->lblTitleDESC->Text = L"DESCRIPCIÓ";
			// 
			// lblTitleESDEV
			// 
			this->lblTitleESDEV->AutoSize = true;
			this->lblTitleESDEV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitleESDEV->ForeColor = System::Drawing::Color::White;
			this->lblTitleESDEV->Location = System::Drawing::Point(152, 9);
			this->lblTitleESDEV->Name = L"lblTitleESDEV";
			this->lblTitleESDEV->Size = System::Drawing::Size(126, 16);
			this->lblTitleESDEV->TabIndex = 4;
			this->lblTitleESDEV->Text = L"ESDEVENIMENT";
			// 
			// lblTitleDATA
			// 
			this->lblTitleDATA->AutoSize = true;
			this->lblTitleDATA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitleDATA->ForeColor = System::Drawing::Color::White;
			this->lblTitleDATA->Location = System::Drawing::Point(367, 9);
			this->lblTitleDATA->Name = L"lblTitleDATA";
			this->lblTitleDATA->Size = System::Drawing::Size(143, 16);
			this->lblTitleDATA->TabIndex = 3;
			this->lblTitleDATA->Text = L"DATA SOL.LICITUD";
			// 
			// lblTitleID
			// 
			this->lblTitleID->AutoSize = true;
			this->lblTitleID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitleID->ForeColor = System::Drawing::Color::White;
			this->lblTitleID->Location = System::Drawing::Point(32, 9);
			this->lblTitleID->Name = L"lblTitleID";
			this->lblTitleID->Size = System::Drawing::Size(26, 16);
			this->lblTitleID->TabIndex = 0;
			this->lblTitleID->Text = L"ID ";
			// 
			// BandejaEntradaSolAjuntament
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1530, 805);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->TITLE);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"BandejaEntradaSolAjuntament";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BandejaEntradaSolAjuntament";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &BandejaEntradaSolAjuntament::BandejaEntradaSolAjuntament_Load);
			this->pnlExample->ResumeLayout(false);
			this->pnlExample->PerformLayout();
			this->flowLayoutPnlBndEntrAj->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pnlTitles->ResumeLayout(false);
			this->pnlTitles->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void BandejaEntradaSolAjuntament_Load(System::Object^ sender, System::EventArgs^ e) {

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
				addDynamicPanelBandejaEntradaAj(res[i], res[i + 1], res[i + 2], res[i + 3]);
			}
			else {
				// Handle the case where there are not enough elements
				// This could be logging an error, breaking the loop, or any other error handling
				break; // or continue; or any other handling logic
			}
		}		
	}

	public: Void addDynamicPanelBandejaEntradaAj(String^ lblIdEnt, String^ lblNomEsdev, String^ data, String^ descEsdev) {

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
		pnlDyn->Size = System::Drawing::Size(1047, 53);
		pnlDyn->TabIndex = 0;

		// 
		// btnExDenegar
		// 
		btnDynDenegar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		btnDynDenegar->Location = System::Drawing::Point(1025-350, 16);
		btnDynDenegar->Name = L"btnExDenegar";
		btnDynDenegar->Size = System::Drawing::Size(98, 25);
		btnDynDenegar->TabIndex = 6;
		btnDynDenegar->Text = L"DENEGAR";
		btnDynDenegar->UseVisualStyleBackColor = true;
		btnDynDenegar->Click += gcnew EventHandler(this, &BandejaEntradaSolAjuntament::ButtonCancelar_Click);
		btnDynDenegar->NomEsdev = lblNomEsdev;
		btnDynDenegar->BackColor = System::Drawing::Color::OrangeRed;
		btnDynDenegar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		// 
		// btnExAcceptar
		// 
		btnDynAcceptar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		btnDynAcceptar->Location = System::Drawing::Point(905-350, 16);
		btnDynAcceptar->Name = L"btnExAcceptar";
		btnDynAcceptar->Size = System::Drawing::Size(98, 25);
		btnDynAcceptar->TabIndex = 5;
		btnDynAcceptar->Text = L"ACCEPTAR";
		btnDynAcceptar->UseVisualStyleBackColor = true;
		btnDynAcceptar->Click += gcnew EventHandler(this, &BandejaEntradaSolAjuntament::ButtonAcceptar_Click);
		btnDynAcceptar->NomEsdev = lblNomEsdev;
		btnDynAcceptar->BackColor = System::Drawing::Color::LimeGreen;
		btnDynAcceptar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		// 
		// btnExViewDesc
		// 
		btnDynViewDesc->Location = System::Drawing::Point(608-180, 16);
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

		this->flowLayoutPnlBndEntrAj->Controls->Add(pnlDyn);
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
			this->flowLayoutPnlBndEntrAj->Controls->Remove(parent); // Borra DynPanel del flowPanel.
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
			this->flowLayoutPnlBndEntrAj->Controls->Remove(parent); // Borra DynPanel del flowPanel.
		}
	}

	String^ nomEsdev = clickedButton->NomEsdev;
	TxCanviaEstatPeticio txCanvEstPet(nomEsdev, false);
	txCanvEstPet.executar();
}

void initializeComponentBandejaEntradaAjuntament() {

}

};
}
