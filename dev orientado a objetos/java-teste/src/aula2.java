public class aula2 {
    public static void main(String[] args) throws Exception {
        gerarSoma(5, 5);
        
        double resultado = somaDouble(2.5, 5.5);
    }

    public static void gerarSoma(int x, int y){
        int soma = x + y;
        System.out.println("a soma é: " + soma);
    }

    public static double somaDouble(double x, double y){
        double valor = x + y;
        return valor;
    }
}
