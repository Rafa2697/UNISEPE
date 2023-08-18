public class Caneta1 {
     
        public String modelo;
        public String cor;
        private float ponta;
        protected int carga;
        private boolean tampada;

        public void status(){
            System.out.println("Uma caneta " + this.cor);
            System.out.println("A caneta está tampada: " + this.tampada);
            System.out.println("Ponta: " + this.ponta);
            System.out.println("Carga: " + this.carga);
            System.out.println("Modelo: " + this.modelo);
        
        }

        public void rabiscar(){
            if(this.carga <= 1 || this.tampada == false){
                System.out.println("pode rabiscar");
            }else{
                System.out.println("não pode rabiscar");
            }

        }
        public void tampar(){
            this.tampada = true;
        }
        public void destampar(){
            this.tampada = false;
        }
        
    
}
