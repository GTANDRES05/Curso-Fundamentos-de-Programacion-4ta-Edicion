/*
Clase Perro.
Hereda de Animal y agrega el atributo propio "raza".
*/
public class Perro extends Animal {

    private String raza;

    public Perro(int id, String nombre, int edad, String raza) {
        super(id, nombre, edad);
        this.raza = raza;
    }

    public String getRaza() {
        return raza;
    }

    @Override
    public void mostrarInformacion() {
        super.mostrarInformacion();
        System.out.println("Tipo: Perro");
        System.out.println("Raza: " + raza);
    }

    @Override
    public void realizarAccion() {
        System.out.println(getNombre() + " mueve la cola.");
    }
}