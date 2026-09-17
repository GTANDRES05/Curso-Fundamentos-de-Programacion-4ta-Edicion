/*
Titulo: Ejercicio 2 - Constructor y metodos
Autor: Jhoantan Torres
Enunciado:
    Crear una clase llamada Producto con los atributos nombre, precio y stock.
    La clase debe tener un constructor, un metodo para mostrar informacion 
    y un metodo para calcular el valor total de inventario
*/

public class App {
    public static void main(String[] args) throws Exception {
        // Creamos el primer objeto usando el constructor
        Producto producto1 = new Producto("Mouse", 15.50, 10);

        // Creamos el segundo objeto usando el constructor
        Producto producto2 = new Producto("Teclado", 25.00, 5);

        System.out.println("=== PRODUCTO 1 ===");
        // Llamamos al metodo mostrarInfo del primer objeto
        producto1.mostrarInfo();
        
        System.out.println("Valor total en inventario: " + producto1.calcularValorInventario());

        System.out.println();

        System.out.println("==== PRODUCTO 2 ===");
        //Llamamos a la metodo
        producto2.mostrarInfo();
        
        System.out.println("Valor total en inventario: " + producto2.calcularValorInventario());
    }
}