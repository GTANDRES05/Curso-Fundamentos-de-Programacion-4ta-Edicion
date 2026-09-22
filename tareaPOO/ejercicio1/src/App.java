/*
Clase principal App - Ejercicio 1
Crea dos objetos de tipo Mascota y muestra su informacion en consola.
*/
public class App {
    public static void main(String[] args) {

        Mascota mascota1 = new Mascota("Sky", "Perro", 3);
        Mascota mascota2 = new Mascota("Pascal", "Gato", 2);

        System.out.println("=== Informacion de las mascotas ===");
        mascota1.mostrarInfo();
        mascota2.mostrarInfo();
    }
}