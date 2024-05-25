#pragma once

//Forms:
#include "ConsultarUsuariUI.h"
#include "ComprarEsdevenimentUI.h"
#include "RegistrarEsdevenimentUI.h"
#include "BandejaEntradaSolAjuntament.h"

//Passareles:
#include "PassarelaCiutada.h"
#include "PassarelaEntitat.h"
#include "PassarelaAjuntament.h"

// Transaccions:
#include "TxConsultaEsdeveniment.h"
#include "TxConsultaTotsEsdeveniments.h"
#include "TxConsultaEsdevenimentsAmbTipus.h"
#include "TxConsultaTotsEsdevenimentsPerEntitat.h"
#include "TxCompraEntradaEsdevenimentDiners.h"
#include "TxCompraEntradaEsdevenimentPunts.h"


// Altres:
#include "Esdeveniment.h"
#include "UsuariIniciat.h"

// Custom Tools
#include "CustomButtonEsdev.h"

// Bandeja Entrada Ajunt.
#include "TxConsultaEsdevenimentsAjuntament.h"
#include "TxCanviaEstatPeticio.h"

namespace culturalink_main {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CustomControls;

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

	private: String^ _NomEsdevPerComprar = "";
	private: System::Windows::Forms::Button^ btnGoBackCONS;
	private: System::Windows::Forms::Button^ btnComprarCONS;
	private: System::Windows::Forms::Panel^ PANELConsultarCompra;
	private: System::Windows::Forms::Panel^ pnlDescCONS;
	private: System::Windows::Forms::Panel^ pnlDescTitleCONS;
	private: System::Windows::Forms::Label^ lblDescCONSen;
	private: System::Windows::Forms::Label^ lblDescEsdevCONS;
	private: System::Windows::Forms::Panel^ pnlPreusCONS;
	private: System::Windows::Forms::Label^ lblPreuEsdevCONSgran;
	private: System::Windows::Forms::Panel^ pnlNomEsdevTitleCONS;
	private: System::Windows::Forms::Label^ lblNomEsdevCONS;
	private: System::Windows::Forms::Panel^ pnlFlowTipusCapsesCONSex;
	private: System::Windows::Forms::Button^ btnFiltreGalaCONSex;
	private: System::Windows::Forms::Button^ btnFiltreDeportivoCONSex;
	private: System::Windows::Forms::Panel^ panelCONS;
	private: System::Windows::Forms::Panel^ pnl5CONS;
	private: System::Windows::Forms::Label^ lblPuntsRegCONSen;
	private: System::Windows::Forms::Panel^ pnl51CONS;
	private: System::Windows::Forms::Label^ lblPuntsRegCONS;
	private: System::Windows::Forms::Panel^ pnl6CONS;
	private: System::Windows::Forms::Label^ lblDataCONSen;
	private: System::Windows::Forms::Panel^ pnl61CONS;
	private: System::Windows::Forms::Label^ lblDataCONS;
	private: System::Windows::Forms::Panel^ pnl4CONS;
	private: System::Windows::Forms::Label^ lblPreuPuntsCONSen;
	private: System::Windows::Forms::Panel^ pnl41CONS;
	private: System::Windows::Forms::Label^ lblPreuPuntsCONS;
	private: System::Windows::Forms::Panel^ pnl3CONS;
	private: System::Windows::Forms::Label^ lblAforamCONSen;
	private: System::Windows::Forms::Panel^ pnl31CONS;
	private: System::Windows::Forms::Label^ lblAforamCONS;
	private: System::Windows::Forms::Panel^ pnl2CONS;
	private: System::Windows::Forms::Label^ lblTipusCONSen;
	private: System::Windows::Forms::Panel^ pnl21CONS;
	private: System::Windows::Forms::Label^ lblTipusCONS;
	private: System::Windows::Forms::Panel^ pnl1CONS;
	private: System::Windows::Forms::Label^ lblAjuntEsdevCONSen;
	private: System::Windows::Forms::Panel^ pnl11CONS;
	private: System::Windows::Forms::Label^ lblAjuntEsdevCONS;
	private: System::Windows::Forms::PictureBox^ picBoxEsdevCONS;

	private: System::Windows::Forms::Panel^ pnlTopBar;
	private: System::Windows::Forms::Panel^ pnlTopBarMinMaxClose;
	private: bool isNavBarExpanded = true;
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


	private: System::Windows::Forms::Panel^ pnlMainTop;

	private: System::Windows::Forms::Label^ lblTitlePage;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ pnlMain;
	private: System::Windows::Forms::Panel^ pnlInfoUsu;

	private: System::Windows::Forms::Button^ btnViewNavBar;
	private: System::Windows::Forms::Button^ btnFiltrGala;


	private: System::Windows::Forms::Button^ btnFiltreDeportivo;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ pnlModEsdev;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Panel^ pnlMainModEsdv;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnSearch;

	private: System::Windows::Forms::Panel^ PANELPROVA;
	private: System::Windows::Forms::Label^ lblConsultEsdevEntit;
	private: System::Windows::Forms::Label^ lblConsultEsdevDesc;
	private: System::Windows::Forms::Label^ lblEsdevConsultPreu;
private: System::Windows::Forms::Label^ lblPuntsUser;
	private: System::Windows::Forms::Label^ lblEsdevConsultNom;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::Button^ btnComprarPuntsCONS;
	private: System::Windows::Forms::Label^ lblConsultEsdevTipus;
	private: System::Windows::Forms::Label^ lblConsultEsdevPreuDesc;
	private: System::Windows::Forms::Label^ lblConsultEsdevData;
	private: System::Windows::Forms::Label^ lblConsultEsdevPuntsCost;
	private: System::Windows::Forms::Label^ lblConsultEsdevAfor;
	private: System::Windows::Forms::Label^ lblConsultEsdevAjunt;
	private: System::Windows::Forms::Button^ btnConsEsdevGoBack;
	private: System::Windows::Forms::Button^ btnConsEsdevComprar;
	private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Panel^ panel10;
	   
private: System::Windows::Forms::Panel^ PANELEsdevHomepage;
private: System::Windows::Forms::Button^ btnRegEsdevAJ;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Button^ button9;


private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPnlBndEntrAj;
	  private: System::Windows::Forms::Panel^ panelBandejaEntrada;
   private:System::Windows::Forms::Panel^ pnlTitles;
   private:System::Windows::Forms::Label^ lblTitleESTAT;
   private:System::Windows::Forms::Label^ lblTitleDESC;
   private:System::Windows::Forms::Label^ lblTitleESDEV;
   private:System::Windows::Forms::Label^ lblTitleDATA;
   private:System::Windows::Forms::Label^ lblTitleID;

		  private:System::Windows::Forms::Panel^ PANELbandEntrSolAj;

					private: System::Windows::Forms::Panel^ pnlCOMP;
	private: System::Windows::Forms::Label^ lblNumTarjCOMPen;
	private: System::Windows::Forms::TextBox^ textBoxNumTarjCOMP;
	private: System::Windows::Forms::Panel^ pnlTarjUICOMP;




	private: System::Windows::Forms::Label^ lblCVVCOMPen;
	private: System::Windows::Forms::TextBox^ textBoxCVVCOMP;


	private: System::Windows::Forms::TextBox^ textBoxYearCOMP;

	private: System::Windows::Forms::Label^ lblDataCadCOMPen;
	private: System::Windows::Forms::TextBox^ textBoxMonthCOMP;


	private: System::Windows::Forms::Label^ lblTitularCOMPen;
	private: System::Windows::Forms::TextBox^ textBoxTitularCOMP;
	private: System::Windows::Forms::PictureBox^ pictureBoxChipUICOMP;

	private: System::Windows::Forms::Label^ lbNumTarjUICOMP;




	private: System::Windows::Forms::Button^ btnCancelarCOMP;

	private: System::Windows::Forms::Button^ btnComprarCOMP;
	private: System::Windows::Forms::Label^ lblCVVUICOMP;


	private: System::Windows::Forms::Label^ lblCVVUICOMPen;
	private: System::Windows::Forms::Label^ lblDataCadUICOMP;


	private: System::Windows::Forms::Label^ lblDataCadUICOMPen;
	private: System::Windows::Forms::Label^ lblTitularUICOMP;



	private: System::Windows::Forms::Label^ lblTitularUICOMPen;

