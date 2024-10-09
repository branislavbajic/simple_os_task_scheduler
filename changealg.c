#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char* argv[]) {

    if (argc == 3) {
        chalg(argv[1], atoi(argv[2]));
    }

    exit(0);
}
