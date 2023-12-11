#include <stdio.h>

int main() {

int add(int a, int b) {
<<<<<<< HEAD
           return a + b;
   }
  
int sub(int a, int b) {
         return a - b;
   }
 
int mul(int a, int b) {
           return a * b;
  }

int div(int a, int b) {
        if(b == 0) {
	 printf("error: division by zero \n");
                 return 0;
     }
	 return a / b;
  }
int mod(int a, int b) {
          if(b == 0) {
                 printf("error: division by zero \n");
                 return 0;
          }
          return a % b;
 }
=======
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	if(b == 0) {
		printf("error: division by zero \n");
		return 0;
	}
	return a / b;
}
int mod(int a, int b) {
	if(b == 0) {
		printf("error: division by zero \n");
		return 0;
	}
	return a % b;
}
}
>>>>>>> 833025f92fc3f6b752a891c84db0c0af3cdd42ec