	private: System::Windows::Forms::Panel^ pnlTitleCOMP;
	private: System::Windows::Forms::Label^ lblTitleCOMP;

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
		this->pnlCOMP = (gcnew System::Windows::Forms::Panel());
		this->pnlTitleCOMP = (gcnew System::Windows::Forms::Panel());
		this->lblTitleCOMP = (gcnew System::Windows::Forms::Label());
		this->btnCancelarCOMP = (gcnew System::Windows::Forms::Button());
		this->btnComprarCOMP = (gcnew System::Windows::Forms::Button());
		this->lblCVVCOMPen = (gcnew System::Windows::Forms::Label());
		this->textBoxCVVCOMP = (gcnew System::Windows::Forms::TextBox());
		this->textBoxYearCOMP = (gcnew System::Windows::Forms::TextBox());
		this->lblDataCadCOMPen = (gcnew System::Windows::Forms::Label());
		this->textBoxMonthCOMP = (gcnew System::Windows::Forms::TextBox());
		this->lblTitularCOMPen = (gcnew System::Windows::Forms::Label());
		this->lblNumTarjCOMPen = (gcnew System::Windows::Forms::Label());
		this->textBoxTitularCOMP = (gcnew System::Windows::Forms::TextBox());
		this->textBoxNumTarjCOMP = (gcnew System::Windows::Forms::TextBox());
		this->pnlTarjUICOMP = (gcnew System::Windows::Forms::Panel());
		this->lblCVVUICOMP = (gcnew System::Windows::Forms::Label());
		this->lblCVVUICOMPen = (gcnew System::Windows::Forms::Label());
		this->lblDataCadUICOMP = (gcnew System::Windows::Forms::Label());
		this->lblDataCadUICOMPen = (gcnew System::Windows::Forms::Label());
		this->lblTitularUICOMP = (gcnew System::Windows::Forms::Label());
		this->lblTitularUICOMPen = (gcnew System::Windows::Forms::Label());
		this->lbNumTarjUICOMP = (gcnew System::Windows::Forms::Label());
		this->pictureBoxChipUICOMP = (gcnew System::Windows::Forms::PictureBox());
		this->btnGoBackCONS = (gcnew System::Windows::Forms::Button());
		this->btnComprarCONS = (gcnew System::Windows::Forms::Button());
		this->PANELConsultarCompra = (gcnew System::Windows::Forms::Panel());
		this->picBoxEsdevCONS = (gcnew System::Windows::Forms::PictureBox());
		this->panelCONS = (gcnew System::Windows::Forms::Panel());
		this->pnl5CONS = (gcnew System::Windows::Forms::Panel());
		this->lblPuntsRegCONSen = (gcnew System::Windows::Forms::Label());
		this->pnl51CONS = (gcnew System::Windows::Forms::Panel());
		this->lblPuntsRegCONS = (gcnew System::Windows::Forms::Label());
		this->pnl6CONS = (gcnew System::Windows::Forms::Panel());
		this->lblDataCONSen = (gcnew System::Windows::Forms::Label());
		this->pnl61CONS = (gcnew System::Windows::Forms::Panel());
		this->lblDataCONS = (gcnew System::Windows::Forms::Label());
		this->pnl4CONS = (gcnew System::Windows::Forms::Panel());
		this->lblPreuPuntsCONSen = (gcnew System::Windows::Forms::Label());
		this->pnl41CONS = (gcnew System::Windows::Forms::Panel());
		this->lblPreuPuntsCONS = (gcnew System::Windows::Forms::Label());
		this->pnl3CONS = (gcnew System::Windows::Forms::Panel());
		this->lblAforamCONSen = (gcnew System::Windows::Forms::Label());
		this->pnl31CONS = (gcnew System::Windows::Forms::Panel());
		this->lblAforamCONS = (gcnew System::Windows::Forms::Label());
		this->pnl2CONS = (gcnew System::Windows::Forms::Panel());
		this->lblTipusCONSen = (gcnew System::Windows::Forms::Label());
		this->pnl21CONS = (gcnew System::Windows::Forms::Panel());
		this->lblTipusCONS = (gcnew System::Windows::Forms::Label());
		this->pnl1CONS = (gcnew System::Windows::Forms::Panel());
		this->lblAjuntEsdevCONSen = (gcnew System::Windows::Forms::Label());
		this->pnl11CONS = (gcnew System::Windows::Forms::Panel());
		this->lblAjuntEsdevCONS = (gcnew System::Windows::Forms::Label());
		this->pnlFlowTipusCapsesCONSex = (gcnew System::Windows::Forms::Panel());
		this->btnFiltreGalaCONSex = (gcnew System::Windows::Forms::Button());
		this->btnFiltreDeportivoCONSex = (gcnew System::Windows::Forms::Button());
		this->pnlDescCONS = (gcnew System::Windows::Forms::Panel());
		this->lblDescEsdevCONS = (gcnew System::Windows::Forms::Label());
		this->pnlDescTitleCONS = (gcnew System::Windows::Forms::Panel());
		this->lblDescCONSen = (gcnew System::Windows::Forms::Label());
		this->pnlPreusCONS = (gcnew System::Windows::Forms::Panel());
		this->lblPreuEsdevCONSgran = (gcnew System::Windows::Forms::Label());
		this->pnlNomEsdevTitleCONS = (gcnew System::Windows::Forms::Panel());
		this->lblNomEsdevCONS = (gcnew System::Windows::Forms::Label());
		this->btnComprarPuntsCONS = (gcnew System::Windows::Forms::Button());
		this->PANELbandEntrSolAj = (gcnew System::Windows::Forms::Panel());
		this->panelBandejaEntrada = (gcnew System::Windows::Forms::Panel());
		this->flowLayoutPnlBndEntrAj = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->pnlTitles = (gcnew System::Windows::Forms::Panel());
		this->lblTitleESTAT = (gcnew System::Windows::Forms::Label());
		this->lblTitleDESC = (gcnew System::Windows::Forms::Label());
		this->lblTitleESDEV = (gcnew System::Windows::Forms::Label());
		this->lblTitleDATA = (gcnew System::Windows::Forms::Label());
		this->lblTitleID = (gcnew System::Windows::Forms::Label());
		this->PANELEsdevHomepage = (gcnew System::Windows::Forms::Panel());
		this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->pnlTopBar = (gcnew System::Windows::Forms::Panel());
		this->panel5 = (gcnew System::Windows::Forms::Panel());
		this->panel4 = (gcnew System::Windows::Forms::Panel());
		this->pnlTopBarAppInfo = (gcnew System::Windows::Forms::Panel());
		this->lblNameApp = (gcnew System::Windows::Forms::Label());
		this->AppIcon = (gcnew System::Windows::Forms::PictureBox());
		this->pnlTopBarMinMaxClose = (gcnew System::Windows::Forms::Panel());
		this->btnMinimize = (gcnew System::Windows::Forms::Button());
		this->btnMaximize = (gcnew System::Windows::Forms::Button());
		this->btnClose = (gcnew System::Windows::Forms::Button());
		this->panelNavBar = (gcnew System::Windows::Forms::Panel());
		this->panel11 = (gcnew System::Windows::Forms::Panel());
		this->button9 = (gcnew System::Windows::Forms::Button());
		this->panel10 = (gcnew System::Windows::Forms::Panel());
		this->btnRegEsdevAJ = (gcnew System::Windows::Forms::Button());
		this->pnlModEsdev = (gcnew System::Windows::Forms::Panel());
		this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
		this->button7 = (gcnew System::Windows::Forms::Button());
		this->panel7 = (gcnew System::Windows::Forms::Panel());
		this->button5 = (gcnew System::Windows::Forms::Button());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
		this->panel6 = (gcnew System::Windows::Forms::Panel());
		this->button4 = (gcnew System::Windows::Forms::Button());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
		this->panel3 = (gcnew System::Windows::Forms::Panel());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->panelUserInfo = (gcnew System::Windows::Forms::Panel());
		this->lblPuntsUser = (gcnew System::Windows::Forms::Label());
		this->lblTypeUser = (gcnew System::Windows::Forms::Label());
		this->panel9 = (gcnew System::Windows::Forms::Panel());
		this->lblFullNameUser = (gcnew System::Windows::Forms::Label());
		this->lblUsername = (gcnew System::Windows::Forms::Label());
		this->picBoxUserPic = (gcnew System::Windows::Forms::PictureBox());
		this->pnlMainTop = (gcnew System::Windows::Forms::Panel());
		this->btnSearch = (gcnew System::Windows::Forms::Button());
		this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
		this->btnFiltrGala = (gcnew System::Windows::Forms::Button());
		this->btnFiltreDeportivo = (gcnew System::Windows::Forms::Button());
		this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->lblTitlePage = (gcnew System::Windows::Forms::Label());
		this->pnlMain = (gcnew System::Windows::Forms::Panel());
		this->PANELPROVA = (gcnew System::Windows::Forms::Panel());
		this->btnConsEsdevComprar = (gcnew System::Windows::Forms::Button());
		this->btnConsEsdevGoBack = (gcnew System::Windows::Forms::Button());
		this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->lblEsdevConsultNom = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevTipus = (gcnew System::Windows::Forms::Label());
		this->lblEsdevConsultPreu = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevPreuDesc = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevDesc = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevData = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevEntit = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevPuntsCost = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevAjunt = (gcnew System::Windows::Forms::Label());
		this->lblConsultEsdevAfor = (gcnew System::Windows::Forms::Label());
		this->pnlInfoUsu = (gcnew System::Windows::Forms::Panel());
		this->panel8 = (gcnew System::Windows::Forms::Panel());
		this->button8 = (gcnew System::Windows::Forms::Button());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
		this->pnlMainModEsdv = (gcnew System::Windows::Forms::Panel());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->btnViewNavBar = (gcnew System::Windows::Forms::Button());
		this->pnlCOMP->SuspendLayout();
		this->pnlTitleCOMP->SuspendLayout();
		this->pnlTarjUICOMP->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxChipUICOMP))->BeginInit();
		this->PANELConsultarCompra->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEsdevCONS))->BeginInit();
		this->panelCONS->SuspendLayout();
		this->pnl5CONS->SuspendLayout();
		this->pnl51CONS->SuspendLayout();
		this->pnl6CONS->SuspendLayout();
		this->pnl61CONS->SuspendLayout();
		this->pnl4CONS->SuspendLayout();
		this->pnl41CONS->SuspendLayout();
		this->pnl3CONS->SuspendLayout();
		this->pnl31CONS->SuspendLayout();
		this->pnl2CONS->SuspendLayout();
		this->pnl21CONS->SuspendLayout();
		this->pnl1CONS->SuspendLayout();
		this->pnl11CONS->SuspendLayout();
		this->pnlFlowTipusCapsesCONSex->SuspendLayout();
		this->pnlDescCONS->SuspendLayout();
		this->pnlDescTitleCONS->SuspendLayout();
		this->pnlPreusCONS->SuspendLayout();
		this->pnlNomEsdevTitleCONS->SuspendLayout();
		this->PANELbandEntrSolAj->SuspendLayout();
		this->panelBandejaEntrada->SuspendLayout();
		this->pnlTitles->SuspendLayout();
		this->PANELEsdevHomepage->SuspendLayout();
		this->pnlTopBar->SuspendLayout();
		this->pnlTopBarAppInfo->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppIcon))->BeginInit();
		this->pnlTopBarMinMaxClose->SuspendLayout();
		this->panelNavBar->SuspendLayout();
		this->panel11->SuspendLayout();
		this->panel10->SuspendLayout();
		this->pnlModEsdev->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
		this->panel7->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
		this->panel6->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
		this->panel3->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
		this->panel2->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
		this->panel1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		this->panelUserInfo->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUserPic))->BeginInit();
		this->pnlMainTop->SuspendLayout();
		this->flowLayoutPanel2->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
		this->pnlMain->SuspendLayout();
		this->PANELPROVA->SuspendLayout();
		this->tableLayoutPanel1->SuspendLayout();
		this->panel8->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
		this->pnlMainModEsdv->SuspendLayout();
		this->SuspendLayout();
		// 
		// pnlCOMP
		// 
		this->pnlCOMP->BackColor = System::Drawing::Color::WhiteSmoke;
		this->pnlCOMP->Controls->Add(this->pnlTitleCOMP);
		this->pnlCOMP->Controls->Add(this->btnCancelarCOMP);
		this->pnlCOMP->Controls->Add(this->btnComprarCOMP);
		this->pnlCOMP->Controls->Add(this->lblCVVCOMPen);
		this->pnlCOMP->Controls->Add(this->textBoxCVVCOMP);
		this->pnlCOMP->Controls->Add(this->textBoxYearCOMP);
		this->pnlCOMP->Controls->Add(this->lblDataCadCOMPen);
		this->pnlCOMP->Controls->Add(this->textBoxMonthCOMP);
		this->pnlCOMP->Controls->Add(this->lblTitularCOMPen);
		this->pnlCOMP->Controls->Add(this->lblNumTarjCOMPen);
		this->pnlCOMP->Controls->Add(this->textBoxTitularCOMP);
		this->pnlCOMP->Controls->Add(this->textBoxNumTarjCOMP);
		this->pnlCOMP->Controls->Add(this->pnlTarjUICOMP);
		this->pnlCOMP->Dock = System::Windows::Forms::DockStyle::Right;
		this->pnlCOMP->Location = System::Drawing::Point(888, 0);
		this->pnlCOMP->Name = L"pnlCOMP";
		this->pnlCOMP->Size = System::Drawing::Size(612, 670);
		this->pnlCOMP->TabIndex = 6;
		this->pnlCOMP->Visible = false;
		// 
		// pnlTitleCOMP
		// 
		this->pnlTitleCOMP->BackColor = System::Drawing::Color::Black;
		this->pnlTitleCOMP->Controls->Add(this->lblTitleCOMP);
		this->pnlTitleCOMP->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnlTitleCOMP->Location = System::Drawing::Point(0, 0);
		this->pnlTitleCOMP->Name = L"pnlTitleCOMP";
		this->pnlTitleCOMP->Size = System::Drawing::Size(612, 48);
		this->pnlTitleCOMP->TabIndex = 14;
		// 
		// lblTitleCOMP
		// 
		this->lblTitleCOMP->AutoSize = true;
		this->lblTitleCOMP->BackColor = System::Drawing::Color::Black;
		this->lblTitleCOMP->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblTitleCOMP->ForeColor = System::Drawing::Color::White;
		this->lblTitleCOMP->Location = System::Drawing::Point(11, 9);
		this->lblTitleCOMP->Name = L"lblTitleCOMP";
		this->lblTitleCOMP->Size = System::Drawing::Size(256, 31);
		this->lblTitleCOMP->TabIndex = 1;
		this->lblTitleCOMP->Text = L"Comprar Esdeveniment";
		// 
		// btnCancelarCOMP
		// 
		this->btnCancelarCOMP->Location = System::Drawing::Point(238, 613);
		this->btnCancelarCOMP->Margin = System::Windows::Forms::Padding(4);
		this->btnCancelarCOMP->Name = L"btnCancelarCOMP";
		this->btnCancelarCOMP->Size = System::Drawing::Size(119, 46);
		this->btnCancelarCOMP->TabIndex = 10;
		this->btnCancelarCOMP->Text = L"Cancelar";
		this->btnCancelarCOMP->UseVisualStyleBackColor = true;
		// 
		// btnComprarCOMP
		// 
		this->btnComprarCOMP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		this->btnComprarCOMP->Location = System::Drawing::Point(371, 613);
		this->btnComprarCOMP->Margin = System::Windows::Forms::Padding(4);
		this->btnComprarCOMP->Name = L"btnComprarCOMP";
		this->btnComprarCOMP->Size = System::Drawing::Size(218, 46);
		this->btnComprarCOMP->TabIndex = 10;
		this->btnComprarCOMP->Text = L"Comprar";
		this->btnComprarCOMP->UseVisualStyleBackColor = false;
		this->btnComprarCOMP->Click += gcnew System::EventHandler(this, &ProvesUI::btnComprarCOMP_Click);
		// 
		// lblCVVCOMPen
		// 
		this->lblCVVCOMPen->AutoSize = true;
		this->lblCVVCOMPen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblCVVCOMPen->Location = System::Drawing::Point(17, 512);
		this->lblCVVCOMPen->Name = L"lblCVVCOMPen";
		this->lblCVVCOMPen->Size = System::Drawing::Size(32, 17);
		this->lblCVVCOMPen->TabIndex = 13;
		this->lblCVVCOMPen->Text = L"CVV";
		// 
		// textBoxCVVCOMP
		// 
		this->textBoxCVVCOMP->Location = System::Drawing::Point(20, 534);
		this->textBoxCVVCOMP->Name = L"textBoxCVVCOMP";
		this->textBoxCVVCOMP->Size = System::Drawing::Size(106, 22);
		this->textBoxCVVCOMP->TabIndex = 12;
		// 
		// textBoxYearCOMP
		// 
		this->textBoxYearCOMP->Location = System::Drawing::Point(480, 474);
		this->textBoxYearCOMP->Name = L"textBoxYearCOMP";
		this->textBoxYearCOMP->Size = System::Drawing::Size(106, 22);
		this->textBoxYearCOMP->TabIndex = 11;
		this->textBoxYearCOMP->Text = L"YYYY";
		// 
		// lblDataCadCOMPen
		// 
		this->lblDataCadCOMPen->AutoSize = true;
		this->lblDataCadCOMPen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblDataCadCOMPen->Location = System::Drawing::Point(354, 452);
		this->lblDataCadCOMPen->Name = L"lblDataCadCOMPen";
		this->lblDataCadCOMPen->Size = System::Drawing::Size(106, 17);
		this->lblDataCadCOMPen->TabIndex = 10;
		this->lblDataCadCOMPen->Text = L"Fecha Caducidad";
		// 
		// textBoxMonthCOMP
		// 
		this->textBoxMonthCOMP->Location = System::Drawing::Point(357, 474);
		this->textBoxMonthCOMP->Name = L"textBoxMonthCOMP";
		this->textBoxMonthCOMP->Size = System::Drawing::Size(106, 22);
		this->textBoxMonthCOMP->TabIndex = 9;
		this->textBoxMonthCOMP->Text = L"MM";
		// 
		// lblTitularCOMPen
		// 
		this->lblTitularCOMPen->AutoSize = true;
		this->lblTitularCOMPen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblTitularCOMPen->Location = System::Drawing::Point(17, 452);
		this->lblTitularCOMPen->Name = L"lblTitularCOMPen";
		this->lblTitularCOMPen->Size = System::Drawing::Size(120, 17);
		this->lblTitularCOMPen->TabIndex = 8;
		this->lblTitularCOMPen->Text = L"Titular de la Tarjeta";
		// 
		// lblNumTarjCOMPen
		// 
		this->lblNumTarjCOMPen->AutoSize = true;
		this->lblNumTarjCOMPen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblNumTarjCOMPen->Location = System::Drawing::Point(17, 382);
		this->lblNumTarjCOMPen->Name = L"lblNumTarjCOMPen";
		this->lblNumTarjCOMPen->Size = System::Drawing::Size(132, 17);
		this->lblNumTarjCOMPen->TabIndex = 2;
		this->lblNumTarjCOMPen->Text = L"Numero de la Tarjeta";
		// 
		// textBoxTitularCOMP
		// 
		this->textBoxTitularCOMP->Location = System::Drawing::Point(17, 474);
		this->textBoxTitularCOMP->Name = L"textBoxTitularCOMP";
		this->textBoxTitularCOMP->Size = System::Drawing::Size(314, 22);
		this->textBoxTitularCOMP->TabIndex = 7;
		// 
		// textBoxNumTarjCOMP
		// 
		this->textBoxNumTarjCOMP->Location = System::Drawing::Point(17, 404);
		this->textBoxNumTarjCOMP->Name = L"textBoxNumTarjCOMP";
		this->textBoxNumTarjCOMP->Size = System::Drawing::Size(569, 22);
		this->textBoxNumTarjCOMP->TabIndex = 1;
		// 
		// pnlTarjUICOMP
		// 
		this->pnlTarjUICOMP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
			static_cast<System::Int32>(static_cast<System::Byte>(175)));
		this->pnlTarjUICOMP->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlTarjUICOMP.BackgroundImage")));
		this->pnlTarjUICOMP->Controls->Add(this->lblCVVUICOMP);
		this->pnlTarjUICOMP->Controls->Add(this->lblCVVUICOMPen);
		this->pnlTarjUICOMP->Controls->Add(this->lblDataCadUICOMP);
		this->pnlTarjUICOMP->Controls->Add(this->lblDataCadUICOMPen);
		this->pnlTarjUICOMP->Controls->Add(this->lblTitularUICOMP);
		this->pnlTarjUICOMP->Controls->Add(this->lblTitularUICOMPen);
		this->pnlTarjUICOMP->Controls->Add(this->lbNumTarjUICOMP);
		this->pnlTarjUICOMP->Controls->Add(this->pictureBoxChipUICOMP);
		this->pnlTarjUICOMP->Location = System::Drawing::Point(20, 64);
		this->pnlTarjUICOMP->Name = L"pnlTarjUICOMP";
		this->pnlTarjUICOMP->Size = System::Drawing::Size(569, 288);
		this->pnlTarjUICOMP->TabIndex = 0;
		// 
		// lblCVVUICOMP
		// 
		this->lblCVVUICOMP->AutoSize = true;
		this->lblCVVUICOMP->BackColor = System::Drawing::Color::Transparent;
		this->lblCVVUICOMP->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblCVVUICOMP->ForeColor = System::Drawing::Color::Transparent;
		this->lblCVVUICOMP->Location = System::Drawing::Point(389, 227);
		this->lblCVVUICOMP->Name = L"lblCVVUICOMP";
		this->lblCVVUICOMP->Size = System::Drawing::Size(36, 28);
		this->lblCVVUICOMP->TabIndex = 7;
		this->lblCVVUICOMP->Text = L"***";
		// 
		// lblCVVUICOMPen
		// 
		this->lblCVVUICOMPen->AutoSize = true;
		this->lblCVVUICOMPen->BackColor = System::Drawing::Color::Transparent;
		this->lblCVVUICOMPen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblCVVUICOMPen->ForeColor = System::Drawing::Color::Transparent;
		this->lblCVVUICOMPen->Location = System::Drawing::Point(390, 200);
		this->lblCVVUICOMPen->Name = L"lblCVVUICOMPen";
		this->lblCVVUICOMPen->Size = System::Drawing::Size(43, 23);
		this->lblCVVUICOMPen->TabIndex = 6;
		this->lblCVVUICOMPen->Text = L"CVV";
		// 
		// lblDataCadUICOMP
		// 
		this->lblDataCadUICOMP->AutoSize = true;
		this->lblDataCadUICOMP->BackColor = System::Drawing::Color::Transparent;
		this->lblDataCadUICOMP->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblDataCadUICOMP->ForeColor = System::Drawing::Color::Transparent;
		this->lblDataCadUICOMP->Location = System::Drawing::Point(230, 227);
		this->lblDataCadUICOMP->Name = L"lblDataCadUICOMP";
		this->lblDataCadUICOMP->Size = System::Drawing::Size(64, 28);
		this->lblDataCadUICOMP->TabIndex = 5;
		this->lblDataCadUICOMP->Text = L"01/00";
		// 
		// lblDataCadUICOMPen
		// 
		this->lblDataCadUICOMPen->AutoSize = true;
		this->lblDataCadUICOMPen->BackColor = System::Drawing::Color::Transparent;
		this->lblDataCadUICOMPen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblDataCadUICOMPen->ForeColor = System::Drawing::Color::Transparent;
		this->lblDataCadUICOMPen->Location = System::Drawing::Point(231, 200);
		this->lblDataCadUICOMPen->Name = L"lblDataCadUICOMPen";
		this->lblDataCadUICOMPen->Size = System::Drawing::Size(103, 23);
		this->lblDataCadUICOMPen->TabIndex = 4;
		this->lblDataCadUICOMPen->Text = L"Valido hasta";
		// 
		// lblTitularUICOMP
		// 
		this->lblTitularUICOMP->AutoSize = true;
		this->lblTitularUICOMP->BackColor = System::Drawing::Color::Transparent;
		this->lblTitularUICOMP->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblTitularUICOMP->ForeColor = System::Drawing::Color::Transparent;
		this->lblTitularUICOMP->Location = System::Drawing::Point(39, 227);
		this->lblTitularUICOMP->Name = L"lblTitularUICOMP";
		this->lblTitularUICOMP->Size = System::Drawing::Size(126, 28);
		this->lblTitularUICOMP->TabIndex = 3;
		this->lblTitularUICOMP->Text = L"JOHN SMITH";
		// 
		// lblTitularUICOMPen
		// 
		this->lblTitularUICOMPen->AutoSize = true;
		this->lblTitularUICOMPen->BackColor = System::Drawing::Color::Transparent;
		this->lblTitularUICOMPen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblTitularUICOMPen->ForeColor = System::Drawing::Color::Transparent;
		this->lblTitularUICOMPen->Location = System::Drawing::Point(36, 200);
		this->lblTitularUICOMPen->Name = L"lblTitularUICOMPen";
		this->lblTitularUICOMPen->Size = System::Drawing::Size(58, 23);
		this->lblTitularUICOMPen->TabIndex = 2;
		this->lblTitularUICOMPen->Text = L"Titular";
		// 
		// lbNumTarjUICOMP
		// 
		this->lbNumTarjUICOMP->AutoSize = true;
		this->lbNumTarjUICOMP->BackColor = System::Drawing::Color::Transparent;
		this->lbNumTarjUICOMP->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lbNumTarjUICOMP->ForeColor = System::Drawing::Color::Transparent;
		this->lbNumTarjUICOMP->Location = System::Drawing::Point(51, 114);
		this->lbNumTarjUICOMP->Name = L"lbNumTarjUICOMP";
		this->lbNumTarjUICOMP->Size = System::Drawing::Size(456, 48);
		this->lbNumTarjUICOMP->TabIndex = 1;
		this->lbNumTarjUICOMP->Text = L"1234 5678 9010 0010";
		// 
		// pictureBoxChipUICOMP
		// 
		this->pictureBoxChipUICOMP->BackColor = System::Drawing::Color::Transparent;
		this->pictureBoxChipUICOMP->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxChipUICOMP.Image")));
		this->pictureBoxChipUICOMP->Location = System::Drawing::Point(21, 18);
		this->pictureBoxChipUICOMP->Name = L"pictureBoxChipUICOMP";
		this->pictureBoxChipUICOMP->Size = System::Drawing::Size(73, 50);
		this->pictureBoxChipUICOMP->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBoxChipUICOMP->TabIndex = 0;
		this->pictureBoxChipUICOMP->TabStop = false;
		// 
		// btnGoBackCONS
		// 
		this->btnGoBackCONS->Location = System::Drawing::Point(290, 613);
		this->btnGoBackCONS->Margin = System::Windows::Forms::Padding(4);
		this->btnGoBackCONS->Name = L"btnGoBackCONS";
		this->btnGoBackCONS->Size = System::Drawing::Size(119, 46);
		this->btnGoBackCONS->TabIndex = 0;
		this->btnGoBackCONS->Text = L"Atrás";
		this->btnGoBackCONS->UseVisualStyleBackColor = true;
		this->btnGoBackCONS->Click += gcnew System::EventHandler(this, &ProvesUI::btnGoBackCONS_Click);
		// 
		// btnComprarCONS
		// 
		this->btnComprarCONS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		this->btnComprarCONS->Location = System::Drawing::Point(627, 613);
		this->btnComprarCONS->Margin = System::Windows::Forms::Padding(4);
		this->btnComprarCONS->Name = L"btnComprarCONS";
		this->btnComprarCONS->Size = System::Drawing::Size(218, 46);
		this->btnComprarCONS->TabIndex = 1;
		this->btnComprarCONS->Text = L"Comprar";
		this->btnComprarCONS->UseVisualStyleBackColor = false;
		this->btnComprarCONS->Click += gcnew System::EventHandler(this, &ProvesUI::btnComprarCONS_Click);
		// 
		// PANELConsultarCompra
		// 
		this->PANELConsultarCompra->BackColor = System::Drawing::Color::WhiteSmoke;
		this->PANELConsultarCompra->Controls->Add(this->pnlCOMP);
		this->PANELConsultarCompra->Controls->Add(this->picBoxEsdevCONS);
		this->PANELConsultarCompra->Controls->Add(this->panelCONS);
		this->PANELConsultarCompra->Controls->Add(this->pnlFlowTipusCapsesCONSex);
		this->PANELConsultarCompra->Controls->Add(this->pnlDescCONS);
		this->PANELConsultarCompra->Controls->Add(this->pnlPreusCONS);
		this->PANELConsultarCompra->Controls->Add(this->pnlNomEsdevTitleCONS);
		this->PANELConsultarCompra->Controls->Add(this->btnComprarCONS);
		this->PANELConsultarCompra->Controls->Add(this->btnComprarPuntsCONS);
		this->PANELConsultarCompra->Controls->Add(this->btnGoBackCONS);
		this->PANELConsultarCompra->Location = System::Drawing::Point(91, 20);
		this->PANELConsultarCompra->Name = L"PANELConsultarCompra";
		this->PANELConsultarCompra->Size = System::Drawing::Size(1500, 670);
		this->PANELConsultarCompra->TabIndex = 5;
		this->PANELConsultarCompra->Visible = false;
		// 
		// picBoxEsdevCONS
		// 
		this->picBoxEsdevCONS->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxEsdevCONS.Image")));
		this->picBoxEsdevCONS->Location = System::Drawing::Point(21, 64);
		this->picBoxEsdevCONS->Margin = System::Windows::Forms::Padding(4);
		this->picBoxEsdevCONS->Name = L"picBoxEsdevCONS";
		this->picBoxEsdevCONS->Size = System::Drawing::Size(262, 305);
		this->picBoxEsdevCONS->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->picBoxEsdevCONS->TabIndex = 4;
		this->picBoxEsdevCONS->TabStop = false;
		// 
		// panelCONS
		// 
		this->panelCONS->Controls->Add(this->pnl5CONS);
		this->panelCONS->Controls->Add(this->pnl6CONS);
		this->panelCONS->Controls->Add(this->pnl4CONS);
		this->panelCONS->Controls->Add(this->pnl3CONS);
		this->panelCONS->Controls->Add(this->pnl2CONS);
		this->panelCONS->Controls->Add(this->pnl1CONS);
		this->panelCONS->Location = System::Drawing::Point(297, 64);
		this->panelCONS->Name = L"panelCONS";
		this->panelCONS->Size = System::Drawing::Size(548, 260);
		this->panelCONS->TabIndex = 5;
		// 
		// pnl5CONS
		// 
		this->pnl5CONS->BackColor = System::Drawing::Color::Black;
		this->pnl5CONS->Controls->Add(this->lblPuntsRegCONSen);
		this->pnl5CONS->Controls->Add(this->pnl51CONS);
		this->pnl5CONS->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnl5CONS->Location = System::Drawing::Point(0, 210);
		this->pnl5CONS->Name = L"pnl5CONS";
		this->pnl5CONS->Size = System::Drawing::Size(548, 42);
		this->pnl5CONS->TabIndex = 8;
		// 
		// lblPuntsRegCONSen
		// 
		this->lblPuntsRegCONSen->AutoSize = true;
		this->lblPuntsRegCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblPuntsRegCONSen->ForeColor = System::Drawing::Color::White;
		this->lblPuntsRegCONSen->Location = System::Drawing::Point(3, 9);
		this->lblPuntsRegCONSen->Name = L"lblPuntsRegCONSen";
		this->lblPuntsRegCONSen->Size = System::Drawing::Size(211, 23);
		this->lblPuntsRegCONSen->TabIndex = 3;
		this->lblPuntsRegCONSen->Text = L"Punts Regal per la compra";
		// 
		// pnl51CONS
		// 
		this->pnl51CONS->BackColor = System::Drawing::Color::White;
		this->pnl51CONS->Controls->Add(this->lblPuntsRegCONS);
		this->pnl51CONS->Dock = System::Windows::Forms::DockStyle::Right;
		this->pnl51CONS->Location = System::Drawing::Point(230, 0);
		this->pnl51CONS->Name = L"pnl51CONS";
		this->pnl51CONS->Size = System::Drawing::Size(318, 42);
		this->pnl51CONS->TabIndex = 0;
		// 
		// lblPuntsRegCONS
		// 
		this->lblPuntsRegCONS->AutoSize = true;
		this->lblPuntsRegCONS->BackColor = System::Drawing::Color::White;
		this->lblPuntsRegCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblPuntsRegCONS->ForeColor = System::Drawing::Color::Black;
		this->lblPuntsRegCONS->Location = System::Drawing::Point(19, 7);
		this->lblPuntsRegCONS->Name = L"lblPuntsRegCONS";
		this->lblPuntsRegCONS->Size = System::Drawing::Size(220, 25);
		this->lblPuntsRegCONS->TabIndex = 2;
		this->lblPuntsRegCONS->Text = L"Punts Regal Esdeveniment";
		this->lblPuntsRegCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// pnl6CONS
		// 
		this->pnl6CONS->BackColor = System::Drawing::Color::Black;
		this->pnl6CONS->Controls->Add(this->lblDataCONSen);
		this->pnl6CONS->Controls->Add(this->pnl61CONS);
		this->pnl6CONS->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnl6CONS->Location = System::Drawing::Point(0, 168);
		this->pnl6CONS->Name = L"pnl6CONS";
		this->pnl6CONS->Size = System::Drawing::Size(548, 42);
		this->pnl6CONS->TabIndex = 7;
		// 
		// lblDataCONSen
		// 
		this->lblDataCONSen->AutoSize = true;
		this->lblDataCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblDataCONSen->ForeColor = System::Drawing::Color::White;
		this->lblDataCONSen->Location = System::Drawing::Point(86, 10);
		this->lblDataCONSen->Name = L"lblDataCONSen";
		this->lblDataCONSen->Size = System::Drawing::Size(50, 23);
		this->lblDataCONSen->TabIndex = 3;
		this->lblDataCONSen->Text = L"Data:";
		// 
		// pnl61CONS
		// 
		this->pnl61CONS->BackColor = System::Drawing::Color::White;
		this->pnl61CONS->Controls->Add(this->lblDataCONS);
		this->pnl61CONS->Dock = System::Windows::Forms::DockStyle::Right;
		this->pnl61CONS->Location = System::Drawing::Point(230, 0);
		this->pnl61CONS->Name = L"pnl61CONS";
		this->pnl61CONS->Size = System::Drawing::Size(318, 42);
		this->pnl61CONS->TabIndex = 0;
		// 
		// lblDataCONS
		// 
		this->lblDataCONS->AutoSize = true;
		this->lblDataCONS->BackColor = System::Drawing::Color::White;
		this->lblDataCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblDataCONS->ForeColor = System::Drawing::Color::Black;
		this->lblDataCONS->Location = System::Drawing::Point(19, 8);
		this->lblDataCONS->Name = L"lblDataCONS";
		this->lblDataCONS->Size = System::Drawing::Size(164, 25);
		this->lblDataCONS->TabIndex = 2;
		this->lblDataCONS->Text = L"Data Esdeveniment";
		this->lblDataCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// pnl4CONS
		// 
		this->pnl4CONS->BackColor = System::Drawing::Color::Black;
		this->pnl4CONS->Controls->Add(this->lblPreuPuntsCONSen);
		this->pnl4CONS->Controls->Add(this->pnl41CONS);
		this->pnl4CONS->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnl4CONS->Location = System::Drawing::Point(0, 126);
		this->pnl4CONS->Name = L"pnl4CONS";
		this->pnl4CONS->Size = System::Drawing::Size(548, 42);
		this->pnl4CONS->TabIndex = 6;
		// 
		// lblPreuPuntsCONSen
		// 
		this->lblPreuPuntsCONSen->AutoSize = true;
		this->lblPreuPuntsCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblPreuPuntsCONSen->ForeColor = System::Drawing::Color::White;
		this->lblPreuPuntsCONSen->Location = System::Drawing::Point(65, 9);
		this->lblPreuPuntsCONSen->Name = L"lblPreuPuntsCONSen";
		this->lblPreuPuntsCONSen->Size = System::Drawing::Size(97, 23);
		this->lblPreuPuntsCONSen->TabIndex = 3;
		this->lblPreuPuntsCONSen->Text = L"Preu Punts:";
		// 
		// pnl41CONS
		// 
		this->pnl41CONS->BackColor = System::Drawing::Color::White;
		this->pnl41CONS->Controls->Add(this->lblPreuPuntsCONS);
		this->pnl41CONS->Dock = System::Windows::Forms::DockStyle::Right;
		this->pnl41CONS->Location = System::Drawing::Point(230, 0);
		this->pnl41CONS->Name = L"pnl41CONS";
		this->pnl41CONS->Size = System::Drawing::Size(318, 42);
		this->pnl41CONS->TabIndex = 0;
		// 
		// lblPreuPuntsCONS
		// 
		this->lblPreuPuntsCONS->AutoSize = true;
		this->lblPreuPuntsCONS->BackColor = System::Drawing::Color::White;
		this->lblPreuPuntsCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblPreuPuntsCONS->ForeColor = System::Drawing::Color::Black;
		this->lblPreuPuntsCONS->Location = System::Drawing::Point(19, 7);
		this->lblPreuPuntsCONS->Name = L"lblPreuPuntsCONS";
		this->lblPreuPuntsCONS->Size = System::Drawing::Size(211, 25);
		this->lblPreuPuntsCONS->TabIndex = 2;
		this->lblPreuPuntsCONS->Text = L"Preu Punts Esdeveniment";
		this->lblPreuPuntsCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// pnl3CONS
		// 
		this->pnl3CONS->BackColor = System::Drawing::Color::Black;
		this->pnl3CONS->Controls->Add(this->lblAforamCONSen);
		this->pnl3CONS->Controls->Add(this->pnl31CONS);
		this->pnl3CONS->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnl3CONS->Location = System::Drawing::Point(0, 84);
		this->pnl3CONS->Name = L"pnl3CONS";
		this->pnl3CONS->Size = System::Drawing::Size(548, 42);
		this->pnl3CONS->TabIndex = 5;
		// 
		// lblAforamCONSen
		// 
		this->lblAforamCONSen->AutoSize = true;
		this->lblAforamCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblAforamCONSen->ForeColor = System::Drawing::Color::White;
		this->lblAforamCONSen->Location = System::Drawing::Point(65, 10);
		this->lblAforamCONSen->Name = L"lblAforamCONSen";
		this->lblAforamCONSen->Size = System::Drawing::Size(95, 23);
		this->lblAforamCONSen->TabIndex = 3;
		this->lblAforamCONSen->Text = L"Aforament:";
		// 
		// pnl31CONS
		// 
		this->pnl31CONS->BackColor = System::Drawing::Color::White;
		this->pnl31CONS->Controls->Add(this->lblAforamCONS);
		this->pnl31CONS->Dock = System::Windows::Forms::DockStyle::Right;
		this->pnl31CONS->Location = System::Drawing::Point(230, 0);
		this->pnl31CONS->Name = L"pnl31CONS";
		this->pnl31CONS->Size = System::Drawing::Size(318, 42);
		this->pnl31CONS->TabIndex = 0;
		// 
		// lblAforamCONS
		// 
		this->lblAforamCONS->AutoSize = true;
		this->lblAforamCONS->BackColor = System::Drawing::Color::White;
		this->lblAforamCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblAforamCONS->ForeColor = System::Drawing::Color::Black;
		this->lblAforamCONS->Location = System::Drawing::Point(19, 8);
		this->lblAforamCONS->Name = L"lblAforamCONS";
		this->lblAforamCONS->Size = System::Drawing::Size(212, 25);
		this->lblAforamCONS->TabIndex = 2;
		this->lblAforamCONS->Text = L"Aforament Esdeveniment";
		this->lblAforamCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// pnl2CONS
		// 
		this->pnl2CONS->BackColor = System::Drawing::Color::Black;
		this->pnl2CONS->Controls->Add(this->lblTipusCONSen);
		this->pnl2CONS->Controls->Add(this->pnl21CONS);
		this->pnl2CONS->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnl2CONS->Location = System::Drawing::Point(0, 42);
		this->pnl2CONS->Name = L"pnl2CONS";
		this->pnl2CONS->Size = System::Drawing::Size(548, 42);
		this->pnl2CONS->TabIndex = 4;
		// 
		// lblTipusCONSen
		// 
		this->lblTipusCONSen->AutoSize = true;
		this->lblTipusCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblTipusCONSen->ForeColor = System::Drawing::Color::White;
		this->lblTipusCONSen->Location = System::Drawing::Point(82, 10);
		this->lblTipusCONSen->Name = L"lblTipusCONSen";
		this->lblTipusCONSen->Size = System::Drawing::Size(54, 23);
		this->lblTipusCONSen->TabIndex = 3;
		this->lblTipusCONSen->Text = L"Tipus:";
		// 
		// pnl21CONS
		// 
		this->pnl21CONS->BackColor = System::Drawing::Color::White;
		this->pnl21CONS->Controls->Add(this->lblTipusCONS);
		this->pnl21CONS->Dock = System::Windows::Forms::DockStyle::Right;
		this->pnl21CONS->Location = System::Drawing::Point(230, 0);
		this->pnl21CONS->Name = L"pnl21CONS";
		this->pnl21CONS->Size = System::Drawing::Size(318, 42);
		this->pnl21CONS->TabIndex = 0;
		// 
		// lblTipusCONS
		// 
		this->lblTipusCONS->AutoSize = true;
		this->lblTipusCONS->BackColor = System::Drawing::Color::White;
		this->lblTipusCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblTipusCONS->ForeColor = System::Drawing::Color::Black;
		this->lblTipusCONS->Location = System::Drawing::Point(19, 8);
		this->lblTipusCONS->Name = L"lblTipusCONS";
		this->lblTipusCONS->Size = System::Drawing::Size(169, 25);
		this->lblTipusCONS->TabIndex = 2;
		this->lblTipusCONS->Text = L"Tipus Esdeveniment";
		this->lblTipusCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// pnl1CONS
		// 
		this->pnl1CONS->BackColor = System::Drawing::Color::Black;
		this->pnl1CONS->Controls->Add(this->lblAjuntEsdevCONSen);
		this->pnl1CONS->Controls->Add(this->pnl11CONS);
		this->pnl1CONS->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnl1CONS->Location = System::Drawing::Point(0, 0);
		this->pnl1CONS->Name = L"pnl1CONS";
		this->pnl1CONS->Size = System::Drawing::Size(548, 42);
		this->pnl1CONS->TabIndex = 2;
		// 
		// lblAjuntEsdevCONSen
		// 
		this->lblAjuntEsdevCONSen->AutoSize = true;
		this->lblAjuntEsdevCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblAjuntEsdevCONSen->ForeColor = System::Drawing::Color::White;
		this->lblAjuntEsdevCONSen->Location = System::Drawing::Point(16, 9);
		this->lblAjuntEsdevCONSen->Name = L"lblAjuntEsdevCONSen";
		this->lblAjuntEsdevCONSen->Size = System::Drawing::Size(188, 23);
		this->lblAjuntEsdevCONSen->TabIndex = 3;
		this->lblAjuntEsdevCONSen->Text = L"Ajuntament Relacionat:";
		// 
		// pnl11CONS
		// 
		this->pnl11CONS->BackColor = System::Drawing::Color::White;
		this->pnl11CONS->Controls->Add(this->lblAjuntEsdevCONS);
		this->pnl11CONS->Dock = System::Windows::Forms::DockStyle::Right;
		this->pnl11CONS->Location = System::Drawing::Point(230, 0);
		this->pnl11CONS->Name = L"pnl11CONS";
		this->pnl11CONS->Size = System::Drawing::Size(318, 42);
		this->pnl11CONS->TabIndex = 0;
		// 
		// lblAjuntEsdevCONS
		// 
		this->lblAjuntEsdevCONS->AutoSize = true;
		this->lblAjuntEsdevCONS->BackColor = System::Drawing::Color::White;
		this->lblAjuntEsdevCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblAjuntEsdevCONS->ForeColor = System::Drawing::Color::Black;
		this->lblAjuntEsdevCONS->Location = System::Drawing::Point(19, 9);
		this->lblAjuntEsdevCONS->Name = L"lblAjuntEsdevCONS";
		this->lblAjuntEsdevCONS->Size = System::Drawing::Size(219, 25);
		this->lblAjuntEsdevCONS->TabIndex = 2;
		this->lblAjuntEsdevCONS->Text = L"Ajuntament Esdeveniment";
		this->lblAjuntEsdevCONS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// pnlFlowTipusCapsesCONSex
		// 
		this->pnlFlowTipusCapsesCONSex->BackColor = System::Drawing::Color::White;
		this->pnlFlowTipusCapsesCONSex->Controls->Add(this->btnFiltreGalaCONSex);
		this->pnlFlowTipusCapsesCONSex->Controls->Add(this->btnFiltreDeportivoCONSex);
		this->pnlFlowTipusCapsesCONSex->Location = System::Drawing::Point(289, 377);
		this->pnlFlowTipusCapsesCONSex->Name = L"pnlFlowTipusCapsesCONSex";
		this->pnlFlowTipusCapsesCONSex->Size = System::Drawing::Size(556, 49);
		this->pnlFlowTipusCapsesCONSex->TabIndex = 9;
		// 
		// btnFiltreGalaCONSex
		// 
		this->btnFiltreGalaCONSex->BackColor = System::Drawing::Color::Crimson;
		this->btnFiltreGalaCONSex->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->btnFiltreGalaCONSex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnFiltreGalaCONSex->ForeColor = System::Drawing::Color::White;
		this->btnFiltreGalaCONSex->Location = System::Drawing::Point(116, 10);
		this->btnFiltreGalaCONSex->Margin = System::Windows::Forms::Padding(4);
		this->btnFiltreGalaCONSex->Name = L"btnFiltreGalaCONSex";
		this->btnFiltreGalaCONSex->Size = System::Drawing::Size(100, 28);
		this->btnFiltreGalaCONSex->TabIndex = 11;
		this->btnFiltreGalaCONSex->Text = L"Gala";
		this->btnFiltreGalaCONSex->UseVisualStyleBackColor = false;
		// 
		// btnFiltreDeportivoCONSex
		// 
		this->btnFiltreDeportivoCONSex->BackColor = System::Drawing::Color::Crimson;
		this->btnFiltreDeportivoCONSex->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->btnFiltreDeportivoCONSex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnFiltreDeportivoCONSex->ForeColor = System::Drawing::Color::White;
		this->btnFiltreDeportivoCONSex->Location = System::Drawing::Point(8, 10);
		this->btnFiltreDeportivoCONSex->Margin = System::Windows::Forms::Padding(4);
		this->btnFiltreDeportivoCONSex->Name = L"btnFiltreDeportivoCONSex";
		this->btnFiltreDeportivoCONSex->Size = System::Drawing::Size(100, 28);
		this->btnFiltreDeportivoCONSex->TabIndex = 10;
		this->btnFiltreDeportivoCONSex->Text = L"Deportivo";
		this->btnFiltreDeportivoCONSex->UseVisualStyleBackColor = false;
		// 
		// pnlDescCONS
		// 
		this->pnlDescCONS->BackColor = System::Drawing::Color::White;
		this->pnlDescCONS->Controls->Add(this->lblDescEsdevCONS);
		this->pnlDescCONS->Controls->Add(this->pnlDescTitleCONS);
		this->pnlDescCONS->Location = System::Drawing::Point(21, 432);
		this->pnlDescCONS->Name = L"pnlDescCONS";
		this->pnlDescCONS->Size = System::Drawing::Size(824, 169);
		this->pnlDescCONS->TabIndex = 6;
		// 
		// lblDescEsdevCONS
		// 
		this->lblDescEsdevCONS->Location = System::Drawing::Point(18, 56);
		this->lblDescEsdevCONS->Name = L"lblDescEsdevCONS";
		this->lblDescEsdevCONS->Size = System::Drawing::Size(751, 100);
		this->lblDescEsdevCONS->TabIndex = 1;
		// 
		// pnlDescTitleCONS
		// 
		this->pnlDescTitleCONS->BackColor = System::Drawing::Color::Black;
		this->pnlDescTitleCONS->Controls->Add(this->lblDescCONSen);
		this->pnlDescTitleCONS->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnlDescTitleCONS->Location = System::Drawing::Point(0, 0);
		this->pnlDescTitleCONS->Name = L"pnlDescTitleCONS";
		this->pnlDescTitleCONS->Size = System::Drawing::Size(824, 42);
		this->pnlDescTitleCONS->TabIndex = 0;
		// 
		// lblDescCONSen
		// 
		this->lblDescCONSen->AutoSize = true;
		this->lblDescCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblDescCONSen->ForeColor = System::Drawing::Color::White;
		this->lblDescCONSen->Location = System::Drawing::Point(17, 10);
		this->lblDescCONSen->Name = L"lblDescCONSen";
		this->lblDescCONSen->Size = System::Drawing::Size(88, 23);
		this->lblDescCONSen->TabIndex = 4;
		this->lblDescCONSen->Text = L"Descripció";
		// 
		// pnlPreusCONS
		// 
		this->pnlPreusCONS->BackColor = System::Drawing::Color::White;
		this->pnlPreusCONS->Controls->Add(this->lblPreuEsdevCONSgran);
		this->pnlPreusCONS->Location = System::Drawing::Point(21, 377);
		this->pnlPreusCONS->Name = L"pnlPreusCONS";
		this->pnlPreusCONS->Size = System::Drawing::Size(262, 49);
		this->pnlPreusCONS->TabIndex = 8;
		// 
		// lblPreuEsdevCONSgran
		// 
		this->lblPreuEsdevCONSgran->AutoSize = true;
		this->lblPreuEsdevCONSgran->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 13.8F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->lblPreuEsdevCONSgran->Location = System::Drawing::Point(15, 10);
		this->lblPreuEsdevCONSgran->Name = L"lblPreuEsdevCONSgran";
		this->lblPreuEsdevCONSgran->Size = System::Drawing::Size(90, 31);
		this->lblPreuEsdevCONSgran->TabIndex = 0;
		this->lblPreuEsdevCONSgran->Text = L"0,00 € |";
		// 
		// pnlNomEsdevTitleCONS
		// 
		this->pnlNomEsdevTitleCONS->BackColor = System::Drawing::Color::Black;
		this->pnlNomEsdevTitleCONS->Controls->Add(this->lblNomEsdevCONS);
		this->pnlNomEsdevTitleCONS->Location = System::Drawing::Point(0, 0);
		this->pnlNomEsdevTitleCONS->Name = L"pnlNomEsdevTitleCONS";
		this->pnlNomEsdevTitleCONS->Size = System::Drawing::Size(867, 48);
		this->pnlNomEsdevTitleCONS->TabIndex = 7;
		// 
		// lblNomEsdevCONS
		// 
		this->lblNomEsdevCONS->AutoSize = true;
		this->lblNomEsdevCONS->BackColor = System::Drawing::Color::Black;
		this->lblNomEsdevCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblNomEsdevCONS->ForeColor = System::Drawing::Color::White;
		this->lblNomEsdevCONS->Location = System::Drawing::Point(15, 9);
		this->lblNomEsdevCONS->Name = L"lblNomEsdevCONS";
		this->lblNomEsdevCONS->Size = System::Drawing::Size(216, 31);
		this->lblNomEsdevCONS->TabIndex = 0;
		this->lblNomEsdevCONS->Text = L"Nom Esdeveniment";
		// 
		// btnComprarPuntsCONS
		// 
		this->btnComprarPuntsCONS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
		this->btnComprarPuntsCONS->Location = System::Drawing::Point(409, 613);
		this->btnComprarPuntsCONS->Margin = System::Windows::Forms::Padding(4);
		this->btnComprarPuntsCONS->Name = L"btnComprarPuntsCONS";
		this->btnComprarPuntsCONS->Size = System::Drawing::Size(218, 46);
		this->btnComprarPuntsCONS->TabIndex = 10;
		this->btnComprarPuntsCONS->Text = L"Comprar Amb Punts";
		this->btnComprarPuntsCONS->UseVisualStyleBackColor = false;
		this->btnComprarPuntsCONS->Click += gcnew System::EventHandler(this, &ProvesUI::btnComprarPuntsCONS_Click);
		// 
		// PANELbandEntrSolAj
		// 
		this->PANELbandEntrSolAj->Controls->Add(this->panelBandejaEntrada);
		this->PANELbandEntrSolAj->Dock = System::Windows::Forms::DockStyle::Fill;
		this->PANELbandEntrSolAj->Location = System::Drawing::Point(0, 0);
		this->PANELbandEntrSolAj->Name = L"PANELbandEntrSolAj";
		this->PANELbandEntrSolAj->Size = System::Drawing::Size(1666, 513);
		this->PANELbandEntrSolAj->TabIndex = 0;
		this->PANELbandEntrSolAj->Visible = false;
		// 
		// panelBandejaEntrada
		// 
		this->panelBandejaEntrada->Controls->Add(this->flowLayoutPnlBndEntrAj);
		this->panelBandejaEntrada->Controls->Add(this->pnlTitles);
		this->panelBandejaEntrada->Location = System::Drawing::Point(110, 42);
		this->panelBandejaEntrada->Name = L"panelBandejaEntrada";
		this->panelBandejaEntrada->Size = System::Drawing::Size(1550, 900);
		this->panelBandejaEntrada->TabIndex = 20;
		// 
		// flowLayoutPnlBndEntrAj
		// 
		this->flowLayoutPnlBndEntrAj->AutoSize = true;
		this->flowLayoutPnlBndEntrAj->BackColor = System::Drawing::Color::White;
		this->flowLayoutPnlBndEntrAj->Dock = System::Windows::Forms::DockStyle::Fill;
		this->flowLayoutPnlBndEntrAj->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
		this->flowLayoutPnlBndEntrAj->Location = System::Drawing::Point(0, 32);
		this->flowLayoutPnlBndEntrAj->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->flowLayoutPnlBndEntrAj->Name = L"flowLayoutPnlBndEntrAj";
		this->flowLayoutPnlBndEntrAj->Size = System::Drawing::Size(1550, 868);
		this->flowLayoutPnlBndEntrAj->TabIndex = 18;
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
		this->pnlTitles->Size = System::Drawing::Size(1550, 32);
		this->pnlTitles->TabIndex = 19;
		// 
		// lblTitleESTAT
		// 
		this->lblTitleESTAT->AutoSize = true;
		this->lblTitleESTAT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblTitleESTAT->ForeColor = System::Drawing::Color::White;
		this->lblTitleESTAT->Location = System::Drawing::Point(1250, 9);
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
		// PANELEsdevHomepage
		// 
		this->PANELEsdevHomepage->Controls->Add(this->flowLayoutPanel1);
		this->PANELEsdevHomepage->Dock = System::Windows::Forms::DockStyle::Fill;
		this->PANELEsdevHomepage->Location = System::Drawing::Point(0, 0);
		this->PANELEsdevHomepage->Name = L"PANELEsdevHomepage";
		this->PANELEsdevHomepage->Size = System::Drawing::Size(1666, 513);
		this->PANELEsdevHomepage->TabIndex = 0;
		this->PANELEsdevHomepage->Visible = false;
		// 
		// flowLayoutPanel1
		// 
		this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
		this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
		this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
		this->flowLayoutPanel1->Padding = System::Windows::Forms::Padding(29, 0, 0, 0);
		this->flowLayoutPanel1->Size = System::Drawing::Size(1666, 513);
		this->flowLayoutPanel1->TabIndex = 3;
		this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ProvesUI::flowLayoutPanel1_Paint);
		// 
		// pnlTopBar
		// 
		this->pnlTopBar->BackColor = System::Drawing::Color::Black;
		this->pnlTopBar->Controls->Add(this->panel5);
		this->pnlTopBar->Controls->Add(this->panel4);
		this->pnlTopBar->Controls->Add(this->pnlTopBarAppInfo);
		this->pnlTopBar->Controls->Add(this->pnlTopBarMinMaxClose);
		this->pnlTopBar->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnlTopBar->Location = System::Drawing::Point(0, 0);
		this->pnlTopBar->Margin = System::Windows::Forms::Padding(0);
		this->pnlTopBar->Name = L"pnlTopBar";
		this->pnlTopBar->Size = System::Drawing::Size(1942, 37);
		this->pnlTopBar->TabIndex = 0;
		// 
		// panel5
		// 
		this->panel5->BackColor = System::Drawing::Color::Silver;
		this->panel5->Location = System::Drawing::Point(461, 16);
		this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel5->Name = L"panel5";
		this->panel5->Size = System::Drawing::Size(181, 34);
		this->panel5->TabIndex = 5;
		this->panel5->Visible = false;
		// 
		// panel4
		// 
		this->panel4->BackColor = System::Drawing::Color::White;
		this->panel4->Location = System::Drawing::Point(276, 16);
		this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel4->Name = L"panel4";
		this->panel4->Size = System::Drawing::Size(181, 30);
		this->panel4->TabIndex = 4;
		this->panel4->Visible = false;
		// 
		// pnlTopBarAppInfo
		// 
		this->pnlTopBarAppInfo->Controls->Add(this->lblNameApp);
		this->pnlTopBarAppInfo->Controls->Add(this->AppIcon);
		this->pnlTopBarAppInfo->Location = System::Drawing::Point(0, 0);
		this->pnlTopBarAppInfo->Margin = System::Windows::Forms::Padding(4);
		this->pnlTopBarAppInfo->Name = L"pnlTopBarAppInfo";
		this->pnlTopBarAppInfo->Size = System::Drawing::Size(276, 37);
		this->pnlTopBarAppInfo->TabIndex = 1;
		// 
		// lblNameApp
		// 
		this->lblNameApp->AutoSize = true;
		this->lblNameApp->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblNameApp->ForeColor = System::Drawing::Color::Silver;
		this->lblNameApp->Location = System::Drawing::Point(33, 9);
		this->lblNameApp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblNameApp->Name = L"lblNameApp";
		this->lblNameApp->Size = System::Drawing::Size(82, 20);
		this->lblNameApp->TabIndex = 1;
		this->lblNameApp->Text = L"CulturaLink";
		// 
		// AppIcon
		// 
		this->AppIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppIcon.Image")));
		this->AppIcon->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppIcon.InitialImage")));
		this->AppIcon->Location = System::Drawing::Point(7, 6);
		this->AppIcon->Margin = System::Windows::Forms::Padding(4);
		this->AppIcon->Name = L"AppIcon";
		this->AppIcon->Size = System::Drawing::Size(47, 37);
		this->AppIcon->TabIndex = 0;
		this->AppIcon->TabStop = false;
		// 
		// pnlTopBarMinMaxClose
		// 
		this->pnlTopBarMinMaxClose->Controls->Add(this->btnMinimize);
		this->pnlTopBarMinMaxClose->Controls->Add(this->btnMaximize);
		this->pnlTopBarMinMaxClose->Controls->Add(this->btnClose);
		this->pnlTopBarMinMaxClose->Dock = System::Windows::Forms::DockStyle::Right;
		this->pnlTopBarMinMaxClose->Location = System::Drawing::Point(1675, 0);
		this->pnlTopBarMinMaxClose->Margin = System::Windows::Forms::Padding(4);
		this->pnlTopBarMinMaxClose->Name = L"pnlTopBarMinMaxClose";
		this->pnlTopBarMinMaxClose->Size = System::Drawing::Size(267, 37);
		this->pnlTopBarMinMaxClose->TabIndex = 0;
		// 
		// btnMinimize
		// 
		this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnMinimize->Dock = System::Windows::Forms::DockStyle::Right;
		this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnMinimize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
		this->btnMinimize->Location = System::Drawing::Point(126, 0);
		this->btnMinimize->Margin = System::Windows::Forms::Padding(4);
		this->btnMinimize->Name = L"btnMinimize";
		this->btnMinimize->Size = System::Drawing::Size(47, 37);
		this->btnMinimize->TabIndex = 2;
		this->btnMinimize->UseVisualStyleBackColor = false;
		this->btnMinimize->Click += gcnew System::EventHandler(this, &ProvesUI::btnMinimize_Click);
		this->btnMinimize->MouseLeave += gcnew System::EventHandler(this, &ProvesUI::btnMinimize_MouseLeave);
		this->btnMinimize->MouseHover += gcnew System::EventHandler(this, &ProvesUI::btnMinimize_MouseHover);
		// 
		// btnMaximize
		// 
		this->btnMaximize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnMaximize->Dock = System::Windows::Forms::DockStyle::Right;
		this->btnMaximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->btnMaximize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->btnMaximize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaximize.Image")));
		this->btnMaximize->Location = System::Drawing::Point(173, 0);
		this->btnMaximize->Margin = System::Windows::Forms::Padding(4);
		this->btnMaximize->Name = L"btnMaximize";
		this->btnMaximize->Size = System::Drawing::Size(47, 37);
		this->btnMaximize->TabIndex = 1;
		this->btnMaximize->UseVisualStyleBackColor = false;
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
		this->btnClose->Location = System::Drawing::Point(220, 0);
		this->btnClose->Margin = System::Windows::Forms::Padding(4);
		this->btnClose->Name = L"btnClose";
		this->btnClose->Size = System::Drawing::Size(47, 37);
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
		this->panelNavBar->Controls->Add(this->panel11);
		this->panelNavBar->Controls->Add(this->panel10);
		this->panelNavBar->Controls->Add(this->pnlModEsdev);
		this->panelNavBar->Controls->Add(this->panel7);
		this->panelNavBar->Controls->Add(this->panel6);
		this->panelNavBar->Controls->Add(this->panel3);
		this->panelNavBar->Controls->Add(this->panel2);
		this->panelNavBar->Controls->Add(this->panel1);
		this->panelNavBar->Controls->Add(this->panelUserInfo);
		this->panelNavBar->Dock = System::Windows::Forms::DockStyle::Left;
		this->panelNavBar->Location = System::Drawing::Point(0, 37);
		this->panelNavBar->Margin = System::Windows::Forms::Padding(4);
		this->panelNavBar->Name = L"panelNavBar";
		this->panelNavBar->Size = System::Drawing::Size(276, 736);
		this->panelNavBar->TabIndex = 1;
		// 
		// panel11
		// 
		this->panel11->Controls->Add(this->button9);
		this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel11->Location = System::Drawing::Point(0, 449);
		this->panel11->Margin = System::Windows::Forms::Padding(4);
		this->panel11->Name = L"panel11";
		this->panel11->Size = System::Drawing::Size(276, 52);
		this->panel11->TabIndex = 8;
		this->panel11->Visible = false;
		// 
		// button9
		// 
		this->button9->BackColor = System::Drawing::Color::Black;
		this->button9->Dock = System::Windows::Forms::DockStyle::Right;
		this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->button9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button9->ForeColor = System::Drawing::Color::White;
		this->button9->Location = System::Drawing::Point(53, 0);
		this->button9->Margin = System::Windows::Forms::Padding(4);
		this->button9->Name = L"button9";
		this->button9->Size = System::Drawing::Size(223, 52);
		this->button9->TabIndex = 0;
		this->button9->Text = L"Consultar Peticions";
		this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button9->UseVisualStyleBackColor = false;
		this->button9->Click += gcnew System::EventHandler(this, &ProvesUI::button9_Click_1);
		// 
		// panel10
		// 
		this->panel10->Controls->Add(this->btnRegEsdevAJ);
		this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel10->Location = System::Drawing::Point(0, 397);
		this->panel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel10->Name = L"panel10";
		this->panel10->Size = System::Drawing::Size(276, 52);
		this->panel10->TabIndex = 7;
		this->panel10->Visible = false;
		// 
		// btnRegEsdevAJ
		// 
		this->btnRegEsdevAJ->BackColor = System::Drawing::Color::Black;
		this->btnRegEsdevAJ->Dock = System::Windows::Forms::DockStyle::Right;
		this->btnRegEsdevAJ->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->btnRegEsdevAJ->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->btnRegEsdevAJ->ForeColor = System::Drawing::Color::White;
		this->btnRegEsdevAJ->Location = System::Drawing::Point(53, 0);
		this->btnRegEsdevAJ->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->btnRegEsdevAJ->Name = L"btnRegEsdevAJ";
		this->btnRegEsdevAJ->Size = System::Drawing::Size(223, 52);
		this->btnRegEsdevAJ->TabIndex = 0;
		this->btnRegEsdevAJ->Text = L"Registrar Esdeveniment";
		this->btnRegEsdevAJ->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->btnRegEsdevAJ->UseVisualStyleBackColor = false;
		this->btnRegEsdevAJ->Click += gcnew System::EventHandler(this, &ProvesUI::btnRegEsdevAJ_Click);
		// 
		// pnlModEsdev
		// 
		this->pnlModEsdev->Controls->Add(this->pictureBox8);
		this->pnlModEsdev->Controls->Add(this->button7);
		this->pnlModEsdev->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnlModEsdev->Location = System::Drawing::Point(0, 345);
		this->pnlModEsdev->Margin = System::Windows::Forms::Padding(4);
		this->pnlModEsdev->Name = L"pnlModEsdev";
		this->pnlModEsdev->Size = System::Drawing::Size(276, 52);
		this->pnlModEsdev->TabIndex = 6;
		this->pnlModEsdev->Visible = false;
		// 
		// pictureBox8
		// 
		this->pictureBox8->BackColor = System::Drawing::Color::Black;
		this->pictureBox8->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox8->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.ErrorImage")));
		this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
		this->pictureBox8->Location = System::Drawing::Point(0, 0);
		this->pictureBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox8->Name = L"pictureBox8";
		this->pictureBox8->Size = System::Drawing::Size(53, 52);
		this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox8->TabIndex = 1;
		this->pictureBox8->TabStop = false;
		this->pictureBox8->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox8_Click);
		// 
		// button7
		// 
		this->button7->BackColor = System::Drawing::Color::Black;
		this->button7->Dock = System::Windows::Forms::DockStyle::Right;
		this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->button7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button7->ForeColor = System::Drawing::Color::White;
		this->button7->Location = System::Drawing::Point(53, 0);
		this->button7->Margin = System::Windows::Forms::Padding(4);
		this->button7->Name = L"button7";
		this->button7->Size = System::Drawing::Size(223, 52);
		this->button7->TabIndex = 0;
		this->button7->Text = L"Modif. Esdevs";
		this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button7->UseVisualStyleBackColor = false;
		this->button7->Click += gcnew System::EventHandler(this, &ProvesUI::button7_Click);
		// 
		// panel7
		// 
		this->panel7->BackColor = System::Drawing::Color::Black;
		this->panel7->Controls->Add(this->button5);
		this->panel7->Controls->Add(this->label5);
		this->panel7->Controls->Add(this->pictureBox5);
		this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->panel7->Location = System::Drawing::Point(0, 684);
		this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel7->Name = L"panel7";
		this->panel7->Size = System::Drawing::Size(276, 52);
		this->panel7->TabIndex = 5;
		// 
		// button5
		// 
		this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button5->ForeColor = System::Drawing::Color::DimGray;
		this->button5->Location = System::Drawing::Point(53, 0);
		this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->button5->Name = L"button5";
		this->button5->Size = System::Drawing::Size(223, 52);
		this->button5->TabIndex = 6;
		this->button5->Text = L"Log out";
		this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button5->UseVisualStyleBackColor = true;
		this->button5->Click += gcnew System::EventHandler(this, &ProvesUI::button5_Click);
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label5->ForeColor = System::Drawing::Color::White;
		this->label5->Location = System::Drawing::Point(60, 14);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(83, 28);
		this->label5->TabIndex = 1;
		this->label5->Text = L"Log Out";
		// 
		// pictureBox5
		// 
		this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
		this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
		this->pictureBox5->Location = System::Drawing::Point(0, 0);
		this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox5->Name = L"pictureBox5";
		this->pictureBox5->Size = System::Drawing::Size(53, 52);
		this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox5->TabIndex = 0;
		this->pictureBox5->TabStop = false;
		this->pictureBox5->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox5_Click);
		// 
		// panel6
		// 
		this->panel6->BackColor = System::Drawing::Color::Black;
		this->panel6->Controls->Add(this->button4);
		this->panel6->Controls->Add(this->label4);
		this->panel6->Controls->Add(this->pictureBox4);
		this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel6->Location = System::Drawing::Point(0, 293);
		this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel6->Name = L"panel6";
		this->panel6->Size = System::Drawing::Size(276, 52);
		this->panel6->TabIndex = 4;
		// 
		// button4
		// 
		this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button4->ForeColor = System::Drawing::Color::White;
		this->button4->Location = System::Drawing::Point(53, 0);
		this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->button4->Name = L"button4";
		this->button4->Size = System::Drawing::Size(223, 52);
		this->button4->TabIndex = 5;
		this->button4->Text = L"Settings";
		this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button4->UseVisualStyleBackColor = true;
		this->button4->Click += gcnew System::EventHandler(this, &ProvesUI::button4_Click);
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label4->ForeColor = System::Drawing::Color::White;
		this->label4->Location = System::Drawing::Point(60, 14);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(83, 28);
		this->label4->TabIndex = 1;
		this->label4->Text = L"Settings";
		// 
		// pictureBox4
		// 
		this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox4->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.ErrorImage")));
		this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
		this->pictureBox4->Location = System::Drawing::Point(0, 0);
		this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox4->Name = L"pictureBox4";
		this->pictureBox4->Size = System::Drawing::Size(53, 52);
		this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox4->TabIndex = 0;
		this->pictureBox4->TabStop = false;
		this->pictureBox4->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox4_Click);
		// 
		// panel3
		// 
		this->panel3->BackColor = System::Drawing::Color::Black;
		this->panel3->Controls->Add(this->button3);
		this->panel3->Controls->Add(this->label3);
		this->panel3->Controls->Add(this->pictureBox3);
		this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel3->Location = System::Drawing::Point(0, 241);
		this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel3->Name = L"panel3";
		this->panel3->Size = System::Drawing::Size(276, 52);
		this->panel3->TabIndex = 3;
		// 
		// button3
		// 
		this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button3->ForeColor = System::Drawing::Color::White;
		this->button3->Location = System::Drawing::Point(53, 0);
		this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(223, 52);
		this->button3->TabIndex = 4;
		this->button3->Text = L"Registar-se en Esdev.";
		this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Click += gcnew System::EventHandler(this, &ProvesUI::button3_Click);
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label3->ForeColor = System::Drawing::Color::White;
		this->label3->Location = System::Drawing::Point(60, 12);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(193, 28);
		this->label3->TabIndex = 1;
		this->label3->Text = L"Registar-se en Esdev.";
		// 
		// pictureBox3
		// 
		this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
		this->pictureBox3->Location = System::Drawing::Point(0, 0);
		this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox3->Name = L"pictureBox3";
		this->pictureBox3->Size = System::Drawing::Size(53, 52);
		this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox3->TabIndex = 0;
		this->pictureBox3->TabStop = false;
		this->pictureBox3->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox3_Click);
		// 
		// panel2
		// 
		this->panel2->BackColor = System::Drawing::Color::Black;
		this->panel2->Controls->Add(this->button2);
		this->panel2->Controls->Add(this->label2);
		this->panel2->Controls->Add(this->pictureBox2);
		this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel2->Location = System::Drawing::Point(0, 189);
		this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(276, 52);
		this->panel2->TabIndex = 2;
		// 
		// button2
		// 
		this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
		this->button2->ForeColor = System::Drawing::Color::White;
		this->button2->Location = System::Drawing::Point(53, 0);
		this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(223, 52);
		this->button2->TabIndex = 3;
		this->button2->Text = L"Els Teus Esdev.";
		this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &ProvesUI::button2_Click);
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label2->ForeColor = System::Drawing::Color::White;
		this->label2->Location = System::Drawing::Point(60, 12);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(153, 28);
		this->label2->TabIndex = 1;
		this->label2->Text = L"Consultar Esdev.";
		// 
		// pictureBox2
		// 
		this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
		this->pictureBox2->Location = System::Drawing::Point(0, 0);
		this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox2->Name = L"pictureBox2";
		this->pictureBox2->Size = System::Drawing::Size(53, 52);
		this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox2->TabIndex = 0;
		this->pictureBox2->TabStop = false;
		this->pictureBox2->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox2_Click);
		// 
		// panel1
		// 
		this->panel1->BackColor = System::Drawing::Color::Black;
		this->panel1->Controls->Add(this->button1);
		this->panel1->Controls->Add(this->label1);
		this->panel1->Controls->Add(this->pictureBox1);
		this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel1->Location = System::Drawing::Point(0, 137);
		this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(276, 52);
		this->panel1->TabIndex = 1;
		// 
		// button1
		// 
		this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->button1->ForeColor = System::Drawing::Color::White;
		this->button1->Location = System::Drawing::Point(53, 0);
		this->button1->Margin = System::Windows::Forms::Padding(0, 2, 0, 2);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(223, 52);
		this->button1->TabIndex = 2;
		this->button1->Text = L"HomePage";
		this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &ProvesUI::button1_Click_1);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->ForeColor = System::Drawing::Color::White;
		this->label1->Location = System::Drawing::Point(53, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(65, 28);
		this->label1->TabIndex = 1;
		this->label1->Text = L"Home";
		// 
		// pictureBox1
		// 
		this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
		this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
		this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
		this->pictureBox1->Location = System::Drawing::Point(0, 0);
		this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(53, 52);
		this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox1->TabIndex = 0;
		this->pictureBox1->TabStop = false;
		this->pictureBox1->Click += gcnew System::EventHandler(this, &ProvesUI::pictureBox1_Click);
		// 
		// panelUserInfo
		// 
		this->panelUserInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
			static_cast<System::Int32>(static_cast<System::Byte>(40)));
		this->panelUserInfo->Controls->Add(this->lblPuntsUser);
		this->panelUserInfo->Controls->Add(this->lblTypeUser);
		this->panelUserInfo->Controls->Add(this->panel9);
		this->panelUserInfo->Controls->Add(this->lblFullNameUser);
		this->panelUserInfo->Controls->Add(this->lblUsername);
		this->panelUserInfo->Controls->Add(this->picBoxUserPic);
		this->panelUserInfo->Dock = System::Windows::Forms::DockStyle::Top;
		this->panelUserInfo->Location = System::Drawing::Point(0, 0);
		this->panelUserInfo->Margin = System::Windows::Forms::Padding(4);
		this->panelUserInfo->Name = L"panelUserInfo";
		this->panelUserInfo->Size = System::Drawing::Size(276, 137);
		this->panelUserInfo->TabIndex = 0;
		// 
		// lblPuntsUser
		// 
		this->lblPuntsUser->AutoSize = true;
		this->lblPuntsUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblPuntsUser->ForeColor = System::Drawing::Color::Silver;
		this->lblPuntsUser->Location = System::Drawing::Point(124, 71);
		this->lblPuntsUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblPuntsUser->Name = L"lblPuntsUser";
		this->lblPuntsUser->Size = System::Drawing::Size(56, 19);
		this->lblPuntsUser->TabIndex = 4;
		this->lblPuntsUser->Text = L"X punts";
		// 
		// lblTypeUser
		// 
		this->lblTypeUser->AutoSize = true;
		this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->lblTypeUser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->lblTypeUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->lblTypeUser->Location = System::Drawing::Point(128, 95);
		this->lblTypeUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblTypeUser->Name = L"lblTypeUser";
		this->lblTypeUser->Size = System::Drawing::Size(66, 19);
		this->lblTypeUser->TabIndex = 3;
		this->lblTypeUser->Text = L"UserType";
		// 
		// panel9
		// 
		this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->panel9->Location = System::Drawing::Point(276, 137);
		this->panel9->Margin = System::Windows::Forms::Padding(4);
		this->panel9->Name = L"panel9";
		this->panel9->Size = System::Drawing::Size(1033, 558);
		this->panel9->TabIndex = 3;
		// 
		// lblFullNameUser
		// 
		this->lblFullNameUser->AutoSize = true;
		this->lblFullNameUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblFullNameUser->ForeColor = System::Drawing::Color::White;
		this->lblFullNameUser->Location = System::Drawing::Point(120, 22);
		this->lblFullNameUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblFullNameUser->Name = L"lblFullNameUser";
		this->lblFullNameUser->Size = System::Drawing::Size(150, 28);
		this->lblFullNameUser->TabIndex = 2;
		this->lblFullNameUser->Text = L"User Full Name";
		// 
		// lblUsername
		// 
		this->lblUsername->AutoSize = true;
		this->lblUsername->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblUsername->ForeColor = System::Drawing::Color::Silver;
		this->lblUsername->Location = System::Drawing::Point(121, 47);
		this->lblUsername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblUsername->Name = L"lblUsername";
		this->lblUsername->Size = System::Drawing::Size(82, 19);
		this->lblUsername->TabIndex = 1;
		this->lblUsername->Text = L"@username";
		// 
		// picBoxUserPic
		// 
		this->picBoxUserPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxUserPic.Image")));
		this->picBoxUserPic->Location = System::Drawing::Point(13, 18);
		this->picBoxUserPic->Margin = System::Windows::Forms::Padding(0);
		this->picBoxUserPic->Name = L"picBoxUserPic";
		this->picBoxUserPic->Size = System::Drawing::Size(105, 100);
		this->picBoxUserPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->picBoxUserPic->TabIndex = 0;
		this->picBoxUserPic->TabStop = false;
		this->picBoxUserPic->Click += gcnew System::EventHandler(this, &ProvesUI::picBoxUserPic_Click);
		// 
		// pnlMainTop
		// 
		this->pnlMainTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
			static_cast<System::Int32>(static_cast<System::Byte>(23)));
		this->pnlMainTop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlMainTop.BackgroundImage")));
		this->pnlMainTop->Controls->Add(this->btnSearch);
		this->pnlMainTop->Controls->Add(this->flowLayoutPanel2);
		this->pnlMainTop->Controls->Add(this->pictureBox7);
		this->pnlMainTop->Controls->Add(this->textBox1);
		this->pnlMainTop->Controls->Add(this->lblTitlePage);
		this->pnlMainTop->Dock = System::Windows::Forms::DockStyle::Top;
		this->pnlMainTop->Location = System::Drawing::Point(276, 37);
		this->pnlMainTop->Margin = System::Windows::Forms::Padding(4);
		this->pnlMainTop->Name = L"pnlMainTop";
		this->pnlMainTop->Size = System::Drawing::Size(1666, 223);
		this->pnlMainTop->TabIndex = 3;
		// 
		// btnSearch
		// 
		this->btnSearch->Location = System::Drawing::Point(879, 64);
		this->btnSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->btnSearch->Name = L"btnSearch";
		this->btnSearch->Size = System::Drawing::Size(75, 23);
		this->btnSearch->TabIndex = 5;
		this->btnSearch->Text = L"Search";
		this->btnSearch->UseVisualStyleBackColor = true;
		this->btnSearch->Click += gcnew System::EventHandler(this, &ProvesUI::button9_Click);
		// 
		// flowLayoutPanel2
		// 
		this->flowLayoutPanel2->BackColor = System::Drawing::Color::White;
		this->flowLayoutPanel2->Controls->Add(this->btnFiltrGala);
		this->flowLayoutPanel2->Controls->Add(this->btnFiltreDeportivo);
		this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->flowLayoutPanel2->Location = System::Drawing::Point(0, 137);
		this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(4);
		this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
		this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(29, 10, 0, 0);
		this->flowLayoutPanel2->Size = System::Drawing::Size(1666, 86);
		this->flowLayoutPanel2->TabIndex = 4;
		this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ProvesUI::flowLayoutPanel2_Paint);
		// 
		// btnFiltrGala
		// 
		this->btnFiltrGala->BackColor = System::Drawing::Color::Crimson;
		this->btnFiltrGala->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->btnFiltrGala->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnFiltrGala->ForeColor = System::Drawing::Color::White;
		this->btnFiltrGala->Location = System::Drawing::Point(33, 14);
		this->btnFiltrGala->Margin = System::Windows::Forms::Padding(4);
		this->btnFiltrGala->Name = L"btnFiltrGala";
		this->btnFiltrGala->Size = System::Drawing::Size(100, 28);
		this->btnFiltrGala->TabIndex = 0;
		this->btnFiltrGala->Text = L"Gala";
		this->btnFiltrGala->UseVisualStyleBackColor = false;
		this->btnFiltrGala->Click += gcnew System::EventHandler(this, &ProvesUI::btnFiltrGala_Click);
		// 
		// btnFiltreDeportivo
		// 
		this->btnFiltreDeportivo->BackColor = System::Drawing::Color::Crimson;
		this->btnFiltreDeportivo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->btnFiltreDeportivo->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnFiltreDeportivo->ForeColor = System::Drawing::Color::White;
		this->btnFiltreDeportivo->Location = System::Drawing::Point(141, 14);
		this->btnFiltreDeportivo->Margin = System::Windows::Forms::Padding(4);
		this->btnFiltreDeportivo->Name = L"btnFiltreDeportivo";
		this->btnFiltreDeportivo->Size = System::Drawing::Size(100, 28);
		this->btnFiltreDeportivo->TabIndex = 1;
		this->btnFiltreDeportivo->Text = L"Deportivo";
		this->btnFiltreDeportivo->UseVisualStyleBackColor = false;
		this->btnFiltreDeportivo->Click += gcnew System::EventHandler(this, &ProvesUI::btnFiltreDeportivo_Click);
		// 
		// pictureBox7
		// 
		this->pictureBox7->BackColor = System::Drawing::Color::White;
		this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
		this->pictureBox7->Location = System::Drawing::Point(961, 66);
		this->pictureBox7->Margin = System::Windows::Forms::Padding(4);
		this->pictureBox7->Name = L"pictureBox7";
		this->pictureBox7->Size = System::Drawing::Size(21, 20);
		this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox7->TabIndex = 2;
		this->pictureBox7->TabStop = false;
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(985, 65);
		this->textBox1->Margin = System::Windows::Forms::Padding(4);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(512, 22);
		this->textBox1->TabIndex = 1;
		// 
		// lblTitlePage
		// 
		this->lblTitlePage->AutoSize = true;
		this->lblTitlePage->BackColor = System::Drawing::Color::Black;
		this->lblTitlePage->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->lblTitlePage->ForeColor = System::Drawing::Color::White;
		this->lblTitlePage->Location = System::Drawing::Point(21, 48);
		this->lblTitlePage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->lblTitlePage->Name = L"lblTitlePage";
		this->lblTitlePage->Size = System::Drawing::Size(220, 50);
		this->lblTitlePage->TabIndex = 0;
		this->lblTitlePage->Text = L"HOMEPAGE";
		// 
		// pnlMain
		// 
		this->pnlMain->Controls->Add(this->PANELConsultarCompra);
		this->pnlMain->Controls->Add(this->PANELbandEntrSolAj);
		this->pnlMain->Controls->Add(this->PANELEsdevHomepage);
		this->pnlMain->Dock = System::Windows::Forms::DockStyle::Fill;
		this->pnlMain->Location = System::Drawing::Point(276, 260);
		this->pnlMain->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->pnlMain->Name = L"pnlMain";
		this->pnlMain->Size = System::Drawing::Size(1666, 513);
		this->pnlMain->TabIndex = 4;
		// 
		// PANELPROVA
		// 
		this->PANELPROVA->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->PANELPROVA->Controls->Add(this->btnConsEsdevComprar);
		this->PANELPROVA->Controls->Add(this->btnConsEsdevGoBack);
		this->PANELPROVA->Controls->Add(this->tableLayoutPanel1);
		this->PANELPROVA->Location = System::Drawing::Point(890, 2);
		this->PANELPROVA->Margin = System::Windows::Forms::Padding(2);
		this->PANELPROVA->Name = L"PANELPROVA";
		this->PANELPROVA->Size = System::Drawing::Size(237, 443);
		this->PANELPROVA->TabIndex = 3;
		this->PANELPROVA->Visible = false;
		// 
		// btnConsEsdevComprar
		// 
		this->btnConsEsdevComprar->Location = System::Drawing::Point(118, 224);
		this->btnConsEsdevComprar->Margin = System::Windows::Forms::Padding(2);
		this->btnConsEsdevComprar->Name = L"btnConsEsdevComprar";
		this->btnConsEsdevComprar->Size = System::Drawing::Size(56, 19);
		this->btnConsEsdevComprar->TabIndex = 12;
		this->btnConsEsdevComprar->Text = L"Comprar";
		this->btnConsEsdevComprar->UseVisualStyleBackColor = true;
		// 
		// btnConsEsdevGoBack
		// 
		this->btnConsEsdevGoBack->Location = System::Drawing::Point(24, 224);
		this->btnConsEsdevGoBack->Margin = System::Windows::Forms::Padding(2);
		this->btnConsEsdevGoBack->Name = L"btnConsEsdevGoBack";
		this->btnConsEsdevGoBack->Size = System::Drawing::Size(56, 19);
		this->btnConsEsdevGoBack->TabIndex = 11;
		this->btnConsEsdevGoBack->Text = L"Enrere";
		this->btnConsEsdevGoBack->UseVisualStyleBackColor = true;
		this->btnConsEsdevGoBack->Click += gcnew System::EventHandler(this, &ProvesUI::button10_Click);
		// 
		// tableLayoutPanel1
		// 
		this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
		this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetPartial;
		this->tableLayoutPanel1->ColumnCount = 2;
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			15.64417F)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			84.35583F)));
		this->tableLayoutPanel1->Controls->Add(this->lblEsdevConsultNom, 1, 0);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevTipus, 1, 9);
		this->tableLayoutPanel1->Controls->Add(this->lblEsdevConsultPreu, 1, 1);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevPreuDesc, 1, 8);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevDesc, 1, 2);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevData, 1, 7);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevEntit, 1, 3);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevPuntsCost, 1, 6);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevAjunt, 1, 4);
		this->tableLayoutPanel1->Controls->Add(this->lblConsultEsdevAfor, 1, 5);
		this->tableLayoutPanel1->Location = System::Drawing::Point(24, 24);
		this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
		this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		this->tableLayoutPanel1->RowCount = 10;
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
		this->tableLayoutPanel1->Size = System::Drawing::Size(244, 195);
		this->tableLayoutPanel1->TabIndex = 10;
		// 
		// lblEsdevConsultNom
		// 
		this->lblEsdevConsultNom->AutoSize = true;
		this->lblEsdevConsultNom->Location = System::Drawing::Point(44, 3);
		this->lblEsdevConsultNom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblEsdevConsultNom->Name = L"lblEsdevConsultNom";
		this->lblEsdevConsultNom->Size = System::Drawing::Size(44, 16);
		this->lblEsdevConsultNom->TabIndex = 0;
		this->lblEsdevConsultNom->Text = L"(Nom)";
		// 
		// lblConsultEsdevTipus
		// 
		this->lblConsultEsdevTipus->AutoSize = true;
		this->lblConsultEsdevTipus->Location = System::Drawing::Point(44, 176);
		this->lblConsultEsdevTipus->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevTipus->Name = L"lblConsultEsdevTipus";
		this->lblConsultEsdevTipus->Size = System::Drawing::Size(49, 16);
		this->lblConsultEsdevTipus->TabIndex = 9;
		this->lblConsultEsdevTipus->Text = L"(Tipus)";
		// 
		// lblEsdevConsultPreu
		// 
		this->lblEsdevConsultPreu->AutoSize = true;
		this->lblEsdevConsultPreu->Location = System::Drawing::Point(44, 23);
		this->lblEsdevConsultPreu->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblEsdevConsultPreu->Name = L"lblEsdevConsultPreu";
		this->lblEsdevConsultPreu->Size = System::Drawing::Size(43, 16);
		this->lblEsdevConsultPreu->TabIndex = 1;
		this->lblEsdevConsultPreu->Text = L"(Preu)";
		// 
		// lblConsultEsdevPreuDesc
		// 
		this->lblConsultEsdevPreuDesc->AutoSize = true;
		this->lblConsultEsdevPreuDesc->Location = System::Drawing::Point(44, 157);
		this->lblConsultEsdevPreuDesc->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevPreuDesc->Name = L"lblConsultEsdevPreuDesc";
		this->lblConsultEsdevPreuDesc->Size = System::Drawing::Size(118, 16);
		this->lblConsultEsdevPreuDesc->TabIndex = 8;
		this->lblConsultEsdevPreuDesc->Text = L"(PuntsDescompte)";
		// 
		// lblConsultEsdevDesc
		// 
		this->lblConsultEsdevDesc->AutoSize = true;
		this->lblConsultEsdevDesc->Location = System::Drawing::Point(44, 43);
		this->lblConsultEsdevDesc->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevDesc->Name = L"lblConsultEsdevDesc";
		this->lblConsultEsdevDesc->Size = System::Drawing::Size(80, 16);
		this->lblConsultEsdevDesc->TabIndex = 2;
		this->lblConsultEsdevDesc->Text = L"(Descripció)";
		// 
		// lblConsultEsdevData
		// 
		this->lblConsultEsdevData->AutoSize = true;
		this->lblConsultEsdevData->Location = System::Drawing::Point(44, 138);
		this->lblConsultEsdevData->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevData->Name = L"lblConsultEsdevData";
		this->lblConsultEsdevData->Size = System::Drawing::Size(44, 16);
		this->lblConsultEsdevData->TabIndex = 7;
		this->lblConsultEsdevData->Text = L"(Data)";
		// 
		// lblConsultEsdevEntit
		// 
		this->lblConsultEsdevEntit->AutoSize = true;
		this->lblConsultEsdevEntit->Location = System::Drawing::Point(44, 62);
		this->lblConsultEsdevEntit->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevEntit->Name = L"lblConsultEsdevEntit";
		this->lblConsultEsdevEntit->Size = System::Drawing::Size(51, 16);
		this->lblConsultEsdevEntit->TabIndex = 3;
		this->lblConsultEsdevEntit->Text = L"(Entitat)";
		// 
		// lblConsultEsdevPuntsCost
		// 
		this->lblConsultEsdevPuntsCost->AutoSize = true;
		this->lblConsultEsdevPuntsCost->Location = System::Drawing::Point(44, 119);
		this->lblConsultEsdevPuntsCost->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevPuntsCost->Name = L"lblConsultEsdevPuntsCost";
		this->lblConsultEsdevPuntsCost->Size = System::Drawing::Size(75, 16);
		this->lblConsultEsdevPuntsCost->TabIndex = 6;
		this->lblConsultEsdevPuntsCost->Text = L"(PuntsCost)";
		// 
		// lblConsultEsdevAjunt
		// 
		this->lblConsultEsdevAjunt->AutoSize = true;
		this->lblConsultEsdevAjunt->Location = System::Drawing::Point(44, 81);
		this->lblConsultEsdevAjunt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevAjunt->Name = L"lblConsultEsdevAjunt";
		this->lblConsultEsdevAjunt->Size = System::Drawing::Size(81, 16);
		this->lblConsultEsdevAjunt->TabIndex = 4;
		this->lblConsultEsdevAjunt->Text = L"(Ajuntament)";
		// 
		// lblConsultEsdevAfor
		// 
		this->lblConsultEsdevAfor->AutoSize = true;
		this->lblConsultEsdevAfor->Location = System::Drawing::Point(44, 100);
		this->lblConsultEsdevAfor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->lblConsultEsdevAfor->Name = L"lblConsultEsdevAfor";
		this->lblConsultEsdevAfor->Size = System::Drawing::Size(76, 16);
		this->lblConsultEsdevAfor->TabIndex = 5;
		this->lblConsultEsdevAfor->Text = L"(Aforament)";
		// 
		// pnlInfoUsu
		// 
		this->pnlInfoUsu->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->pnlInfoUsu->Dock = System::Windows::Forms::DockStyle::Fill;
		this->pnlInfoUsu->Location = System::Drawing::Point(207, 211);
		this->pnlInfoUsu->Margin = System::Windows::Forms::Padding(2);
		this->pnlInfoUsu->Name = L"pnlInfoUsu";
		this->pnlInfoUsu->Size = System::Drawing::Size(1127, 443);
		this->pnlInfoUsu->TabIndex = 4;
		// 
		// panel8
		// 
		this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->panel8->Controls->Add(this->button8);
		this->panel8->Controls->Add(this->label6);
		this->panel8->Controls->Add(this->pictureBox9);
		this->panel8->Location = System::Drawing::Point(4, 4);
		this->panel8->Margin = System::Windows::Forms::Padding(4);
		this->panel8->Name = L"panel8";
		this->panel8->Size = System::Drawing::Size(219, 258);
		this->panel8->TabIndex = 2;
		this->panel8->Visible = false;
		// 
		// button8
		// 
		this->button8->Location = System::Drawing::Point(117, 224);
		this->button8->Margin = System::Windows::Forms::Padding(4);
		this->button8->Name = L"button8";
		this->button8->Size = System::Drawing::Size(100, 28);
		this->button8->TabIndex = 2;
		this->button8->Text = L"Comprar";
		this->button8->UseVisualStyleBackColor = true;
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label6->Location = System::Drawing::Point(0, 233);
		this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(70, 23);
		this->label6->TabIndex = 1;
		this->label6->Text = L"( Nom )";
		// 
		// pictureBox9
		// 
		this->pictureBox9->Dock = System::Windows::Forms::DockStyle::Top;
		this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
		this->pictureBox9->Location = System::Drawing::Point(0, 0);
		this->pictureBox9->Margin = System::Windows::Forms::Padding(4);
		this->pictureBox9->Name = L"pictureBox9";
		this->pictureBox9->Size = System::Drawing::Size(217, 203);
		this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox9->TabIndex = 3;
		this->pictureBox9->TabStop = false;
		// 
		// pnlMainModEsdv
		// 
		this->pnlMainModEsdv->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->pnlMainModEsdv->Controls->Add(this->label7);
		this->pnlMainModEsdv->Dock = System::Windows::Forms::DockStyle::Fill;
		this->pnlMainModEsdv->Location = System::Drawing::Point(0, 86);
		this->pnlMainModEsdv->Margin = System::Windows::Forms::Padding(4);
		this->pnlMainModEsdv->Name = L"pnlMainModEsdv";
		this->pnlMainModEsdv->Size = System::Drawing::Size(1503, 545);
		this->pnlMainModEsdv->TabIndex = 6;
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Location = System::Drawing::Point(49, 50);
		this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(44, 16);
		this->label7->TabIndex = 0;
		this->label7->Text = L"label7";
		// 
		// btnViewNavBar
		// 
		this->btnViewNavBar->BackColor = System::Drawing::Color::Black;
		this->btnViewNavBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnViewNavBar->ForeColor = System::Drawing::Color::Black;
		this->btnViewNavBar->Location = System::Drawing::Point(0, 0);
		this->btnViewNavBar->Margin = System::Windows::Forms::Padding(0);
		this->btnViewNavBar->Name = L"btnViewNavBar";
		this->btnViewNavBar->Size = System::Drawing::Size(17, 46);
		this->btnViewNavBar->TabIndex = 3;
		this->btnViewNavBar->UseVisualStyleBackColor = false;
		this->btnViewNavBar->Click += gcnew System::EventHandler(this, &ProvesUI::btnViewNavBar_Click);
		// 
		// ProvesUI
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->ClientSize = System::Drawing::Size(1942, 773);
		this->Controls->Add(this->btnViewNavBar);
		this->Controls->Add(this->pnlMain);
		this->Controls->Add(this->pnlMainTop);
		this->Controls->Add(this->panelNavBar);
		this->Controls->Add(this->pnlTopBar);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->Location = System::Drawing::Point(2, 0);
		this->Margin = System::Windows::Forms::Padding(4);
		this->Name = L"ProvesUI";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"ProvesUI";
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		this->Load += gcnew System::EventHandler(this, &ProvesUI::ProvesUI_Load);
		this->pnlCOMP->ResumeLayout(false);
		this->pnlCOMP->PerformLayout();
		this->pnlTitleCOMP->ResumeLayout(false);
		this->pnlTitleCOMP->PerformLayout();
		this->pnlTarjUICOMP->ResumeLayout(false);
		this->pnlTarjUICOMP->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxChipUICOMP))->EndInit();
		this->PANELConsultarCompra->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEsdevCONS))->EndInit();
		this->panelCONS->ResumeLayout(false);
		this->pnl5CONS->ResumeLayout(false);
		this->pnl5CONS->PerformLayout();
		this->pnl51CONS->ResumeLayout(false);
		this->pnl51CONS->PerformLayout();
		this->pnl6CONS->ResumeLayout(false);
		this->pnl6CONS->PerformLayout();
		this->pnl61CONS->ResumeLayout(false);
		this->pnl61CONS->PerformLayout();
		this->pnl4CONS->ResumeLayout(false);
		this->pnl4CONS->PerformLayout();
		this->pnl41CONS->ResumeLayout(false);
		this->pnl41CONS->PerformLayout();
		this->pnl3CONS->ResumeLayout(false);
		this->pnl3CONS->PerformLayout();
		this->pnl31CONS->ResumeLayout(false);
		this->pnl31CONS->PerformLayout();
		this->pnl2CONS->ResumeLayout(false);
		this->pnl2CONS->PerformLayout();
		this->pnl21CONS->ResumeLayout(false);
		this->pnl21CONS->PerformLayout();
		this->pnl1CONS->ResumeLayout(false);
		this->pnl1CONS->PerformLayout();
		this->pnl11CONS->ResumeLayout(false);
		this->pnl11CONS->PerformLayout();
		this->pnlFlowTipusCapsesCONSex->ResumeLayout(false);
		this->pnlDescCONS->ResumeLayout(false);
		this->pnlDescTitleCONS->ResumeLayout(false);
		this->pnlDescTitleCONS->PerformLayout();
		this->pnlPreusCONS->ResumeLayout(false);
		this->pnlPreusCONS->PerformLayout();
		this->pnlNomEsdevTitleCONS->ResumeLayout(false);
		this->pnlNomEsdevTitleCONS->PerformLayout();
		this->PANELbandEntrSolAj->ResumeLayout(false);
		this->panelBandejaEntrada->ResumeLayout(false);
		this->panelBandejaEntrada->PerformLayout();
		this->pnlTitles->ResumeLayout(false);
		this->pnlTitles->PerformLayout();
		this->PANELEsdevHomepage->ResumeLayout(false);
		this->pnlTopBar->ResumeLayout(false);
		this->pnlTopBarAppInfo->ResumeLayout(false);
		this->pnlTopBarAppInfo->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppIcon))->EndInit();
		this->pnlTopBarMinMaxClose->ResumeLayout(false);
		this->panelNavBar->ResumeLayout(false);
		this->panel11->ResumeLayout(false);
		this->panel10->ResumeLayout(false);
		this->pnlModEsdev->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
		this->panel7->ResumeLayout(false);
		this->panel7->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
		this->panel6->ResumeLayout(false);
		this->panel6->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
		this->panel3->ResumeLayout(false);
		this->panel3->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
		this->panel2->ResumeLayout(false);
		this->panel2->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
		this->panel1->ResumeLayout(false);
		this->panel1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		this->panelUserInfo->ResumeLayout(false);
		this->panelUserInfo->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUserPic))->EndInit();
		this->pnlMainTop->ResumeLayout(false);
		this->pnlMainTop->PerformLayout();
		this->flowLayoutPanel2->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
		this->pnlMain->ResumeLayout(false);
		this->PANELPROVA->ResumeLayout(false);
		this->tableLayoutPanel1->ResumeLayout(false);
		this->tableLayoutPanel1->PerformLayout();
		this->panel8->ResumeLayout(false);
		this->panel8->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
		this->pnlMainModEsdv->ResumeLayout(false);
		this->pnlMainModEsdv->PerformLayout();
		this->ResumeLayout(false);

	}
