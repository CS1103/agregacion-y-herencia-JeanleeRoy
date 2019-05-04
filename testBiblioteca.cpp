#include "catch.hpp"
#include "Biblioteca.h"
#include "Volumen.h"

SCENARIO("Prueba de biblioteca"){
    GIVEN("Insercion de volumenes"){
        WHEN("Se incluye dos volumenes"){
            Biblioteca biblio(1,1);
            Volumen* v = new Libro("EL mundo",1,1);
            Volumen* r = new Revista("Review",1,2);
            biblio.incluir(v);
            biblio.incluir(r);
            THEN("El numero de volumenes debe ser 2") {
                REQUIRE(biblio.nVolumenes() == 2);
            }
        }
    }
}