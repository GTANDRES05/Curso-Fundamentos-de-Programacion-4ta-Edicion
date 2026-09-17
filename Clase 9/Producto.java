public class Producto {
    // Creo los atributos de mi clase Producto
    String nombre;
    double precio;
    int stock;

    // Constructor para crear el objeto con valores iniciales
    public Producto(String nombre, double precio, int stock) {
        this.nombre = nombre; // Guardamos en el atributo nombre el valor recibido por el constructor
        this.precio = precio; // Guardamos en el atributo precio el valor recibido por el constructor
        this.stock = stock;// Guardamos en el atributo pstcok el valor recibido por el constructor
    }

    // CREAR METODOS

    // Metodo que muestra la informacion del producto en consola
    public void mostrarInfo() {
        System.out.println("Nombre: " + nombre); // Mostramos el nombrel del producto
        System.out.println("Precio: " + precio);
        System.out.println("Stock: " + stock);
    }

    // Metodo que calcula el valor total del inventario del producto
    public double calcularValorInventario() {
        // Retornarmos el resultado de multiplicar precio por stock
        return precio * stock;
    }
}