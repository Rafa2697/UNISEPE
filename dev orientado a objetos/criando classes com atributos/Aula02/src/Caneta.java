public class Caneta {
     
        String modelo;
        String cor;
        float ponta;
        int carga;
        boolean tampada;

        void status(){
            System.out.println("Uma caneta " + this.cor);
            System.out.println("A caneta está tampada: " + this.tampada);
            System.out.println("Ponta: " + this.ponta);
            System.out.println("Carga: " + this.carga);
            System.out.println("Modelo: " + this.modelo);
        
        }

        void rabiscar(){
            if(this.carga <= 10 && this.tampada == false){
                System.out.println("pode rabiscar");
            }else{
                System.out.println("não pode rabiscar");
            }

        }
        void tampar(){
            this.tampada = true;
        }
        void destampar(){
            this.tampada = false;
        }
        
    
}
