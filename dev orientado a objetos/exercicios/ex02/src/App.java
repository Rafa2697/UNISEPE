public class App {
    public static void main(String[] args) throws Exception {
        Conta p1 = new Conta();
       

        p1.setDono("jubileu");
        p1.setNumConta(1111);
        p1.abrirConta("cc");
        

        Conta p2 = new Conta();
        p2.setDono("creuza");
        p2.setNumConta(2222);
        p2.abrirConta("cp");

        p1.depositar(100f);
        p2.depositar(500f);
        p2.sacar(100f);

        p1.estadoAtual();
        p2.estadoAtual();

       
        
    }
}
