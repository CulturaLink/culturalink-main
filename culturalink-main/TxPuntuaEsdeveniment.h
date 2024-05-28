#include "PassarelaCiutada.h"
#include "PassarelaPuntuacioEsdeveniment.h"
#include "CercadoraPuntuacioEsdeveniment.h"
#include "CercadoraCiutada.h"
#include "PassarelaInscripcio.h"
#include "Transaccio.h"
#include "UsuariIniciat.h"
#include <vector>
#include <string>
#include <chrono>
#include <ctime>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Collections::Generic;


ref class TxPuntuaEsdeveniment : public Transaccio
{
private:
	String^ _nomEsdeveniment;
	int _puntuacioEsdeveniment;
public:
	TxPuntuaEsdeveniment(String^ nomEsdeveniment, int puntuacioEsdeveniment);
	void executar() override;
};