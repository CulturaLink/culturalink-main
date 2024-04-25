#pragma once

#include "TxConsultaVarisEsdeveniments.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProvesEsdevsUI
	/// </summary>
	public ref class ProvesEsdevsUI : public System::Windows::Forms::Form
	{
	public:
		ProvesEsdevsUI(void)
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
		~ProvesEsdevsUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(650, 212);
			this->listBox1->TabIndex = 0;
			// 
			// ProvesEsdevsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1086, 396);
			this->Controls->Add(this->listBox1);
			this->Name = L"ProvesEsdevsUI";
			this->Text = L"ProvesEsdevsUI";
			this->Load += gcnew System::EventHandler(this, &ProvesEsdevsUI::ProvesEsdevsUI_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ProvesEsdevsUI_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultaVarisEsdeveniments txConsVarEsdevs;
		txConsVarEsdevs.executar();

		List<String^>^ res = txConsVarEsdevs.getResult();

		for (int i = 0; i < res->Count; i += 2) {
			String^ nom_preu = res[i] + ", " + res[i + 1];
			this->listBox1->Items->Add(nom_preu);
		}
		
	}
	};
}
