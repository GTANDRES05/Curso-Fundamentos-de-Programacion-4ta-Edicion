/*
Clase padre Animal.
Representa los datos comunes de cualquier animal del refugio.
Atributos privados (encapsulamiento).
 */
public class Animal {

    private int id;
    private String nombre;
    private int edad;
    private String estado;

    public Animal(int id, String nombre, int edad) {
        this.id = id;
        this.nombre = nombre;
        this.edad = edad;
        this.estado = "DISPONIBLE";
    }

    public int getId() {
        return id;
    }

    public String getNombre() {
        return nombre;
    }

    public int getEdad() {
        return edad;
    }

    public String getEstado() {
        return estado;
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }

    public void mostrarInformacion() {
        System.out.println("ID: " + id);
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad: " + edad + " años");
        System.out.println("Estado: " + estado);
    }

    public void realizarAccion() {
        System.out.println(nombre + " no tiene una accion especifica definida.");
    }
}