/* native_client/src/trusted/validator/x86/decoder/generator/gen/nacl_disallows.h
 * THIS FILE IS AUTO_GENERATED DO NOT EDIT.
 *
 * This file was auto-generated by enum_gen.py
 * from file nacl_disallows.enum
 */

#ifndef NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_X86_DECODER_GENERATOR_GEN_NACL_DISALLOWS_H__
#define NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_X86_DECODER_GENERATOR_GEN_NACL_DISALLOWS_H__

#include "native_client/src/include/portability.h"

EXTERN_C_BEGIN
typedef enum NaClDisallowsFlag {
  NaClTooManyPrefixBytes = 0,
  NaClMarkedIllegal = 1,
  NaClMarkedInvalid = 2,
  NaClMarkedSystem = 3,
  NaClHasBadSegmentPrefix = 4,
  NaClCantUsePrefix67 = 5,
  NaClMultipleRexPrefix = 6,
  NaClRepDisallowed = 7,
  NaClRepneDisallowed = 8,
  NaClData16Disallowed = 9,
  NaClHasDuplicatePrefix = 10,
  NaClHasAmbigSegmentPrefixes = 11,
  NaClRexPrefixNotLast = 12,
  NaClDisallowsFlagEnumSize = 13, /* special size marker */
} NaClDisallowsFlag;

/* Returns the name of an NaClDisallowsFlag constant. */
extern const char* NaClDisallowsFlagName(NaClDisallowsFlag name);

EXTERN_C_END

#endif /* NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_X86_DECODER_GENERATOR_GEN_NACL_DISALLOWS_H__ */
