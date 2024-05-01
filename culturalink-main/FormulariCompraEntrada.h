#pragma once

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormulariCompraEntrada
	/// </summary>
	public ref class FormulariCompraEntrada : public System::Windows::Forms::Form
	{
	public:
		FormulariCompraEntrada(void)
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
		~FormulariCompraEntrada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ titular;
	private: System::Windows::Forms::TextBox^ numero_tarjeta;
	private: System::Windows::Forms::TextBox^ fecha_caducidad;
	private: System::Windows::Forms::TextBox^ CVV;
	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;

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
			this->titular = (gcnew System::Windows::Forms::TextBox());
			this->numero_tarjeta = (gcnew System::Windows::Forms::TextBox());
			this->fecha_caducidad = (gcnew System::Windows::Forms::TextBox());
			this->CVV = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titular
			// 
			this->titular->Location = System::Drawing::Point(125, 49);
			this->titular->Name = L"titular";
			this->titular->Size = System::Drawing::Size(100, 20);
			this->titular->TabIndex = 0;
			// 
			// numero_tarjeta
			// 
			this->numero_tarjeta->Location = System::Drawing::Point(125, 94);
			this->numero_tarjeta->Name = L"numero_tarjeta";
			this->numero_tarjeta->Size = System::Drawing::Size(100, 20);
			this->numero_tarjeta->TabIndex = 1;
			// 
			// fecha_caducidad
			// 
			this->fecha_caducidad->Location = System::Drawing::Point(125, 139);
			this->fecha_caducidad->Name = L"fecha_caducidad";
			this->fecha_caducidad->Size = System::Drawing::Size(100, 20);
			this->fecha_caducidad->TabIndex = 2;
			// 
			// CVV
			// 
			this->CVV->Location = System::Drawing::Point(125, 189);
			this->CVV->Name = L"CVV";
			this->CVV->Size = System::Drawing::Size(100, 20);
			this->CVV->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Titular de la tarjeta";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Numero de la tarjeta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Fecha de caducidad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"CVV";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(249, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Rellena el formulari amb les dades de la teva tarjeta";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(125, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Acceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormulariCompraEntrada::button1_Click);
			// 
			// FormulariCompraEntrada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 277);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CVV);
			this->Controls->Add(this->fecha_caducidad);
			this->Controls->Add(this->numero_tarjeta);
			this->Controls->Add(this->titular);
			this->Name = L"FormulariCompraEntrada";
			this->Text = L"FormulariCompraEntrada";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ numero = this->numero_tarjeta->Text;
		String^ titular_tarjeta = this->titular->Text;
		String^ fecha_cadu = this->fecha_caducidad->Text;
		String^ CVV_ = this->CVV->Text;
		if (numero->Length == 0 || titular_tarjeta->Length == 0 || fecha_cadu->Length == 0 || CVV_->Length == 0)
		{
			MessageBox::Show("Omple tots els camps",
				"Un o mes camps buits", MessageBoxButtons::OK);
			return;
		}
	}
};
}
