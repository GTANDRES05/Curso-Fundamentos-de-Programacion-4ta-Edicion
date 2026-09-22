/*
Clase Mascota
Representa una mascota sencilla con nombre, especie y edad.
Aqui se practica: clase, atributos, constructor y metodo simple.
*/
public class Mascota {

    String nombre;
    String especie;
    int edad;

    public Mascota(String nombre, String especie, int edad) {
        this.nombre = nombre;
        this.especie = especie;
        this.edad = edad;
    }

    public void mostrarInfo() {
        System.out.println("Nombre: " + nombre);
        System.out.println("Especie: " + especie);
        System.out.println("Edad: " + edad + " años");
        System.out.println("------------------------");
    }
}