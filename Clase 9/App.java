/*
Titulo: Ejercicio 2 - Constructor y metodos
Autor: Andrés Guachamín
Enunciado: 
    Crear una clase llamada Producto con los atributos nombre, precio y stock.
    La clase debe tener un constructor, un metodo para mostrar la información
    y un método para calcular el valor total de inventario.
*/

public class App {
    public static void main(String[] args) throws Exception {
        // Creamos el primer objeto usando el constructor
        Producto producto1 = new Producto(nombre: "Mouse", precio: 15.5, stock: 10);

        // Creamos el segundo objeto usando el constructor
        Producto producto2 = new Producto(nombre: "Teclado", precio: 25.0, stock: 5);

        System.out.println("Información del producto 1:");

        // Calculamos y mostramos el valor total de inventario
        double valorTotalInventario = producto1.calcularValorTotalInventario();
        System.out.println("Valor total de inventario: " + valorTotalInventario);
    }
}