// ------------------------------------FI DECLARACIÓ OBJECTES UI-------------------------------------------------

#pragma endregion

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
	private: System::Void btnViewNavBar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int y = Screen::PrimaryScreen->Bounds.Height / 2;

		if (isNavBarExpanded) {
			panelNavBar->Size = System::Drawing::Size(40, 235);
			this->picBoxUserPic->Size = System::Drawing::Size(30, 30);
			this->btnViewNavBar->Location = System::Drawing::Point(43, y);
		}
		else {
			panelNavBar->Size = System::Drawing::Size(207, 235);
			this->picBoxUserPic->Size = System::Drawing::Size(79, 81);
			this->btnViewNavBar->Location = System::Drawing::Point(210, y);
		}
		isNavBarExpanded = !isNavBarExpanded;
	}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	this->lblTitlePage->Text = "HOMEPAGE";

	this->flowLayoutPanel2->Visible = true;
	this->pnlMainTop->Size = System::Drawing::Size(1127, 181);

	this->PANELbandEntrSolAj->Visible = false;
	this->PANELEsdevHomepage->Visible = true;
	this->PANELConsultarCompra->Visible = false;

	this->pnlInfoUsu->Visible = false;

	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaTotsEsdeveniments txConsTotsEsdevs;
	txConsTotsEsdevs.executar();

	List<String^>^ totsEsdevs = txConsTotsEsdevs.getResult();

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = totsEsdevs->Count;

	for (int i = 0; i < num_filtre_panel; i += 2) {
		String^ nom = totsEsdevs[i];
		String^ preu = totsEsdevs[i + 1];
		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "CONSULTAR ESDEVENIMENTS";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "REGISTAR-SE EN ESDEVENIMENTS";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "SETTINGS";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	usuario->logOut();
	this->Close();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnFiltrGala_Click(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaEsdevenimentsAmbTipus txConsEsdevs("Gala");
	txConsEsdevs.executar();

	List<String^>^ esdevsGala = txConsEsdevs.getResult();
	/*List<String^>^ esdevsGalaNoms = txConsEsdevs.getNoms();
	List<String^>^ esdevsGalaPreus = txConsEsdevs.getPreus();*/

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = esdevsGala->Count;

	for (int i = 0; i < num_filtre_panel; i+=2) {
		String^ nom = esdevsGala[i];
		String^ preu = esdevsGala[i+1];
		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}

}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: Void addBntFiltreToUI() {

}

private: System::Void btnConsultar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);
	_NomEsdevPerComprar = clickedButton->NomEsdev;
	String^ nomEsdev = clickedButton->NomEsdev;

	this->flowLayoutPnlBndEntrAj->Controls->Clear();
	this->lblTitlePage->Text = "CONSULTAR ESDEVENIMENT";
	this->flowLayoutPanel2->Visible = false;
	this->pnlMainTop->Size = System::Drawing::Size(1084, 110);

	this->PANELEsdevHomepage->Visible = false;
	this->PANELConsultarCompra->Visible = true;

	TxConsultaEsdeveniment^ txConsEsdev = gcnew TxConsultaEsdeveniment(nomEsdev);
	txConsEsdev->executar();

	String^ idEnt = txConsEsdev->getResult()[0];
	String^ preu = txConsEsdev->getResult()[1];
	String^ ajunt = txConsEsdev->getResult()[2];
	String^ desc = txConsEsdev->getResult()[3];
	String^ nom = txConsEsdev->getResult()[4];
	String^ tipus = txConsEsdev->getResult()[5];
	String^ aforament = txConsEsdev->getResult()[6];
	String^ puntsCost = txConsEsdev->getResult()[7];
	String^ data = txConsEsdev->getResult()[8];
	String^ puntsDesc = txConsEsdev->getResult()[9];

	this->lblPreuEsdevCONSgran->Text = "Preu: " + preu + " € ";
	this->lblAjuntEsdevCONS->Text = ajunt;
	this->lblDescEsdevCONS->Text = desc;
	this->lblNomEsdevCONS->Text = nom;
	this->lblTipusCONS->Text = tipus;
	this->lblAforamCONS->Text = aforament + " Persones";
	this->lblPreuPuntsCONS->Text = puntsCost + " Punts";
	this->lblDataCONS->Text = data;
	this->lblPuntsRegCONS->Text = puntsDesc + " Punts de Regal";

	/*ComprarEsdevenimentUI^ formComprEsdev = gcnew ComprarEsdevenimentUI;
	formComprEsdev->ShowDialog();*/

}

