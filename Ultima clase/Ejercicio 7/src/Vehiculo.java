public class Vehiculo {
    private string placa;
    private string marca;

    public Vehiculo(string placa, string marca) {
        this.placa = placa;
        this.marca = marca;
    }

    public string getPlaca() {
        return placa;
    }

    public string getMarca() {
        return marca;
    }

    // Metodos que despues voy a sobreescribir
    public double calcularTarifa() {
        return 0.0; // Valor por defecto, se puede modificar según la lógica del estacionamiento
    }

    public string obtenerTipo() {
        // Implementación para obtener el tipo de vehículo
        return "Vehículo genérico"; // Valor por defecto, se puede modificar según la lógica del estacionamiento
    }

}
