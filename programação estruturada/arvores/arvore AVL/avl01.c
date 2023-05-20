#include <stdio.h>
#include <stdlib.h>

//estrutura do nó
typedef struct no{
    int valor;
    struct no *esquerdo, *direito;
    short altura;

}No;

//função que cria um novo nó x -> valor a ser inserido no nó retorna: o endereço do nó riado 

No* novoNo(int x){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = x;
        novo->esquerdo = NULL;
        novo->direito = NULL;
        novo->altura = 0;
    }else{
        printf("\nERRO ao alocar nó em novoNo!\n");
        return novo;
    }
}

//retorna o maior dentre dois valores a, b -> altura de dois nós da árvore

short maior(short a, short b){
    return (a > b)? a: b;
}

//retorna a altura de um nó ou -1 caso ele seja null
short alturaDoNo(No *no){
    if(no == NULL){
        return -1;
    }else{
        return no->altura;
    }
}

// calcula e retorna o fator de balanceamento de um nó 
short fatorDeBalanceamento(No *no){
    if(no){
        return(alturaDoNo(no->esquerdo) - alturaDoNo(no->direito));
    }else{
        return 0;
    }
}

//função para a rotação a esquerda 
No* rotacaoEsquerda(No *r){
    No *y, *f;

    y = r->direito;
    f = y->esquerdo;

    y->esquerdo = r;
    r->direito = f;

    r->altura = maior(alturaDoNo(r->esquerdo), alturaDoNo(r->direito)) + 1;
    y->altura = maior(alturaDoNo(y->esquerdo), alturaDoNo(y->direito)) + 1; 

    return y;
}

//funçaõ para rotação de arvore a direita
No* rotacaoDireita(No *r){
    No *y, *f;

    y = r->esquerdo;
    f = y->direito;

    y->direito = r;
    r->esquerdo = f;

    r->altura = maior(alturaDoNo(r->esquerdo), alturaDoNo(r->direito)) + 1;
    y->altura = maior(alturaDoNo(y->esquerdo), alturaDoNo(y->direito)) + 1;

    return y;
}

//rotação direita esquerda
No* rotacaoDireitaEsquerda(No *r){
    r->direito = rotacaoDireita(r->direito);
    return rotacaoEsquerda(r);
}

//rotacao esquerda direita
No* rotacaoEsquerdaDireita(No *r){
    r->esquerdo = rotacaoEsquerda(r->esquerdo);
    return rotacaoDireita(r);
}

//insere um novo nó na arvore raiz -> raiz da arvore, x -> valor a ser inserido, retorno: endereço do novo nó ou nova raiz após o balancemanto. 

No* inserir(No *raiz, int x){
    if(raiz == NULL) {
        //árvore vazia
        return novoNo(x);
    }else{
    if(x < raiz->valor){
        raiz->esquerdo = inserir(raiz->esquerdo, x);
    }else if(x > raiz->valor){
        raiz->direito = inserir(raiz->direito, x);
    }else{
        printf("\ninsercao nao realizada!\nO elemento %d a existe!\n", x);
    }

    //recalcula a alura de todos os nós entre a raiz e o novo nó inserido
 raiz->altura = maior(alturaDoNo(raiz->esquerdo), alturaDoNo(raiz->direito)) +1;
 
 //verifica a necessidade de rebalancear a árvore
 raiz = balancear(raiz);

 return raiz;
}
}

//função para realiza o balancemaneto da arvore após uma unserção ou remoção. rece o nó que está desbalanceado e retorna a nova raiz após o balanceamento 

No* balancear(No *raiz){
    short fb = fatorDeBalanceamento(raiz);

    //Rotação á esquerda
    if(fp > 1 && fatorDeBalanceamento(raiz->direito) <= 0){
        raiz = rotacaoEsquerda(raiz);
    } //rotação á direita
    else if(fb > 1 && fatorDeBalanceamento(raiz->esquerdo) >= 0){ 
        raiz = rotacaoDireita(raiz);
    }//rotação dupla á esquerda
    else if(fb > 1 && fatorDeBalanceamento(raiz->esquerdo) > 0){
        raiz = rotacaoEsquerdaDireita(raiz);
    }//rotação dupla á direita
    else if(fp < -1 && fatorDeBalanceamento(raiz->direito) > 0){
        raiz = rotacaoDireitaEsquerda(raiz);
    }
}


//remoção de um nó de avore
No* romover(No *raiz, int chave){
    //remove nós folhas (nós sem filhos)
    if (raiz == NULL)
    {
        printf("valor não encontrado\n");
        return NULL;
    }else{ //procurar o nó e romover
        if (raiz->equerdo == NULL && raiz->direito == NULL)
        {
            free(raiz);
            printf("Elemento folha removido: %d !\n", chave);
            return NULL;
        }
        else{
            //remover nós que possuem 2 filhos
            if(raiz->esquerdo != NULL && raiz->direito != NULL){
                No *aux = raiz->esquerdo;
                while (aux->direito != NULL)
                {
                    aux = aux->direito;
                    raiz->valor = aux->valor;
                    aux->valor = chave;
                    printf("elemento trocado: %d !\n", chave);
                    raiz->esquerdo = remover(raiz->esquerdo, chave);
                    return raiz;
                }
                else{
                    //remover nós que possuem apenas 1 filho 
                    No *aux;
                    if (raiz->esquerdo != NULL)
                    {
                        aux = raiz->esquerdo;
                    }
                    else{
                        aux = raiz->direito;
                        free(raiz);
                        printf("Elemento com 1 filho removido: %d !\n", chave);
                        return aux;
                    }
                    
                }
                
            }else{
                if(chave < raiz->valor){
                    raiz->esquerdo = remover(raiz->esquerdo, chave);
                }else{
                    raiz->direito = remover(raiz->direito, chave);
                }
                //recalcula a altura de todos os nós entre a raiz e o novo nó inserido 
                raiz->altura = maior(alturaDoNo(raiz->esquerdo), alturaDoNo(raiz->direito)) + 1;

                //verifica a necessidade de rebalancear a árvore
                raiz = balancear(raiz);
                return raiz;
            }
        }
        
    }
    
}