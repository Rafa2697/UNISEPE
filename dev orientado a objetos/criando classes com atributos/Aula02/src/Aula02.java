public class Aula02 {
    /**
     * @param args
     */
    public static void main(String[] args){
        Caneta c1 = new Caneta();
        c1.cor = "azul";
        c1.ponta = 0.5f;
        c1.tampada = false;
        c1.carga = 10;
        
        c1.rabiscar();
    }
}
