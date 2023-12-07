#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

// Aliases
#define FRM_AT   GRAVE  // @
#define FRM_EXLM N8    // !
#define FRM_MINS EQUAL  // -
#define FRM_GRV  STAR // `
#define FRM_LABK LT // <
#define FRM_EQL  SLASH // =
#define FRM_HASH LS(FRM_AT)   // #
#define FRM_UNDS LS(EQUAL) // _
#define FRM_RABK LS(LT) // >
#define FRM_PLUS LS(SLASH)  // +
#define FRM_LCBR RA(N5) // {
#define FRM_RCBR RA(MINUS) // }
#define FRM_EURO RA(RBKT)  // €
#define FRM_TILD RA(FR_N)    // ~ (dead)
#define FRM_LBRC LS(RA(N5)) // [
#define FRM_RBRC LS(RA(MINUS)) // ]
#define FRM_PIPE LS(A(RACL))    // |
#define FRM_BSLS LS(RA(FR_COLN)) bb// (backslash)
