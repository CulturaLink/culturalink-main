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
#include "TxConsultaInscripcions.h"
#include "TxPuntuaEsdeveniment.h"
#include "TxModificaPuntuacioEsdeveniment.h"
#include "TxConsultaPuntuacioEsdeveniment.h"
#include "TxAnulaRegistreEsdeveniment.h"

// Controladors
#include "CtrlModificaCiutada.h"
#include "CtrlModificaAjuntament.h"
#include "CtrlModificaEntitat.h"
#include "CtrlModificaEsdeveniment.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ProvesUI()
		{
			if (components)
			{
				delete components;
			}
		}


	private:
		int^ _quant = 1;
		CtrlModificaAjuntament ctrlModAj;
		CtrlModificaEntitat ctrlModEnt;
		List<String^>^ resultAj;    // Por demostrar info del usuario en Modificar Ajuntament
		List<String^>^ resultEnt;
	private: String^ _NomEsdevPerComprar = "";

	private:


	private: System::Windows::Forms::Panel^ pnlQuantitatCONS;
	private: System::Windows::Forms::Label^ lblQunatitatCONSen;

	private: System::Windows::Forms::Panel^ PANELModificaEntitat;

	private: System::Windows::Forms::Button^ btn_modificaMODENT;
	protected:
	protected:
	private: System::Windows::Forms::TextBox^ txt_contrasenya_MODENT;
	private: System::Windows::Forms::TextBox^ txt_correu_MODENT;
	private: System::Windows::Forms::TextBox^ txt_telefon_MODENT;
	private: System::Windows::Forms::TextBox^ txt_nom_MODENT;
	private: System::Windows::Forms::Label^ lbl_contrasenya_MODENT;
	private: System::Windows::Forms::Panel^ BlackPartMODENT;
	private: System::Windows::Forms::Panel^ panel_nom_MODENT;
	private: System::Windows::Forms::Label^ lbl_nom_MODENT;
	private: System::Windows::Forms::Panel^ panel_contrasenya_MODENT;
	private: System::Windows::Forms::Panel^ panel_telefon_MODENT;
	private: System::Windows::Forms::Label^ lbl_telefon_MODENT;
	private: System::Windows::Forms::Panel^ panel_correu_MODENT;
	private: System::Windows::Forms::Label^ lbl_correu_MODENT;

	private: System::Windows::Forms::Panel^ PANELModificaAjuntament;
	private: System::Windows::Forms::Panel^ BlackPartMODAJUN;
	private: System::Windows::Forms::Label^ lbl_contrasenya_ajuntamentMODAJUN;
	private: System::Windows::Forms::Label^ lbl_correu_electronic_ajuntamentMODAJUN;
	private: System::Windows::Forms::Label^ lbl_telefon_ajuntamentMODAJUN;
	private: System::Windows::Forms::Label^ lbl_poblacio_ajuntamentMODAJUN;
	private: System::Windows::Forms::Label^ lbl_nom_ajuntamentMODAJUN;
	private: System::Windows::Forms::Panel^ panel_nom_ajuntamentMODAJUN;
	private: System::Windows::Forms::TextBox^ txt_nom_ajuntamentMODAJUN;
	private: System::Windows::Forms::Panel^ panel_telefon_ajuntamentMODAJUN;
	private: System::Windows::Forms::Panel^ panel_correu_electronic_ajuntamentMODAJUN;
	private: System::Windows::Forms::Panel^ panel_contrasenya_ajuntamentMODAJUN;
	private: System::Windows::Forms::Panel^ panel_poblacio_ajuntamentMODAJUN;
	private: System::Windows::Forms::TextBox^ txt_contrasenya_ajuntamentMODAJUN;
	private: System::Windows::Forms::TextBox^ txt_correu_electronic_ajuntamentMODAJUN;
	private: System::Windows::Forms::TextBox^ txt_telefon_ajuntamentMODAJUN;
	private: System::Windows::Forms::TextBox^ txt_poblacio_ajuntamentMODAJUN;
	//private: System::Windows::Forms::Button^ btn_atrasMODAJUN;
	private: System::Windows::Forms::Button^ btn_modificaMODAJUN;

	private: CtrlModificaCiutada ctrlModCit;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanelSOLENTIT;
		   /*private: System::Windows::Forms::Panel^ pnlSOLENTITex;
		   private: System::Windows::Forms::Label^ lblEsdevSOLENTITex;
		   private: System::Windows::Forms::Label^ lblDataSOLENTITex;
		   private: System::Windows::Forms::Label^ lblPreuSOLENTITex;
		   private: System::Windows::Forms::Panel^ pnlEstatSOLENTITex;
		   private: System::Windows::Forms::Label^ lblEstatSOLENTITex;
		   private: System::Windows::Forms::Label^ lblIDSOLENTITex;*/
	private: System::Windows::Forms::Panel^ pnlTitlesSOLENTIT;
	private: System::Windows::Forms::Label^ lblNomEsdevSOLENTITen;
	private: System::Windows::Forms::Label^ lblDataSOLENTITen;
	private: System::Windows::Forms::Label^ lblTotalSOLENTITen;
	private: System::Windows::Forms::Label^ lblEstatSOLENTITen;
	private: System::Windows::Forms::Label^ lblSOLENTITen;
	private: System::Windows::Forms::Panel^ PANELSolicitutEntitat;

	private: System::Windows::Forms::Panel^ PANELModificaCiut;
	private: System::Windows::Forms::Panel^ pnlDataMODCIT;
	protected:
	private: System::Windows::Forms::Panel^ pnlCorrMODCIT;
	private: System::Windows::Forms::Panel^ pnlNomMODCIT;
	private: System::Windows::Forms::Panel^ pnlTitlesMODCIT;
	private: System::Windows::Forms::Label^ lblFormatMODCIT;
	private: System::Windows::Forms::Button^ btnModMODCIT;
	private: System::Windows::Forms::TextBox^ TextBoxRepCtrMODCIT;
	private: System::Windows::Forms::Label^ lblRepCtrMODCIT;
	private: System::Windows::Forms::TextBox^ TextBoxCtrMODCIT;
	private: System::Windows::Forms::Label^ lblCtrMODCIT;
	private: System::Windows::Forms::TextBox^ TextBoxDataMODCIT;
	private: System::Windows::Forms::TextBox^ TextBoxNomMODCIT;
	private: System::Windows::Forms::TextBox^ TextBoxCorrMODCIT;
	private: System::Windows::Forms::Label^ lblDataMODCIT;
	private: System::Windows::Forms::Label^ lblNomMODCIT;
	private: System::Windows::Forms::Label^ lblCorrMODCIT;
	private: System::Windows::Forms::Panel^ pnlRepCtrMODCIT;
	private: System::Windows::Forms::Panel^ pnlCtrMODCIT;
	private: System::Windows::Forms::Label^ lblNomCitMODCIT;
	//private: System::Windows::Forms::Button^ btnBackMODCIT;

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

	private: System::Windows::Forms::Panel^ PANELMeusEsdevs;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanelMESDEV;
		   /*private: System::Windows::Forms::Panel^ pnlDynMESDEVex;
		   private: System::Windows::Forms::Label^ lblNomEsdevMESDEVex;
		   private: System::Windows::Forms::Label^ lblDataMESDEVex;
		   private: System::Windows::Forms::Label^ lblPreuMESDEVex;
		   private: System::Windows::Forms::Panel^ pnlMetodeFMESDEVex;
		   private: System::Windows::Forms::Label^ lblMetodeMESDEVex;*/
	private: System::Windows::Forms::Panel^ pnlTitlesMESDEV;
	private: System::Windows::Forms::Label^ lblNomEsdevMESDEVen;
	private: System::Windows::Forms::Label^ lblDataMESDEVen;
	private: System::Windows::Forms::Label^ lblPreuMESDEVen;
	private: System::Windows::Forms::Label^ lblMetPagMESDEVen;




	private: System::Windows::Forms::Panel^ panelSettingsAjuntament;
	private: System::Windows::Forms::Button^ botonSettingsAjuntament;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ botonSettingsEntitat;
	private: System::Windows::Forms::Panel^ pnlESQLesMevesPeticionsEntitat;
	private: System::Windows::Forms::Button^ btnEsqLesMevesPeticions;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Label^ lblSelPuntuacioMESDEVen;
private: System::Windows::Forms::Button^ btnMoreQuantCONS;

private: System::Windows::Forms::Label^ lblQuantitatCONS;
private: System::Windows::Forms::Button^ btnLessQuantCONS;




	   private: System::Windows::Forms::Panel^ PANELmodificaEsdev;
	protected:
	private: System::Windows::Forms::Panel^ pnlTopTitlesMODESDEV;






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
private: System::Windows::Forms::Label^ lblTitleNomMODENT;
private: System::Windows::Forms::Label^ lblFormatDataAjudaMODESDEV;
private: System::Windows::Forms::Label^ lblErrorDataMODESDEV;
private: System::Windows::Forms::Label^ lblErrorPuntsCostMODESDEV;
private: System::Windows::Forms::Label^ lblErrorAforamentMODESDEV;
private: System::Windows::Forms::Label^ lblErrorTipusMODESDEV;
private: System::Windows::Forms::Label^ lblErrorPreuMODESDEV;






