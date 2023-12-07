#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

// Aliases
#define FRM_AT   RA(N2)  // @
#define FRM_EXLM N8    // !
#define FRM_MINS EQUAL  // -
#define FRM_GRV  RA(N3) // `
#define FRM_LABK GRAVE // <
#define FRM_EQL  SLASH // =
#define FRM_HASH HASH  // #
#define FRM_UNDS LS(EQUAL) // _
#define FRM_RABK LS(GRAVE) // >
#define FRM_PLUS LS(SLASH)  // +
#define FRM_LCBR RA(N5) // {
#define FRM_RCBR RA(MINUS) // }
#define FRM_EURO RA(RBKT)  // €
#define FRM_TILD RA(FR_N)    // ~ (dead)
#define FRM_LBRC LS(RA(N5)) // [
#define FRM_RBRC RA(N7) // ]
#define FRM_PIPE LS(RA(FR_L))    // |
#define FRM_BSLS LS(RA(FR_COLN)) // (backslash)
