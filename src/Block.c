#include <stdio.h>
#include "openssl/crypto.h"

struct block {
    unsigned char prevHash[SHA256_DIGEST_LENGTH];
    int blockData;
}
