#include <string.h>

#include <openssl/bio.h>

#include <openssl/x509_vfy.h>

#include <openssl/ssl.h>

# 1 
static int broken_session_ticket_cb(SSL *s, unsigned char *key_name, unsigned char *iv,
                                    EVP_CIPHER_CTX *ctx, HMAC_CTX *hctx, int enc)
{
    return 0;
}