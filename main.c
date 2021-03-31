#include "name.h"

int main(int ac, char *av[]) {
    char *text = (char*) calloc(START_MAX_TEXT, 1);
    text_reader(ac, av, &text);
    printf("%s\n", text);
}