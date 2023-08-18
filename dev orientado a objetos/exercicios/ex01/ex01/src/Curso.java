public class Curso {

    int cargaHoras;
    String nome;
    String coordenador;

    void info(){
        System.out.println("o curso é " + this.nome);
        System.out.println("A carga Horária é de " + this.cargaHoras);
        System.out.println("O coordenador do curso se chama " + this.coordenador);
    }

}
