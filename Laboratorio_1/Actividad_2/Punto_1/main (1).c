// FUNCIÓN FACTORIAL DE UN NÚMERO
int factorial (int num){
  int fact = 1;
  for (int i=1; i<=num; i++){
    fact = fact * i;
  }
  return fact;
}

int main(){
  int num;
  printf("Introduce un número: ");
  scanf("%d", &num);
  printf("El factorial de %d es %d\n", num, factorial(num));
}