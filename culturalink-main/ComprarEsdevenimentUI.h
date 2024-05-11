#pragma once
#include "TxConsultaEsdeveniment.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ComprarEsdevenimentUI
	/// </summary>
	public ref class ComprarEsdevenimentUI : public System::Windows::Forms::Form
	{
	public:
		ComprarEsdevenimentUI(void)
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
		~ComprarEsdevenimentUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGoBack;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ComprarEsdevenimentUI::typeid));
			this->btnGoBack = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// btnGoBack
			// 
			this->btnGoBack->Location = System::Drawing::Point(50, 412);
			this->btnGoBack->Name = L"btnGoBack";
			this->btnGoBack->Size = System::Drawing::Size(75, 23);
			this->btnGoBack->TabIndex = 0;
			this->btnGoBack->Text = L"Cerrar";
			this->btnGoBack->UseVisualStyleBackColor = true;
			this->btnGoBack->Click += gcnew System::EventHandler(this, &ComprarEsdevenimentUI::button1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(162, 412);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Comprar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(50, 36);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(187, 192);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// ComprarEsdevenimentUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(290, 447);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnGoBack);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ComprarEsdevenimentUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ComprarEsdevenimentUI";
			this->Load += gcnew System::EventHandler(this, &ComprarEsdevenimentUI::ComprarEsdevenimentUI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void ComprarEsdevenimentUI_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultaEsdeveniment^ txConsEsdev = gcnew TxConsultaEsdeveniment("MessiExperience");
		txConsEsdev->executar();

		String^ idEnt = txConsEsdev->getResult()[0];
		String^ preu = txConsEsdev->getResult()[1];
		String^ ajunt = txConsEsdev->getResult()[2];
		String^ desc = txConsEsdev->getResult()[3];
		String^ nom = txConsEsdev->getResult()[4];
		String^ tipus = "-";
		String^ aforament = "-";
		String^ puntsCost = "-";
		String^ data = "-";
		String^ puntsDesc = "-";
	}
	};
}
