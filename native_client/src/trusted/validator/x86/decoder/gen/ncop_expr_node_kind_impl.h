/* native_client/src/trusted/validator/x86/decoder/gen/ncop_expr_node_kind_impl.h
 * THIS FILE IS AUTO_GENERATED DO NOT EDIT.
 *
 * This file was auto-generated by enum_gen.py
 * from file ncop_expr_node_kind.enum
 */

/* Define the corresponding names of NaClExpKind. */
static const char* const g_NaClExpKindName[NaClExpKindEnumSize + 1] = {
  "UndefinedExp",
  "ExprRegister",
  "OperandReference",
  "ExprConstant",
  "ExprSegmentAddress",
  "ExprMemOffset",
  "ExprNaClIllegal",
  "NaClExpKindEnumSize"
};

const char* NaClExpKindName(NaClExpKind name) {
  return name <= NaClExpKindEnumSize
    ? g_NaClExpKindName[name]
    : "NaClExpKind???";
}
