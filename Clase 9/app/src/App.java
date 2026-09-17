/*
Titulo: Ejercicio 3 - Encapsulamiento, getters, setters y validacion
Autor: Jhonatan Torres
Fecha: 16 de septiembre 

Enunciado: 
    Crear una clase llamada CuentaBancaria con los atributos privados titular
    y saldo. 
    La clase debe permitir consultar y modificar sus datos de forma controlada usando getters, setters y metodos
    con validaciones
*/

public class App {
    public static void main(String[] args) throws Exception {
        CuentaBancaria cuenta1 = new CuentaBancaria("Jhonatan", 100.00);

        System.out.println("=== DATOS INICIALES ===");
        // consultamos el titular y el saldo usando los getters

        System.out.println();

        cuenta1.setTitular("Paul"); // Cambiamos el nombre del titular usando el setter
        System.out.println("Nuevo titular: " + cuenta1.getTitular()); // Mostramos el nuevo titular

        System.out.println();

        cuenta1.depositar(50.0);
        cuenta1.retirar(30.0);

        cuenta1.retirar(200.00); // Intentamos realizar un retiro invalido
        cuenta1.depositar(-10.0); // Intentamos realizar un deposito invalido

        System.out.println();

        System.out.println("=== DATOS FINALES ===");
        System.out.println("Titular: " + cuenta1.getTitular());
        System.out.println("Saldo: " + cuenta1.getSaldo());
    }
}