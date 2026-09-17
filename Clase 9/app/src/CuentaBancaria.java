public class CuentaBancaria {
    private String titular;
    private double saldo;

    public CuentaBancaria(String titular, double saldoInicial){
        // guardamos el nombre del titular recibido en el constructor 
        this.titular = titular;

        if(saldoInicial >= 0){
            // Si es valido, guardamos ese saldo en el atributo
            this.saldo = saldoInicial;
        }else{
            // Colocamos el saldo en cero para evitar valores negativos
            this.saldo = 0;
        }
    }
    // El get sirve para objeter el valor de un atributo que se encuentra en privado
    public String getTitular(){
        return titular; 
    }

    public double getSaldo(){
        return saldo;
    }

    // Setter para modificar el nombre del titular
    public void setTitular(String titular){
        if(titular != null && !titular.isEmpty()){
            this.titular = titular;
        }else{
            System.out.println("Erro: el titular no puede estar vacio.");
        }
    }

    // Metodo para depositar dinero a la cuenta
    public void depositar(double monto){
        // Verificamos que el monto sea mayor que cero
        if(monto > 0){
            saldo = saldo + monto; // sumamos el monto al saldo actual
            System.out.println("Deposito realizado correctamente.");
        }else{
            System.out.println("Error: el monto a depositar debe ser mayor que cero.");
        }
    }

    public void retirar(double monto){
        if(monto > 0 && monto <= saldo){
            saldo = saldo - monto;
            System.out.println("Retiro realizado correctamente.");
        }else{
            System.out.println("Error: no se puede retirar ese monto");
        }
    }

}