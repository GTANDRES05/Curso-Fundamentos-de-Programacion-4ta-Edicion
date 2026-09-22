import java.util.ArrayList;

/*
Clase Refugio.
Administra la coleccion de animales: registro, busqueda, listado y adopcion.
Main no debe contener esta logica; aqui vive toda la gestion.
*/
public class Refugio {

    private ArrayList<Animal> animales;

    public Refugio() {
        animales = new ArrayList<>();
    }

    public boolean estaVacio() {
        return animales.isEmpty();
    }

    public boolean registrarAnimal(Animal animal) {
        if (animal.getId() <= 0) {
            System.out.println("ERROR: el ID debe ser mayor que 0.");
            return false;
        }
        if (buscarPorId(animal.getId()) != null) {
            System.out.println("ERROR: ya existe un animal registrado con el ID " + animal.getId() + ".");
            return false;
        }
        if (animal.getNombre() == null || animal.getNombre().trim().isEmpty()) {
            System.out.println("ERROR: el nombre no puede estar vacio.");
            return false;
        }
        if (animal.getEdad() < 0) {
            System.out.println("ERROR: la edad no puede ser negativa.");
            return false;
        }

        animales.add(animal);
        System.out.println("Animal registrado correctamente.");
        return true;
    }

    public Animal buscarPorId(int id) {
        for (Animal a : animales) {
            if (a.getId() == id) {
                return a;
            }
        }
        return null;
    }

    public void mostrarAnimales() {
        if (animales.isEmpty()) {
            System.out.println("El refugio no tiene animales registrados todavia.");
            return;
        }
        for (Animal a : animales) {
            System.out.println("------------------------");
            a.mostrarInformacion();
            a.realizarAccion();
        }
        System.out.println("------------------------");
    }

    public boolean adoptarAnimal(int id) {
        if (animales.isEmpty()) {
            System.out.println("El refugio no tiene animales registrados todavia.");
            return false;
        }

        Animal animal = buscarPorId(id);

        if (animal == null) {
            System.out.println("Animal no encontrado.");
            return false;
        }

        if (animal.getEstado().equals("ADOPTADO")) {
            System.out.println("Este animal ya esta adoptado.");
            return false;
        }

        animal.setEstado("ADOPTADO");
        System.out.println("El animal " + animal.getNombre() + " fue adoptado exitosamente.");
        return true;
    }
}