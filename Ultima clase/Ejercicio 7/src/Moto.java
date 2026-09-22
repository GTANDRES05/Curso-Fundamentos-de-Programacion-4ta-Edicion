public class Moto {
    private int numeroPuertas;

    public Auto(string placa, string marca) {
        super(placa, marca);
    }
    
    @Override
    public double calcularTarifa() {
        return 2.00; // Ejemplo de tarifa fija para automóviles
    }

    @Override
    public string obtenerTipo() {
        return "Automóvil";
    }
}