private: System::Windows::Forms::Panel^ pnlPuntsRegalMODESDEVen;
private: System::Windows::Forms::Label^ lblPuntsRegalMODESDEVen;
private: System::Windows::Forms::TextBox^ textBoxPuntsRegalMODESDEV;
private: System::Windows::Forms::Label^ lblErrorPuntsRegalMODESDEV;
private: System::Windows::Forms::Label^ label8;



	   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProvesUI::typeid));



	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pnlQuantitatCONS = (gcnew System::Windows::Forms::Panel());
			this->lblQuantitatCONS = (gcnew System::Windows::Forms::Label());
			this->lblQunatitatCONSen = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanelSOLENTIT = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlTitlesSOLENTIT = (gcnew System::Windows::Forms::Panel());
			this->lblNomEsdevSOLENTITen = (gcnew System::Windows::Forms::Label());
			this->lblDataSOLENTITen = (gcnew System::Windows::Forms::Label());
			this->lblTotalSOLENTITen = (gcnew System::Windows::Forms::Label());
			this->lblEstatSOLENTITen = (gcnew System::Windows::Forms::Label());
			this->lblSOLENTITen = (gcnew System::Windows::Forms::Label());
			this->PANELSolicitutEntitat = (gcnew System::Windows::Forms::Panel());
			this->PANELModificaCiut = (gcnew System::Windows::Forms::Panel());
			this->pnlRepCtrMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblRepCtrMODCIT = (gcnew System::Windows::Forms::Label());
			this->pnlCtrMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblCtrMODCIT = (gcnew System::Windows::Forms::Label());
			this->pnlTitlesMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblNomCitMODCIT = (gcnew System::Windows::Forms::Label());
			this->lblFormatMODCIT = (gcnew System::Windows::Forms::Label());
			this->btnModMODCIT = (gcnew System::Windows::Forms::Button());
			this->TextBoxRepCtrMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCtrMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxDataMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxCorrMODCIT = (gcnew System::Windows::Forms::TextBox());
			this->pnlNomMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblNomMODCIT = (gcnew System::Windows::Forms::Label());
			this->pnlCorrMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblCorrMODCIT = (gcnew System::Windows::Forms::Label());
			this->pnlDataMODCIT = (gcnew System::Windows::Forms::Panel());
			this->lblDataMODCIT = (gcnew System::Windows::Forms::Label());
			this->PANELModificaEntitat = (gcnew System::Windows::Forms::Panel());
			this->btn_modificaMODENT = (gcnew System::Windows::Forms::Button());
			this->txt_contrasenya_MODENT = (gcnew System::Windows::Forms::TextBox());
			this->txt_correu_MODENT = (gcnew System::Windows::Forms::TextBox());
			this->txt_telefon_MODENT = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_MODENT = (gcnew System::Windows::Forms::TextBox());
			this->lbl_contrasenya_MODENT = (gcnew System::Windows::Forms::Label());
			this->BlackPartMODENT = (gcnew System::Windows::Forms::Panel());
			this->lblTitleNomMODENT = (gcnew System::Windows::Forms::Label());
			this->panel_nom_MODENT = (gcnew System::Windows::Forms::Panel());
			this->lbl_nom_MODENT = (gcnew System::Windows::Forms::Label());
			this->panel_contrasenya_MODENT = (gcnew System::Windows::Forms::Panel());
			this->panel_telefon_MODENT = (gcnew System::Windows::Forms::Panel());
			this->lbl_telefon_MODENT = (gcnew System::Windows::Forms::Label());
			this->panel_correu_MODENT = (gcnew System::Windows::Forms::Panel());
			this->lbl_correu_MODENT = (gcnew System::Windows::Forms::Label());
			this->PANELModificaAjuntament = (gcnew System::Windows::Forms::Panel());
			this->btn_modificaMODAJUN = (gcnew System::Windows::Forms::Button());
			this->txt_contrasenya_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->txt_correu_electronic_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->txt_telefon_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->txt_poblacio_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_ajuntamentMODAJUN = (gcnew System::Windows::Forms::TextBox());
			this->lbl_contrasenya_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
			this->BlackPartMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->panel_nom_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->lbl_nom_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
			this->panel_poblacio_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->lbl_poblacio_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
			this->panel_contrasenya_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->panel_telefon_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->lbl_telefon_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
			this->panel_correu_electronic_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Panel());
			this->lbl_correu_electronic_ajuntamentMODAJUN = (gcnew System::Windows::Forms::Label());
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
			this->PANELmodificaEsdev = (gcnew System::Windows::Forms::Panel());
			this->pnlPuntsRegalMODESDEVen = (gcnew System::Windows::Forms::Panel());
			this->lblPuntsRegalMODESDEVen = (gcnew System::Windows::Forms::Label());
			this->textBoxPuntsRegalMODESDEV = (gcnew System::Windows::Forms::TextBox());
			this->lblErrorPuntsRegalMODESDEV = (gcnew System::Windows::Forms::Label());
			this->lblFormatDataAjudaMODESDEV = (gcnew System::Windows::Forms::Label());
			this->lblErrorDataMODESDEV = (gcnew System::Windows::Forms::Label());
			this->lblErrorPuntsCostMODESDEV = (gcnew System::Windows::Forms::Label());
			this->lblErrorAforamentMODESDEV = (gcnew System::Windows::Forms::Label());
			this->lblErrorTipusMODESDEV = (gcnew System::Windows::Forms::Label());
			this->lblErrorPreuMODESDEV = (gcnew System::Windows::Forms::Label());
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
			this->pnlTopTitlesMODESDEV = (gcnew System::Windows::Forms::Panel());
			this->lblTitleIDEsdevMODESDEV = (gcnew System::Windows::Forms::Label());
			this->btnLessQuantCONS = (gcnew System::Windows::Forms::Button());
			this->btnMoreQuantCONS = (gcnew System::Windows::Forms::Button());
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
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->botonSettingsEntitat = (gcnew System::Windows::Forms::Button());
			this->panelSettingsAjuntament = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->botonSettingsAjuntament = (gcnew System::Windows::Forms::Button());
			this->pnlESQLesMevesPeticionsEntitat = (gcnew System::Windows::Forms::Panel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->btnEsqLesMevesPeticions = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
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
			this->PANELMeusEsdevs = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanelMESDEV = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlTitlesMESDEV = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblSelPuntuacioMESDEVen = (gcnew System::Windows::Forms::Label());
			this->lblNomEsdevMESDEVen = (gcnew System::Windows::Forms::Label());
			this->lblDataMESDEVen = (gcnew System::Windows::Forms::Label());
			this->lblPreuMESDEVen = (gcnew System::Windows::Forms::Label());
			this->lblMetPagMESDEVen = (gcnew System::Windows::Forms::Label());
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
			this->pnlQuantitatCONS->SuspendLayout();
			this->pnlTitlesSOLENTIT->SuspendLayout();
			this->PANELSolicitutEntitat->SuspendLayout();
			this->PANELModificaCiut->SuspendLayout();
			this->pnlRepCtrMODCIT->SuspendLayout();
			this->pnlCtrMODCIT->SuspendLayout();
			this->pnlTitlesMODCIT->SuspendLayout();
			this->pnlNomMODCIT->SuspendLayout();
			this->pnlCorrMODCIT->SuspendLayout();
			this->pnlDataMODCIT->SuspendLayout();
			this->PANELModificaEntitat->SuspendLayout();
			this->BlackPartMODENT->SuspendLayout();
			this->panel_nom_MODENT->SuspendLayout();
			this->panel_telefon_MODENT->SuspendLayout();
			this->panel_correu_MODENT->SuspendLayout();
			this->PANELModificaAjuntament->SuspendLayout();
			this->panel_nom_ajuntamentMODAJUN->SuspendLayout();
			this->panel_poblacio_ajuntamentMODAJUN->SuspendLayout();
			this->panel_telefon_ajuntamentMODAJUN->SuspendLayout();
			this->panel_correu_electronic_ajuntamentMODAJUN->SuspendLayout();
			this->pnlCOMP->SuspendLayout();
			this->pnlTitleCOMP->SuspendLayout();
			this->pnlTarjUICOMP->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxChipUICOMP))->BeginInit();
			this->PANELConsultarCompra->SuspendLayout();
			this->PANELmodificaEsdev->SuspendLayout();
			this->pnlPuntsRegalMODESDEVen->SuspendLayout();
			this->pnlDataMODESDEV->SuspendLayout();
			this->pnlPuntsCostMODESDEV->SuspendLayout();
			this->pnlAforamentMODESDEV->SuspendLayout();
			this->pnlTipusMODESDEV->SuspendLayout();
			this->pnlDescMODESDEV->SuspendLayout();
			this->pnlPreuMODESDEV->SuspendLayout();
			this->pnlTopTitlesMODESDEV->SuspendLayout();
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
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panelSettingsAjuntament->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->pnlESQLesMevesPeticionsEntitat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
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
			this->PANELMeusEsdevs->SuspendLayout();
			this->pnlTitlesMESDEV->SuspendLayout();
			this->PANELPROVA->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->pnlMainModEsdv->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlQuantitatCONS
			// 
			this->pnlQuantitatCONS->BackColor = System::Drawing::Color::Black;
			this->pnlQuantitatCONS->Controls->Add(this->lblQuantitatCONS);
			this->pnlQuantitatCONS->Controls->Add(this->lblQunatitatCONSen);
			this->pnlQuantitatCONS->Location = System::Drawing::Point(297, 377);
			this->pnlQuantitatCONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlQuantitatCONS->Name = L"pnlQuantitatCONS";
			this->pnlQuantitatCONS->Size = System::Drawing::Size(152, 41);
			this->pnlQuantitatCONS->TabIndex = 0;
			// 
			// lblQuantitatCONS
			// 
			this->lblQuantitatCONS->AutoSize = true;
			this->lblQuantitatCONS->BackColor = System::Drawing::Color::White;
			this->lblQuantitatCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuantitatCONS->Location = System::Drawing::Point(99, 7);
			this->lblQuantitatCONS->Name = L"lblQuantitatCONS";
			this->lblQuantitatCONS->Size = System::Drawing::Size(19, 25);
			this->lblQuantitatCONS->TabIndex = 1;
			this->lblQuantitatCONS->Text = L"1";
			// 
			// lblQunatitatCONSen
			// 
			this->lblQunatitatCONSen->AutoSize = true;
			this->lblQunatitatCONSen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQunatitatCONSen->ForeColor = System::Drawing::Color::White;
			this->lblQunatitatCONSen->Location = System::Drawing::Point(5, 10);
			this->lblQunatitatCONSen->Name = L"lblQunatitatCONSen";
			this->lblQunatitatCONSen->Size = System::Drawing::Size(87, 23);
			this->lblQunatitatCONSen->TabIndex = 0;
			this->lblQunatitatCONSen->Text = L"Quantitat:";
			// 
			// flowLayoutPanelSOLENTIT
			// 
			this->flowLayoutPanelSOLENTIT->AutoScroll = true;
			this->flowLayoutPanelSOLENTIT->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanelSOLENTIT->Location = System::Drawing::Point(23, 63);
			this->flowLayoutPanelSOLENTIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanelSOLENTIT->Name = L"flowLayoutPanelSOLENTIT";
			this->flowLayoutPanelSOLENTIT->Size = System::Drawing::Size(880, 537);
			this->flowLayoutPanelSOLENTIT->TabIndex = 30;
			// 
			// pnlTitlesSOLENTIT
			// 
			this->pnlTitlesSOLENTIT->BackColor = System::Drawing::Color::Black;
			this->pnlTitlesSOLENTIT->Controls->Add(this->lblNomEsdevSOLENTITen);
			this->pnlTitlesSOLENTIT->Controls->Add(this->lblDataSOLENTITen);
			this->pnlTitlesSOLENTIT->Controls->Add(this->lblTotalSOLENTITen);
			this->pnlTitlesSOLENTIT->Controls->Add(this->lblEstatSOLENTITen);
			this->pnlTitlesSOLENTIT->Controls->Add(this->lblSOLENTITen);
			this->pnlTitlesSOLENTIT->Location = System::Drawing::Point(23, 30);
			this->pnlTitlesSOLENTIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlTitlesSOLENTIT->Name = L"pnlTitlesSOLENTIT";
			this->pnlTitlesSOLENTIT->Size = System::Drawing::Size(1165, 32);
			this->pnlTitlesSOLENTIT->TabIndex = 7;
			// 
			// lblNomEsdevSOLENTITen
			// 
			this->lblNomEsdevSOLENTITen->AutoSize = true;
			this->lblNomEsdevSOLENTITen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblNomEsdevSOLENTITen->ForeColor = System::Drawing::Color::White;
			this->lblNomEsdevSOLENTITen->Location = System::Drawing::Point(237, 7);
			this->lblNomEsdevSOLENTITen->Name = L"lblNomEsdevSOLENTITen";
			this->lblNomEsdevSOLENTITen->Size = System::Drawing::Size(126, 16);
			this->lblNomEsdevSOLENTITen->TabIndex = 4;
			this->lblNomEsdevSOLENTITen->Text = L"ESDEVENIMENT";
			// 
			// lblDataSOLENTITen
			// 
			this->lblDataSOLENTITen->AutoSize = true;
			this->lblDataSOLENTITen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDataSOLENTITen->ForeColor = System::Drawing::Color::White;
			this->lblDataSOLENTITen->Location = System::Drawing::Point(679, 9);
			this->lblDataSOLENTITen->Name = L"lblDataSOLENTITen";
			this->lblDataSOLENTITen->Size = System::Drawing::Size(148, 16);
			this->lblDataSOLENTITen->TabIndex = 3;
			this->lblDataSOLENTITen->Text = L"DATA FACTURACI�";
			// 
			// lblTotalSOLENTITen
			// 
			this->lblTotalSOLENTITen->AutoSize = true;
			this->lblTotalSOLENTITen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalSOLENTITen->ForeColor = System::Drawing::Color::White;
			this->lblTotalSOLENTITen->Location = System::Drawing::Point(504, 7);
			this->lblTotalSOLENTITen->Name = L"lblTotalSOLENTITen";
			this->lblTotalSOLENTITen->Size = System::Drawing::Size(56, 16);
			this->lblTotalSOLENTITen->TabIndex = 2;
			this->lblTotalSOLENTITen->Text = L"TOTAL";
			// 
			// lblEstatSOLENTITen
			// 
			this->lblEstatSOLENTITen->AutoSize = true;
			this->lblEstatSOLENTITen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEstatSOLENTITen->ForeColor = System::Drawing::Color::White;
			this->lblEstatSOLENTITen->Location = System::Drawing::Point(928, 7);
			this->lblEstatSOLENTITen->Name = L"lblEstatSOLENTITen";
			this->lblEstatSOLENTITen->Size = System::Drawing::Size(151, 16);
			this->lblEstatSOLENTITen->TabIndex = 1;
			this->lblEstatSOLENTITen->Text = L"ESTAT SOL.LICITUT";
			// 
			// lblSOLENTITen
			// 
			this->lblSOLENTITen->AutoSize = true;
			this->lblSOLENTITen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSOLENTITen->ForeColor = System::Drawing::Color::White;
			this->lblSOLENTITen->Location = System::Drawing::Point(32, 9);
			this->lblSOLENTITen->Name = L"lblSOLENTITen";
			this->lblSOLENTITen->Size = System::Drawing::Size(26, 16);
			this->lblSOLENTITen->TabIndex = 0;
			this->lblSOLENTITen->Text = L"ID ";
			// 
			// PANELSolicitutEntitat
			// 
			this->PANELSolicitutEntitat->AutoScroll = true;
			this->PANELSolicitutEntitat->Controls->Add(this->flowLayoutPanelSOLENTIT);
			this->PANELSolicitutEntitat->Controls->Add(this->pnlTitlesSOLENTIT);
			this->PANELSolicitutEntitat->Location = System::Drawing::Point(21, 12);
			this->PANELSolicitutEntitat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PANELSolicitutEntitat->Name = L"PANELSolicitutEntitat";
			this->PANELSolicitutEntitat->Size = System::Drawing::Size(1215, 724);
			this->PANELSolicitutEntitat->TabIndex = 17;
			this->PANELSolicitutEntitat->Visible = false;
			// 
			// PANELModificaCiut
			// 
			this->PANELModificaCiut->BackColor = System::Drawing::Color::White;
			this->PANELModificaCiut->Controls->Add(this->pnlRepCtrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlCtrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlTitlesMODCIT);
			this->PANELModificaCiut->Controls->Add(this->lblFormatMODCIT);
			this->PANELModificaCiut->Controls->Add(this->btnModMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxRepCtrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxCtrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxDataMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxNomMODCIT);
			this->PANELModificaCiut->Controls->Add(this->TextBoxCorrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlNomMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlCorrMODCIT);
			this->PANELModificaCiut->Controls->Add(this->pnlDataMODCIT);
			this->PANELModificaCiut->Location = System::Drawing::Point(243, 37);
			this->PANELModificaCiut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PANELModificaCiut->Name = L"PANELModificaCiut";
			this->PANELModificaCiut->Size = System::Drawing::Size(587, 546);
			this->PANELModificaCiut->TabIndex = 15;
			this->PANELModificaCiut->Visible = false;
			// 
			// pnlRepCtrMODCIT
			// 
			this->pnlRepCtrMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlRepCtrMODCIT->Controls->Add(this->lblRepCtrMODCIT);
			this->pnlRepCtrMODCIT->Location = System::Drawing::Point(69, 217);
			this->pnlRepCtrMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlRepCtrMODCIT->Name = L"pnlRepCtrMODCIT";
			this->pnlRepCtrMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlRepCtrMODCIT->TabIndex = 37;
			// 
			// lblRepCtrMODCIT
			// 
			this->lblRepCtrMODCIT->AutoSize = true;
			this->lblRepCtrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblRepCtrMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblRepCtrMODCIT->Location = System::Drawing::Point(31, 2);
			this->lblRepCtrMODCIT->Name = L"lblRepCtrMODCIT";
			this->lblRepCtrMODCIT->Size = System::Drawing::Size(168, 17);
			this->lblRepCtrMODCIT->TabIndex = 30;
			this->lblRepCtrMODCIT->Text = L"Repetir nova Contrasenya:\r\n";
			// 
			// pnlCtrMODCIT
			// 
			this->pnlCtrMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlCtrMODCIT->Controls->Add(this->lblCtrMODCIT);
			this->pnlCtrMODCIT->Location = System::Drawing::Point(69, 164);
			this->pnlCtrMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlCtrMODCIT->Name = L"pnlCtrMODCIT";
			this->pnlCtrMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlCtrMODCIT->TabIndex = 36;
			// 
			// lblCtrMODCIT
			// 
			this->lblCtrMODCIT->AutoSize = true;
			this->lblCtrMODCIT->BackColor = System::Drawing::Color::Transparent;
			this->lblCtrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblCtrMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblCtrMODCIT->Location = System::Drawing::Point(45, 2);
			this->lblCtrMODCIT->Name = L"lblCtrMODCIT";
			this->lblCtrMODCIT->Size = System::Drawing::Size(123, 17);
			this->lblCtrMODCIT->TabIndex = 28;
			this->lblCtrMODCIT->Text = L"Nova Contrasenya:";
			// 
			// pnlTitlesMODCIT
			// 
			this->pnlTitlesMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlTitlesMODCIT->Controls->Add(this->lblNomCitMODCIT);
			this->pnlTitlesMODCIT->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTitlesMODCIT->Location = System::Drawing::Point(0, 0);
			this->pnlTitlesMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlTitlesMODCIT->Name = L"pnlTitlesMODCIT";
			this->pnlTitlesMODCIT->Size = System::Drawing::Size(587, 38);
			this->pnlTitlesMODCIT->TabIndex = 32;
			// 
			// lblNomCitMODCIT
			// 
			this->lblNomCitMODCIT->AutoSize = true;
			this->lblNomCitMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblNomCitMODCIT->Location = System::Drawing::Point(33, 12);
			this->lblNomCitMODCIT->Name = L"lblNomCitMODCIT";
			this->lblNomCitMODCIT->Size = System::Drawing::Size(100, 16);
			this->lblNomCitMODCIT->TabIndex = 0;
			this->lblNomCitMODCIT->Text = L"NOM CIUTADA";
			// 
			// lblFormatMODCIT
			// 
			this->lblFormatMODCIT->AutoSize = true;
			this->lblFormatMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblFormatMODCIT->Location = System::Drawing::Point(419, 335);
			this->lblFormatMODCIT->Name = L"lblFormatMODCIT";
			this->lblFormatMODCIT->Size = System::Drawing::Size(104, 17);
			this->lblFormatMODCIT->TabIndex = 33;
			this->lblFormatMODCIT->Text = L"(AAAA-MM-DD)";
			// 
			// btnModMODCIT
			// 
			this->btnModMODCIT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnModMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->btnModMODCIT->Location = System::Drawing::Point(429, 473);
			this->btnModMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnModMODCIT->Name = L"btnModMODCIT";
			this->btnModMODCIT->Size = System::Drawing::Size(76, 27);
			this->btnModMODCIT->TabIndex = 32;
			this->btnModMODCIT->Text = L"Modifica";
			this->btnModMODCIT->UseVisualStyleBackColor = true;
			this->btnModMODCIT->Click += gcnew System::EventHandler(this, &ProvesUI::btnModMODCIT_Click);
			// 
			// TextBoxRepCtrMODCIT
			// 
			this->TextBoxRepCtrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxRepCtrMODCIT->Location = System::Drawing::Point(267, 217);
			this->TextBoxRepCtrMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBoxRepCtrMODCIT->Name = L"TextBoxRepCtrMODCIT";
			this->TextBoxRepCtrMODCIT->PasswordChar = '*';
			this->TextBoxRepCtrMODCIT->Size = System::Drawing::Size(239, 25);
			this->TextBoxRepCtrMODCIT->TabIndex = 31;
			// 
			// TextBoxCtrMODCIT
			// 
			this->TextBoxCtrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxCtrMODCIT->Location = System::Drawing::Point(267, 164);
			this->TextBoxCtrMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBoxCtrMODCIT->Name = L"TextBoxCtrMODCIT";
			this->TextBoxCtrMODCIT->PasswordChar = '*';
			this->TextBoxCtrMODCIT->Size = System::Drawing::Size(239, 25);
			this->TextBoxCtrMODCIT->TabIndex = 29;
			// 
			// TextBoxDataMODCIT
			// 
			this->TextBoxDataMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxDataMODCIT->Location = System::Drawing::Point(267, 332);
			this->TextBoxDataMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBoxDataMODCIT->Name = L"TextBoxDataMODCIT";
			this->TextBoxDataMODCIT->Size = System::Drawing::Size(145, 25);
			this->TextBoxDataMODCIT->TabIndex = 27;
			// 
			// TextBoxNomMODCIT
			// 
			this->TextBoxNomMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxNomMODCIT->Location = System::Drawing::Point(267, 114);
			this->TextBoxNomMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBoxNomMODCIT->Name = L"TextBoxNomMODCIT";
			this->TextBoxNomMODCIT->Size = System::Drawing::Size(239, 25);
			this->TextBoxNomMODCIT->TabIndex = 26;
			// 
			// TextBoxCorrMODCIT
			// 
			this->TextBoxCorrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->TextBoxCorrMODCIT->Location = System::Drawing::Point(267, 270);
			this->TextBoxCorrMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBoxCorrMODCIT->Name = L"TextBoxCorrMODCIT";
			this->TextBoxCorrMODCIT->Size = System::Drawing::Size(239, 25);
			this->TextBoxCorrMODCIT->TabIndex = 25;
			// 
			// pnlNomMODCIT
			// 
			this->pnlNomMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlNomMODCIT->Controls->Add(this->lblNomMODCIT);
			this->pnlNomMODCIT->Location = System::Drawing::Point(69, 114);
			this->pnlNomMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlNomMODCIT->Name = L"pnlNomMODCIT";
			this->pnlNomMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlNomMODCIT->TabIndex = 34;
			// 
			// lblNomMODCIT
			// 
			this->lblNomMODCIT->AutoSize = true;
			this->lblNomMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblNomMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblNomMODCIT->Location = System::Drawing::Point(40, 2);
			this->lblNomMODCIT->Name = L"lblNomMODCIT";
			this->lblNomMODCIT->Size = System::Drawing::Size(126, 17);
			this->lblNomMODCIT->TabIndex = 14;
			this->lblNomMODCIT->Text = L"Nou Nom Complet:";
			// 
			// pnlCorrMODCIT
			// 
			this->pnlCorrMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlCorrMODCIT->Controls->Add(this->lblCorrMODCIT);
			this->pnlCorrMODCIT->Location = System::Drawing::Point(69, 270);
			this->pnlCorrMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlCorrMODCIT->Name = L"pnlCorrMODCIT";
			this->pnlCorrMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlCorrMODCIT->TabIndex = 35;
			// 
			// lblCorrMODCIT
			// 
			this->lblCorrMODCIT->AutoSize = true;
			this->lblCorrMODCIT->BackColor = System::Drawing::Color::Transparent;
			this->lblCorrMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblCorrMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblCorrMODCIT->Location = System::Drawing::Point(64, 2);
			this->lblCorrMODCIT->Name = L"lblCorrMODCIT";
			this->lblCorrMODCIT->Size = System::Drawing::Size(82, 17);
			this->lblCorrMODCIT->TabIndex = 13;
			this->lblCorrMODCIT->Text = L"Nou Correu:";
			// 
			// pnlDataMODCIT
			// 
			this->pnlDataMODCIT->BackColor = System::Drawing::Color::Black;
			this->pnlDataMODCIT->Controls->Add(this->lblDataMODCIT);
			this->pnlDataMODCIT->Location = System::Drawing::Point(69, 332);
			this->pnlDataMODCIT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlDataMODCIT->Name = L"pnlDataMODCIT";
			this->pnlDataMODCIT->Size = System::Drawing::Size(200, 21);
			this->pnlDataMODCIT->TabIndex = 35;
			// 
			// lblDataMODCIT
			// 
			this->lblDataMODCIT->AutoSize = true;
			this->lblDataMODCIT->BackColor = System::Drawing::Color::Transparent;
			this->lblDataMODCIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblDataMODCIT->ForeColor = System::Drawing::Color::White;
			this->lblDataMODCIT->Location = System::Drawing::Point(31, 2);
			this->lblDataMODCIT->Name = L"lblDataMODCIT";
			this->lblDataMODCIT->Size = System::Drawing::Size(164, 17);
			this->lblDataMODCIT->TabIndex = 17;
			this->lblDataMODCIT->Text = L"Nova Data de Naixament:";
			// 
			// PANELModificaEntitat
			// 
			this->PANELModificaEntitat->Controls->Add(this->btn_modificaMODENT);
			this->PANELModificaEntitat->Controls->Add(this->txt_contrasenya_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->txt_correu_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->txt_telefon_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->txt_nom_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->lbl_contrasenya_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->BlackPartMODENT);
			this->PANELModificaEntitat->Controls->Add(this->panel_nom_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->panel_contrasenya_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->panel_telefon_MODENT);
			this->PANELModificaEntitat->Controls->Add(this->panel_correu_MODENT);
			this->PANELModificaEntitat->Location = System::Drawing::Point(12, 12);
			this->PANELModificaEntitat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PANELModificaEntitat->Name = L"PANELModificaEntitat";
			this->PANELModificaEntitat->Size = System::Drawing::Size(1256, 569);
			this->PANELModificaEntitat->TabIndex = 1;
			this->PANELModificaEntitat->Visible = false;
			// 
			// btn_modificaMODENT
			// 
			this->btn_modificaMODENT->BackColor = System::Drawing::SystemColors::Control;
			this->btn_modificaMODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->btn_modificaMODENT->Location = System::Drawing::Point(859, 470);
			this->btn_modificaMODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_modificaMODENT->Name = L"btn_modificaMODENT";
			this->btn_modificaMODENT->Size = System::Drawing::Size(75, 23);
			this->btn_modificaMODENT->TabIndex = 13;
			this->btn_modificaMODENT->Text = L"Modifica";
			this->btn_modificaMODENT->UseVisualStyleBackColor = false;
			this->btn_modificaMODENT->Click += gcnew System::EventHandler(this, &ProvesUI::btn_modificaMODENT_Click);
			// 
			// txt_contrasenya_MODENT
			// 
			this->txt_contrasenya_MODENT->Location = System::Drawing::Point(421, 356);
			this->txt_contrasenya_MODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_contrasenya_MODENT->Name = L"txt_contrasenya_MODENT";
			this->txt_contrasenya_MODENT->Size = System::Drawing::Size(308, 22);
			this->txt_contrasenya_MODENT->TabIndex = 12;
			// 
			// txt_correu_MODENT
			// 
			this->txt_correu_MODENT->Location = System::Drawing::Point(421, 298);
			this->txt_correu_MODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_correu_MODENT->Name = L"txt_correu_MODENT";
			this->txt_correu_MODENT->Size = System::Drawing::Size(308, 22);
			this->txt_correu_MODENT->TabIndex = 11;
			// 
			// txt_telefon_MODENT
			// 
			this->txt_telefon_MODENT->Location = System::Drawing::Point(421, 241);
			this->txt_telefon_MODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_telefon_MODENT->Name = L"txt_telefon_MODENT";
			this->txt_telefon_MODENT->Size = System::Drawing::Size(308, 22);
			this->txt_telefon_MODENT->TabIndex = 10;
			// 
			// txt_nom_MODENT
			// 
			this->txt_nom_MODENT->Location = System::Drawing::Point(421, 181);
			this->txt_nom_MODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_nom_MODENT->Name = L"txt_nom_MODENT";
			this->txt_nom_MODENT->Size = System::Drawing::Size(308, 22);
			this->txt_nom_MODENT->TabIndex = 5;
			this->txt_nom_MODENT->TextChanged += gcnew System::EventHandler(this, &ProvesUI::txt_nom_MODENT_TextChanged);
			// 
			// lbl_contrasenya_MODENT
			// 
			this->lbl_contrasenya_MODENT->AutoSize = true;
			this->lbl_contrasenya_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_contrasenya_MODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_contrasenya_MODENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_contrasenya_MODENT->Location = System::Drawing::Point(271, 358);
			this->lbl_contrasenya_MODENT->Name = L"lbl_contrasenya_MODENT";
			this->lbl_contrasenya_MODENT->Size = System::Drawing::Size(84, 17);
			this->lbl_contrasenya_MODENT->TabIndex = 4;
			this->lbl_contrasenya_MODENT->Text = L"Contrasenya";
			// 
			// BlackPartMODENT
			// 
			this->BlackPartMODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BlackPartMODENT->Controls->Add(this->lblTitleNomMODENT);
			this->BlackPartMODENT->Location = System::Drawing::Point(3, 2);
			this->BlackPartMODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BlackPartMODENT->Name = L"BlackPartMODENT";
			this->BlackPartMODENT->Size = System::Drawing::Size(1253, 38);
			this->BlackPartMODENT->TabIndex = 0;
			// 
			// lblTitleNomMODENT
			// 
			this->lblTitleNomMODENT->AutoSize = true;
			this->lblTitleNomMODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitleNomMODENT->ForeColor = System::Drawing::Color::White;
			this->lblTitleNomMODENT->Location = System::Drawing::Point(13, 8);
			this->lblTitleNomMODENT->Name = L"lblTitleNomMODENT";
			this->lblTitleNomMODENT->Size = System::Drawing::Size(171, 25);
			this->lblTitleNomMODENT->TabIndex = 0;
			this->lblTitleNomMODENT->Text = L"MODIFICA ENTITAT";
			// 
			// panel_nom_MODENT
			// 
			this->panel_nom_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_nom_MODENT->Controls->Add(this->lbl_nom_MODENT);
			this->panel_nom_MODENT->Location = System::Drawing::Point(221, 181);
			this->panel_nom_MODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_nom_MODENT->Name = L"panel_nom_MODENT";
			this->panel_nom_MODENT->Size = System::Drawing::Size(200, 22);
			this->panel_nom_MODENT->TabIndex = 6;
			// 
			// lbl_nom_MODENT
			// 
			this->lbl_nom_MODENT->AutoSize = true;
			this->lbl_nom_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_nom_MODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_nom_MODENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_nom_MODENT->Location = System::Drawing::Point(77, 2);
			this->lbl_nom_MODENT->Name = L"lbl_nom_MODENT";
			this->lbl_nom_MODENT->Size = System::Drawing::Size(38, 17);
			this->lbl_nom_MODENT->TabIndex = 0;
			this->lbl_nom_MODENT->Text = L"Nom";
			// 
			// panel_contrasenya_MODENT
			// 
			this->panel_contrasenya_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_contrasenya_MODENT->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_contrasenya_MODENT->Location = System::Drawing::Point(221, 356);
			this->panel_contrasenya_MODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_contrasenya_MODENT->Name = L"panel_contrasenya_MODENT";
			this->panel_contrasenya_MODENT->Size = System::Drawing::Size(200, 22);
			this->panel_contrasenya_MODENT->TabIndex = 8;
			// 
			// panel_telefon_MODENT
			// 
			this->panel_telefon_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_telefon_MODENT->Controls->Add(this->lbl_telefon_MODENT);
			this->panel_telefon_MODENT->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_telefon_MODENT->Location = System::Drawing::Point(221, 241);
			this->panel_telefon_MODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_telefon_MODENT->Name = L"panel_telefon_MODENT";
			this->panel_telefon_MODENT->Size = System::Drawing::Size(200, 22);
			this->panel_telefon_MODENT->TabIndex = 7;
			// 
			// lbl_telefon_MODENT
			// 
			this->lbl_telefon_MODENT->AutoSize = true;
			this->lbl_telefon_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_telefon_MODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_telefon_MODENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_telefon_MODENT->Location = System::Drawing::Point(67, 2);
			this->lbl_telefon_MODENT->Name = L"lbl_telefon_MODENT";
			this->lbl_telefon_MODENT->Size = System::Drawing::Size(51, 17);
			this->lbl_telefon_MODENT->TabIndex = 2;
			this->lbl_telefon_MODENT->Text = L"Telefon";
			// 
			// panel_correu_MODENT
			// 
			this->panel_correu_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_correu_MODENT->Controls->Add(this->lbl_correu_MODENT);
			this->panel_correu_MODENT->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_correu_MODENT->Location = System::Drawing::Point(221, 298);
			this->panel_correu_MODENT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_correu_MODENT->Name = L"panel_correu_MODENT";
			this->panel_correu_MODENT->Size = System::Drawing::Size(200, 22);
			this->panel_correu_MODENT->TabIndex = 8;
			// 
			// lbl_correu_MODENT
			// 
			this->lbl_correu_MODENT->AutoSize = true;
			this->lbl_correu_MODENT->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_correu_MODENT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_correu_MODENT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_correu_MODENT->Location = System::Drawing::Point(67, 2);
			this->lbl_correu_MODENT->Name = L"lbl_correu_MODENT";
			this->lbl_correu_MODENT->Size = System::Drawing::Size(49, 17);
			this->lbl_correu_MODENT->TabIndex = 3;
			this->lbl_correu_MODENT->Text = L"Correu";
			// 
			// PANELModificaAjuntament
			// 
			this->PANELModificaAjuntament->Controls->Add(this->btn_modificaMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_contrasenya_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_correu_electronic_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_telefon_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_poblacio_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->txt_nom_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->lbl_contrasenya_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->BlackPartMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_nom_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_poblacio_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_contrasenya_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_telefon_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Controls->Add(this->panel_correu_electronic_ajuntamentMODAJUN);
			this->PANELModificaAjuntament->Location = System::Drawing::Point(0, 0);
			this->PANELModificaAjuntament->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PANELModificaAjuntament->Name = L"PANELModificaAjuntament";
			this->PANELModificaAjuntament->Size = System::Drawing::Size(1029, 569);
			this->PANELModificaAjuntament->TabIndex = 0;
			// 
			// btn_modificaMODAJUN
			// 
			this->btn_modificaMODAJUN->BackColor = System::Drawing::SystemColors::Control;
			this->btn_modificaMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->btn_modificaMODAJUN->Location = System::Drawing::Point(859, 470);
			this->btn_modificaMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_modificaMODAJUN->Name = L"btn_modificaMODAJUN";
			this->btn_modificaMODAJUN->Size = System::Drawing::Size(75, 23);
			this->btn_modificaMODAJUN->TabIndex = 13;
			this->btn_modificaMODAJUN->Text = L"Modifica";
			this->btn_modificaMODAJUN->UseVisualStyleBackColor = false;
			this->btn_modificaMODAJUN->Click += gcnew System::EventHandler(this, &ProvesUI::btn_modificaMODAJUN_Click);
			// 
			// txt_contrasenya_ajuntamentMODAJUN
			// 
			this->txt_contrasenya_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 389);
			this->txt_contrasenya_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_contrasenya_ajuntamentMODAJUN->Name = L"txt_contrasenya_ajuntamentMODAJUN";
			this->txt_contrasenya_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_contrasenya_ajuntamentMODAJUN->TabIndex = 12;
			// 
			// txt_correu_electronic_ajuntamentMODAJUN
			// 
			this->txt_correu_electronic_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 331);
			this->txt_correu_electronic_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_correu_electronic_ajuntamentMODAJUN->Name = L"txt_correu_electronic_ajuntamentMODAJUN";
			this->txt_correu_electronic_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_correu_electronic_ajuntamentMODAJUN->TabIndex = 11;
			// 
			// txt_telefon_ajuntamentMODAJUN
			// 
			this->txt_telefon_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 274);
			this->txt_telefon_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_telefon_ajuntamentMODAJUN->Name = L"txt_telefon_ajuntamentMODAJUN";
			this->txt_telefon_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_telefon_ajuntamentMODAJUN->TabIndex = 10;
			// 
			// txt_poblacio_ajuntamentMODAJUN
			// 
			this->txt_poblacio_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 215);
			this->txt_poblacio_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_poblacio_ajuntamentMODAJUN->Name = L"txt_poblacio_ajuntamentMODAJUN";
			this->txt_poblacio_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_poblacio_ajuntamentMODAJUN->TabIndex = 9;
			// 
			// txt_nom_ajuntamentMODAJUN
			// 
			this->txt_nom_ajuntamentMODAJUN->Location = System::Drawing::Point(421, 156);
			this->txt_nom_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_nom_ajuntamentMODAJUN->Name = L"txt_nom_ajuntamentMODAJUN";
			this->txt_nom_ajuntamentMODAJUN->ReadOnly = true;
			this->txt_nom_ajuntamentMODAJUN->Size = System::Drawing::Size(308, 22);
			this->txt_nom_ajuntamentMODAJUN->TabIndex = 5;
			this->txt_nom_ajuntamentMODAJUN->TextChanged += gcnew System::EventHandler(this, &ProvesUI::txt_nom_ajuntamentMODAJUN_TextChanged);
			// 
			// lbl_contrasenya_ajuntamentMODAJUN
			// 
			this->lbl_contrasenya_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_contrasenya_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_contrasenya_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_contrasenya_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_contrasenya_ajuntamentMODAJUN->Location = System::Drawing::Point(271, 391);
			this->lbl_contrasenya_ajuntamentMODAJUN->Name = L"lbl_contrasenya_ajuntamentMODAJUN";
			this->lbl_contrasenya_ajuntamentMODAJUN->Size = System::Drawing::Size(84, 17);
			this->lbl_contrasenya_ajuntamentMODAJUN->TabIndex = 4;
			this->lbl_contrasenya_ajuntamentMODAJUN->Text = L"Contrasenya";
			// 
			// BlackPartMODAJUN
			// 
			this->BlackPartMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BlackPartMODAJUN->Location = System::Drawing::Point(3, 2);
			this->BlackPartMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BlackPartMODAJUN->Name = L"BlackPartMODAJUN";
			this->BlackPartMODAJUN->Size = System::Drawing::Size(1024, 38);
			this->BlackPartMODAJUN->TabIndex = 0;
			// 
			// panel_nom_ajuntamentMODAJUN
			// 
			this->panel_nom_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_nom_ajuntamentMODAJUN->Controls->Add(this->lbl_nom_ajuntamentMODAJUN);
			this->panel_nom_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 156);
			this->panel_nom_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_nom_ajuntamentMODAJUN->Name = L"panel_nom_ajuntamentMODAJUN";
			this->panel_nom_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_nom_ajuntamentMODAJUN->TabIndex = 6;
			// 
			// lbl_nom_ajuntamentMODAJUN
			// 
			this->lbl_nom_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_nom_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_nom_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_nom_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_nom_ajuntamentMODAJUN->Location = System::Drawing::Point(77, 2);
			this->lbl_nom_ajuntamentMODAJUN->Name = L"lbl_nom_ajuntamentMODAJUN";
			this->lbl_nom_ajuntamentMODAJUN->Size = System::Drawing::Size(38, 17);
			this->lbl_nom_ajuntamentMODAJUN->TabIndex = 0;
			this->lbl_nom_ajuntamentMODAJUN->Text = L"Nom";
			// 
			// panel_poblacio_ajuntamentMODAJUN
			// 
			this->panel_poblacio_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_poblacio_ajuntamentMODAJUN->Controls->Add(this->lbl_poblacio_ajuntamentMODAJUN);
			this->panel_poblacio_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_poblacio_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 215);
			this->panel_poblacio_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_poblacio_ajuntamentMODAJUN->Name = L"panel_poblacio_ajuntamentMODAJUN";
			this->panel_poblacio_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_poblacio_ajuntamentMODAJUN->TabIndex = 8;
			// 
			// lbl_poblacio_ajuntamentMODAJUN
			// 
			this->lbl_poblacio_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_poblacio_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_poblacio_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_poblacio_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_poblacio_ajuntamentMODAJUN->Location = System::Drawing::Point(67, 2);
			this->lbl_poblacio_ajuntamentMODAJUN->Name = L"lbl_poblacio_ajuntamentMODAJUN";
			this->lbl_poblacio_ajuntamentMODAJUN->Size = System::Drawing::Size(59, 17);
			this->lbl_poblacio_ajuntamentMODAJUN->TabIndex = 1;
			this->lbl_poblacio_ajuntamentMODAJUN->Text = L"Poblacio";
			// 
			// panel_contrasenya_ajuntamentMODAJUN
			// 
			this->panel_contrasenya_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_contrasenya_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_contrasenya_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 389);
			this->panel_contrasenya_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_contrasenya_ajuntamentMODAJUN->Name = L"panel_contrasenya_ajuntamentMODAJUN";
			this->panel_contrasenya_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_contrasenya_ajuntamentMODAJUN->TabIndex = 8;
			// 
			// panel_telefon_ajuntamentMODAJUN
			// 
			this->panel_telefon_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_telefon_ajuntamentMODAJUN->Controls->Add(this->lbl_telefon_ajuntamentMODAJUN);
			this->panel_telefon_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_telefon_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 274);
			this->panel_telefon_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_telefon_ajuntamentMODAJUN->Name = L"panel_telefon_ajuntamentMODAJUN";
			this->panel_telefon_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_telefon_ajuntamentMODAJUN->TabIndex = 7;
			// 
			// lbl_telefon_ajuntamentMODAJUN
			// 
			this->lbl_telefon_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_telefon_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_telefon_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_telefon_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_telefon_ajuntamentMODAJUN->Location = System::Drawing::Point(67, 2);
			this->lbl_telefon_ajuntamentMODAJUN->Name = L"lbl_telefon_ajuntamentMODAJUN";
			this->lbl_telefon_ajuntamentMODAJUN->Size = System::Drawing::Size(51, 17);
			this->lbl_telefon_ajuntamentMODAJUN->TabIndex = 2;
			this->lbl_telefon_ajuntamentMODAJUN->Text = L"Telefon";
			// 
			// panel_correu_electronic_ajuntamentMODAJUN
			// 
			this->panel_correu_electronic_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel_correu_electronic_ajuntamentMODAJUN->Controls->Add(this->lbl_correu_electronic_ajuntamentMODAJUN);
			this->panel_correu_electronic_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel_correu_electronic_ajuntamentMODAJUN->Location = System::Drawing::Point(221, 331);
			this->panel_correu_electronic_ajuntamentMODAJUN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_correu_electronic_ajuntamentMODAJUN->Name = L"panel_correu_electronic_ajuntamentMODAJUN";
			this->panel_correu_electronic_ajuntamentMODAJUN->Size = System::Drawing::Size(200, 22);
			this->panel_correu_electronic_ajuntamentMODAJUN->TabIndex = 8;
			// 
			// lbl_correu_electronic_ajuntamentMODAJUN
			// 
			this->lbl_correu_electronic_ajuntamentMODAJUN->AutoSize = true;
			this->lbl_correu_electronic_ajuntamentMODAJUN->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_correu_electronic_ajuntamentMODAJUN->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lbl_correu_electronic_ajuntamentMODAJUN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_correu_electronic_ajuntamentMODAJUN->Location = System::Drawing::Point(67, 2);
			this->lbl_correu_electronic_ajuntamentMODAJUN->Name = L"lbl_correu_electronic_ajuntamentMODAJUN";
			this->lbl_correu_electronic_ajuntamentMODAJUN->Size = System::Drawing::Size(49, 17);
			this->lbl_correu_electronic_ajuntamentMODAJUN->TabIndex = 3;
			this->lbl_correu_electronic_ajuntamentMODAJUN->Text = L"Correu";
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
			this->pnlCOMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pnlTitleCOMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnCancelarCOMP->ForeColor = System::Drawing::Color::Black;
			this->btnCancelarCOMP->Location = System::Drawing::Point(237, 613);
			this->btnCancelarCOMP->Margin = System::Windows::Forms::Padding(4);
			this->btnCancelarCOMP->Name = L"btnCancelarCOMP";
			this->btnCancelarCOMP->Size = System::Drawing::Size(119, 46);
			this->btnCancelarCOMP->TabIndex = 10;
			this->btnCancelarCOMP->Text = L"Cancelar";
			this->btnCancelarCOMP->UseVisualStyleBackColor = true;
			this->btnCancelarCOMP->Click += gcnew System::EventHandler(this, &ProvesUI::btnCancelarCOMP_Click);
			// 
			// btnComprarCOMP
			// 
			this->btnComprarCOMP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnComprarCOMP->ForeColor = System::Drawing::Color::White;
			this->btnComprarCOMP->Location = System::Drawing::Point(371, 613);
			this->btnComprarCOMP->Margin = System::Windows::Forms::Padding(4);
			this->btnComprarCOMP->Name = L"btnComprarCOMP";
			this->btnComprarCOMP->Size = System::Drawing::Size(219, 46);
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
			this->textBoxCVVCOMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxCVVCOMP->Name = L"textBoxCVVCOMP";
			this->textBoxCVVCOMP->Size = System::Drawing::Size(105, 22);
			this->textBoxCVVCOMP->TabIndex = 12;
			// 
			// textBoxYearCOMP
			// 
			this->textBoxYearCOMP->Location = System::Drawing::Point(480, 474);
			this->textBoxYearCOMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxYearCOMP->Name = L"textBoxYearCOMP";
			this->textBoxYearCOMP->Size = System::Drawing::Size(105, 22);
			this->textBoxYearCOMP->TabIndex = 11;
			this->textBoxYearCOMP->Text = L"YYYY";
			// 
			// lblDataCadCOMPen
			// 
			this->lblDataCadCOMPen->AutoSize = true;
			this->lblDataCadCOMPen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDataCadCOMPen->Location = System::Drawing::Point(355, 452);
			this->lblDataCadCOMPen->Name = L"lblDataCadCOMPen";
			this->lblDataCadCOMPen->Size = System::Drawing::Size(106, 17);
			this->lblDataCadCOMPen->TabIndex = 10;
			this->lblDataCadCOMPen->Text = L"Fecha Caducidad";
			// 
			// textBoxMonthCOMP
			// 
			this->textBoxMonthCOMP->Location = System::Drawing::Point(357, 474);
			this->textBoxMonthCOMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxMonthCOMP->Name = L"textBoxMonthCOMP";
			this->textBoxMonthCOMP->Size = System::Drawing::Size(105, 22);
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
			this->textBoxTitularCOMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTitularCOMP->Name = L"textBoxTitularCOMP";
			this->textBoxTitularCOMP->Size = System::Drawing::Size(313, 22);
			this->textBoxTitularCOMP->TabIndex = 7;
			// 
			// textBoxNumTarjCOMP
			// 
			this->textBoxNumTarjCOMP->Location = System::Drawing::Point(17, 404);
			this->textBoxNumTarjCOMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pnlTarjUICOMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->lblCVVUICOMP->Location = System::Drawing::Point(389, 226);
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
			this->lblCVVUICOMPen->Location = System::Drawing::Point(389, 199);
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
			this->lblDataCadUICOMP->Location = System::Drawing::Point(229, 226);
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
			this->lblDataCadUICOMPen->Location = System::Drawing::Point(231, 199);
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
			this->lblTitularUICOMP->Location = System::Drawing::Point(39, 226);
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
			this->lblTitularUICOMPen->Location = System::Drawing::Point(36, 199);
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
			this->pictureBoxChipUICOMP->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxChipUICOMP->Name = L"pictureBoxChipUICOMP";
			this->pictureBoxChipUICOMP->Size = System::Drawing::Size(73, 50);
			this->pictureBoxChipUICOMP->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxChipUICOMP->TabIndex = 0;
			this->pictureBoxChipUICOMP->TabStop = false;
			// 
			// btnGoBackCONS
			// 
			this->btnGoBackCONS->Location = System::Drawing::Point(291, 613);
			this->btnGoBackCONS->Margin = System::Windows::Forms::Padding(4);
			this->btnGoBackCONS->Name = L"btnGoBackCONS";
			this->btnGoBackCONS->Size = System::Drawing::Size(119, 46);
			this->btnGoBackCONS->TabIndex = 0;
			this->btnGoBackCONS->Text = L"Atr�s";
			this->btnGoBackCONS->UseVisualStyleBackColor = true;
			this->btnGoBackCONS->Click += gcnew System::EventHandler(this, &ProvesUI::btnGoBackCONS_Click);
			// 
			// btnComprarCONS
			// 
			this->btnComprarCONS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnComprarCONS->ForeColor = System::Drawing::Color::White;
			this->btnComprarCONS->Location = System::Drawing::Point(627, 613);
			this->btnComprarCONS->Margin = System::Windows::Forms::Padding(4);
			this->btnComprarCONS->Name = L"btnComprarCONS";
			this->btnComprarCONS->Size = System::Drawing::Size(219, 46);
			this->btnComprarCONS->TabIndex = 1;
			this->btnComprarCONS->Text = L"Comprar";
			this->btnComprarCONS->UseVisualStyleBackColor = false;
			this->btnComprarCONS->Click += gcnew System::EventHandler(this, &ProvesUI::btnComprarCONS_Click);
			// 
			// PANELConsultarCompra
			// 
			this->PANELConsultarCompra->BackColor = System::Drawing::Color::WhiteSmoke;
			this->PANELConsultarCompra->Controls->Add(this->PANELmodificaEsdev);
			this->PANELConsultarCompra->Controls->Add(this->btnLessQuantCONS);
			this->PANELConsultarCompra->Controls->Add(this->btnMoreQuantCONS);
			this->PANELConsultarCompra->Controls->Add(this->pnlQuantitatCONS);
			this->PANELConsultarCompra->Controls->Add(this->pnlCOMP);
			this->PANELConsultarCompra->Controls->Add(this->picBoxEsdevCONS);
			this->PANELConsultarCompra->Controls->Add(this->panelCONS);
			this->PANELConsultarCompra->Controls->Add(this->pnlDescCONS);
			this->PANELConsultarCompra->Controls->Add(this->pnlPreusCONS);
			this->PANELConsultarCompra->Controls->Add(this->pnlNomEsdevTitleCONS);
			this->PANELConsultarCompra->Controls->Add(this->btnComprarCONS);
			this->PANELConsultarCompra->Controls->Add(this->btnComprarPuntsCONS);
			this->PANELConsultarCompra->Controls->Add(this->btnGoBackCONS);
			this->PANELConsultarCompra->Location = System::Drawing::Point(32, 49);
			this->PANELConsultarCompra->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PANELConsultarCompra->Name = L"PANELConsultarCompra";
			this->PANELConsultarCompra->Size = System::Drawing::Size(1500, 670);
			this->PANELConsultarCompra->TabIndex = 5;
			this->PANELConsultarCompra->Visible = false;
			// 
			// PANELmodificaEsdev
			// 
			this->PANELmodificaEsdev->Controls->Add(this->pnlPuntsRegalMODESDEVen);
			this->PANELmodificaEsdev->Controls->Add(this->textBoxPuntsRegalMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->lblErrorPuntsRegalMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->lblFormatDataAjudaMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->lblErrorDataMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->lblErrorPuntsCostMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->lblErrorAforamentMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->lblErrorTipusMODESDEV);
			this->PANELmodificaEsdev->Controls->Add(this->lblErrorPreuMODESDEV);
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
			this->PANELmodificaEsdev->Controls->Add(this->pnlTopTitlesMODESDEV);
			this->PANELmodificaEsdev->Location = System::Drawing::Point(889, 3);
			this->PANELmodificaEsdev->Margin = System::Windows::Forms::Padding(4);
			this->PANELmodificaEsdev->Name = L"PANELmodificaEsdev";
			this->PANELmodificaEsdev->Size = System::Drawing::Size(800, 698);
			this->PANELmodificaEsdev->TabIndex = 0;
			this->PANELmodificaEsdev->Visible = false;
			// 
			// pnlPuntsRegalMODESDEVen
			// 
			this->pnlPuntsRegalMODESDEVen->BackColor = System::Drawing::Color::Black;
			this->pnlPuntsRegalMODESDEVen->Controls->Add(this->lblPuntsRegalMODESDEVen);
			this->pnlPuntsRegalMODESDEVen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlPuntsRegalMODESDEVen->Location = System::Drawing::Point(55, 490);
			this->pnlPuntsRegalMODESDEVen->Margin = System::Windows::Forms::Padding(4);
			this->pnlPuntsRegalMODESDEVen->Name = L"pnlPuntsRegalMODESDEVen";
			this->pnlPuntsRegalMODESDEVen->Size = System::Drawing::Size(295, 27);
			this->pnlPuntsRegalMODESDEVen->TabIndex = 26;
			// 
			// lblPuntsRegalMODESDEVen
			// 
			this->lblPuntsRegalMODESDEVen->AutoSize = true;
			this->lblPuntsRegalMODESDEVen->BackColor = System::Drawing::Color::Transparent;
			this->lblPuntsRegalMODESDEVen->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblPuntsRegalMODESDEVen->ForeColor = System::Drawing::Color::White;
			this->lblPuntsRegalMODESDEVen->Location = System::Drawing::Point(102, 5);
			this->lblPuntsRegalMODESDEVen->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPuntsRegalMODESDEVen->Name = L"lblPuntsRegalMODESDEVen";
			this->lblPuntsRegalMODESDEVen->Size = System::Drawing::Size(80, 17);
			this->lblPuntsRegalMODESDEVen->TabIndex = 12;
			this->lblPuntsRegalMODESDEVen->Text = L"Punts Regal";
			// 
			// textBoxPuntsRegalMODESDEV
			// 
			this->textBoxPuntsRegalMODESDEV->Location = System::Drawing::Point(345, 490);
			this->textBoxPuntsRegalMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPuntsRegalMODESDEV->Name = L"textBoxPuntsRegalMODESDEV";
			this->textBoxPuntsRegalMODESDEV->Size = System::Drawing::Size(239, 22);
			this->textBoxPuntsRegalMODESDEV->TabIndex = 25;
			// 
			// lblErrorPuntsRegalMODESDEV
			// 
			this->lblErrorPuntsRegalMODESDEV->AutoSize = true;
			this->lblErrorPuntsRegalMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblErrorPuntsRegalMODESDEV->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblErrorPuntsRegalMODESDEV->Location = System::Drawing::Point(354, 516);
			this->lblErrorPuntsRegalMODESDEV->Name = L"lblErrorPuntsRegalMODESDEV";
			this->lblErrorPuntsRegalMODESDEV->Size = System::Drawing::Size(82, 17);
			this->lblErrorPuntsRegalMODESDEV->TabIndex = 27;
			this->lblErrorPuntsRegalMODESDEV->Text = L"lblErrorNom";
			this->lblErrorPuntsRegalMODESDEV->Visible = false;
			// 
			// lblFormatDataAjudaMODESDEV
			// 
			this->lblFormatDataAjudaMODESDEV->AutoSize = true;
			this->lblFormatDataAjudaMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblFormatDataAjudaMODESDEV->Location = System::Drawing::Point(135, 586);
			this->lblFormatDataAjudaMODESDEV->Name = L"lblFormatDataAjudaMODESDEV";
			this->lblFormatDataAjudaMODESDEV->Size = System::Drawing::Size(138, 17);
			this->lblFormatDataAjudaMODESDEV->TabIndex = 24;
			this->lblFormatDataAjudaMODESDEV->Text = L"Format YYYY-MM-DD";
			// 
			// lblErrorDataMODESDEV
			// 
			this->lblErrorDataMODESDEV->AutoSize = true;
			this->lblErrorDataMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblErrorDataMODESDEV->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblErrorDataMODESDEV->Location = System::Drawing::Point(354, 583);
			this->lblErrorDataMODESDEV->Name = L"lblErrorDataMODESDEV";
			this->lblErrorDataMODESDEV->Size = System::Drawing::Size(82, 17);
			this->lblErrorDataMODESDEV->TabIndex = 23;
			this->lblErrorDataMODESDEV->Text = L"lblErrorNom";
			this->lblErrorDataMODESDEV->Visible = false;
			// 
			// lblErrorPuntsCostMODESDEV
			// 
			this->lblErrorPuntsCostMODESDEV->AutoSize = true;
			this->lblErrorPuntsCostMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblErrorPuntsCostMODESDEV->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblErrorPuntsCostMODESDEV->Location = System::Drawing::Point(354, 457);
			this->lblErrorPuntsCostMODESDEV->Name = L"lblErrorPuntsCostMODESDEV";
			this->lblErrorPuntsCostMODESDEV->Size = System::Drawing::Size(82, 17);
			this->lblErrorPuntsCostMODESDEV->TabIndex = 22;
			this->lblErrorPuntsCostMODESDEV->Text = L"lblErrorNom";
			this->lblErrorPuntsCostMODESDEV->Visible = false;
			// 
			// lblErrorAforamentMODESDEV
			// 
			this->lblErrorAforamentMODESDEV->AutoSize = true;
			this->lblErrorAforamentMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblErrorAforamentMODESDEV->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblErrorAforamentMODESDEV->Location = System::Drawing::Point(354, 379);
			this->lblErrorAforamentMODESDEV->Name = L"lblErrorAforamentMODESDEV";
			this->lblErrorAforamentMODESDEV->Size = System::Drawing::Size(82, 17);
			this->lblErrorAforamentMODESDEV->TabIndex = 21;
			this->lblErrorAforamentMODESDEV->Text = L"lblErrorNom";
			this->lblErrorAforamentMODESDEV->Visible = false;
			// 
			// lblErrorTipusMODESDEV
			// 
			this->lblErrorTipusMODESDEV->AutoSize = true;
			this->lblErrorTipusMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblErrorTipusMODESDEV->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblErrorTipusMODESDEV->Location = System::Drawing::Point(353, 159);
			this->lblErrorTipusMODESDEV->Name = L"lblErrorTipusMODESDEV";
			this->lblErrorTipusMODESDEV->Size = System::Drawing::Size(82, 17);
			this->lblErrorTipusMODESDEV->TabIndex = 20;
			this->lblErrorTipusMODESDEV->Text = L"lblErrorNom";
			this->lblErrorTipusMODESDEV->Visible = false;
			// 
			// lblErrorPreuMODESDEV
			// 
			this->lblErrorPreuMODESDEV->AutoSize = true;
			this->lblErrorPreuMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblErrorPreuMODESDEV->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblErrorPreuMODESDEV->Location = System::Drawing::Point(354, 91);
			this->lblErrorPreuMODESDEV->Name = L"lblErrorPreuMODESDEV";
			this->lblErrorPreuMODESDEV->Size = System::Drawing::Size(82, 17);
			this->lblErrorPreuMODESDEV->TabIndex = 19;
			this->lblErrorPreuMODESDEV->Text = L"lblErrorNom";
			this->lblErrorPreuMODESDEV->Visible = false;
			// 
			// btnAtrasMODESDEV
			// 
			this->btnAtrasMODESDEV->Location = System::Drawing::Point(370, 624);
			this->btnAtrasMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->btnAtrasMODESDEV->Name = L"btnAtrasMODESDEV";
			this->btnAtrasMODESDEV->Size = System::Drawing::Size(100, 28);
			this->btnAtrasMODESDEV->TabIndex = 17;
			this->btnAtrasMODESDEV->Text = L"Atr�s";
			this->btnAtrasMODESDEV->UseVisualStyleBackColor = true;
			// 
			// btnModificaMODESDEV
			// 
			this->btnModificaMODESDEV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnModificaMODESDEV->ForeColor = System::Drawing::Color::White;
			this->btnModificaMODESDEV->Location = System::Drawing::Point(478, 624);
			this->btnModificaMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->btnModificaMODESDEV->Name = L"btnModificaMODESDEV";
			this->btnModificaMODESDEV->Size = System::Drawing::Size(100, 28);
			this->btnModificaMODESDEV->TabIndex = 16;
			this->btnModificaMODESDEV->Text = L"Modifica";
			this->btnModificaMODESDEV->UseVisualStyleBackColor = false;
			this->btnModificaMODESDEV->Click += gcnew System::EventHandler(this, &ProvesUI::btnModificaMODESDEV_Clicked);
			// 
			// pnlDataMODESDEV
			// 
			this->pnlDataMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlDataMODESDEV->Controls->Add(this->lblDataMODESDEV);
			this->pnlDataMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlDataMODESDEV->Location = System::Drawing::Point(55, 554);
			this->pnlDataMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->pnlDataMODESDEV->Name = L"pnlDataMODESDEV";
			this->pnlDataMODESDEV->Size = System::Drawing::Size(295, 27);
			this->pnlDataMODESDEV->TabIndex = 15;
			// 
			// lblDataMODESDEV
			// 
			this->lblDataMODESDEV->AutoSize = true;
			this->lblDataMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblDataMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblDataMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblDataMODESDEV->Location = System::Drawing::Point(123, 2);
			this->lblDataMODESDEV->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDataMODESDEV->Name = L"lblDataMODESDEV";
			this->lblDataMODESDEV->Size = System::Drawing::Size(36, 17);
			this->lblDataMODESDEV->TabIndex = 12;
			this->lblDataMODESDEV->Text = L"Data";
			// 
			// textBoxDataMODESDEV
			// 
			this->textBoxDataMODESDEV->Location = System::Drawing::Point(345, 554);
			this->textBoxDataMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDataMODESDEV->Name = L"textBoxDataMODESDEV";
			this->textBoxDataMODESDEV->Size = System::Drawing::Size(240, 22);
			this->textBoxDataMODESDEV->TabIndex = 14;
			// 
			// pnlPuntsCostMODESDEV
			// 
			this->pnlPuntsCostMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlPuntsCostMODESDEV->Controls->Add(this->lblPuntsCostMODESDEV);
			this->pnlPuntsCostMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlPuntsCostMODESDEV->Location = System::Drawing::Point(55, 426);
			this->pnlPuntsCostMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->pnlPuntsCostMODESDEV->Name = L"pnlPuntsCostMODESDEV";
			this->pnlPuntsCostMODESDEV->Size = System::Drawing::Size(295, 27);
			this->pnlPuntsCostMODESDEV->TabIndex = 13;
			// 
			// lblPuntsCostMODESDEV
			// 
			this->lblPuntsCostMODESDEV->AutoSize = true;
			this->lblPuntsCostMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblPuntsCostMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblPuntsCostMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblPuntsCostMODESDEV->Location = System::Drawing::Point(97, 2);
			this->lblPuntsCostMODESDEV->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPuntsCostMODESDEV->Name = L"lblPuntsCostMODESDEV";
			this->lblPuntsCostMODESDEV->Size = System::Drawing::Size(74, 17);
			this->lblPuntsCostMODESDEV->TabIndex = 12;
			this->lblPuntsCostMODESDEV->Text = L"Punts Cost";
			// 
			// textBoxPuntsCostMODESDEV
			// 
			this->textBoxPuntsCostMODESDEV->Location = System::Drawing::Point(345, 426);
			this->textBoxPuntsCostMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPuntsCostMODESDEV->Name = L"textBoxPuntsCostMODESDEV";
			this->textBoxPuntsCostMODESDEV->Size = System::Drawing::Size(239, 22);
			this->textBoxPuntsCostMODESDEV->TabIndex = 12;
			// 
			// pnlAforamentMODESDEV
			// 
			this->pnlAforamentMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlAforamentMODESDEV->Controls->Add(this->lblAforamentMODESDEV);
			this->pnlAforamentMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlAforamentMODESDEV->Location = System::Drawing::Point(55, 348);
			this->pnlAforamentMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->pnlAforamentMODESDEV->Name = L"pnlAforamentMODESDEV";
			this->pnlAforamentMODESDEV->Size = System::Drawing::Size(295, 27);
			this->pnlAforamentMODESDEV->TabIndex = 11;
			// 
			// lblAforamentMODESDEV
			// 
			this->lblAforamentMODESDEV->AutoSize = true;
			this->lblAforamentMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblAforamentMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblAforamentMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblAforamentMODESDEV->Location = System::Drawing::Point(97, 2);
			this->lblAforamentMODESDEV->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAforamentMODESDEV->Name = L"lblAforamentMODESDEV";
			this->lblAforamentMODESDEV->Size = System::Drawing::Size(73, 17);
			this->lblAforamentMODESDEV->TabIndex = 12;
			this->lblAforamentMODESDEV->Text = L"Aforament";
			// 
			// textBoxAforamentMODESDEV
			// 
			this->textBoxAforamentMODESDEV->Location = System::Drawing::Point(345, 348);
			this->textBoxAforamentMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAforamentMODESDEV->Name = L"textBoxAforamentMODESDEV";
			this->textBoxAforamentMODESDEV->Size = System::Drawing::Size(239, 22);
			this->textBoxAforamentMODESDEV->TabIndex = 10;
			// 
			// pnlTipusMODESDEV
			// 
			this->pnlTipusMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlTipusMODESDEV->Controls->Add(this->lblTipusMODESDEV);
			this->pnlTipusMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlTipusMODESDEV->Location = System::Drawing::Point(55, 133);
			this->pnlTipusMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->pnlTipusMODESDEV->Name = L"pnlTipusMODESDEV";
			this->pnlTipusMODESDEV->Size = System::Drawing::Size(295, 27);
			this->pnlTipusMODESDEV->TabIndex = 8;
			// 
			// lblTipusMODESDEV
			// 
			this->lblTipusMODESDEV->AutoSize = true;
			this->lblTipusMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblTipusMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblTipusMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblTipusMODESDEV->Location = System::Drawing::Point(117, 2);
			this->lblTipusMODESDEV->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTipusMODESDEV->Name = L"lblTipusMODESDEV";
			this->lblTipusMODESDEV->Size = System::Drawing::Size(40, 17);
			this->lblTipusMODESDEV->TabIndex = 12;
			this->lblTipusMODESDEV->Text = L"Tipus";
			// 
			// textBoxTipusMODESDEV
			// 
			this->textBoxTipusMODESDEV->Location = System::Drawing::Point(345, 133);
			this->textBoxTipusMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->textBoxTipusMODESDEV->Name = L"textBoxTipusMODESDEV";
			this->textBoxTipusMODESDEV->Size = System::Drawing::Size(240, 22);
			this->textBoxTipusMODESDEV->TabIndex = 7;
			// 
			// pnlDescMODESDEV
			// 
			this->pnlDescMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlDescMODESDEV->Controls->Add(this->lblDescMODESDEV);
			this->pnlDescMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlDescMODESDEV->Location = System::Drawing::Point(54, 196);
			this->pnlDescMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->pnlDescMODESDEV->Name = L"pnlDescMODESDEV";
			this->pnlDescMODESDEV->Size = System::Drawing::Size(295, 27);
			this->pnlDescMODESDEV->TabIndex = 6;
			// 
			// lblDescMODESDEV
			// 
			this->lblDescMODESDEV->AutoSize = true;
			this->lblDescMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblDescMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblDescMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblDescMODESDEV->Location = System::Drawing::Point(97, 2);
			this->lblDescMODESDEV->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDescMODESDEV->Name = L"lblDescMODESDEV";
			this->lblDescMODESDEV->Size = System::Drawing::Size(69, 17);
			this->lblDescMODESDEV->TabIndex = 11;
			this->lblDescMODESDEV->Text = L"Descripci�";
			// 
			// textBoxDescMODESDEV
			// 
			this->textBoxDescMODESDEV->Location = System::Drawing::Point(54, 224);
			this->textBoxDescMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDescMODESDEV->Multiline = true;
			this->textBoxDescMODESDEV->Name = L"textBoxDescMODESDEV";
			this->textBoxDescMODESDEV->Size = System::Drawing::Size(533, 98);
			this->textBoxDescMODESDEV->TabIndex = 5;
			// 
			// pnlPreuMODESDEV
			// 
			this->pnlPreuMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlPreuMODESDEV->Controls->Add(this->lblPreuMODESDEV);
			this->pnlPreuMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlPreuMODESDEV->Location = System::Drawing::Point(55, 65);
			this->pnlPreuMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->pnlPreuMODESDEV->Name = L"pnlPreuMODESDEV";
			this->pnlPreuMODESDEV->Size = System::Drawing::Size(295, 27);
			this->pnlPreuMODESDEV->TabIndex = 4;
			// 
			// lblPreuMODESDEV
			// 
			this->lblPreuMODESDEV->AutoSize = true;
			this->lblPreuMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblPreuMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lblPreuMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblPreuMODESDEV->Location = System::Drawing::Point(117, 2);
			this->lblPreuMODESDEV->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPreuMODESDEV->Name = L"lblPreuMODESDEV";
			this->lblPreuMODESDEV->Size = System::Drawing::Size(36, 17);
			this->lblPreuMODESDEV->TabIndex = 10;
			this->lblPreuMODESDEV->Text = L"Preu";
			// 
			// textBoxPreuMODESDEV
			// 
			this->textBoxPreuMODESDEV->Location = System::Drawing::Point(345, 65);
			this->textBoxPreuMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPreuMODESDEV->Name = L"textBoxPreuMODESDEV";
			this->textBoxPreuMODESDEV->Size = System::Drawing::Size(243, 22);
			this->textBoxPreuMODESDEV->TabIndex = 3;
			// 
			// pnlTopTitlesMODESDEV
			// 
			this->pnlTopTitlesMODESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlTopTitlesMODESDEV->Controls->Add(this->lblTitleIDEsdevMODESDEV);
			this->pnlTopTitlesMODESDEV->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTopTitlesMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlTopTitlesMODESDEV->Location = System::Drawing::Point(0, 0);
			this->pnlTopTitlesMODESDEV->Margin = System::Windows::Forms::Padding(4);
			this->pnlTopTitlesMODESDEV->Name = L"pnlTopTitlesMODESDEV";
			this->pnlTopTitlesMODESDEV->Size = System::Drawing::Size(800, 39);
			this->pnlTopTitlesMODESDEV->TabIndex = 0;
			// 
			// lblTitleIDEsdevMODESDEV
			// 
			this->lblTitleIDEsdevMODESDEV->AutoSize = true;
			this->lblTitleIDEsdevMODESDEV->BackColor = System::Drawing::Color::Transparent;
			this->lblTitleIDEsdevMODESDEV->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->lblTitleIDEsdevMODESDEV->ForeColor = System::Drawing::Color::White;
			this->lblTitleIDEsdevMODESDEV->Location = System::Drawing::Point(24, 6);
			this->lblTitleIDEsdevMODESDEV->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTitleIDEsdevMODESDEV->Name = L"lblTitleIDEsdevMODESDEV";
			this->lblTitleIDEsdevMODESDEV->Size = System::Drawing::Size(234, 25);
			this->lblTitleIDEsdevMODESDEV->TabIndex = 10;
			this->lblTitleIDEsdevMODESDEV->Text = L"MODIFICA ESDEVENIMENT";
			// 
			// btnLessQuantCONS
			// 
			this->btnLessQuantCONS->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnLessQuantCONS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnLessQuantCONS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnLessQuantCONS->ForeColor = System::Drawing::Color::White;
			this->btnLessQuantCONS->Location = System::Drawing::Point(459, 377);
			this->btnLessQuantCONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLessQuantCONS->Name = L"btnLessQuantCONS";
			this->btnLessQuantCONS->Size = System::Drawing::Size(43, 41);
			this->btnLessQuantCONS->TabIndex = 12;
			this->btnLessQuantCONS->Text = L"-";
			this->btnLessQuantCONS->UseVisualStyleBackColor = false;
			this->btnLessQuantCONS->Click += gcnew System::EventHandler(this, &ProvesUI::btnLessQuantCONS_Click);
			// 
			// btnMoreQuantCONS
			// 
			this->btnMoreQuantCONS->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnMoreQuantCONS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnMoreQuantCONS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnMoreQuantCONS->ForeColor = System::Drawing::Color::White;
			this->btnMoreQuantCONS->Location = System::Drawing::Point(509, 377);
			this->btnMoreQuantCONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnMoreQuantCONS->Name = L"btnMoreQuantCONS";
			this->btnMoreQuantCONS->Size = System::Drawing::Size(43, 41);
			this->btnMoreQuantCONS->TabIndex = 11;
			this->btnMoreQuantCONS->Text = L"+";
			this->btnMoreQuantCONS->UseVisualStyleBackColor = false;
			this->btnMoreQuantCONS->Click += gcnew System::EventHandler(this, &ProvesUI::btnMoreQuantCONS_Click);
			// 
			// picBoxEsdevCONS
			// 
			this->picBoxEsdevCONS->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->picBoxEsdevCONS->Location = System::Drawing::Point(21, 64);
			this->picBoxEsdevCONS->Margin = System::Windows::Forms::Padding(4);
			this->picBoxEsdevCONS->Name = L"picBoxEsdevCONS";
			this->picBoxEsdevCONS->Size = System::Drawing::Size(280, 305);
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
			this->panelCONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pnl5CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pnl51CONS->Location = System::Drawing::Point(231, 0);
			this->pnl51CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl51CONS->Name = L"pnl51CONS";
			this->pnl51CONS->Size = System::Drawing::Size(317, 42);
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
			this->pnl6CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->lblDataCONSen->Location = System::Drawing::Point(85, 10);
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
			this->pnl61CONS->Location = System::Drawing::Point(231, 0);
			this->pnl61CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl61CONS->Name = L"pnl61CONS";
			this->pnl61CONS->Size = System::Drawing::Size(317, 42);
			this->pnl61CONS->TabIndex = 0;
			// 
			// lblDataCONS
			// 
			this->lblDataCONS->AutoSize = true;
			this->lblDataCONS->BackColor = System::Drawing::Color::White;
			this->lblDataCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDataCONS->ForeColor = System::Drawing::Color::Black;
			this->lblDataCONS->Location = System::Drawing::Point(19, 7);
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
			this->pnl4CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pnl41CONS->Location = System::Drawing::Point(231, 0);
			this->pnl41CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl41CONS->Name = L"pnl41CONS";
			this->pnl41CONS->Size = System::Drawing::Size(317, 42);
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
			this->pnl3CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pnl31CONS->Location = System::Drawing::Point(231, 0);
			this->pnl31CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl31CONS->Name = L"pnl31CONS";
			this->pnl31CONS->Size = System::Drawing::Size(317, 42);
			this->pnl31CONS->TabIndex = 0;
			// 
			// lblAforamCONS
			// 
			this->lblAforamCONS->AutoSize = true;
			this->lblAforamCONS->BackColor = System::Drawing::Color::White;
			this->lblAforamCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAforamCONS->ForeColor = System::Drawing::Color::Black;
			this->lblAforamCONS->Location = System::Drawing::Point(19, 7);
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
			this->pnl2CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->lblTipusCONSen->Location = System::Drawing::Point(83, 10);
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
			this->pnl21CONS->Location = System::Drawing::Point(231, 0);
			this->pnl21CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl21CONS->Name = L"pnl21CONS";
			this->pnl21CONS->Size = System::Drawing::Size(317, 42);
			this->pnl21CONS->TabIndex = 0;
			// 
			// lblTipusCONS
			// 
			this->lblTipusCONS->AutoSize = true;
			this->lblTipusCONS->BackColor = System::Drawing::Color::White;
			this->lblTipusCONS->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTipusCONS->ForeColor = System::Drawing::Color::Black;
			this->lblTipusCONS->Location = System::Drawing::Point(19, 7);
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
			this->pnl1CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pnl11CONS->Location = System::Drawing::Point(231, 0);
			this->pnl11CONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl11CONS->Name = L"pnl11CONS";
			this->pnl11CONS->Size = System::Drawing::Size(317, 42);
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
			// pnlDescCONS
			// 
			this->pnlDescCONS->BackColor = System::Drawing::Color::White;
			this->pnlDescCONS->Controls->Add(this->lblDescEsdevCONS);
			this->pnlDescCONS->Controls->Add(this->pnlDescTitleCONS);
			this->pnlDescCONS->Location = System::Drawing::Point(21, 432);
			this->pnlDescCONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlDescCONS->Name = L"pnlDescCONS";
			this->pnlDescCONS->Size = System::Drawing::Size(824, 169);
			this->pnlDescCONS->TabIndex = 6;
			// 
			// lblDescEsdevCONS
			// 
			this->lblDescEsdevCONS->Location = System::Drawing::Point(19, 57);
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
			this->pnlDescTitleCONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->lblDescCONSen->Text = L"Descripci�";
			// 
			// pnlPreusCONS
			// 
			this->pnlPreusCONS->BackColor = System::Drawing::Color::White;
			this->pnlPreusCONS->Controls->Add(this->lblPreuEsdevCONSgran);
			this->pnlPreusCONS->Location = System::Drawing::Point(21, 377);
			this->pnlPreusCONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlPreusCONS->Name = L"pnlPreusCONS";
			this->pnlPreusCONS->Size = System::Drawing::Size(261, 49);
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
			this->lblPreuEsdevCONSgran->Text = L"0,00 � |";
			// 
			// pnlNomEsdevTitleCONS
			// 
			this->pnlNomEsdevTitleCONS->BackColor = System::Drawing::Color::Black;
			this->pnlNomEsdevTitleCONS->Controls->Add(this->lblNomEsdevCONS);
			this->pnlNomEsdevTitleCONS->Location = System::Drawing::Point(0, 0);
			this->pnlNomEsdevTitleCONS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnComprarPuntsCONS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnComprarPuntsCONS->ForeColor = System::Drawing::Color::White;
			this->btnComprarPuntsCONS->Location = System::Drawing::Point(409, 613);
			this->btnComprarPuntsCONS->Margin = System::Windows::Forms::Padding(4);
			this->btnComprarPuntsCONS->Name = L"btnComprarPuntsCONS";
			this->btnComprarPuntsCONS->Size = System::Drawing::Size(219, 46);
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
			this->PANELbandEntrSolAj->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PANELbandEntrSolAj->Name = L"PANELbandEntrSolAj";
			this->PANELbandEntrSolAj->Size = System::Drawing::Size(1665, 513);
			this->PANELbandEntrSolAj->TabIndex = 0;
			this->PANELbandEntrSolAj->Visible = false;
			// 
			// panelBandejaEntrada
			// 
			this->panelBandejaEntrada->Controls->Add(this->flowLayoutPnlBndEntrAj);
			this->panelBandejaEntrada->Controls->Add(this->pnlTitles);
			this->panelBandejaEntrada->Location = System::Drawing::Point(109, 42);
			this->panelBandejaEntrada->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelBandejaEntrada->Name = L"panelBandejaEntrada";
			this->panelBandejaEntrada->Size = System::Drawing::Size(1549, 900);
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
			this->flowLayoutPnlBndEntrAj->Size = System::Drawing::Size(1549, 868);
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
			this->pnlTitles->Size = System::Drawing::Size(1549, 32);
			this->pnlTitles->TabIndex = 19;
			// 
			// lblTitleESTAT
			// 
			this->lblTitleESTAT->AutoSize = true;
			this->lblTitleESTAT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitleESTAT->ForeColor = System::Drawing::Color::White;
			this->lblTitleESTAT->Location = System::Drawing::Point(1251, 9);
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
			this->lblTitleDESC->Text = L"DESCRIPCI�";
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
			this->PANELEsdevHomepage->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PANELEsdevHomepage->Name = L"PANELEsdevHomepage";
			this->PANELEsdevHomepage->Size = System::Drawing::Size(1665, 513);
			this->PANELEsdevHomepage->TabIndex = 0;
			this->PANELEsdevHomepage->Visible = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Padding = System::Windows::Forms::Padding(29, 0, 0, 0);
			this->flowLayoutPanel1->Size = System::Drawing::Size(1665, 513);
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
			this->pnlTopBar->Size = System::Drawing::Size(1941, 37);
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
			this->pnlTopBarMinMaxClose->Location = System::Drawing::Point(1674, 0);
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
			this->panelNavBar->Controls->Add(this->panel12);
			this->panelNavBar->Controls->Add(this->panelSettingsAjuntament);
			this->panelNavBar->Controls->Add(this->pnlESQLesMevesPeticionsEntitat);
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
			// panel12
			// 
			this->panel12->Controls->Add(this->pictureBox10);
			this->panel12->Controls->Add(this->botonSettingsEntitat);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(0, 611);
			this->panel12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(276, 53);
			this->panel12->TabIndex = 15;
			this->panel12->Visible = false;
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ProvesUI::panel12_Paint);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Black;
			this->pictureBox10->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox10->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.ErrorImage")));
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(0, 0);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(53, 53);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox10->TabIndex = 8;
			this->pictureBox10->TabStop = false;
			// 
			// botonSettingsEntitat
			// 
			this->botonSettingsEntitat->BackColor = System::Drawing::Color::Black;
			this->botonSettingsEntitat->Dock = System::Windows::Forms::DockStyle::Right;
			this->botonSettingsEntitat->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->botonSettingsEntitat->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			this->botonSettingsEntitat->ForeColor = System::Drawing::Color::White;
			this->botonSettingsEntitat->Location = System::Drawing::Point(53, 0);
			this->botonSettingsEntitat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botonSettingsEntitat->Name = L"botonSettingsEntitat";
			this->botonSettingsEntitat->Size = System::Drawing::Size(223, 53);
			this->botonSettingsEntitat->TabIndex = 7;
			this->botonSettingsEntitat->Text = L"Settings";
			this->botonSettingsEntitat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->botonSettingsEntitat->UseVisualStyleBackColor = false;
			this->botonSettingsEntitat->Visible = false;
			this->botonSettingsEntitat->Click += gcnew System::EventHandler(this, &ProvesUI::botonSettingsEntitat_Click);
			// 
			// panelSettingsAjuntament
			// 
			this->panelSettingsAjuntament->Controls->Add(this->pictureBox6);
			this->panelSettingsAjuntament->Controls->Add(this->botonSettingsAjuntament);
			this->panelSettingsAjuntament->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSettingsAjuntament->Location = System::Drawing::Point(0, 553);
			this->panelSettingsAjuntament->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panelSettingsAjuntament->Name = L"panelSettingsAjuntament";
			this->panelSettingsAjuntament->Size = System::Drawing::Size(276, 58);
			this->panelSettingsAjuntament->TabIndex = 9;
			this->panelSettingsAjuntament->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Black;
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox6->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.ErrorImage")));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(0, 0);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(53, 58);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// botonSettingsAjuntament
			// 
			this->botonSettingsAjuntament->BackColor = System::Drawing::Color::Black;
			this->botonSettingsAjuntament->Dock = System::Windows::Forms::DockStyle::Right;
			this->botonSettingsAjuntament->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->botonSettingsAjuntament->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			this->botonSettingsAjuntament->ForeColor = System::Drawing::Color::White;
			this->botonSettingsAjuntament->Location = System::Drawing::Point(53, 0);
			this->botonSettingsAjuntament->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botonSettingsAjuntament->Name = L"botonSettingsAjuntament";
			this->botonSettingsAjuntament->Size = System::Drawing::Size(223, 58);
			this->botonSettingsAjuntament->TabIndex = 6;
			this->botonSettingsAjuntament->Text = L"Settings";
			this->botonSettingsAjuntament->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->botonSettingsAjuntament->UseVisualStyleBackColor = false;
			this->botonSettingsAjuntament->Visible = false;
			this->botonSettingsAjuntament->Click += gcnew System::EventHandler(this, &ProvesUI::botonSettingsAjuntament_Click);
			// 
			// pnlESQLesMevesPeticionsEntitat
			// 
			this->pnlESQLesMevesPeticionsEntitat->Controls->Add(this->pictureBox13);
			this->pnlESQLesMevesPeticionsEntitat->Controls->Add(this->btnEsqLesMevesPeticions);
			this->pnlESQLesMevesPeticionsEntitat->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlESQLesMevesPeticionsEntitat->Location = System::Drawing::Point(0, 501);
			this->pnlESQLesMevesPeticionsEntitat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlESQLesMevesPeticionsEntitat->Name = L"pnlESQLesMevesPeticionsEntitat";
			this->pnlESQLesMevesPeticionsEntitat->Size = System::Drawing::Size(276, 52);
			this->pnlESQLesMevesPeticionsEntitat->TabIndex = 9;
			this->pnlESQLesMevesPeticionsEntitat->Visible = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Black;
			this->pictureBox13->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(0, 0);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(53, 52);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox13->TabIndex = 2;
			this->pictureBox13->TabStop = false;
			// 
			// btnEsqLesMevesPeticions
			// 
			this->btnEsqLesMevesPeticions->BackColor = System::Drawing::Color::Black;
			this->btnEsqLesMevesPeticions->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnEsqLesMevesPeticions->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEsqLesMevesPeticions->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			this->btnEsqLesMevesPeticions->ForeColor = System::Drawing::Color::White;
			this->btnEsqLesMevesPeticions->Location = System::Drawing::Point(53, 0);
			this->btnEsqLesMevesPeticions->Margin = System::Windows::Forms::Padding(4);
			this->btnEsqLesMevesPeticions->Name = L"btnEsqLesMevesPeticions";
			this->btnEsqLesMevesPeticions->Size = System::Drawing::Size(223, 52);
			this->btnEsqLesMevesPeticions->TabIndex = 1;
			this->btnEsqLesMevesPeticions->Text = L"Les Meves Peticions";
			this->btnEsqLesMevesPeticions->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEsqLesMevesPeticions->UseVisualStyleBackColor = false;
			this->btnEsqLesMevesPeticions->Visible = false;
			this->btnEsqLesMevesPeticions->Click += gcnew System::EventHandler(this, &ProvesUI::btnEsqLesMevesPeticions_Click);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->pictureBox12);
			this->panel11->Controls->Add(this->button9);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(0, 449);
			this->panel11->Margin = System::Windows::Forms::Padding(4);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(276, 52);
			this->panel11->TabIndex = 8;
			this->panel11->Visible = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Black;
			this->pictureBox12->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(0, 0);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(53, 52);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox12->TabIndex = 1;
			this->pictureBox12->TabStop = false;
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
			this->panel10->Controls->Add(this->pictureBox11);
			this->panel10->Controls->Add(this->btnRegEsdevAJ);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel10->Location = System::Drawing::Point(0, 397);
			this->panel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(276, 52);
			this->panel10->TabIndex = 7;
			this->panel10->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Black;
			this->pictureBox11->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(0, 0);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(53, 52);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox11->TabIndex = 1;
			this->pictureBox11->TabStop = false;
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
			this->button2->Text = L"Els Meus Esdeveniments";
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
			this->pnlMainTop->Size = System::Drawing::Size(1665, 223);
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
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanel2->Controls->Add(this->btnFiltrGala);
			this->flowLayoutPanel2->Controls->Add(this->btnFiltreDeportivo);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 137);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(29, 10, 0, 0);
			this->flowLayoutPanel2->Size = System::Drawing::Size(1665, 86);
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
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ProvesUI::textBox1_TextChanged);
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
			this->pnlMain->Controls->Add(this->PANELMeusEsdevs);
			this->pnlMain->Controls->Add(this->PANELConsultarCompra);
			this->pnlMain->Controls->Add(this->PANELModificaEntitat);
			this->pnlMain->Controls->Add(this->PANELModificaAjuntament);
			this->pnlMain->Controls->Add(this->PANELSolicitutEntitat);
			this->pnlMain->Controls->Add(this->PANELModificaCiut);
			this->pnlMain->Controls->Add(this->PANELbandEntrSolAj);
			this->pnlMain->Controls->Add(this->PANELEsdevHomepage);
			this->pnlMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlMain->Location = System::Drawing::Point(276, 260);
			this->pnlMain->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->Size = System::Drawing::Size(1665, 513);
			this->pnlMain->TabIndex = 4;
			// 
			// PANELMeusEsdevs
			// 
			this->PANELMeusEsdevs->BackColor = System::Drawing::Color::WhiteSmoke;
			this->PANELMeusEsdevs->Controls->Add(this->flowLayoutPanelMESDEV);
			this->PANELMeusEsdevs->Controls->Add(this->pnlTitlesMESDEV);
			this->PANELMeusEsdevs->Location = System::Drawing::Point(181, 25);
			this->PANELMeusEsdevs->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PANELMeusEsdevs->Name = L"PANELMeusEsdevs";
			this->PANELMeusEsdevs->Size = System::Drawing::Size(1266, 628);
			this->PANELMeusEsdevs->TabIndex = 0;
			this->PANELMeusEsdevs->Visible = false;
			// 
			// flowLayoutPanelMESDEV
			// 
			this->flowLayoutPanelMESDEV->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanelMESDEV->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanelMESDEV->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanelMESDEV->Location = System::Drawing::Point(0, 32);
			this->flowLayoutPanelMESDEV->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanelMESDEV->Name = L"flowLayoutPanelMESDEV";
			this->flowLayoutPanelMESDEV->Size = System::Drawing::Size(1266, 487);
			this->flowLayoutPanelMESDEV->TabIndex = 3;
			// 
			// pnlTitlesMESDEV
			// 
			this->pnlTitlesMESDEV->BackColor = System::Drawing::Color::Black;
			this->pnlTitlesMESDEV->Controls->Add(this->label8);
			this->pnlTitlesMESDEV->Controls->Add(this->lblSelPuntuacioMESDEVen);
			this->pnlTitlesMESDEV->Controls->Add(this->lblNomEsdevMESDEVen);
			this->pnlTitlesMESDEV->Controls->Add(this->lblDataMESDEVen);
			this->pnlTitlesMESDEV->Controls->Add(this->lblPreuMESDEVen);
			this->pnlTitlesMESDEV->Controls->Add(this->lblMetPagMESDEVen);
			this->pnlTitlesMESDEV->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTitlesMESDEV->Location = System::Drawing::Point(0, 0);
			this->pnlTitlesMESDEV->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlTitlesMESDEV->Name = L"pnlTitlesMESDEV";
			this->pnlTitlesMESDEV->Size = System::Drawing::Size(1266, 32);
			this->pnlTitlesMESDEV->TabIndex = 2;
			this->pnlTitlesMESDEV->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ProvesUI::pnlTitlesMESDEV_Paint);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(1082, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(155, 16);
			this->label8->TabIndex = 6;
			this->label8->Text = L"CANCELAR COMPRA";
			// 
			// lblSelPuntuacioMESDEVen
			// 
			this->lblSelPuntuacioMESDEVen->AutoSize = true;
			this->lblSelPuntuacioMESDEVen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblSelPuntuacioMESDEVen->ForeColor = System::Drawing::Color::White;
			this->lblSelPuntuacioMESDEVen->Location = System::Drawing::Point(875, 6);
			this->lblSelPuntuacioMESDEVen->Name = L"lblSelPuntuacioMESDEVen";
			this->lblSelPuntuacioMESDEVen->Size = System::Drawing::Size(131, 16);
			this->lblSelPuntuacioMESDEVen->TabIndex = 5;
			this->lblSelPuntuacioMESDEVen->Text = L"SEL. PUNTUACI�";
			// 
			// lblNomEsdevMESDEVen
			// 
			this->lblNomEsdevMESDEVen->AutoSize = true;
			this->lblNomEsdevMESDEVen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomEsdevMESDEVen->ForeColor = System::Drawing::Color::White;
			this->lblNomEsdevMESDEVen->Location = System::Drawing::Point(37, 7);
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
			this->lblDataMESDEVen->Text = L"DATA FACTURACI�";
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
			this->lblMetPagMESDEVen->Location = System::Drawing::Point(596, 7);
			this->lblMetPagMESDEVen->Name = L"lblMetPagMESDEVen";
			this->lblMetPagMESDEVen->Size = System::Drawing::Size(159, 16);
			this->lblMetPagMESDEVen->TabIndex = 1;
			this->lblMetPagMESDEVen->Text = L"M�TODE PAGAMENT";
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
			this->lblConsultEsdevDesc->Text = L"(Descripci�)";
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
			this->ClientSize = System::Drawing::Size(1941, 773);
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
			this->pnlQuantitatCONS->ResumeLayout(false);
			this->pnlQuantitatCONS->PerformLayout();
			this->pnlTitlesSOLENTIT->ResumeLayout(false);
			this->pnlTitlesSOLENTIT->PerformLayout();
			this->PANELSolicitutEntitat->ResumeLayout(false);
			this->PANELModificaCiut->ResumeLayout(false);
			this->PANELModificaCiut->PerformLayout();
			this->pnlRepCtrMODCIT->ResumeLayout(false);
			this->pnlRepCtrMODCIT->PerformLayout();
			this->pnlCtrMODCIT->ResumeLayout(false);
			this->pnlCtrMODCIT->PerformLayout();
			this->pnlTitlesMODCIT->ResumeLayout(false);
			this->pnlTitlesMODCIT->PerformLayout();
			this->pnlNomMODCIT->ResumeLayout(false);
			this->pnlNomMODCIT->PerformLayout();
			this->pnlCorrMODCIT->ResumeLayout(false);
			this->pnlCorrMODCIT->PerformLayout();
			this->pnlDataMODCIT->ResumeLayout(false);
			this->pnlDataMODCIT->PerformLayout();
			this->PANELModificaEntitat->ResumeLayout(false);
			this->PANELModificaEntitat->PerformLayout();
			this->BlackPartMODENT->ResumeLayout(false);
			this->BlackPartMODENT->PerformLayout();
			this->panel_nom_MODENT->ResumeLayout(false);
			this->panel_nom_MODENT->PerformLayout();
			this->panel_telefon_MODENT->ResumeLayout(false);
			this->panel_telefon_MODENT->PerformLayout();
			this->panel_correu_MODENT->ResumeLayout(false);
			this->panel_correu_MODENT->PerformLayout();
			this->PANELModificaAjuntament->ResumeLayout(false);
			this->PANELModificaAjuntament->PerformLayout();
			this->panel_nom_ajuntamentMODAJUN->ResumeLayout(false);
			this->panel_nom_ajuntamentMODAJUN->PerformLayout();
			this->panel_poblacio_ajuntamentMODAJUN->ResumeLayout(false);
			this->panel_poblacio_ajuntamentMODAJUN->PerformLayout();
			this->panel_telefon_ajuntamentMODAJUN->ResumeLayout(false);
			this->panel_telefon_ajuntamentMODAJUN->PerformLayout();
			this->panel_correu_electronic_ajuntamentMODAJUN->ResumeLayout(false);
			this->panel_correu_electronic_ajuntamentMODAJUN->PerformLayout();
			this->pnlCOMP->ResumeLayout(false);
			this->pnlCOMP->PerformLayout();
			this->pnlTitleCOMP->ResumeLayout(false);
			this->pnlTitleCOMP->PerformLayout();
			this->pnlTarjUICOMP->ResumeLayout(false);
			this->pnlTarjUICOMP->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxChipUICOMP))->EndInit();
			this->PANELConsultarCompra->ResumeLayout(false);
			this->PANELmodificaEsdev->ResumeLayout(false);
			this->PANELmodificaEsdev->PerformLayout();
			this->pnlPuntsRegalMODESDEVen->ResumeLayout(false);
			this->pnlPuntsRegalMODESDEVen->PerformLayout();
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
			this->pnlTopTitlesMODESDEV->ResumeLayout(false);
			this->pnlTopTitlesMODESDEV->PerformLayout();
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
			this->panel12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panelSettingsAjuntament->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->pnlESQLesMevesPeticionsEntitat->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
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
			this->PANELMeusEsdevs->ResumeLayout(false);
			this->pnlTitlesMESDEV->ResumeLayout(false);
			this->pnlTitlesMESDEV->PerformLayout();
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
		// ------------------------------------FI DECLARACI� OBJECTES UI-------------------------------------------------

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

		this->PANELModificaEntitat->Visible = false;
		this->PANELModificaAjuntament->Visible = false;
		this->PANELSolicitutEntitat->Visible = false;
		this->PANELModificaCiut->Visible = false;
		this->PANELMeusEsdevs->Visible = false;
		this->PANELbandEntrSolAj->Visible = false;
		this->PANELConsultarCompra->Visible = false;
		this->PANELEsdevHomepage->Visible = true;


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
		this->lblTitlePage->Text = "CONSULTAR ELS MEUS ESDEVENIMENTS";

		this->flowLayoutPanelMESDEV->Controls->Clear();

		this->flowLayoutPanel2->Visible = false;
		this->pnlMainTop->Size = System::Drawing::Size(1084, 110);

		this->PANELModificaEntitat->Visible = false;
		this->PANELModificaAjuntament->Visible = false;

		this->PANELModificaCiut->Visible = false;
		this->PANELEsdevHomepage->Visible = false;
		this->PANELConsultarCompra->Visible = false;

		this->PANELMeusEsdevs->Visible = true;

		TxConsultaInscripcions txConInsc;
		txConInsc.executar();
		List<String^>^ inscripcions = txConInsc.getResult();

		int comptEsdevCiut = 0;
		comptEsdevCiut = inscripcions->Count;
		if (comptEsdevCiut != 0) {
			String^ nomEsdev = inscripcions[0];
			String^ data = inscripcions[1];
			String^ preu = inscripcions[2];
			String^ metodePag = inscripcions[3];

			
			for (int i = 0; i < comptEsdevCiut; i = i + 4) {
				if (i + 3 < inscripcions->Count) {
					nomEsdev = inscripcions[i];
					data = inscripcions[i + 1];
					preu = inscripcions[i + 2];
					metodePag = inscripcions[i + 3];
					if (metodePag == "0") {
						metodePag = "Targeta de Credit";
						preu += " �";
					}
					else if (metodePag == "1") {
						metodePag = "Punts";
						preu += " Punts";
					}
					addDyamicPanelElsMeusEsdevs(nomEsdev, data, preu, metodePag);
				}
				else {
					// Handle the case where there are not enough elements
					// This could be logging an error, breaking the loop, or any other error handling
					break; // or continue; or any other handling logic
				}
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->PANELModificaEntitat->Visible = false;
		this->lblTitlePage->Text = "REGISTAR-SE EN ESDEVENIMENTS";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PANELModificaAjuntament->Visible = false;
		this->lblTitlePage->Text = "SETTINGS";

		this->flowLayoutPanel2->Visible = false;
		this->pnlMainTop->Size = System::Drawing::Size(1084, 110);

		this->PANELEsdevHomepage->Visible = false;
		this->PANELMeusEsdevs->Visible = false;
		this->PANELConsultarCompra->Visible = false;

		this->PANELModificaCiut->Visible = true;
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

		CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);

		TxConsultaEsdevenimentsAmbTipus txConsEsdevs("Gala");
		txConsEsdevs.executar();

		List<String^>^ esdevsGala = txConsEsdevs.getResult();
		/*List<String^>^ esdevsGalaNoms = txConsEsdevs.getNoms();
		List<String^>^ esdevsGalaPreus = txConsEsdevs.getPreus();*/

		List<System::Windows::Forms::Panel^>^ list_esdevs;

		int num_filtre_panel = esdevsGala->Count;

		for (int i = 0; i < num_filtre_panel; i += 2) {
			String^ nom = esdevsGala[i];
			String^ preu = esdevsGala[i + 1];
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
		this->PANELMeusEsdevs->Visible = false;
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
		
		this->lblPreuEsdevCONSgran->Text = "Preu: " + preu + " � ";
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
		this->PANELModificaEntitat->Visible = false;
		this->lblTitlePage->Text = "MODIFICAR ESDEVENIMENTS";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)  // btnSearch
	{
		String^ val = this->textBox1->Text;

		this->flowLayoutPanel1->Controls->Clear();

		TxConsultaEsdevenimentsAmbTipus txConsEsdevs(val);
		txConsEsdevs.executar();

		TxConsultaEsdeveniment txConsEsdev(val);
		txConsEsdev.executar();

		List<String^>^ esdevsGala = txConsEsdevs.getResult();

		List<System::Windows::Forms::Panel^>^ list_esdevs;

		esdevsGala->Add(txConsEsdev.getResult()[4]);
		esdevsGala->Add(txConsEsdev.getResult()[1]);

		int num_filtre_panel = esdevsGala->Count;

		for (int i = 0; i < num_filtre_panel; i += 2) {

			String^ nom = esdevsGala[i];
			String^ preu = esdevsGala[i + 1];

			if (nom != "") {
				Esdeveniment^ esdev = gcnew Esdeveniment(nom, preu);
				addEsdevToUI(esdev);
			}
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) { // btn Tornar enrere
		this->PANELPROVA->Visible = false;
		this->PANELPROVA->Dock = System::Windows::Forms::DockStyle::Right;
	}

		   // CIUTAD�------------------------------------------------------------------------------
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
		   // Creaci� de panells amb l'Esdeveniment donat (+ Info)
	private: System::Void addEsdevToUI(Esdeveniment^ esdev)
	{
		
		//// Define the relative path to the image
		//System::String^ relativeImagePath = "\Assets\pictureBoxChipUICOMP.png";

		//// Construct the full path using the application's startup path
		//System::String^ imagePath = System::IO::Path::Combine(Application::StartupPath, relativeImagePath);

		//// Load the image from the specified path
		//System::Drawing::Image^ image = System::Drawing::Image::FromFile(imagePath);

		//// Set the loaded image as the background image of the PictureBox
		//picBoxTipus->BackgroundImage = image;

		//// Set the BackgroundImageLayout to Stretch to fit the PictureBox
		//picBoxTipus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

		// Create a new PictureBox instance
		System::Windows::Forms::PictureBox^ picBoxTipus = gcnew System::Windows::Forms::PictureBox;

		// Initialize the resources object
		picBoxTipus->Dock = System::Windows::Forms::DockStyle::Fill;
		picBoxTipus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
		picBoxTipus->Location = System::Drawing::Point(0, 0);
		picBoxTipus->Name = L"pictureBox1";
		picBoxTipus->Size = System::Drawing::Size(206, 183);
		picBoxTipus->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		picBoxTipus->TabIndex = 2;
		picBoxTipus->TabStop = false;
		picBoxTipus->Dock = System::Windows::Forms::DockStyle::Fill;

		// Assign the image from resources to the PictureBox
		/*picBoxTipus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bluedegrad.Image")));
		picBoxTipus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		picBoxTipus->Dock = System::Windows::Forms::DockStyle::Fill;*/

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
		lblEsdevPreu->Text = esdev->getPreu() + " �";
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

		pnlEsdev->Controls->Add(picBoxTipus);
		pnlEsdev->Controls->Add(lblEsdev);
		pnlEsdev->Controls->Add(lblEsdevPreu);
		pnlEsdev->Controls->Add(btnConsultar);

		this->flowLayoutPanel1->Controls->Add(pnlEsdev);
	}
		   // Creaci� de panells amb l'Esdeveniment donat (Modificar)
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
		//lblEsdevPreu->Text = esdev->getPreu() + " �";
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
		   // Creaci� de botons de filtres
	private: Void addFiltrButtonToUI(String^ tipus)
	{
		CustomButton^ btnFiltrType = gcnew CustomButton;
		btnFiltrType->BackColor = System::Drawing::Color::Crimson;
		btnFiltrType->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		btnFiltrType->Name = String::Format("btnFiltr{0}", tipus);
		btnFiltrType->Text = tipus;
		btnFiltrType->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		btnFiltrType->ForeColor = System::Drawing::Color::White;
		btnFiltrType->Size = System::Drawing::Size(75, 23);
		btnFiltrType->NomEsdev = tipus;
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
		   // Consultar Usuari (Ciutad�, Entitat, Ajuntament)
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

		this->PANELModificaEntitat->Visible = false;
		this->PANELModificaAjuntament->Visible = false;
		//this->pnlMainModEsdv->Visible = false;
		this->PANELMeusEsdevs->Visible = false;
		this->PANELbandEntrSolAj->Visible = false;
		this->PANELEsdevHomepage->Visible = true;


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
			this->lblTypeUser->Text = L"Ciutad�";
			this->lblTypeUser->BackColor = System::Drawing::Color::FromArgb(
				static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			
			passCiu = safe_cast<PassarelaCiutada^>(usuario->getUsuari());

			if (passCiu->getNickname() == "convidat") {
				this->picBoxUserPic->Visible = false;
				//this->pictureBox1->Visible = false;
				//this->panel1->Visible = false;
				this->panel2->Visible = false;
				this->panel3->Visible = false;
				this->panel6->Visible = false;
				this->panel7->Visible = false;
				this->lblFullNameUser->Visible = false;
				this->lblTypeUser->Visible = false;
				this->lblUsername->Visible = false;
				this->lblPuntsUser->Visible = false;
				this->btnComprarPuntsCONS->Visible = false;
				this->btnComprarCONS->Visible = false;
				//this->btnComprarCOMP->Visible = false;

			}

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

			this->pnlCOMP->Visible = false;
			this->flowLayoutPanel2->Visible = true;
			this->pnlMainTop->Size = System::Drawing::Size(1084, 180);

			this->PANELMeusEsdevs->Visible = false;
			this->PANELConsultarCompra->Visible = false;
			this->PANELModificaCiut->Visible = false;
			this->PANELEsdevHomepage->Visible = true;

			this->btnComprarCONS->Text = L"Modificar";
			this->btnComprarPuntsCONS->Visible = false;
			this->panel12->Visible = true;
			resultEnt = ctrlModEnt.consultaEntitat();
			txt_nom_MODENT->Text = resultEnt[1]; // nom
			//textBox2->Text = resultEnt[0]; // id
			txt_telefon_MODENT->Text = resultEnt[4]; // telefon
			txt_correu_MODENT->Text = resultEnt[2]; // correu
			txt_contrasenya_MODENT->Text = resultEnt[3]; // contrasenya

			this->botonSettingsEntitat->Visible = true;

			this->panel10->Visible = true;
			this->btnEsqLesMevesPeticions->Visible = true;
			this->pnlESQLesMevesPeticionsEntitat->Visible = true;

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
			flowLayoutPanel1->Visible = true;
			//this->pnlMainTop->Size = System::Drawing::Size(1503, 112);;

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

			this->pnlMainModEsdv->Visible = true;

			break;
		case TipoPassarela::Ajuntament:
			this->panelSettingsAjuntament->Visible = true;


			//this->panel11->Visible = true; // Consultar Peticions d'Esdeveniments

			//         // Consultar los datos actuales del usuario(Para Modificar Usuario)
			resultAj = ctrlModAj.consultaAjuntament();
			txt_nom_ajuntamentMODAJUN->Text = resultAj[0];
			txt_poblacio_ajuntamentMODAJUN->Text = resultAj[2];
			txt_telefon_ajuntamentMODAJUN->Text = resultAj[3];
			txt_correu_electronic_ajuntamentMODAJUN->Text = resultAj[4];
			txt_contrasenya_ajuntamentMODAJUN->Text = resultAj[5];
			//textBox6->Text = result[5];

			this->pnlMain->Visible = true;
			this->panel11->Visible = true; // Consultar Peticions d'Esdeveniments
			this->botonSettingsAjuntament->Visible = true;

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

		tipus->Add("Gastron�mico");
		tipus->Add("Art�stico");
		tipus->Add("Deportivo");
		tipus->Add("Educativo");
		tipus->Add("Tecnol�gico");
		tipus->Add("Carnaval");
		tipus->Add("Musical");
		tipus->Add("Cinematogr�fico");
		tipus->Add("Taller");
		tipus->Add("Exposici�n");
		tipus->Add("Concierto");
		tipus->Add("Festival");
		tipus->Add("Competici�n");
		tipus->Add("Torneo");
		tipus->Add("Ceremonia");
		tipus->Add("Gala");

		int num_filtre_btn = tipus->Count;

		for (int i = 0; i < num_filtre_btn; ++i) {

			addFiltrButtonToUI(tipus[i]);
		}
	}
	private: System::Void btnRegEsdevAJ_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PANELModificaEntitat->Visible = false;
		RegistrarEsdevenimentUI^ formConsultUsu = gcnew RegistrarEsdevenimentUI;
		formConsultUsu->ShowDialog();
	}
	private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) { // Dock CONSULTAR PETICIONS
		this->flowLayoutPnlBndEntrAj->Controls->Clear();
		this->lblTitlePage->Text = "SAFATA ENTRADA SOL.LICITUTS";
		this->flowLayoutPanel2->Visible = false;
		this->pnlMainTop->Size = System::Drawing::Size(1084, 110);

		this->PANELModificaEntitat->Visible = false;
		this->PANELModificaAjuntament->Visible = false;
		this->PANELMeusEsdevs->Visible = false;
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
	private: System::Void addDynamicPanelBandejaEntradaAj2(String^ lblIdEnt, String^ lblNomEsdev, String^ data, String^ descEsdev) {

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

	private: void ButtonViewDesc_Click(Object^ sender, EventArgs^ e)
	{
		CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);
		if (clickedButton != nullptr) {
			String^ descEsdev = clickedButton->NomEsdev;
			MessageBox::Show(descEsdev);
		}
	}

	private: void ButtonAcceptar_Click(Object^ sender, EventArgs^ e) {
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

	private: void ButtonCancelar_Click(Object^ sender, EventArgs^ e)
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
		_quant = 1;
		this->pnlCOMP->Visible = false;
		this->flowLayoutPanel2->Visible = true;
		this->pnlMainTop->Size = System::Drawing::Size(1084, 180);

		this->PANELMeusEsdevs->Visible = false;
		this->PANELConsultarCompra->Visible = false;
		this->PANELModificaCiut->Visible = false;
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

		UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();

		if (usuario->getTipoPassarela() == TipoPassarela::Ciutada) {
			this->pnlCOMP->Visible = true;
		}
		else if (usuario->getTipoPassarela() == TipoPassarela::Entitat) {
			this->PANELmodificaEsdev->Visible = true;
		}
	}

	private: System::Void btnComprarCOMP_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nomEsdev = _NomEsdevPerComprar;

		String^ numero = this->textBoxNumTarjCOMP->Text;
		String^ titular_tarjeta = this->textBoxTitularCOMP->Text;
		String^ fecha_cadu_a�o = this->textBoxYearCOMP->Text;
		String^ fecha_cadu_mes = this->textBoxMonthCOMP->Text;
		String^ CVV_ = this->textBoxCVVCOMP->Text;
		if (numero->Length == 0 || titular_tarjeta->Length == 0 || fecha_cadu_mes->Length == 0 || CVV_->Length == 0 || fecha_cadu_a�o->Length == 0)
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
			MessageBox::Show("Revisa el camp 'Titular de la tarjeta' no t� el format indicat ", "Camp amb format incorrecte", MessageBoxButtons::OK);
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
			MessageBox::Show("Revisa el camp 'Numero de la tarjeta' no t� el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
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
			MessageBox::Show("Revisa el camp 'Fecha de caducidad' no t� el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
			return;
		}
		encontrado = false;
		//A�O
		if (fecha_cadu_a�o->Length != 4) encontrado = true;
		for (int i = 0; i < fecha_cadu_a�o->Length && encontrado == false; i++)
		{
			if (!(47 < fecha_cadu_a�o[i] && fecha_cadu_a�o[i] < 58)) encontrado = true;
		}
		if (encontrado == true)
		{
			MessageBox::Show("Revisa el camp 'Fecha de caducidad' no t� el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
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
			MessageBox::Show("Revisa el camp 'CVV' no t� el format indicat", "Camp amb format incorrecte", MessageBoxButtons::OK);
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




				TxCompraEntradaEsdevenimentDiners tCompEsdevDin(_NomEsdevPerComprar, 1);
				tCompEsdevDin.executar();
				MessageBox::Show("Compra finalitzada amb exit", "", MessageBoxButtons::OK);
				//this->Close();
				this->PANELMeusEsdevs->Visible = false;
				this->PANELConsultarCompra->Visible = false;
				this->PANELModificaCiut->Visible = false;
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
				int^ quantitat = 1;/*this->textBoxQuantitatCONS->Text;*/
				TxCompraEntradaEsdevenimentPunts tx1(nomEsdev, quantitat);
				tx1.executar();

				MessageBox::Show("Compra finalitzada amb exit", "", MessageBoxButtons::OK);
				/*this->Close();*/
				this->PANELMeusEsdevs->Visible = false;
				this->PANELConsultarCompra->Visible = false;
				this->PANELModificaCiut->Visible = false;
				this->PANELEsdevHomepage->Visible = true;
				this->pnlCOMP->Visible = false;
				this->flowLayoutPanel2->Visible = true;
				this->pnlMainTop->Size = System::Drawing::Size(1084, 223);

				PassarelaCiutada^ passCiu = safe_cast<PassarelaCiutada^>(usuario->getUsuari());

				int^ puntsCiutada = passCiu->getPunts();

				panelUserInfo->Invalidate(); // Force redraw if necessary
				panelUserInfo->PerformLayout(); // Recalculate layout if necessary
				this->lblPuntsUser->Text = L"" + puntsCiutada + " Punts";

			}
		}
		catch (const string err)
		{
			MessageBox::Show(gcnew String(err.c_str()), "Error Al Comprar", MessageBoxButtons::OK);
			return;
		}
	}
		   void dynamicTextChanged(Object^ sender, EventArgs^ e)
		   {
			   TextBox^ txtBoxOmplert = dynamic_cast<TextBox^>(sender);
			   if (txtBoxOmplert->Name == L"textBoxNumTarjCOMP")
				   lbNumTarjUICOMP->Text = this->textBoxNumTarjCOMP->Text;
			   if (txtBoxOmplert->Name == L"textBoxTitularCOMP")
				   lblTitularUICOMP->Text = this->textBoxTitularCOMP->Text;
			   if (txtBoxOmplert->Name == L"textBoxMonthCOMP")
				   lblDataCadUICOMP->Text = this->textBoxMonthCOMP->Text + "/";
			   else if (txtBoxOmplert->Name == L"textBoxYearCOMP")
				   lblDataCadUICOMP->Text = lblDataCadUICOMP->Text + this->textBoxYearCOMP->Text;
		   }

		   void addDyamicPanelElsMeusEsdevs(String^ nomEsdev, String^ data, String^ preu, String^ metodePag) {

			   System::Windows::Forms::Panel^ pnlDynMESDEVex;
			   System::Windows::Forms::Label^ lblDynNomEsdevMESDEVex;
			   System::Windows::Forms::Label^ lblDynDataMESDEVex;
			   System::Windows::Forms::Label^ lblDynPreuMESDEVex;
			   System::Windows::Forms::Panel^ pnlDynMetodeFMESDEVex;
			   System::Windows::Forms::Label^ lblDynMetodeMESDEVex;
			   
			   CustomButton^ btn1star = (gcnew CustomButton());
			   CustomButton^ btn2star = (gcnew CustomButton());
			   CustomButton^ btn3star = (gcnew CustomButton());
			   CustomButton^ btn4star = (gcnew CustomButton());
			   CustomButton^ btn5star = (gcnew CustomButton());

			   CustomButton^ btnCancelarCompra = (gcnew CustomButton());

			   int posIni = 600;
			   int margin = 10;

			   

			   btnCancelarCompra->BackColor = System::Drawing::Color::Gray;
			   btnCancelarCompra->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   btnCancelarCompra->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			   btnCancelarCompra->ForeColor = System::Drawing::Color::White;
			   btnCancelarCompra->Location = System::Drawing::Point(810, 14);
			   btnCancelarCompra->Margin = System::Windows::Forms::Padding(4);
			   btnCancelarCompra->Name = L"btnCancelarCompra";
			   btnCancelarCompra->Size = System::Drawing::Size(98, 25);
			   btnCancelarCompra->TabIndex = 0;
			   btnCancelarCompra->Text = L"   CANCELA COMPRA";
			   btnCancelarCompra->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   btnCancelarCompra->UseVisualStyleBackColor = false;
			   btnCancelarCompra->NomEsdev = nomEsdev;
			   btnCancelarCompra->Click += gcnew System::EventHandler(this, &ProvesUI::btnCancelarCompra_Clicked);

			   btn1star->BackColor = System::Drawing::Color::Gray;
			   btn1star->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   btn1star->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			   btn1star->ForeColor = System::Drawing::Color::White;
			   btn1star->Location = System::Drawing::Point(635, 14);
			   btn1star->Margin = System::Windows::Forms::Padding(4);
			   btn1star->Name = L"btn1star";
			   btn1star->Size = System::Drawing::Size(25, 25);
			   btn1star->TabIndex = 0;
			   btn1star->Text = L"1";
			   btn1star->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   btn1star->UseVisualStyleBackColor = false;
			   btn1star->NomEsdev = nomEsdev;
			   btn1star->Click += gcnew System::EventHandler(this, &ProvesUI::btn1star_Click);

			   btn2star->BackColor = System::Drawing::Color::Gray;
			   btn2star->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   btn2star->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			   btn2star->ForeColor = System::Drawing::Color::White;
			   btn2star->Location = System::Drawing::Point(660 + 5, 14);
			   btn2star->Margin = System::Windows::Forms::Padding(4);
			   btn2star->Name = L"btn2star";
			   btn2star->Size = System::Drawing::Size(25, 25);
			   btn2star->TabIndex = 0;
			   btn2star->Text = L"2";
			   btn2star->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   btn2star->UseVisualStyleBackColor = false;
			   btn2star->NomEsdev = nomEsdev;
			   btn2star->Click += gcnew System::EventHandler(this, &ProvesUI::btn2star_Click);

			   btn3star->BackColor = System::Drawing::Color::Gray;
			   btn3star->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   btn3star->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			   btn3star->ForeColor = System::Drawing::Color::White;
			   btn3star->Location = System::Drawing::Point(685 + 10, 14);
			   btn3star->Margin = System::Windows::Forms::Padding(4);
			   btn3star->Name = L"btn3star";
			   btn3star->Size = System::Drawing::Size(25, 25);
			   btn3star->TabIndex = 0;
			   btn3star->Text = L"3";
			   btn3star->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   btn3star->UseVisualStyleBackColor = false;
			   btn3star->NomEsdev = nomEsdev;
			   btn3star->Click += gcnew System::EventHandler(this, &ProvesUI::btn3star_Click);

			   btn4star->BackColor = System::Drawing::Color::Gray;
			   btn4star->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   btn4star->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			   btn4star->ForeColor = System::Drawing::Color::White;
			   btn4star->Location = System::Drawing::Point(710 + 15, 14);
			   btn4star->Margin = System::Windows::Forms::Padding(4);
			   btn4star->Name = L"btn4star";
			   btn4star->Size = System::Drawing::Size(25, 25);
			   btn4star->TabIndex = 0;
			   btn4star->Text = L"4";
			   btn4star->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   btn4star->UseVisualStyleBackColor = false;
			   btn4star->NomEsdev = nomEsdev;
			   btn4star->Click += gcnew System::EventHandler(this, &ProvesUI::btn4star_Click);

			   btn5star->BackColor = System::Drawing::Color::Gray;
			   btn5star->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   btn5star->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F));
			   btn5star->ForeColor = System::Drawing::Color::White;
			   btn5star->Location = System::Drawing::Point(735 + 20, 14);
			   btn5star->Margin = System::Windows::Forms::Padding(4);
			   btn5star->Name = L"btn5star";
			   btn5star->Size = System::Drawing::Size(25, 25);
			   btn5star->TabIndex = 0;
			   btn5star->Text = L"5";
			   btn5star->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   btn5star->UseVisualStyleBackColor = false;
			   btn5star->NomEsdev = nomEsdev;
			   btn5star->Click += gcnew System::EventHandler(this, &ProvesUI::btn5star_Click);

			   pnlDynMESDEVex = (gcnew System::Windows::Forms::Panel());
			   lblDynNomEsdevMESDEVex = (gcnew System::Windows::Forms::Label());
			   lblDynDataMESDEVex = (gcnew System::Windows::Forms::Label());
			   lblDynPreuMESDEVex = (gcnew System::Windows::Forms::Label());
			   pnlDynMetodeFMESDEVex = (gcnew System::Windows::Forms::Panel());
			   lblDynMetodeMESDEVex = (gcnew System::Windows::Forms::Label());

			   // 
			   // lblNomEsdevMESDEVex
			   // 
			   lblDynNomEsdevMESDEVex->AutoSize = true;
			   lblDynNomEsdevMESDEVex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   lblDynNomEsdevMESDEVex->Location = System::Drawing::Point(36, 17);
			   lblDynNomEsdevMESDEVex->Name = L"lblNomEsdevMESDEVex";
			   lblDynNomEsdevMESDEVex->Size = System::Drawing::Size(123, 17);
			   lblDynNomEsdevMESDEVex->TabIndex = 4;
			   lblDynNomEsdevMESDEVex->Text = L"NomEsdeveniment";
			   // 
			   // lblDataMESDEVex
			   // 
			   lblDynDataMESDEVex->AutoSize = true;
			   lblDynDataMESDEVex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   lblDynDataMESDEVex->Location = System::Drawing::Point(245 - 55, 14);
			   lblDynDataMESDEVex->Name = L"lblDataMESDEVex";
			   lblDynDataMESDEVex->Size = System::Drawing::Size(74, 17);
			   lblDynDataMESDEVex->TabIndex = 3;
			   lblDynDataMESDEVex->Text = L"01/01/2024";
			   // 
			   // lblPreuMESDEVex
			   // 
			   lblDynPreuMESDEVex->AutoSize = true;
			   lblDynPreuMESDEVex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   lblDynPreuMESDEVex->Location = System::Drawing::Point(451 - 110, 14);
			   lblDynPreuMESDEVex->Name = L"lblPreuMESDEVex";
			   lblDynPreuMESDEVex->Size = System::Drawing::Size(43, 17);
			   lblDynPreuMESDEVex->TabIndex = 2;
			   lblDynPreuMESDEVex->Text = L"0.00 �";
			   // 
			   // pnlMetodeFMESDEVex
			   // 
			   pnlDynMetodeFMESDEVex->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				   static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			   pnlDynMetodeFMESDEVex->Controls->Add(lblDynMetodeMESDEVex);
			   pnlDynMetodeFMESDEVex->Location = System::Drawing::Point(599 - 160, 7);
			   pnlDynMetodeFMESDEVex->Name = L"pnlMetodeFMESDEVex";
			   pnlDynMetodeFMESDEVex->Size = System::Drawing::Size(143, 29);
			   pnlDynMetodeFMESDEVex->TabIndex = 1;
			   // 
			   // lblMetodeMESDEVex
			   // 
			   lblDynMetodeMESDEVex->AutoSize = true;
			   lblDynMetodeMESDEVex->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   lblDynMetodeMESDEVex->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)),
				   static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(243)));
			   lblDynMetodeMESDEVex->Location = System::Drawing::Point(26, 6);
			   lblDynMetodeMESDEVex->Name = L"lblMetodeMESDEVex";
			   lblDynMetodeMESDEVex->Size = System::Drawing::Size(93, 17);
			   lblDynMetodeMESDEVex->TabIndex = 0;
			   lblDynMetodeMESDEVex->Text = L"Trageta Cr�dit";

			   lblDynNomEsdevMESDEVex->Text = nomEsdev;
			   lblDynDataMESDEVex->Text = data;
			   lblDynPreuMESDEVex->Text = preu;
			   lblDynMetodeMESDEVex->Text = metodePag;

			   // 
			   // pnlDynMESDEVex
			   //
			   
			   pnlDynMESDEVex->Controls->Add(btnCancelarCompra);
			   pnlDynMESDEVex->Controls->Add(btn5star);
			   pnlDynMESDEVex->Controls->Add(btn4star);
			   pnlDynMESDEVex->Controls->Add(btn3star); 
			   pnlDynMESDEVex->Controls->Add(btn2star);
			   pnlDynMESDEVex->Controls->Add(btn1star);
			   pnlDynMESDEVex->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   pnlDynMESDEVex->Controls->Add(lblDynNomEsdevMESDEVex);
			   pnlDynMESDEVex->Controls->Add(lblDynDataMESDEVex);
			   pnlDynMESDEVex->Controls->Add(lblDynPreuMESDEVex);
			   pnlDynMESDEVex->Controls->Add(pnlDynMetodeFMESDEVex);
			   pnlDynMESDEVex->Location = System::Drawing::Point(3, 3);
			   pnlDynMESDEVex->Name = L"pnlDynMESDEVex";
			   pnlDynMESDEVex->Size = System::Drawing::Size(940, 48);
			   pnlDynMESDEVex->TabIndex = 0;

			   this->flowLayoutPanelMESDEV->Controls->Add(pnlDynMESDEVex);
		   }

	private: System::Void btnCancelarCOMP_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pnlCOMP->Visible = false;
	}

	private: System::Void btnModMODCIT_Click(System::Object^ sender, System::EventArgs^ e) { // BUG: deberia poder cambiarse solo un valor.
		if (TextBoxNomMODCIT->Text != "" || TextBoxCtrMODCIT->Text != "" || TextBoxCorrMODCIT->Text != "" || TextBoxDataMODCIT->Text != "") {
			if (TextBoxCtrMODCIT->Text == TextBoxRepCtrMODCIT->Text) {
				try {
					ctrlModCit.modificaCiutada(TextBoxNomMODCIT->Text, TextBoxCorrMODCIT->Text, TextBoxDataMODCIT->Text, TextBoxDataMODCIT->Text);
					MessageBox::Show("Les dades s'han actualitzat amb �xit!");
				}
				catch (CorreuExisteix^ e1) {
					MessageBox::Show(e1->Message);
				}
			}
			else {
				MessageBox::Show("Els camps de nova contrassenya i repetici� no coincideixe, torna a intentar.");
			}
		}
	}
	private: System::Void btnEsqLesMevesPeticions_Click(System::Object^ sender, System::EventArgs^ e) {

		this->flowLayoutPanelSOLENTIT->Controls->Clear();
		this->pnlCOMP->Visible = false;
		//this->pnlMainTop->Size = System::Drawing::Size(1084, 223);

		this->PANELModificaEntitat->Visible = false;
		this->flowLayoutPanel2->Visible = false;
		this->pnlMainTop->Size = System::Drawing::Size(1084, 110);
		this->PANELMeusEsdevs->Visible = false;
		this->PANELConsultarCompra->Visible = false;
		this->PANELModificaCiut->Visible = false;
		this->PANELEsdevHomepage->Visible = false;
		this->PANELSolicitutEntitat->Visible = true;

		this->lblTitlePage->Text = "ESTAT DE LES MEVES PETICIONS";

		TxConsultaTotsEsdevenimentsPerEntitat txConEsdevEnt;
		UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
		PassarelaEntitat^ passEnt = safe_cast<PassarelaEntitat^>(usuario->getUsuari());
		int^ id = passEnt->obteid();
		txConEsdevEnt.executar(passEnt->obteid()->ToString());
		List<String^>^ res = txConEsdevEnt.getResult();

		int contEsdevs = res->Count;

		for (int i = 0; i < contEsdevs; i = i + 4) {
			if (i + 3 < res->Count) {
				addDynPanelBAndejaSolicitutEntitats(id->ToString(), res[i], res[i + 1], res[i + 2], res[i + 3]);
			}
			else {
				// Handle the case where there are not enough elements
				// This could be logging an error, breaking the loop, or any other error handling
				break; // or continue; or any other handling logic
			}
		}

	}

		   void addDynPanelBAndejaSolicitutEntitats(String^ idEnt, String^ nomEsdevEnt, String^ preuEsdev, String^ dataEsdevEnt, String^ estatEsdevEnt) {
			   System::Windows::Forms::Panel^ pnlDynSOLENTIT;
			   System::Windows::Forms::Label^ lblDynEsdevSOLENTIT;
			   System::Windows::Forms::Label^ lblDynDataSOLENTIT;
			   System::Windows::Forms::Label^ lblDynPreuSOLENTIT;
			   System::Windows::Forms::Panel^ pnlDynEstatSOLENTIT;
			   System::Windows::Forms::Label^ lblDynEstatSOLENTIT;
			   System::Windows::Forms::Label^ lblDynIDSOLENTIT;

			   pnlDynSOLENTIT = (gcnew System::Windows::Forms::Panel());
			   lblDynEsdevSOLENTIT = (gcnew System::Windows::Forms::Label());
			   lblDynDataSOLENTIT = (gcnew System::Windows::Forms::Label());
			   lblDynPreuSOLENTIT = (gcnew System::Windows::Forms::Label());
			   pnlDynEstatSOLENTIT = (gcnew System::Windows::Forms::Panel());
			   lblDynEstatSOLENTIT = (gcnew System::Windows::Forms::Label());
			   lblDynIDSOLENTIT = (gcnew System::Windows::Forms::Label());

			   // 
			   // lblDynEsdevSOLENTIT
			   // 
			   lblDynEsdevSOLENTIT->AutoSize = true;
			   lblDynEsdevSOLENTIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   lblDynEsdevSOLENTIT->Location = System::Drawing::Point(249-70, 16);
			   lblDynEsdevSOLENTIT->Name = L"lblDynEsdevSOLENTIT";
			   lblDynEsdevSOLENTIT->Size = System::Drawing::Size(88, 17);
			   lblDynEsdevSOLENTIT->TabIndex = 4;
			   lblDynEsdevSOLENTIT->Text = nomEsdevEnt;
			   // 
			   // lblDynDataSOLENTIT
			   // 
			   lblDynDataSOLENTIT->AutoSize = true;
			   lblDynDataSOLENTIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   lblDynDataSOLENTIT->Location = System::Drawing::Point(515, 17);
			   lblDynDataSOLENTIT->Name = L"lblDynDataSOLENTIT";
			   lblDynDataSOLENTIT->Size = System::Drawing::Size(74, 17);
			   lblDynDataSOLENTIT->TabIndex = 3;
			   lblDynDataSOLENTIT->Text = dataEsdevEnt;
			   // 
			   // lblDynPreuSOLENTIT
			   // 
			   lblDynPreuSOLENTIT->AutoSize = true;
			   lblDynPreuSOLENTIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   lblDynPreuSOLENTIT->Location = System::Drawing::Point(370, 17);
			   lblDynPreuSOLENTIT->Name = L"lblDynPreuSOLENTIT";
			   lblDynPreuSOLENTIT->Size = System::Drawing::Size(43, 17);
			   lblDynPreuSOLENTIT->TabIndex = 2;
			   lblDynPreuSOLENTIT->Text = preuEsdev + " �";
			   // 
			   // pnlDynEstatSOLENTIT
			   // 

			   if (estatEsdevEnt == "0") {
				   pnlDynEstatSOLENTIT->BackColor = System::Drawing::Color::OrangeRed;
			   }
			   else if (estatEsdevEnt == "1") {
				   pnlDynEstatSOLENTIT->BackColor = System::Drawing::Color::LimeGreen;
			   }
			   else {
				   pnlDynEstatSOLENTIT->BackColor = System::Drawing::Color::Gold;
			   }
			   pnlDynEstatSOLENTIT->Controls->Add(lblDynEstatSOLENTIT);
			   pnlDynEstatSOLENTIT->ForeColor = System::Drawing::Color::White;
			   pnlDynEstatSOLENTIT->Location = System::Drawing::Point(927-230, 8);
			   pnlDynEstatSOLENTIT->Name = L"pnlDynEstatSOLENTIT";
			   pnlDynEstatSOLENTIT->Size = System::Drawing::Size(143, 29);
			   pnlDynEstatSOLENTIT->TabIndex = 1;
			   // 
			   // lblDynEstatSOLENTIT
			   // 

			   if (estatEsdevEnt == "0") {
				   lblDynEstatSOLENTIT->Text = "DENEGAT";
			   }
			   else if (estatEsdevEnt == "1") {
				   lblDynEstatSOLENTIT->Text = "ACCEPTAT";
			   }
			   else {
				   lblDynEstatSOLENTIT->Text = "EN ESPERA";
			   }
			   lblDynEstatSOLENTIT->AutoSize = true;
			   lblDynEstatSOLENTIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   lblDynEstatSOLENTIT->ForeColor = System::Drawing::Color::White;
			   lblDynEstatSOLENTIT->Location = System::Drawing::Point(40, 6);
			   lblDynEstatSOLENTIT->Name = L"lblDynEstatSOLENTIT";
			   lblDynEstatSOLENTIT->Size = System::Drawing::Size(65, 17);
			   lblDynEstatSOLENTIT->TabIndex = 0;
			   // 
			   // lblDynIDSOLENTIT
			   // 
			   lblDynIDSOLENTIT->AutoSize = true;
			   lblDynIDSOLENTIT->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   lblDynIDSOLENTIT->Location = System::Drawing::Point(28-5, 16);
			   lblDynIDSOLENTIT->Name = L"lblDynIDSOLENTIT";
			   lblDynIDSOLENTIT->Size = System::Drawing::Size(56, 17);
			   lblDynIDSOLENTIT->TabIndex = 0;
			   lblDynIDSOLENTIT->Text = idEnt;
			   lblDynIDSOLENTIT->TextAlign = System::Drawing::ContentAlignment::TopCenter;

			   // 
			   // pnlDynSOLENTIT
			   // 
			   pnlDynSOLENTIT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   pnlDynSOLENTIT->Controls->Add(lblDynEsdevSOLENTIT);
			   pnlDynSOLENTIT->Controls->Add(lblDynDataSOLENTIT);
			   pnlDynSOLENTIT->Controls->Add(lblDynPreuSOLENTIT);
			   pnlDynSOLENTIT->Controls->Add(pnlDynEstatSOLENTIT);
			   pnlDynSOLENTIT->Controls->Add(lblDynIDSOLENTIT);
			   pnlDynSOLENTIT->Location = System::Drawing::Point(3, 3);
			   pnlDynSOLENTIT->Name = L"pnlDynSOLENTIT";
			   pnlDynSOLENTIT->Size = System::Drawing::Size(880, 48);
			   pnlDynSOLENTIT->TabIndex = 0;

			   this->flowLayoutPanelSOLENTIT->Controls->Add(pnlDynSOLENTIT);
		   }

		   private: System::Void pnlTitlesMESDEV_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		   }

				  // ------------ Added by Nima ------------