private: System::Void btnComprar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//this->pnlMain->Controls->Add();
}
private: System::Void btnFiltreDeportivo_Click(System::Object^ sender, System::EventArgs^ e) {
	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaEsdevenimentsAmbTipus txConsEsdevs("Deportivo");
	txConsEsdevs.executar();

	List<String^>^ esdevsGala = txConsEsdevs.getResult();

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = esdevsGala->Count;

	for (int i = 0; i < num_filtre_panel; i += 2) {

		String^ nom = esdevsGala[i];
		String^ preu = esdevsGala[i + 1];
		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}
}
private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "MODIFICAR ESDEVENIMENTS";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)  // btnSearch
{
	String^ val = this->textBox1->Text;

	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaEsdevenimentsAmbTipus txConsEsdevs(val);
	txConsEsdevs.executar();

	List<String^>^ esdevsGala = txConsEsdevs.getResult();

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = esdevsGala->Count;

	for (int i = 0; i < num_filtre_panel; i += 2) {

		String^ nom = esdevsGala[i];
		String^ preu = esdevsGala[i + 1];

		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) { // btn Tornar enrere
	this->PANELPROVA->Visible = false;
	this->PANELPROVA->Dock = System::Windows::Forms::DockStyle::Right;
}

// CIUTADÀ------------------------------------------------------------------------------
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "HOMEPAGE";
	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaTotsEsdeveniments txConsTotsEsdevs;
	txConsTotsEsdevs.executar();

	List<String^>^ totsEsdevs = txConsTotsEsdevs.getResult();

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = totsEsdevs->Count;

	for (int i = 0; i < num_filtre_panel; i += 2) {
		String^ nom = totsEsdevs[i];
		String^ preu = totsEsdevs[i + 1];
		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "CONSULTAR ESDEVENIMENTS";
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "REGISTAR-SE EN ESDEVENIMENTS";
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "SETTINGS";
}
// Creació de panells amb l'Esdeveniment donat (+ Info)
private: Void addEsdevToUI(Esdeveniment^ esdev)
{
	System::Windows::Forms::Panel^ pnlEsdev = gcnew Panel;
	pnlEsdev->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	pnlEsdev->Location = System::Drawing::Point(0, 0);
	pnlEsdev->Name = String::Format("pnlEsdev{0}", esdev->getNom());
	pnlEsdev->Size = System::Drawing::Size(165, 235);
	pnlEsdev->TabIndex = 2;
	pnlEsdev->Visible = true;

	System::Windows::Forms::Label^ lblEsdev = gcnew Label;
	lblEsdev->Name = String::Format("lblEsdev{0}", esdev->getNom());
	lblEsdev->Text = esdev->getNom();
	lblEsdev->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblEsdev->Location = System::Drawing::Point(59, 168);
	lblEsdev->Dock = System::Windows::Forms::DockStyle::Bottom;

	System::Windows::Forms::Label^ lblEsdevPreu = gcnew Label;
	lblEsdevPreu->Name = String::Format("lblEsdevPreu{0}", esdev->getPreu());
	lblEsdevPreu->Text = esdev->getPreu() + " €";
	lblEsdevPreu->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblEsdevPreu->Location = System::Drawing::Point(59, 168);
	lblEsdevPreu->Dock = System::Windows::Forms::DockStyle::Bottom;

	//CustomButton^ btnConsultar = gcnew CustomButton("Messi", "Gala");
	CustomButton^ btnConsultar = gcnew CustomButton;
	btnConsultar->Name = "btnMoreInfo{0}";
	btnConsultar->Text = "+ Info";
	btnConsultar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	btnConsultar->BackColor = System::Drawing::Color::Black;
	btnConsultar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
	btnConsultar->ForeColor = System::Drawing::Color::White;
	btnConsultar->Dock = System::Windows::Forms::DockStyle::Bottom;
	btnConsultar->NomEsdev = esdev->getNom();
	//this->btnComprarCONS->NomEsdev = esdev->getNom();
	_NomEsdevPerComprar = btnConsultar->NomEsdev;
	btnConsultar->Click += gcnew System::EventHandler(this, &ProvesUI::btnConsultar_Click);

	pnlEsdev->Controls->Add(lblEsdev);
	pnlEsdev->Controls->Add(lblEsdevPreu);
	pnlEsdev->Controls->Add(btnConsultar);

	this->flowLayoutPanel1->Controls->Add(pnlEsdev);
}
// Creació de panells amb l'Esdeveniment donat (Modificar)
private: Void addEsdevToUI_Mod(Esdeveniment^ esdev)
{
	System::Windows::Forms::Panel^ pnlEsdev = gcnew Panel;
	pnlEsdev->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	pnlEsdev->Location = System::Drawing::Point(0, 0);
	pnlEsdev->Name = String::Format("pnlEsdev{0}", esdev->getNom());
	pnlEsdev->Size = System::Drawing::Size(165, 235);
	pnlEsdev->TabIndex = 2;
	pnlEsdev->Visible = true;

	System::Windows::Forms::Label^ lblEsdev = gcnew Label;
	lblEsdev->Name = String::Format("lblEsdev{0}", esdev->getNom());
	lblEsdev->Text = esdev->getNom();
	lblEsdev->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblEsdev->Location = System::Drawing::Point(59, 168);
	lblEsdev->Dock = System::Windows::Forms::DockStyle::Bottom;

	System::Windows::Forms::Label^ lblEsdevPreu = gcnew Label;
	lblEsdevPreu->Name = String::Format("lblEsdevPreu{0}", esdev->getPreu());
	//lblEsdevPreu->Text = esdev->getPreu() + " €";
	lblEsdevPreu->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	lblEsdevPreu->Location = System::Drawing::Point(59, 168);
	lblEsdevPreu->Dock = System::Windows::Forms::DockStyle::Bottom;

	System::Windows::Forms::Button^ btnComprar = gcnew Button;
	btnComprar->Name = "btnComprar{0}";
	btnComprar->Text = "Modificar";
	btnComprar->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	btnComprar->Dock = System::Windows::Forms::DockStyle::Bottom;

	btnComprar->Click += gcnew System::EventHandler(this, &ProvesUI::btnComprar_Click);

	pnlEsdev->Controls->Add(lblEsdev);
	pnlEsdev->Controls->Add(lblEsdevPreu);
	pnlEsdev->Controls->Add(btnComprar);

}
// Creació de botons de filtres
private: Void addFiltrButtonToUI(String^ tipus)
{
	System::Windows::Forms::Button^ btnFiltrType = gcnew Button;
	btnFiltrType->BackColor = System::Drawing::Color::Crimson;
	btnFiltrType->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
	btnFiltrType->Name = String::Format("btnFiltr{0}", tipus);
	btnFiltrType->Text = tipus;
	btnFiltrType->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	btnFiltrType->ForeColor = System::Drawing::Color::White;
	btnFiltrType->Size = System::Drawing::Size(75, 23);
	btnFiltrType->Click += gcnew System::EventHandler(this, &ProvesUI::btnFiltrGala_Click);

	this->flowLayoutPanel2->Controls->Add(btnFiltrType);
}
// ENTITAT------------------------------------------------------------------------------
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "MODIFICAR ESDEVENIMENTS";
}
// AJUNTAMENT---------------------------------------------------------------------------



