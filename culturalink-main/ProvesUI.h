#pragma once

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProvesUI
	/// </summary>
	public ref class ProvesUI : public System::Windows::Forms::Form
	{
	public:
		ProvesUI(void)
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
		~ProvesUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTopBar;
	private: System::Windows::Forms::Panel^ pnlTopBarMinMaxClose;
	protected:


	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Button^ btnMaximize;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Panel^ pnlTopBarAppInfo;

	private: System::Windows::Forms::PictureBox^ AppIcon;
	private: System::Windows::Forms::Panel^ panelNavBar;

	private: System::Windows::Forms::Panel^ panelUserInfo;
	private: System::Windows::Forms::PictureBox^ picBoxUserPic;


	private: System::Windows::Forms::Label^ lblFullNameUser;
	private: System::Windows::Forms::Label^ lblUsername;
	private: System::Windows::Forms::Label^ lblTypeUser;
	private: System::Windows::Forms::Label^ lblNameApp;
	private: System::Windows::Forms::Button^ btnViewNavBar;

	private: System::Windows::Forms::Panel^ pnlMainTop;

	private: System::Windows::Forms::Label^ lblTitlePage;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProvesUI::typeid));
			this->pnlTopBar = (gcnew System::Windows::Forms::Panel());
			this->pnlTopBarAppInfo = (gcnew System::Windows::Forms::Panel());
			this->lblNameApp = (gcnew System::Windows::Forms::Label());
			this->AppIcon = (gcnew System::Windows::Forms::PictureBox());
			this->pnlTopBarMinMaxClose = (gcnew System::Windows::Forms::Panel());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->btnMaximize = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->panelNavBar = (gcnew System::Windows::Forms::Panel());
			this->panelUserInfo = (gcnew System::Windows::Forms::Panel());
			this->lblTypeUser = (gcnew System::Windows::Forms::Label());
			this->lblFullNameUser = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->picBoxUserPic = (gcnew System::Windows::Forms::PictureBox());
			this->btnViewNavBar = (gcnew System::Windows::Forms::Button());
			this->pnlMainTop = (gcnew System::Windows::Forms::Panel());
			this->lblTitlePage = (gcnew System::Windows::Forms::Label());
			this->pnlTopBar->SuspendLayout();
			this->pnlTopBarAppInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppIcon))->BeginInit();
			this->pnlTopBarMinMaxClose->SuspendLayout();
			this->panelNavBar->SuspendLayout();
			this->panelUserInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUserPic))->BeginInit();
			this->pnlMainTop->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlTopBar
			// 
			this->pnlTopBar->BackColor = System::Drawing::Color::Black;
			this->pnlTopBar->Controls->Add(this->pnlTopBarAppInfo);
			this->pnlTopBar->Controls->Add(this->pnlTopBarMinMaxClose);
			this->pnlTopBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTopBar->Location = System::Drawing::Point(0, 0);
			this->pnlTopBar->Margin = System::Windows::Forms::Padding(0);
			this->pnlTopBar->Name = L"pnlTopBar";
			this->pnlTopBar->Size = System::Drawing::Size(1334, 30);
			this->pnlTopBar->TabIndex = 0;
			// 
			// pnlTopBarAppInfo
			// 
			this->pnlTopBarAppInfo->Controls->Add(this->lblNameApp);
			this->pnlTopBarAppInfo->Controls->Add(this->AppIcon);
			this->pnlTopBarAppInfo->Location = System::Drawing::Point(0, 0);
			this->pnlTopBarAppInfo->Name = L"pnlTopBarAppInfo";
			this->pnlTopBarAppInfo->Size = System::Drawing::Size(207, 30);
			this->pnlTopBarAppInfo->TabIndex = 1;
			// 
			// lblNameApp
			// 
			this->lblNameApp->AutoSize = true;
			this->lblNameApp->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNameApp->ForeColor = System::Drawing::Color::Silver;
			this->lblNameApp->Location = System::Drawing::Point(25, 7);
			this->lblNameApp->Name = L"lblNameApp";
			this->lblNameApp->Size = System::Drawing::Size(67, 15);
			this->lblNameApp->TabIndex = 1;
			this->lblNameApp->Text = L"CulturaLink";
			// 
			// AppIcon
			// 
			this->AppIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppIcon.Image")));
			this->AppIcon->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppIcon.InitialImage")));
			this->AppIcon->Location = System::Drawing::Point(5, 5);
			this->AppIcon->Name = L"AppIcon";
			this->AppIcon->Size = System::Drawing::Size(35, 30);
			this->AppIcon->TabIndex = 0;
			this->AppIcon->TabStop = false;
			// 
			// pnlTopBarMinMaxClose
			// 
			this->pnlTopBarMinMaxClose->Controls->Add(this->btnMinimize);
			this->pnlTopBarMinMaxClose->Controls->Add(this->btnMaximize);
			this->pnlTopBarMinMaxClose->Controls->Add(this->btnClose);
			this->pnlTopBarMinMaxClose->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnlTopBarMinMaxClose->Location = System::Drawing::Point(1134, 0);
			this->pnlTopBarMinMaxClose->Name = L"pnlTopBarMinMaxClose";
			this->pnlTopBarMinMaxClose->Size = System::Drawing::Size(200, 30);
			this->pnlTopBarMinMaxClose->TabIndex = 0;
			// 
			// btnMinimize
			// 
			this->btnMinimize->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(95, 0);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(35, 30);
			this->btnMinimize->TabIndex = 2;
			this->btnMinimize->UseVisualStyleBackColor = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &ProvesUI::btnMinimize_Click);
			this->btnMinimize->MouseLeave += gcnew System::EventHandler(this, &ProvesUI::btnMinimize_MouseLeave);
			this->btnMinimize->MouseHover += gcnew System::EventHandler(this, &ProvesUI::btnMinimize_MouseHover);
			// 
			// btnMaximize
			// 
			this->btnMaximize->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnMaximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaximize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnMaximize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaximize.Image")));
			this->btnMaximize->Location = System::Drawing::Point(130, 0);
			this->btnMaximize->Name = L"btnMaximize";
			this->btnMaximize->Size = System::Drawing::Size(35, 30);
			this->btnMaximize->TabIndex = 1;
			this->btnMaximize->UseVisualStyleBackColor = true;
			this->btnMaximize->Click += gcnew System::EventHandler(this, &ProvesUI::btnMaximize_Click);
			this->btnMaximize->MouseLeave += gcnew System::EventHandler(this, &ProvesUI::btnMaximize_MouseLeave);
			this->btnMaximize->MouseHover += gcnew System::EventHandler(this, &ProvesUI::btnMaximize_MouseHover);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnClose->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(165, 0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(35, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &ProvesUI::btnClose_Click);
			this->btnClose->MouseLeave += gcnew System::EventHandler(this, &ProvesUI::bntClose_MouseLeave);
			this->btnClose->MouseHover += gcnew System::EventHandler(this, &ProvesUI::bntClose_MouseHover);
			// 
			// panelNavBar
			// 
			this->panelNavBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panelNavBar->Controls->Add(this->panelUserInfo);
			this->panelNavBar->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelNavBar->Location = System::Drawing::Point(0, 30);
			this->panelNavBar->Name = L"panelNavBar";
			this->panelNavBar->Size = System::Drawing::Size(207, 624);
			this->panelNavBar->TabIndex = 1;
			// 
			// panelUserInfo
			// 
			this->panelUserInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panelUserInfo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelUserInfo->Controls->Add(this->lblTypeUser);
			this->panelUserInfo->Controls->Add(this->lblFullNameUser);
			this->panelUserInfo->Controls->Add(this->lblUsername);
			this->panelUserInfo->Controls->Add(this->picBoxUserPic);
			this->panelUserInfo->Location = System::Drawing::Point(-1, -1);
			this->panelUserInfo->Name = L"panelUserInfo";
			this->panelUserInfo->Size = System::Drawing::Size(208, 112);
			this->panelUserInfo->TabIndex = 0;
			// 
			// lblTypeUser
			// 
			this->lblTypeUser->AutoSize = true;
			this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblTypeUser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblTypeUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTypeUser->Location = System::Drawing::Point(25, 90);
			this->lblTypeUser->Name = L"lblTypeUser";
			this->lblTypeUser->Size = System::Drawing::Size(46, 13);
			this->lblTypeUser->TabIndex = 3;
			this->lblTypeUser->Text = L"Ciutadà";
			// 
			// lblFullNameUser
			// 
			this->lblFullNameUser->AutoSize = true;
			this->lblFullNameUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullNameUser->ForeColor = System::Drawing::Color::White;
			this->lblFullNameUser->Location = System::Drawing::Point(84, 13);
			this->lblFullNameUser->Name = L"lblFullNameUser";
			this->lblFullNameUser->Size = System::Drawing::Size(116, 21);
			this->lblFullNameUser->TabIndex = 2;
			this->lblFullNameUser->Text = L"Arturo Aragón";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->ForeColor = System::Drawing::Color::Silver;
			this->lblUsername->Location = System::Drawing::Point(85, 34);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(72, 13);
			this->lblUsername->TabIndex = 1;
			this->lblUsername->Text = L"@artuaragon";
			// 
			// picBoxUserPic
			// 
			this->picBoxUserPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxUserPic.Image")));
			this->picBoxUserPic->Location = System::Drawing::Point(12, 13);
			this->picBoxUserPic->Name = L"picBoxUserPic";
			this->picBoxUserPic->Size = System::Drawing::Size(70, 70);
			this->picBoxUserPic->TabIndex = 0;
			this->picBoxUserPic->TabStop = false;
			// 
			// btnViewNavBar
			// 
			this->btnViewNavBar->BackColor = System::Drawing::Color::Black;
			this->btnViewNavBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewNavBar->ForeColor = System::Drawing::Color::Black;
			this->btnViewNavBar->Location = System::Drawing::Point(210, 332);
			this->btnViewNavBar->Margin = System::Windows::Forms::Padding(0);
			this->btnViewNavBar->Name = L"btnViewNavBar";
			this->btnViewNavBar->Size = System::Drawing::Size(13, 37);
			this->btnViewNavBar->TabIndex = 2;
			this->btnViewNavBar->UseVisualStyleBackColor = false;
			this->btnViewNavBar->Click += gcnew System::EventHandler(this, &ProvesUI::button1_Click);
			// 
			// pnlMainTop
			// 
			this->pnlMainTop->Controls->Add(this->lblTitlePage);
			this->pnlMainTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlMainTop->Location = System::Drawing::Point(207, 30);
			this->pnlMainTop->Name = L"pnlMainTop";
			this->pnlMainTop->Size = System::Drawing::Size(1127, 111);
			this->pnlMainTop->TabIndex = 3;
			// 
			// lblTitlePage
			// 
			this->lblTitlePage->AutoSize = true;
			this->lblTitlePage->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitlePage->Location = System::Drawing::Point(16, 13);
			this->lblTitlePage->Name = L"lblTitlePage";
			this->lblTitlePage->Size = System::Drawing::Size(172, 40);
			this->lblTitlePage->TabIndex = 0;
			this->lblTitlePage->Text = L"HOMEPAGE";
			// 
			// ProvesUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1334, 654);
			this->Controls->Add(this->pnlMainTop);
			this->Controls->Add(this->btnViewNavBar);
			this->Controls->Add(this->panelNavBar);
			this->Controls->Add(this->pnlTopBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(2, 0);
			this->Name = L"ProvesUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProvesUI";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ProvesUI::ProvesUI_Load);
			this->pnlTopBar->ResumeLayout(false);
			this->pnlTopBarAppInfo->ResumeLayout(false);
			this->pnlTopBarAppInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppIcon))->EndInit();
			this->pnlTopBarMinMaxClose->ResumeLayout(false);
			this->panelNavBar->ResumeLayout(false);
			this->panelUserInfo->ResumeLayout(false);
			this->panelUserInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUserPic))->EndInit();
			this->pnlMainTop->ResumeLayout(false);
			this->pnlMainTop->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ProvesUI_Load(System::Object^ sender, System::EventArgs^ e) {
		int y = Screen::PrimaryScreen->Bounds.Height / 2;
		this->btnViewNavBar->Location = System::Drawing::Point(210, y);
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void btnMaximize_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->WindowState == System::Windows::Forms::FormWindowState::Maximized) {
			this->WindowState = System::Windows::Forms::FormWindowState::Normal;
			int centerX = Screen::PrimaryScreen->Bounds.Width / 2;
			int centerY = Screen::PrimaryScreen->Bounds.Height / 2;

			// Calculate the offset to position the form in the middle
			int offsetX = centerX - (this->Width / 2);
			int offsetY = centerY - (this->Height / 2);

			// Set the location of the form
			this->Location = System::Drawing::Point(offsetX, offsetY);
		}
		else {
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		}
	}
	private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}
	private: System::Void bntClose_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
	}
	private: System::Void bntClose_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
	}
	private: System::Void btnMaximize_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->btnMaximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(193)),
			static_cast<System::Int32>(static_cast<System::Byte>(70)));
	}
	private: System::Void btnMaximize_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnMaximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
	}
	private: System::Void btnMinimize_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
			static_cast<System::Int32>(static_cast<System::Byte>(62)));
	}
	private: System::Void btnMinimize_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		panelNavBar->Visible = !panelNavBar->Visible;
		
		int y = Screen::PrimaryScreen->Bounds.Height / 2;
		if (panelNavBar->Visible == true) {
			this->btnViewNavBar->Location = System::Drawing::Point(210, y);
		}
		else {
			this->btnViewNavBar->Location = System::Drawing::Point(2, y);
		}
	}
};
}
