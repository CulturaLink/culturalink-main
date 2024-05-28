#include "pch.h"
#include "TxRegistraEsdeveniment.h"

TxRegistraEsdeveniment::TxRegistraEsdeveniment(int idEnt, String^ nomEsd, float preuEsd, String^ descEsd, String^ ajuntamEsd, String^ tipusEsd, int aforamentEsd, int puntsCostEsd, String^ dataEsd, int puntsDescEsd)
{
    idE = idEnt;
    nomE = nomEsd;
    preuE = preuEsd;
    descripcioE = descEsd;
    ajuntamentE = ajuntamEsd;
    aforamentE = aforamentEsd;
    tipusE = tipusEsd;
    puntsCostE = puntsCostEsd;
    dataE = dataEsd;
    puntsDescE = puntsDescEsd;

	


	//compruebo que no es una fecha futura
    if (dataEsd != "") {
        DateTime fechaEvento = DateTime::Parse(dataEsd);
        DateTime ahora = DateTime::Now;
        if (fechaEvento < ahora) throw(errorDataAnterior);
    }



	//compruebo que el tipus sea correcto
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	conn->Open();
	List<String^>^ tipusValids = gcnew List<String^>();

	String^ consulta = "SELECT tipus FROM esdeveniment";
	MySqlCommand^ cmd = gcnew MySqlCommand(consulta, conn);
	MySqlDataReader^ reader = cmd->ExecuteReader();
	while (reader->Read()) {
		tipusValids->Add(reader["tipus"]->ToString());
	}
	reader->Close();
	conn->Close();
	if (tipusEsd != "") {
		if (!tipusValids->Contains(tipusEsd)) throw (errorTipus);
	}


	//compruebo que el ayuntamiento exista
	String^ connectionString2 = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn2 = gcnew MySqlConnection(connectionString2);
	conn2->Open();
	List<String^>^ ajuntamentsValids = gcnew List<String^>();

	String^ consulta2 = "SELECT ajuntament_esdeveniment FROM esdeveniment";
	MySqlCommand^ cmd2 = gcnew MySqlCommand(consulta2, conn2);
	MySqlDataReader^ reader2 = cmd2->ExecuteReader();
	while (reader2->Read()) {
		ajuntamentsValids->Add(reader2["ajuntament_esdeveniment"]->ToString());
	}
	reader2->Close();
	conn2->Close();
	if (ajuntamEsd != "") {
		if (!ajuntamentsValids->Contains(ajuntamEsd)) throw (errorAjuntament);
	}


	//compruebo que el nombre del esdevenimiento no exista anteriormente
	String^ connectionString3 = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn3 = gcnew MySqlConnection(connectionString3);
	conn3->Open();
	List<String^>^ esdevenimentsExistents = gcnew List<String^>();

	String^ consulta3 = "SELECT nom_esdeveniment FROM esdeveniment";
	MySqlCommand^ cmd3 = gcnew MySqlCommand(consulta3, conn3);
	MySqlDataReader^ reader3 = cmd3->ExecuteReader();
	while (reader3->Read()) {
		esdevenimentsExistents->Add(reader3["nom_esdeveniment"]->ToString());
	}
	reader3->Close();
	conn3->Close();
	if (nomEsd != "") {
		if (esdevenimentsExistents->Contains(nomEsd)) throw (errorEsdevenimentExistent);
	}

}

TxRegistraEsdeveniment::TxRegistraEsdeveniment()
{
    idE = 0;
    nomE = "";
    preuE = 0;
    descripcioE = "";
    ajuntamentE = "";
    aforamentE = 0;
    tipusE = "";
    puntsCostE = 0;
    dataE = "";
    puntsDescE = 0;

}

void TxRegistraEsdeveniment::executar() {
    PassarelaEsdeveniment e(idE, preuE, ajuntamentE, descripcioE, nomE, tipusE, aforamentE, puntsCostE, dataE, puntsDescE);
    e.insereix();
}