private: System::Void botonSettingsAjuntament_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PANELbandEntrSolAj->Visible = false;
	this->PANELModificaAjuntament->Visible = true;
}
private: System::Void btn_modificaMODAJUN_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	bool isNumeric1 = Int32::TryParse(txt_poblacio_ajuntamentMODAJUN->Text, number);
	bool isNumeric2 = Int32::TryParse(txt_telefon_ajuntamentMODAJUN->Text, number);

	if (!(isNumeric1 && (Convert::ToInt32(txt_poblacio_ajuntamentMODAJUN->Text) > 0)))
	{
		MessageBox::Show("Poblacio ha de ser un nombre positiu");
	}
	else if (!(isNumeric2 && (Convert::ToInt32(txt_telefon_ajuntamentMODAJUN->Text) > 0))) {
		MessageBox::Show("Telefon ha de ser un nombre positiu");
	}
	else {
		try {
			ctrlModAj.modificaAjuntament(resultAj[0], resultAj[1], Convert::ToInt32(txt_poblacio_ajuntamentMODAJUN->Text), Convert::ToInt32(txt_telefon_ajuntamentMODAJUN->Text), txt_correu_electronic_ajuntamentMODAJUN->Text, txt_contrasenya_ajuntamentMODAJUN->Text);
			MessageBox::Show("Els canvis s'han aplicat amb exit");
		}
		catch (CorreuExisteix^ e1) {
			MessageBox::Show(e1->Message);
		}
	}

	/*
	catch (const std::exception& e)
	{
	// Convertir la excepci�n de C++ a System::String^
	String^ mensajeError = gcnew String(e.what());
	MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	*/
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void botonSettingsEntitat_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelBandejaEntrada->Visible = false;
	this->PANELModificaEntitat->Visible = true;
}
private: System::Void txt_nom_ajuntamentMODAJUN_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_nom_MODENT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_modificaMODENT_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	bool isNumeric = Int32::TryParse(txt_telefon_MODENT->Text, number);

	if (isNumeric && (Convert::ToInt32(txt_telefon_MODENT->Text) > 0))
	{
		//Console::WriteLine("The input is an integer: " + number);
		try {
			ctrlModEnt.modificaEntitat(Convert::ToInt32(resultEnt[0]), txt_nom_MODENT->Text, txt_contrasenya_MODENT->Text, txt_telefon_MODENT->Text, txt_correu_MODENT->Text);
			MessageBox::Show("Els canvis s'han aplicat amb exit");
		}
		catch (CorreuExisteix^ e1) {
			MessageBox::Show(e1->Message);
		}
	}
	else
	{
		MessageBox::Show("Telefon ha de ser nombre");
	}

	/*
	catch (const std::exception& e)
	{
	// Convertir la excepci?n de C++ a System::String^
	String^ mensajeError = gcnew String(e.what());
	MessageBox::Show(mensajeError, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	*/
}
	private: System::Void btn1star_Click(System::Object^ sender, System::EventArgs^ e) {

		CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);
		clickedButton->BackColor = System::Drawing::Color::Gold;

		String^ nomEsdev = clickedButton->NomEsdev;
		InserirPuntuacion(1, nomEsdev);
	}

	private: System::Void btn2star_Click(System::Object^ sender, System::EventArgs^ e) {

		CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);
		clickedButton->BackColor = System::Drawing::Color::Gold;

		String^ nomEsdev = clickedButton->NomEsdev;
		InserirPuntuacion(2, nomEsdev);
	}

	private: System::Void btn3star_Click(System::Object^ sender, System::EventArgs^ e) {

		CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);
		clickedButton->BackColor = System::Drawing::Color::Gold;

		String^ nomEsdev = clickedButton->NomEsdev;
		InserirPuntuacion(3, nomEsdev);
	}

	private: System::Void btn4star_Click(System::Object^ sender, System::EventArgs^ e) {

		CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);
		clickedButton->BackColor = System::Drawing::Color::Gold;

		String^ nomEsdev = clickedButton->NomEsdev;
		InserirPuntuacion(4, nomEsdev);
	}

	private: System::Void btn5star_Click(System::Object^ sender, System::EventArgs^ e) {

		CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);
		clickedButton->BackColor = System::Drawing::Color::Gold;

		String^ nomEsdev = clickedButton->NomEsdev;
		InserirPuntuacion(5, nomEsdev);
	}

	private: System::Void InserirPuntuacion(int punt, String^ nomEsdevenimentPuntuacio) {
		String^ nomEsdev = nomEsdevenimentPuntuacio;
		TxConsultaPuntuacioEsdeveniment esdCons(nomEsdev);
		esdCons.executar();
		PassarelaPuntuacioEsdeveniment punts = esdCons.getResult();

		if (punts.getPuntuacioEsdeveniment() == 0) {
			TxPuntuaEsdeveniment txPuntEsdev(nomEsdev, punt);
			txPuntEsdev.executar();
		}
		else {
			TxModificaPuntuacioEsdeveniment modPunt(punts);
			modPunt.modificaPuntuacio(punt);
		}
	}

	/*private: System::Void btn_atrasMODENT_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PANELModificaEntitat->Visible = false;
	}*/
