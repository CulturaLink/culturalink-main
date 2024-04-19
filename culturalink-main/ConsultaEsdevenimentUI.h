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
	/// Resumen de ConsultaEsdevenimentUI
	/// </summary>
	public ref class ConsultaEsdevenimentUI : public System::Windows::Forms::Form
	{
	public:
		ConsultaEsdevenimentUI(void)
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
		~ConsultaEsdevenimentUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
<<<<<<< Updated upstream
		System::ComponentModel::Container ^components;
=======
		System::ComponentModel::Container^ components;
>>>>>>> Stashed changes

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ConsultaEsdevenimentUI::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(174, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultaEsdevenimentUI::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nom Esdeveniment";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Preu Esdeveniment";
			this->label2->Click += gcnew System::EventHandler(this, &ConsultaEsdevenimentUI::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Ajuntament Relacionat";
			this->label3->Click += gcnew System::EventHandler(this, &ConsultaEsdevenimentUI::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Descripció Esdeveniment";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(146, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &ConsultaEsdevenimentUI::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(142, 100);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(140, 140);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"label7";
			// 
			// ConsultaEsdevenimentUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(268, 229);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"ConsultaEsdevenimentUI";
			this->Text = L"ConsultaEsdevenimentUI";
			this->Load += gcnew System::EventHandler(this, &ConsultaEsdevenimentUI::ConsultaEsdevenimentUI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
<<<<<<< Updated upstream
		
=======

>>>>>>> Stashed changes
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nomEsd = this->textBox1->Text;
		List<String^>^ infoEsd;
		TxConsultaEsdeveniment txConsEsd(nomEsd);
		txConsEsd.executar();
		infoEsd = txConsEsd.getResult();
		label5->Text = infoEsd[1];
		label6->Text = infoEsd[2];
		label7->Text = infoEsd[3];
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
<<<<<<< Updated upstream
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ConsultaEsdevenimentUI_Load(System::Object^ sender, System::EventArgs^ e) {

}
};
}
=======
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ConsultaEsdevenimentUI_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
>>>>>>> Stashed changes
