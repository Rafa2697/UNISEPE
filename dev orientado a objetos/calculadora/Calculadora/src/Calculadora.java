public class Calculadora {
    public static void main(String[] args) throws Exception {
        double somar, subtrair, multiplicar, dividir;
        Operacoes opera = new Operacoes();

       somar =  opera.soma(10,5.5);
       subtrair = opera.subtracao(10, 5);
       multiplicar = opera.multiplicao(234,560);
       dividir = opera.divisao(200, 2);

        System.out.println("SOMA: "+somar);
        System.out.println("subtrair: "+subtrair);
        System.out.println("multiplicar: "+multiplicar);
        System.out.println("dividir: "+dividir);
    }
}
