public class Caneta {
     
        String modelo;
        String cor;
        float ponta;
        int carga;
        boolean tampada;

        void status(){
            System.out.println("Uma caneta " + this.cor);
            System.out.println("A caneta está tampada: " + this.tampada);
        
        }

        void rabiscar(){
            if(carga <= 10 && tampada == false){
                System.out.println("pode rabiscar");
            }else{
                System.out.println("não pode rabiscar");
            }

        }
        void tampar(){

        }
        void destampar(){
            
        }
        
    
}
