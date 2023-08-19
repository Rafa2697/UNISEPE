public class Caneta04 {
    public String modelo;
    private float ponta;
    private boolean tampada;
    private String cor;

    

    public Caneta04(String m, String c, float p){ //este é o método construtor
       this.setModelo(m);
       this.cor = c;
       this.setPonta(p);
       this.tampar();
    }
    public String getModelo(){
        return this.modelo;
    }    
    public void setModelo(String m){
        this.modelo = m;
    }

    public float getPonta(){
        return this.ponta;
    }
    public void setPonta(float p){
        this.ponta = p;
    }

    public void tampar(){
        this.tampada = true;
    }
    public void destampar(){
        this.tampada = false;
    }

    public void status(){
        System.out.println("Sobre a caneta");
        System.out.println("Modelo: " + this.modelo);
        System.out.println("ponta: " + this.getPonta());
        System.out.println("tampada: " + this.tampada);
        System.out.println(this.cor);

    }
}
