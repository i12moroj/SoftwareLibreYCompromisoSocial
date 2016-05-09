# include "./includes/miinclude.h"
# include <string.h>

int main(){
	char c[100]= "Hola mundo";
	char d[100]= "Hola";
	int x;
	printf("%s\n", strcat(c,", soy de nueva carteya"));
	printf("%s\n", strcat(d,", y yo soy de Córdoba :)"));
	return 0;
}
