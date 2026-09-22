# Sistema de Gestión — Refugio de Animales

**Autor:** Andrés Guachamín
**Curso:** Bootcamp Programación Cero a POO — Torres Academy
**Tarea:** Tarea integradora — Java POO

## Descripción
Aplicación de consola en Java que permite registrar perros y gatos en un refugio,
consultar los animales almacenados, buscarlos por ID y gestionar su adopción.
El proyecto aplica clases, objetos, encapsulamiento, herencia, polimorfismo,
colecciones con `ArrayList` y manejo básico de excepciones.

## Clases
- **Animal**: clase padre con los datos comunes (id, nombre, edad, estado).
- **Perro**: hereda de Animal, agrega el atributo `raza`.
- **Gato**: hereda de Animal, agrega el atributo `color`.
- **Refugio**: administra la colección `ArrayList<Animal>` (registrar, buscar, mostrar, adoptar).
- **Main**: contiene el `Scanner` y el menú; coordina la interacción con el usuario.

## Funcionalidades
1. Registrar animal (perro o gato), con validación de ID, nombre y edad.
2. Mostrar todos los animales registrados (evidencia el polimorfismo con `realizarAccion()`).
3. Buscar un animal por ID (búsqueda secuencial).
4. Adoptar un animal (cambia su estado de `DISPONIBLE` a `ADOPTADO`).
5. Salir del programa.

## Instrucciones de ejecución
1. Clonar el repositorio.
2. Compilar todos los archivos: