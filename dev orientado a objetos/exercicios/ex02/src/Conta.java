public class Conta {
    public int numConta;
    protected String tipo;
    private String dono;
    private Float saldo;
    private boolean status;

    public Conta(int n, String t, String d, float s, boolean st){
        this.setNumConta(n);
        this.setTipo(t);
        this.setDono(d);
        this.setSaldo(s);
        this.setStatus(st);
    }
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
    private String getDono(){
        return this.dono;
    }
    private void setDono(String d){
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

}
