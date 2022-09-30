 #include <stdio.h>

int main(){
  struct automovel{
  char Nmatricula[10] ; 
  char modelo[50]; 
  int ano;
  char marca[50]; 
  }; 
  struct automovel veiculo, *ponteiro_veiculo;

  ponteiro_veiculo=&veiculo; 

  printf("\n Entre com o num de matricula: "); 
  scanf("%s", &ponteiro_veiculo->Nmatricula);

  printf("\n Entre com o modelo: "); 
  scanf("%s", &ponteiro_veiculo->modelo);

  printf("\n Entre com o ano: "); 
  scanf("%d", &ponteiro_veiculo->ano);

  printf("\n Entre com a marca: "); 
  scanf("%s", &ponteiro_veiculo->marca);


  printf("\n **************cadastro************* \n"); 

  printf("\n matrícula = %s",ponteiro_veiculo->Nmatricula);
  printf("\n modelo = %s",ponteiro_veiculo->modelo);
  printf("\n ano do veículo = %d",ponteiro_veiculo->ano);
printf("\n marca = %s ",ponteiro_veiculo->marca );

}


