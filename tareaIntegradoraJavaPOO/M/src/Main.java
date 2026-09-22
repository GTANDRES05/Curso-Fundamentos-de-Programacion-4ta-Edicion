import java.util.Scanner;

/*
Clase principal Main.
Se encarga del Scanner, el menu y la interaccion con el usuario.
Toda la logica de negocio vive en Refugio; aqui solo se coordina.
*/
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Refugio refugio = new Refugio();
        boolean salir = false;

        while (!salir) {
            System.out.println("\n=========== REFUGIO ===========");
            System.out.println("1. Registrar animal");
            System.out.println("2. Mostrar animales");
            System.out.println("3. Buscar animal por ID");
            System.out.println("4. Adoptar animal");
            System.out.println("5. Salir");
            System.out.print("Seleccione una opcion: ");

            int opcion;
            try {
                opcion = Integer.parseInt(sc.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("ERROR: debe ingresar un numero valido.");
                continue;
            }

            if (opcion < 1 || opcion > 5) {
                System.out.println("ERROR: opcion invalida, elija un valor entre 1 y 5.");
                continue;
            }

            switch (opcion) {
                case 1:
                    registrarAnimal(sc, refugio);
                    break;
                case 2:
                    refugio.mostrarAnimales();
                    break;
                case 3:
                    buscarAnimal(sc, refugio);
                    break;
                case 4:
                    adoptarAnimal(sc, refugio);
                    break;
                case 5:
                    salir = true;
                    System.out.println("Saliendo del programa...");
                    break;
            }
        }

        sc.close();
    }

    private static void registrarAnimal(Scanner sc, Refugio refugio) {
        try {
            System.out.print("Elija el tipo (1 = Perro, 2 = Gato): ");
            int tipo = Integer.parseInt(sc.nextLine());

            if (tipo != 1 && tipo != 2) {
                System.out.println("ERROR: tipo invalido, debe ser 1 o 2.");
                return;
            }

            System.out.print("Ingrese el ID: ");
            int id = Integer.parseInt(sc.nextLine());

            System.out.print("Ingrese el nombre: ");
            String nombre = sc.nextLine();

            System.out.print("Ingrese la edad: ");
            int edad = Integer.parseInt(sc.nextLine());

            Animal nuevoAnimal;

            if (tipo == 1) {
                System.out.print("Ingrese la raza: ");
                String raza = sc.nextLine();
                nuevoAnimal = new Perro(id, nombre, edad, raza);
            } else {
                System.out.print("Ingrese el color: ");
                String color = sc.nextLine();
                nuevoAnimal = new Gato(id, nombre, edad, color);
            }

            refugio.registrarAnimal(nuevoAnimal);

        } catch (NumberFormatException e) {
            System.out.println("ERROR: debe ingresar un numero valido en ID o edad.");
        }
    }

    private static void buscarAnimal(Scanner sc, Refugio refugio) {
        if (refugio.estaVacio()) {
            System.out.println("El refugio no tiene animales registrados todavia.");
            return;
        }

        try {
            System.out.print("Ingrese el ID a buscar: ");
            int id = Integer.parseInt(sc.nextLine());

            Animal encontrado = refugio.buscarPorId(id);

            if (encontrado == null) {
                System.out.println("Animal no encontrado.");
            } else {
                System.out.println("------------------------");
                encontrado.mostrarInformacion();
                encontrado.realizarAccion();
                System.out.println("------------------------");
            }

        } catch (NumberFormatException e) {
            System.out.println("ERROR: debe ingresar un numero valido para el ID.");
        }
    }

    private static void adoptarAnimal(Scanner sc, Refugio refugio) {
        try {
            System.out.print("Ingrese el ID del animal a adoptar: ");
            int id = Integer.parseInt(sc.nextLine());

            refugio.adoptarAnimal(id);

        } catch (NumberFormatException e) {
            System.out.println("ERROR: debe ingresar un numero valido para el ID.");
        }
    }
}