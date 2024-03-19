
#include "pch.h"
#include "Sistema.h"

//PassarelaUsuari Sistema::obteUsuari() {
//
//	return usuari;
//
//}
//
//void Sistema::iniciaSessio(PassarelaUsuari u) {
//	usuari = u;
//
//}
//
//void Sistema::tancaSessio() {
//
//	usuari = PassarelaUsuari(); //en caso de que haya que hacer juegos, hay que programar para que no tenga ninguno, como se ha hecho en el constructor de PassarelaUsuari(),ha puesto toda la info a "".
//
//}
//
//void Sistema::refresca() {
//
//	pqxx::connection conn("dbname=" + DBNAME + " user=" + USER + " password=" + PASSWORD + " hostaddr=" + HOSTADDR + " port=" + PORT);
//	pqxx::work txn(conn);
//	pqxx::result result;
//	result = txn.exec("SELECT * FROM usuari "
//		"WHERE sobrenom = '" + usuari.obteSobrenom() + "' ");
//
//	usuari = PassarelaUsuari(result);
//
//}