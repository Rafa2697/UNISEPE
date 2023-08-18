public class Aula02 {
    /**
     * @param args
     */
    public static void main(String[] args){
        Caneta1 c1 = new Caneta1();
        c1.cor = "azul";
        c1.ponta = 0.5f;
        c1.tampada = false;
        c1.carga = 10;
        
        c1.tampar();
      //  c1.status();
        c1.rabiscar();
        
        Caneta1 c2 = new Caneta1();
        c2.modelo = "hostnet";
        c2.cor = "preta";
        c2.destampar();
        c2.rabiscar();
    }
}
