#ifndef SKYCOIN_CRYPTO_H
#define SKYCOIN_CRYPTO_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "sha2.h"

#include "bip32.h"
#include "curves.h"

#include "bignum.h"

void create_node(const char* seed_str, HDNode* node);
void compute_sha256sum(const char *seed, uint8_t* digest /*size SHA256_DIGEST_LENGTH*/, size_t seed_lenght);
void genereate_deterministic_key_pair_seckey(const char* seed, uint8_t* seckey);

#endif