// COMPARTIT----------------------------------------------------------------------------
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	usuario->logOut();
	this->Close();
}
// Consultar Usuari (Ciutadà, Entitat, Ajuntament)
private: System::Void picBoxUserPic_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lblTitlePage->Text = "PROFILE";
	this->flowLayoutPanel2->Visible = false;
	this->pnlMainTop->Size = System::Drawing::Size(1127, 111);

	this->pnlInfoUsu->Visible = true;

	ConsultarUsuariUI^ formConsultUsu = gcnew ConsultarUsuariUI;
	formConsultUsu->ShowDialog();
}
// Main
private: System::Void ProvesUI_Load(System::Object^ sender, System::EventArgs^ e) {

	//this->pnlMainModEsdv->Visible = false;
	this->PANELEsdevHomepage->Visible = true;
	this->PANELbandEntrSolAj->Visible = false;
	
	int y = Screen::PrimaryScreen->Bounds.Height / 2;
	this->btnViewNavBar->Location = System::Drawing::Point(210, y);

	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	PassarelaCiutada^ passCiu;
	PassarelaEntitat^ passEnt;
	PassarelaAjuntament^ passAj;

	String^ fullName;
	String^ fl;
	String^ rl;
	String^ userName;
	int^ puntsCiutada;

	TxConsultaTotsEsdeveniments txConsTotsEsdevs;
	int num_filtre_panel = 0;
	List<String^>^ totsEsdevs;

	TxConsultaTotsEsdevenimentsPerEntitat txConsTotsEsdevsEnt;
	int num_filtre_panel2 = 0;
	List<String^>^ totsEsdevsEnt;

	switch (usuario->getTipoPassarela())
	{
	case TipoPassarela::Ciutada:
		this->lblTypeUser->Text = L"Ciutadà";
		this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));

		passCiu = safe_cast<PassarelaCiutada^>(usuario->getUsuari());

		fullName = passCiu->getNomComplet();
		userName = passCiu->getNickname();
		puntsCiutada = passCiu->getPunts();

		fl = fullName->Substring(0, 1)->ToUpper();
		rl = fullName->Substring(1)->ToLower();

		fullName = fl + rl;

		this->lblPuntsUser->Visible = true;

		lblFullNameUser->Text = L"" + fullName;
		lblUsername->Text = L"" + "@" + userName;
		this->lblPuntsUser->Text = L"" + puntsCiutada + " Punts";

		this->flowLayoutPanel1->Controls->Clear();

		txConsTotsEsdevs.executar();

		totsEsdevs = txConsTotsEsdevs.getResult();

		List<System::Windows::Forms::Panel^>^ list_esdevs;

		num_filtre_panel = totsEsdevs->Count;

		for (int i = 0; i < num_filtre_panel; i += 2) {
			String^ nom = totsEsdevs[i];
			String^ preu = totsEsdevs[i + 1];
			Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
			addEsdevToUI(esdev);
		}


		break;
	case TipoPassarela::Entitat:

		this->panel10->Visible = true;

		this->lblTypeUser->Text = L"Entitat";
		this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(246)),
			static_cast<System::Int32>(static_cast<System::Byte>(210)),
			static_cast<System::Int32>(static_cast<System::Byte>(60)));

		passEnt = safe_cast<PassarelaEntitat^>(usuario->getUsuari());

		fullName = passEnt->obteNom();
		userName = passEnt->obteid()->ToString();

		fl = fullName->Substring(0, 1)->ToUpper();
		rl = fullName->Substring(1)->ToLower();

		fullName = fl + rl;

		lblFullNameUser->Text = L"" + fullName;
		lblUsername->Text = L"" + userName;

		//Visibilitat Opcions NavBar:
		//panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = false;
		panel4->Visible = false;
		panel5->Visible = false;
		panel6->Visible = false;
		//panel7->Visible = false;

		this->pnlModEsdev->Visible = true;

		flowLayoutPanel2->Visible = true;

		this->pnlMainTop->Size = System::Drawing::Size(1503, 112);;

		// Entitat:
		txConsTotsEsdevsEnt.executar(userName);
		totsEsdevsEnt = txConsTotsEsdevsEnt.getResult();
		num_filtre_panel2 = totsEsdevsEnt->Count;
		for (int i = 0; i < num_filtre_panel2; i += 2) {
			String^ nom = totsEsdevsEnt[i];
			String^ preu = totsEsdevsEnt[i + 1];
			Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
			addEsdevToUI_Mod(esdev);
		}

		//this->pnlMainModEsdv->Visible = true;

		break;
	case TipoPassarela::Ajuntament:

		this->panel11->Visible = true; // Consultar Peticions d'Esdeveniments


		this->lblTypeUser->Text = L"Ajuntament";
		this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(168)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));

		passAj = safe_cast<PassarelaAjuntament^>(usuario->getUsuari());

		fullName = passAj->getNom();
		userName = passAj->getClau();

		fl = fullName->Substring(0, 1)->ToUpper();
		rl = fullName->Substring(1)->ToLower();

		fullName = fl + rl;

		lblFullNameUser->Text = L"" + fullName;
		lblUsername->Text = L"" + userName;

		//Visibilitat Opcions NavBar:
		//panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = false;
		panel4->Visible = false;
		panel5->Visible = false;
		panel6->Visible = false;
		//panel7->Visible = false;



		break;
	}

	List<String^>^ tipus = gcnew List<String^>();

	tipus->Add("Gastronómico");
	tipus->Add("Artístico");
	tipus->Add("Deportivo");
	tipus->Add("Educativo");
	tipus->Add("Tecnológico");
	tipus->Add("Carnaval");
	tipus->Add("Musical");
	tipus->Add("Cinematográfico");
	tipus->Add("Taller");
	tipus->Add("Exposición");
	tipus->Add("Concierto");
	tipus->Add("Festival");
	tipus->Add("Competición");
	tipus->Add("Torneo");
	tipus->Add("Ceremonia");
	tipus->Add("Gala");

	int num_filtre_btn = tipus->Count;

	for (int i = 0; i < num_filtre_btn; ++i) {
		addFiltrButtonToUI(tipus[i]);
	}
}
private: System::Void btnRegEsdevAJ_Click(System::Object^ sender, System::EventArgs^ e) {
	RegistrarEsdevenimentUI^ formConsultUsu = gcnew RegistrarEsdevenimentUI;
	formConsultUsu->ShowDialog();
}
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) { // Dock CONSULTAR PETICIONS
	this->flowLayoutPnlBndEntrAj->Controls->Clear();
	this->lblTitlePage->Text = "SAFATA ENTRADA SOL.LICITUTS";
	this->flowLayoutPanel2->Visible = false;
	this->pnlMainTop->Size = System::Drawing::Size(1084, 110);

	this->PANELEsdevHomepage->Visible = false;
	this->PANELbandEntrSolAj->Visible = true;

	int comptEsdevAjunt = 0;

	TxConsultaEsdevenimentsAjuntament txConsEsdevAj;
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	PassarelaAjuntament^ passAj = safe_cast<PassarelaAjuntament^>(usuario->getUsuari());
	txConsEsdevAj.executar(passAj->getNom());
	List<String^>^ res;
	res = txConsEsdevAj.getResult();
	// Verificar si hay resultados antes de acceder al primer elemento
	comptEsdevAjunt = res->Count;
	for (int i = 0; i < comptEsdevAjunt; i = i + 4) {
		if (i + 3 < res->Count) {
			addDynamicPanelBandejaEntradaAj2(res[i], res[i + 1], res[i + 2], res[i + 3]);
		}
		else {
			// Handle the case where there are not enough elements
			// This could be logging an error, breaking the loop, or any other error handling
			break; // or continue; or any other handling logic
		}
	}
}
	//---------------------------------------------------- Form Bandeja Entrada Ajuntament ----------------------
	private: System::Void addDynamicPanelBandejaEntradaAj2(String ^ lblIdEnt, String ^ lblNomEsdev, String ^ data, String ^ descEsdev) {

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
		pnlDyn->Size = System::Drawing::Size(1155, 53);
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
		btnDynDenegar->Click += gcnew EventHandler(this, &ProvesUI::ButtonCancelar_Click);
		btnDynDenegar->NomEsdev = lblNomEsdev;
		btnDynDenegar->BackColor = System::Drawing::Color::OrangeRed;
		btnDynDenegar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
		btnDynAcceptar->Click += gcnew EventHandler(this, &ProvesUI::ButtonAcceptar_Click);
		btnDynAcceptar->NomEsdev = lblNomEsdev;
		btnDynAcceptar->BackColor = System::Drawing::Color::LimeGreen;
		btnDynAcceptar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		// 
		// btnExViewDesc
		// 
		btnDynViewDesc->Location = System::Drawing::Point(608 - 180, 16);
		btnDynViewDesc->Name = L"btnExViewDesc";
		btnDynViewDesc->Size = System::Drawing::Size(85, 23);
		btnDynViewDesc->TabIndex = 4;
		btnDynViewDesc->Text = L"Ver Desc.";
		btnDynViewDesc->UseVisualStyleBackColor = true;
		btnDynViewDesc->Click += gcnew EventHandler(this, &ProvesUI::ButtonViewDesc_Click);
		btnDynViewDesc->NomEsdev = descEsdev;
		// 
		// lblExData
		// 
		lblDynData->AutoSize = true;
		lblDynData->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		lblDynData->Location = System::Drawing::Point(391 - 120, 18);
		lblDynData->Name = L"lblExData";
		lblDynData->Size = System::Drawing::Size(70, 17);
		lblDynData->TabIndex = 2;
		lblDynData->Text = L"01-01-2000";
		// 
		// lblExNomEsdev
		// 
		lblDynNomEsdev->AutoSize = true;
		lblDynNomEsdev->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		lblDynNomEsdev->Location = System::Drawing::Point(158 - 50, 18);
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

	private: void ButtonViewDesc_Click(Object ^ sender, EventArgs ^ e)
	{
		CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);
		if (clickedButton != nullptr) {
			String^ descEsdev = clickedButton->NomEsdev;
			MessageBox::Show(descEsdev);
		}
	}

	private: void ButtonAcceptar_Click(Object ^ sender, EventArgs ^ e) {
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

	private: void ButtonCancelar_Click(Object ^ sender, EventArgs ^ e) 
	{
		_NomEsdevPerComprar = "";
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

private: System::Void btnGoBackCONS_Click(System::Object^ sender, System::EventArgs^ e) {

	this->pnlCOMP->Visible = false;
	this->flowLayoutPanel2->Visible = true;
	this->pnlMainTop->Size = System::Drawing::Size(1084, 223);

	this->PANELConsultarCompra->Visible = false;
	this->PANELEsdevHomepage->Visible = true;

	this->lblTitlePage->Text = "HOMEPAGE";
	this->flowLayoutPanel1->Controls->Clear();

	TxConsultaTotsEsdeveniments txConsTotsEsdevs;
	txConsTotsEsdevs.executar();

	List<String^>^ totsEsdevs = txConsTotsEsdevs.getResult();

	List<System::Windows::Forms::Panel^>^ list_esdevs;

	int num_filtre_panel = totsEsdevs->Count;

	for (int i = 0; i < num_filtre_panel; i += 2) {
		String^ nom = totsEsdevs[i];
		String^ preu = totsEsdevs[i + 1];
		Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
		addEsdevToUI(esdev);
	}
}
private: System::Void btnComprarCONS_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pnlCOMP->Visible = true;
}

private: System::Void btnComprarCOMP_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ nomEsdev = _NomEsdevPerComprar;

	String^ numero = this->textBoxNumTarjCOMP->Text;
	String^ titular_tarjeta = this->textBoxTitularCOMP->Text;
	String^ fecha_cadu_año = this->textBoxYearCOMP->Text;
	String^ fecha_cadu_mes = this->textBoxMonthCOMP->Text;
	String^ CVV_ = this->textBoxCVVCOMP->Text;
	if (numero->Length == 0 || titular_tarjeta->Length == 0 || fecha_cadu_mes->Length == 0 || CVV_->Length == 0 || fecha_cadu_año->Length == 0)
	{
		MessageBox::Show("Omple tots els camps",
			"Un o mes camps buits", MessageBoxButtons::OK);
		return;
	}
	//TITULAR
	bool encontrado = false;
	for (int i = 0; i < titular_tarjeta->Length && encontrado == false; i++)
	{
		if (47 < titular_tarjeta[i] && titular_tarjeta[i] < 58) encontrado = true;
		else if (titular_tarjeta[i] == 32) encontrado = true;
	}
	if (encontrado == true)
	{
		MessageBox::Show("Revisa el camp 'Titular de la tarjeta' no té el format indicat ", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}
	//NUMERO
	encontrado = false;
	if (numero->Length < 13 || numero->Length > 18) encontrado = true;
	for (int i = 0; i < numero->Length && encontrado == false; i++)
	{
		if (!(47 < numero[i] && numero[i] < 58)) encontrado = true;
	}
	if (encontrado == true)
	{
		MessageBox::Show("Revisa el camp 'Numero de la tarjeta' no té el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}
	encontrado = false;
	//MES
	if (fecha_cadu_mes->Length != 2) encontrado = true;
	for (int i = 0; i < fecha_cadu_mes->Length && encontrado == false; i++)
	{
		if (!(47 < fecha_cadu_mes[i] && fecha_cadu_mes[i] < 58)) encontrado = true;
	}
	if (encontrado == true)
	{
		MessageBox::Show("Revisa el camp 'Fecha de caducidad' no té el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}
	encontrado = false;
	//AÑO
	if (fecha_cadu_año->Length != 4) encontrado = true;
	for (int i = 0; i < fecha_cadu_año->Length && encontrado == false; i++)
	{
		if (!(47 < fecha_cadu_año[i] && fecha_cadu_año[i] < 58)) encontrado = true;
	}
	if (encontrado == true)
	{
		MessageBox::Show("Revisa el camp 'Fecha de caducidad' no té el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}

	//CVV
	encontrado = false;
	if (CVV_->Length != 3) encontrado = true;
	for (int i = 0; i < CVV_->Length && encontrado == false; i++)
	{
		if (!(47 < CVV_[i] && CVV_[i] < 58)) encontrado = true;
		if (i == 3) encontrado = true;
	}
	if (encontrado == true)
	{
		MessageBox::Show("Revisa el camp 'CVV' no té el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
		return;
	}
	try
	{
		
		//if (radioButton2->Checked) // Punts
		//{
		//	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
		//	Object^ usuarioAlmacenado = usuario->getUsuari();
		//	TipoPassarela tipoUsuario = usuario->getTipoPassarela();
		//	if (usuarioAlmacenado == nullptr) throw(ErrorUsuari);
		//	// Verificar el tipo de usuario y actuar en consecuencia
		//	if (tipoUsuario == TipoPassarela::Ciutada) {
		//		TxCompraEntradaEsdevenimentPunts tx1(nomEsd);
		//		tx1.executar();
		//		MessageBox::Show("Compra finalitzada amb exit", "", MessageBoxButtons::OK);
		//		this->Close();
		//	}
		//}
		//else if (radioButton1->Checked) // Diners
		//{
			UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
			Object^ usuarioAlmacenado = usuario->getUsuari();
			TipoPassarela tipoUsuario = usuario->getTipoPassarela();
			if (usuarioAlmacenado == nullptr) throw(ErrorUsuari);
			// Verificar el tipo de usuario y actuar en consecuencia
			if (tipoUsuario == TipoPassarela::Ciutada) {
				/*if (label5->Text != "0")
				{
					FormulariCompraEntrada^ f2 = gcnew FormulariCompraEntrada();
					this->Visible = false;
					if (f2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					{
						this->Show();
						this->Visible = true;
						return;
					}
					this->Show();
					this->Visible = true;
				}*/
				TxCompraEntradaEsdevenimentDiners tCompEsdevDin(_NomEsdevPerComprar);
				tCompEsdevDin.executar();
				MessageBox::Show("Compra finalitzada amb exit", "", MessageBoxButtons::OK);
				//this->Close();
				this->PANELConsultarCompra->Visible = false;
				this->PANELEsdevHomepage->Visible = true;
				this->pnlCOMP->Visible = false;
				this->flowLayoutPanel2->Visible = true;
				this->pnlMainTop->Size = System::Drawing::Size(1084, 223);
			}
		//}
	}
	catch (const string err)
	{
		MessageBox::Show(gcnew String(err.c_str()), "Error Al Comprar", MessageBoxButtons::OK);
		return;
	}

}


private: System::Void btnComprarPuntsCONS_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ nomEsdev = _NomEsdevPerComprar;
		UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
		Object^ usuarioAlmacenado = usuario->getUsuari();
		TipoPassarela tipoUsuario = usuario->getTipoPassarela();
		if (usuarioAlmacenado == nullptr) throw(ErrorUsuari);
		// Verificar el tipo de usuario y actuar en consecuencia
		if (tipoUsuario == TipoPassarela::Ciutada) {
			TxCompraEntradaEsdevenimentPunts tx1(nomEsdev);
			tx1.executar();
			
			MessageBox::Show("Compra finalitzada amb exit", "", MessageBoxButtons::OK);
			/*this->Close();*/
			this->PANELConsultarCompra->Visible = false;
			this->PANELEsdevHomepage->Visible = true;
			this->pnlCOMP->Visible = false;
			this->flowLayoutPanel2->Visible = true;
			this->pnlMainTop->Size = System::Drawing::Size(1084, 223);

			PassarelaCiutada^ passCiu = safe_cast<PassarelaCiutada^>(usuario->getUsuari());

			int^ puntsCiutada = passCiu->getPunts();

			this->lblPuntsUser->Text = L"" + puntsCiutada + " Punts";

		}
	}
	catch (const string err)
	{
		MessageBox::Show(gcnew String(err.c_str()), "Error Al Comprar", MessageBoxButtons::OK);
		return;
	}
}

private:
	void textBox1_TextChanged(Object^ sender, EventArgs^ e)
	{
		// Update the label with the text from the textBox
		lbNumTarjUICOMP->Text = this->textBoxNumTarjCOMP->Text;
	}
};
}
