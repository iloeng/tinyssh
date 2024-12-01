/* auto-generated: cd cryptoint; ./autogen */
/* cryptoint 20241003 */

#ifndef crypto_uint64_h
#define crypto_uint64_h

#include <inttypes.h>
#define crypto_uint64 uint64_t
#define crypto_uint64_signed int64_t

#define crypto_uint64_signed_optblocker tinyssh_uint64_signed_optblocker
extern volatile crypto_uint64_signed crypto_uint64_signed_optblocker;

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_load(const unsigned char *crypto_uint64_s) {
  crypto_uint64 crypto_uint64_z = 0;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 0;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 8;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 16;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 24;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 32;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 40;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 48;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 56;
  return crypto_uint64_z;
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_load_bigendian(const unsigned char *crypto_uint64_s) {
  crypto_uint64 crypto_uint64_z = 0;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 56;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 48;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 40;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 32;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 24;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 16;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 8;
  crypto_uint64_z |= ((crypto_uint64) (*crypto_uint64_s++)) << 0;
  return crypto_uint64_z;
}

__attribute__((unused))
static inline
void crypto_uint64_store(unsigned char *crypto_uint64_s,crypto_uint64 crypto_uint64_x) {
  *crypto_uint64_s++ = crypto_uint64_x >> 0;
  *crypto_uint64_s++ = crypto_uint64_x >> 8;
  *crypto_uint64_s++ = crypto_uint64_x >> 16;
  *crypto_uint64_s++ = crypto_uint64_x >> 24;
  *crypto_uint64_s++ = crypto_uint64_x >> 32;
  *crypto_uint64_s++ = crypto_uint64_x >> 40;
  *crypto_uint64_s++ = crypto_uint64_x >> 48;
  *crypto_uint64_s++ = crypto_uint64_x >> 56;
}

__attribute__((unused))
static inline
void crypto_uint64_store_bigendian(unsigned char *crypto_uint64_s,crypto_uint64 crypto_uint64_x) {
  *crypto_uint64_s++ = crypto_uint64_x >> 56;
  *crypto_uint64_s++ = crypto_uint64_x >> 48;
  *crypto_uint64_s++ = crypto_uint64_x >> 40;
  *crypto_uint64_s++ = crypto_uint64_x >> 32;
  *crypto_uint64_s++ = crypto_uint64_x >> 24;
  *crypto_uint64_s++ = crypto_uint64_x >> 16;
  *crypto_uint64_s++ = crypto_uint64_x >> 8;
  *crypto_uint64_s++ = crypto_uint64_x >> 0;
}

__attribute__((unused))
static inline
crypto_uint64_signed crypto_uint64_signed_negative_mask(crypto_uint64_signed crypto_uint64_x) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("sarq $63,%0" : "+r"(crypto_uint64_x) : : "cc");
  return crypto_uint64_x;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64_signed crypto_uint64_y;
  __asm__ ("asr %0,%1,63" : "=r"(crypto_uint64_y) : "r"(crypto_uint64_x) : );
  return crypto_uint64_y;
#else
  crypto_uint64_x >>= 64-6;
  crypto_uint64_x += crypto_uint64_signed_optblocker;
  crypto_uint64_x >>= 5;
  return crypto_uint64_x;
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_topbit_01(crypto_uint64 crypto_uint64_x) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("shrq $63,%0" : "+r"(crypto_uint64_x) : : "cc");
  return crypto_uint64_x;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64_signed crypto_uint64_y;
  __asm__ ("lsr %0,%1,63" : "=r"(crypto_uint64_y) : "r"(crypto_uint64_x) : );
  return crypto_uint64_y;
#else
  crypto_uint64_x >>= 64-6;
  crypto_uint64_x += crypto_uint64_signed_optblocker;
  crypto_uint64_x >>= 5;
  return crypto_uint64_x;
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_topbit_mask(crypto_uint64 crypto_uint64_x) {
  return crypto_uint64_signed_negative_mask(crypto_uint64_x);
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_bottombit_mask(crypto_uint64 crypto_uint64_x) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("andq $1,%0" : "+r"(crypto_uint64_x) : : "cc");
  return -crypto_uint64_x;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_y;
  __asm__ ("sbfx %0,%1,0,1" : "=r"(crypto_uint64_y) : "r"(crypto_uint64_x) : );
  return crypto_uint64_y;
#else
  crypto_uint64_x &= 1 + crypto_uint64_signed_optblocker;
  return -crypto_uint64_x;
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_bottombit_01(crypto_uint64 crypto_uint64_x) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("andq $1,%0" : "+r"(crypto_uint64_x) : : "cc");
  return crypto_uint64_x;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_y;
  __asm__ ("ubfx %0,%1,0,1" : "=r"(crypto_uint64_y) : "r"(crypto_uint64_x) : );
  return crypto_uint64_y;
#else
  crypto_uint64_x &= 1 + crypto_uint64_signed_optblocker;
  return crypto_uint64_x;
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_bitinrangepublicpos_mask(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_s) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("shrq %%cl,%0" : "+r"(crypto_uint64_x) : "c"(crypto_uint64_s) : "cc");
#elif defined(__GNUC__) && defined(__aarch64__)
  __asm__ ("lsr %0,%0,%1" : "+r"(crypto_uint64_x) : "r"(crypto_uint64_s) : );
#else
  crypto_uint64_x >>= crypto_uint64_s ^ crypto_uint64_signed_optblocker;
#endif
  return crypto_uint64_bottombit_mask(crypto_uint64_x);
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_bitinrangepublicpos_01(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_s) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("shrq %%cl,%0" : "+r"(crypto_uint64_x) : "c"(crypto_uint64_s) : "cc");
#elif defined(__GNUC__) && defined(__aarch64__)
  __asm__ ("lsr %0,%0,%1" : "+r"(crypto_uint64_x) : "r"(crypto_uint64_s) : );
#else
  crypto_uint64_x >>= crypto_uint64_s ^ crypto_uint64_signed_optblocker;
#endif
  return crypto_uint64_bottombit_01(crypto_uint64_x);
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_shlmod(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_s) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("shlq %%cl,%0" : "+r"(crypto_uint64_x) : "c"(crypto_uint64_s) : "cc");
#elif defined(__GNUC__) && defined(__aarch64__)
  __asm__ ("lsl %0,%0,%1" : "+r"(crypto_uint64_x) : "r"(crypto_uint64_s) : );
#else
  int crypto_uint64_k, crypto_uint64_l;
  for (crypto_uint64_l = 0,crypto_uint64_k = 1;crypto_uint64_k < 64;++crypto_uint64_l,crypto_uint64_k *= 2)
    crypto_uint64_x ^= (crypto_uint64_x ^ (crypto_uint64_x << crypto_uint64_k)) & crypto_uint64_bitinrangepublicpos_mask(crypto_uint64_s,crypto_uint64_l);
#endif
  return crypto_uint64_x;
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_shrmod(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_s) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("shrq %%cl,%0" : "+r"(crypto_uint64_x) : "c"(crypto_uint64_s) : "cc");
#elif defined(__GNUC__) && defined(__aarch64__)
  __asm__ ("lsr %0,%0,%1" : "+r"(crypto_uint64_x) : "r"(crypto_uint64_s) : );
#else
  int crypto_uint64_k, crypto_uint64_l;
  for (crypto_uint64_l = 0,crypto_uint64_k = 1;crypto_uint64_k < 64;++crypto_uint64_l,crypto_uint64_k *= 2)
    crypto_uint64_x ^= (crypto_uint64_x ^ (crypto_uint64_x >> crypto_uint64_k)) & crypto_uint64_bitinrangepublicpos_mask(crypto_uint64_s,crypto_uint64_l);
#endif
  return crypto_uint64_x;
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_bitmod_mask(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_s) {
  crypto_uint64_x = crypto_uint64_shrmod(crypto_uint64_x,crypto_uint64_s);
  return crypto_uint64_bottombit_mask(crypto_uint64_x);
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_bitmod_01(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_s) {
  crypto_uint64_x = crypto_uint64_shrmod(crypto_uint64_x,crypto_uint64_s);
  return crypto_uint64_bottombit_01(crypto_uint64_x);
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_nonzero_mask(crypto_uint64 crypto_uint64_x) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $-1,%1\n testq %2,%2\n cmovneq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,0\n csetm %0,ne" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x) : "cc");
  return crypto_uint64_z;
#else
  crypto_uint64_x |= -crypto_uint64_x;
  return crypto_uint64_signed_negative_mask(crypto_uint64_x);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_nonzero_01(crypto_uint64 crypto_uint64_x) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $1,%1\n testq %2,%2\n cmovneq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,0\n cset %0,ne" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x) : "cc");
  return crypto_uint64_z;
#else
  crypto_uint64_x |= -crypto_uint64_x;
  return crypto_uint64_topbit_01(crypto_uint64_x);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_zero_mask(crypto_uint64 crypto_uint64_x) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $-1,%1\n testq %2,%2\n cmoveq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,0\n csetm %0,eq" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x) : "cc");
  return crypto_uint64_z;
#else
  return ~crypto_uint64_nonzero_mask(crypto_uint64_x);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_zero_01(crypto_uint64 crypto_uint64_x) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $1,%1\n testq %2,%2\n cmoveq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,0\n cset %0,eq" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x) : "cc");
  return crypto_uint64_z;
#else
  return 1-crypto_uint64_nonzero_01(crypto_uint64_x);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_unequal_mask(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $-1,%1\n cmpq %3,%2\n cmovneq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,%2\n csetm %0,ne" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#else
  return crypto_uint64_nonzero_mask(crypto_uint64_x ^ crypto_uint64_y);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_unequal_01(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $1,%1\n cmpq %3,%2\n cmovneq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,%2\n cset %0,ne" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#else
  return crypto_uint64_nonzero_01(crypto_uint64_x ^ crypto_uint64_y);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_equal_mask(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $-1,%1\n cmpq %3,%2\n cmoveq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,%2\n csetm %0,eq" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#else
  return ~crypto_uint64_unequal_mask(crypto_uint64_x,crypto_uint64_y);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_equal_01(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $1,%1\n cmpq %3,%2\n cmoveq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,%2\n cset %0,eq" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#else
  return 1-crypto_uint64_unequal_01(crypto_uint64_x,crypto_uint64_y);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_min(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("cmpq %1,%0\n cmovaq %1,%0" : "+r"(crypto_uint64_x) : "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_x;
#elif defined(__GNUC__) && defined(__aarch64__)
  __asm__ ("cmp %0,%1\n csel %0,%0,%1,lo" : "+r"(crypto_uint64_x) : "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_x;
#else
  crypto_uint64 crypto_uint64_r = crypto_uint64_y ^ crypto_uint64_x;
  crypto_uint64 crypto_uint64_z = crypto_uint64_y - crypto_uint64_x;
  crypto_uint64_z ^= crypto_uint64_r & (crypto_uint64_z ^ crypto_uint64_y ^ (((crypto_uint64) 1) << (64-1)));
  crypto_uint64_z = crypto_uint64_signed_negative_mask(crypto_uint64_z);
  crypto_uint64_z &= crypto_uint64_r;
  return crypto_uint64_x ^ crypto_uint64_z;
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_max(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  __asm__ ("cmpq %1,%0\n cmovbq %1,%0" : "+r"(crypto_uint64_x) : "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_x;
#elif defined(__GNUC__) && defined(__aarch64__)
  __asm__ ("cmp %0,%1\n csel %0,%1,%0,lo" : "+r"(crypto_uint64_x) : "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_x;
#else
  crypto_uint64 crypto_uint64_r = crypto_uint64_y ^ crypto_uint64_x;
  crypto_uint64 crypto_uint64_z = crypto_uint64_y - crypto_uint64_x;
  crypto_uint64_z ^= crypto_uint64_r & (crypto_uint64_z ^ crypto_uint64_y ^ (((crypto_uint64) 1) << (64-1)));
  crypto_uint64_z = crypto_uint64_signed_negative_mask(crypto_uint64_z);
  crypto_uint64_z &= crypto_uint64_r;
  return crypto_uint64_y ^ crypto_uint64_z;
#endif
}

__attribute__((unused))
static inline
void crypto_uint64_minmax(crypto_uint64 *crypto_uint64_p,crypto_uint64 *crypto_uint64_q) {
  crypto_uint64 crypto_uint64_x = *crypto_uint64_p;
  crypto_uint64 crypto_uint64_y = *crypto_uint64_q;
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmpq %2,%1\n movq %1,%0\n cmovaq %2,%1\n cmovaq %0,%2" : "=&r"(crypto_uint64_z), "+&r"(crypto_uint64_x), "+r"(crypto_uint64_y) : : "cc");
  *crypto_uint64_p = crypto_uint64_x;
  *crypto_uint64_q = crypto_uint64_y;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_r, crypto_uint64_s;
  __asm__ ("cmp %2,%3\n csel %0,%2,%3,lo\n csel %1,%3,%2,lo" : "=&r"(crypto_uint64_r), "=r"(crypto_uint64_s) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  *crypto_uint64_p = crypto_uint64_r;
  *crypto_uint64_q = crypto_uint64_s;
#else
  crypto_uint64 crypto_uint64_r = crypto_uint64_y ^ crypto_uint64_x;
  crypto_uint64 crypto_uint64_z = crypto_uint64_y - crypto_uint64_x;
  crypto_uint64_z ^= crypto_uint64_r & (crypto_uint64_z ^ crypto_uint64_y ^ (((crypto_uint64) 1) << (64-1)));
  crypto_uint64_z = crypto_uint64_signed_negative_mask(crypto_uint64_z);
  crypto_uint64_z &= crypto_uint64_r;
  crypto_uint64_x ^= crypto_uint64_z;
  crypto_uint64_y ^= crypto_uint64_z;
  *crypto_uint64_p = crypto_uint64_x;
  *crypto_uint64_q = crypto_uint64_y;
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_smaller_mask(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $-1,%1\n cmpq %3,%2\n cmovbq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,%2\n csetm %0,lo" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#else
  crypto_uint64 crypto_uint64_r = crypto_uint64_x ^ crypto_uint64_y;
  crypto_uint64 crypto_uint64_z = crypto_uint64_x - crypto_uint64_y;
  crypto_uint64_z ^= crypto_uint64_r & (crypto_uint64_z ^ crypto_uint64_x ^ (((crypto_uint64) 1) << (64-1)));
  return crypto_uint64_signed_negative_mask(crypto_uint64_z);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_smaller_01(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $1,%1\n cmpq %3,%2\n cmovbq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,%2\n cset %0,lo" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#else
  crypto_uint64 crypto_uint64_r = crypto_uint64_x ^ crypto_uint64_y;
  crypto_uint64 crypto_uint64_z = crypto_uint64_x - crypto_uint64_y;
  crypto_uint64_z ^= crypto_uint64_r & (crypto_uint64_z ^ crypto_uint64_x ^ (((crypto_uint64) 1) << (64-1)));
  return crypto_uint64_topbit_01(crypto_uint64_z);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_leq_mask(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $-1,%1\n cmpq %3,%2\n cmovbeq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,%2\n csetm %0,ls" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#else
  return ~crypto_uint64_smaller_mask(crypto_uint64_y,crypto_uint64_x);
#endif
}

__attribute__((unused))
static inline
crypto_uint64 crypto_uint64_leq_01(crypto_uint64 crypto_uint64_x,crypto_uint64 crypto_uint64_y) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 crypto_uint64_q,crypto_uint64_z;
  __asm__ ("xorq %0,%0\n movq $1,%1\n cmpq %3,%2\n cmovbeq %1,%0" : "=&r"(crypto_uint64_z), "=&r"(crypto_uint64_q) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#elif defined(__GNUC__) && defined(__aarch64__)
  crypto_uint64 crypto_uint64_z;
  __asm__ ("cmp %1,%2\n cset %0,ls" : "=r"(crypto_uint64_z) : "r"(crypto_uint64_x), "r"(crypto_uint64_y) : "cc");
  return crypto_uint64_z;
#else
  return 1-crypto_uint64_smaller_01(crypto_uint64_y,crypto_uint64_x);
#endif
}

__attribute__((unused))
static inline
int crypto_uint64_ones_num(crypto_uint64 crypto_uint64_x) {
  crypto_uint64 crypto_uint64_y = crypto_uint64_x;
  const crypto_uint64 C0 = 0x5555555555555555;
  const crypto_uint64 C1 = 0x3333333333333333;
  const crypto_uint64 C2 = 0x0f0f0f0f0f0f0f0f;
  crypto_uint64_y -= ((crypto_uint64_y >> 1) & C0);
  crypto_uint64_y = (crypto_uint64_y & C1) + ((crypto_uint64_y >> 2) & C1);
  crypto_uint64_y = (crypto_uint64_y + (crypto_uint64_y >> 4)) & C2;
  crypto_uint64_y += crypto_uint64_y >> 8;
  crypto_uint64_y += crypto_uint64_y >> 16;
  crypto_uint64_y = (crypto_uint64_y + (crypto_uint64_y >> 32)) & 0xff;
  return crypto_uint64_y;
}

__attribute__((unused))
static inline
int crypto_uint64_bottomzeros_num(crypto_uint64 crypto_uint64_x) {
#if defined(__GNUC__) && defined(__x86_64__)
  crypto_uint64 fallback = 64;
  __asm__ ("bsfq %0,%0\n cmoveq %1,%0" : "+&r"(crypto_uint64_x) : "r"(fallback) : "cc");
  return crypto_uint64_x;
#elif defined(__GNUC__) && defined(__aarch64__)
  int64_t crypto_uint64_y;
  __asm__ ("rbit %0,%1\n clz %0,%0" : "=r"(crypto_uint64_y) : "r"(crypto_uint64_x) : );
  return crypto_uint64_y;
#else
  crypto_uint64 crypto_uint64_y = crypto_uint64_x ^ (crypto_uint64_x-1);
  crypto_uint64_y = ((crypto_uint64_signed) crypto_uint64_y) >> 1;
  crypto_uint64_y &= ~(crypto_uint64_x & (((crypto_uint64) 1) << (64-1)));
  return crypto_uint64_ones_num(crypto_uint64_y);
#endif
}

#endif