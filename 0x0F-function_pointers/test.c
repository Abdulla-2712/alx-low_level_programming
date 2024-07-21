#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

int main() {

char* my_var_value = getenv("PWD");

if (my_var_value != NULL) {

printf("The value of MY_VAR is %s\n", my_var_value);

} else {

printf("MY_VAR is not set\n");

}

return 0;

}

