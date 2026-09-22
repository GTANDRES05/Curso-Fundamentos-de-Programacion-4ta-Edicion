/*
Titulo: Examen final - Sistema de gestion de personajes
Autor: Andrés Guachamín
Enunciado: 
    - Registrar personajes (Guerrero o Mago) en una coleccion
    - Mostrarlos
    - Buscar uno por su id
    - Aplicar herencia y polimorfismo
*/

public class App {
    public static void main(String[] args) throws Exception {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        java.util.ArrayList<Personaje> personajes = new java.util.ArrayList<>();
        int opcion;

        do {
            System.out.println("\n========== MENÚ ==========");
            System.out.println("1. Registrar personaje");
            System.out.println("2. Mostrar personajes");
            System.out.println("3. Buscar personaje por id");
            System.out.println("4. Salir");
            System.out.print("Seleccione una opción: ");

            try {
                opcion = sc.nextInt();
                sc.nextLine();

                switch (opcion) {
                    case 1:
                        registrarPersonaje(sc, personajes);
                        break;
                    case 2:
                        mostrarPersonajes(personajes);
                        break;
                    case 3:
                        buscarPersonaje(sc, personajes);
                        break;
                    case 4:
                        System.out.println("Saliendo del programa...");
                        break;
                    default:
                        System.out.println("Opción no válida.");
                }
            } catch (java.util.InputMismatchException e) {
                System.out.println("Error: debe ingresar un número. Intente de nuevo.");
                sc.nextLine();
                opcion = 0;
            }

        } while (opcion != 4);

        sc.close();
    }

    public static void registrarPersonaje(java.util.Scanner sc, java.util.ArrayList<Personaje> personajes) {
        System.out.print("Elegir tipo (1 = Guerrero, 2 = Mago): ");
        int tipo = sc.nextInt();
        sc.nextLine();

        System.out.pr
        int("Ingrese id: ");
        int id = sc.nextInt();
        sc.nextLine();

        System.out.print("Ingrese nombre: ");
        String nombre = sc.nextLine();

        System.out.print("Ingrese nivel (1-100): ");
        int nivel = sc.nextInt();
        sc.nextLine();

        if (id <= 0 || nombre.isEmpty() || nivel < 1 || nivel > 100) {
            System.out.println("Datos inválidos. No se registró el personaje.");
            return;
        }

        if (tipo == 1) {
            personajes.add(new Guerrero(id, nombre, nivel));
            System.out.println("Guerrero registrado con éxito.");
        } else if (tipo == 2) {
            personajes.add(new Mago(id, nombre, nivel));
            System.out.println("Mago registrado con éxito.");
        } else {
            System.out.println("Tipo de personaje no válido.");
        }
    }

    public static void mostrarPersonajes(java.util.ArrayList<Personaje> personajes) {
        if (personajes.isEmpty()) {
            System.out.println("No hay personajes registrados.");
            return;
        }

        for (Personaje p : personajes) {
            p.mostrarInfo();
            System.out.println(p.realizarAccion());
            System.out.println("-----------------------------");
        }
    }

        public static void buscarPersonaje(java.util.Scanner sc, java.util.ArrayList<Personaje> personajes) {
        System.out.print("Ingrese el id a buscar: ");
        int idBuscado = sc.nextInt();
        sc.nextLine();

        for (Personaje p : personajes) {
            if (p.getId() == idBuscado) {
                p.mostrarInfo();
                System.out.println(p.realizarAccion());
                return;
            }
        }

        System.out.println("Personaje no encontrado");
    }
}