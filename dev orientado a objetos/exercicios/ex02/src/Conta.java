public class Conta {
    //atributos
    public int numConta;
    protected String tipo;
    private String dono;
    private Float saldo;
    private boolean status;

    //metodo especial (contructor) será executado sempre que uma nova classe for estanciada.(virar um objeto).
    public Conta(){
        this.setSaldo(0f);
        this.setStatus(false);
    }
    //metodos get e set
    //numconta
    public int getNumConta(){
        return this.numConta;
    }
    public void setNumConta(int n){
        this.numConta = n;
    }
    //tipo conta
    protected String getTipo(){
        return this.tipo;
    }
    protected void setTipo(String t){
        this.tipo = t;
    }
    //dono da conta
    public String getDono(){
        return this.dono;
    }
    public void setDono(String d){
        this.dono = d;
    }
    //saldo da conta
    private Float getSaldo(){
        return this.saldo;
    }
    private void setSaldo(Float s){
        this.saldo = s;
    }
    //status da conta
    private boolean getStatus(){
        return this.status;
    }
    private void setStatus(boolean st){
        this.status = st;
    }
    //métodos personalizados

    public void abrirConta(String t){
        this.setTipo(t);
        this.setStatus(true);
        if (t == "cc") {
            this.setSaldo(50f);
        } else if(t == "cp"){
            this.setSaldo(150f);
        }
        System.out.println("conta aberta com sucesso");
    }
    public void fecharConta(){
        if(this.getSaldo() > 0){
            System.out.println("Conta não pode ser fechada pois ainda tem dinheiro.");
        }else if(this.getSaldo() < 0){
            System.out.println("Conta não pode ser fechada pois tem débitos.");
        }else{
            this.setStatus(false);
            System.out.println("Conta fechada com sucesso!");
        }
    }
    public void depositar(float v){
        if(this.getStatus()){
            this.setSaldo(this.getSaldo() + v);
            System.out.println("Deposito realizado com sucesso na contra de " + this.getDono());
        }else{
            System.out.println("Impossivel depositar em uma conta fechada");
        }
    }
    public void sacar(float v){
        if(this.getStatus()){
           if(this.getSaldo() >= v){
            this.setSaldo(this.getSaldo() - v);
            System.out.println("Saque realizado na conta de " + this.getDono());
           }else{
            System.out.println("Saldo insuficiente para saque");
           }
        }else{
           System.out.println("Impossivel sacar de uma conta fechada!");
        }
    }
    public void pegarMensal(){
        int v = 0;
        if(this.getTipo() == "cc"){
            v = 12;
        }else if(this.getTipo() == "cp"){
            v = 20;
        }
        if(this.getStatus()){
            this.setSaldo(this.getSaldo() - v);
            System.out.println("mensaliadade paga por " + this.getDono());
        }else{
            System.out.println("impossivel pagar em uma conta fechada");
        }
    }

    public void estadoAtual(){
        System.out.println("==========================================");
        System.out.println("dono da conta: " + this.dono);
        System.out.println("numero da conta: " + this.numConta);
        System.out.println("tipo de conta: " + this.getTipo());
        System.out.println("quantia na conta: R$:" + this.getSaldo());
        System.out.println("Status " + this.getStatus());
    }

}
