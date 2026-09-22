/*
Clase principal App - Ejercicio 2
Crea un objeto Telefono, muestra su informacion, prueba un cambio de
precio valido y uno invalido usando los setters, y vuelve a mostrar el resultado.
*/
public class App {
    public static void main(String[] args) {

        Telefono telefono1 = new Telefono("Samsung", "A15", 250.0);

        System.out.println("=== Informacion inicial ===");
        telefono1.mostrarInfo();

        System.out.println("Probando cambio de precio valido (300.0):");
        telefono1.setPrecio(300.0);
        telefono1.mostrarInfo();

        System.out.println("Probando cambio de precio invalido (-50.0):");
        telefono1.setPrecio(-50.0);
        telefono1.mostrarInfo();

        telefono1.setModelo("A25");
        System.out.println("Despues de cambiar el modelo:");
        telefono1.mostrarInfo();
    }
}