private: System::Void btnMoreQuantCONS_Click(System::Object^ sender, System::EventArgs^ e) {
	// Assuming _quant is defined somewhere in the class and is an int or float
	if (*(_quant) < 10.0)
		_quant = *(_quant)+1;

	this->lblQuantitatCONS->Text = _quant->ToString();

}
private: System::Void btnLessQuantCONS_Click(System::Object^ sender, System::EventArgs^ e) {
	if (*(_quant) > 1)
		_quant = *(_quant) - 1;
	this->lblQuantitatCONS->Text = _quant->ToString();
}
private: System::Void btnModificaMODESDEV_Clicked(System::Object^ sender, System::EventArgs^ e) {
	try {
		int preu = 0;
		int puntosCost = 0;
		int aforament = 0;
		int puntosDesc = 0;
		String^ TipusIntro = "";
		String^ PreuIntro = this->textBoxPreuMODESDEV->Text;
		if (PreuIntro->Length != 0)
			preu = Convert::ToSingle(PreuIntro);
		String^ DescIntro = this->textBoxDescMODESDEV->Text;
		if (DescIntro->Length != 0)
			TipusIntro = this->textBoxTipusMODESDEV->Text;
		String^ AforamentIntro = this->textBoxAforamentMODESDEV->Text;
		if (AforamentIntro->Length != 0)
			aforament = Convert::ToInt32(AforamentIntro);
		String^ PuntsCostIntro = this->textBoxPuntsCostMODESDEV->Text;
		if (PuntsCostIntro->Length != 0)
			puntosCost = Convert::ToInt32(PuntsCostIntro);
		String^ DataIntro = this->textBoxDataMODESDEV->Text;
		String^ PuntsDescIntro = this->textBoxPuntsRegalMODESDEV->Text;
		if (PuntsDescIntro->Length != 0)
			puntosDesc = Convert::ToInt32(PuntsDescIntro);

		//MessageBox::Show("Hasta aqui!");

		if (preu < 0 || aforament < 0 || puntosCost < 0 || puntosDesc < 0) {

			if (preu < 0) {
				this->lblErrorPreuMODESDEV->Text = "Error: Preu Negatiu\n";
				this->lblErrorPreuMODESDEV->Visible = true;
			}
			if (aforament < 0) {
				this->lblErrorAforamentMODESDEV->Text = "Error: Aforament Negatiu o menor que 0\n";
				this->lblErrorAforamentMODESDEV->Visible = true;
			}
			if (puntosCost < 0) {
				this->lblErrorPuntsCostMODESDEV->Text = "Error: Punts Cost Negatiu\n";
				this->lblErrorPuntsCostMODESDEV->Visible = true;
			}
			if (puntosDesc < 0) {
				this->lblErrorPuntsRegalMODESDEV->Text = "Error: Punts Descompte Negatiu\n";
				this->lblErrorPuntsRegalMODESDEV->Visible = true;
			}
		}
		else {

			CtrlModificaEsdeveniment^ ctrlModEsdev = gcnew CtrlModificaEsdeveniment();

			String^ ESDEV = this->lblNomEsdevCONS->Text;
			if (ESDEV != "") ctrlModEsdev->modificaEsdeveniment(ESDEV, preu, DescIntro, TipusIntro, aforament, puntosCost, DataIntro, puntosDesc);
		}
	}
	catch (int e) {
		if (e == errorData) {
			this->lblErrorDataMODESDEV->Text = "Error: Aquesta Data No �s Futura! \n";
			this->lblErrorDataMODESDEV->Visible = true;
		}
		if (e == errorTipusIncorrecte) {
			this->lblErrorTipusMODESDEV->Text = "Error: Aquest Tipus �s Incorrecte! \n";
			this->lblErrorTipusMODESDEV->Visible = true;
		}
	}


}
	void btnCancelarCompra_Clicked(System::Object^ sender, System::EventArgs^ e) {

		CustomButton^ clickedButton = dynamic_cast<CustomButton^>(sender);

		if (clickedButton != nullptr)
		{
			// Find the parent control of the clicked button
			Control^ parent = clickedButton->Parent;

			// Remove the parent control (panel) from its container
			if (parent != nullptr)
			{
				this->flowLayoutPanelMESDEV->Controls->Remove(parent); // Borra DynPanel del flowPanel.
			}
		}

		TxAnulaRegistreEsdeveniment txAnulRegEsdev(clickedButton->NomEsdev);
		txAnulRegEsdev.executar();
		
	}
};
}
