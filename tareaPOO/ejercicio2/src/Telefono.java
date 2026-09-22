/*
Clase Telefono
Representa un telefono con atributos privados (encapsulamiento).
Aqui se practica: atributos privados, constructor, getters, setters
y validacion simple (el precio no puede ser negativo).
*/
public class Telefono {

    private String marca;
    private String modelo;
    private double precio;

    public Telefono(String marca, String modelo, double precio) {
        this.marca = marca;
        this.modelo = modelo;
        if (precio >= 0) {
            this.precio = precio;
        } else {
            this.precio = 0;
            System.out.println("Precio invalido en el constructor, se asigno 0 por defecto.");
        }
    }

    public String getMarca() {
        return marca;
    }

    public String getModelo() {
        return modelo;
    }

    public double getPrecio() {
        return precio;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public void setPrecio(double precio) {
        if (precio >= 0) {
            this.precio = precio;
        } else {
            System.out.println("ERROR: el precio no puede ser negativo. No se actualizo el valor.");
        }
    }

    public void mostrarInfo() {
        System.out.println("Marca: " + marca);
        System.out.println("Modelo: " + modelo);
        System.out.println("Precio: $" + precio);
        System.out.println("------------------------");
    }
}