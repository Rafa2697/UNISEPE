public class Aula03 {
    public static void main(String[] args) throws Exception {
        Caneta1 c1 = new Caneta1();
        c1.modelo = "bic cristal";
        c1.cor = "Azul";
        //c1.ponta = 0.4f;
        c1.carga = 10;
        c1.tampar();
        c1.status();
        c1.rabiscar();
    }
}
