#ifndef crypto_scalarmult_curve25519_H
#define crypto_scalarmult_curve25519_H

#define crypto_scalarmult_curve25519_tinyssh_BYTES 32
#define crypto_scalarmult_curve25519_tinyssh_SCALARBYTES 32
extern int crypto_scalarmult_curve25519_tinyssh(unsigned char *,
                                                const unsigned char *,
                                                const unsigned char *);
extern int crypto_scalarmult_curve25519_tinyssh_base(unsigned char *,
                                                     const unsigned char *);

#define crypto_scalarmult_curve25519 crypto_scalarmult_curve25519_tinyssh
#define crypto_scalarmult_curve25519_base                                      \
    crypto_scalarmult_curve25519_tinyssh_base
#define crypto_scalarmult_curve25519_BYTES                                     \
    crypto_scalarmult_curve25519_tinyssh_BYTES
#define crypto_scalarmult_curve25519_SCALARBYTES                               \
    crypto_scalarmult_curve25519_tinyssh_SCALARBYTES
#define crypto_scalarmult_curve25519_IMPLEMENTATION "tinyssh"
#define crypto_scalarmult_curve25519_VERSION "-"

#endif
