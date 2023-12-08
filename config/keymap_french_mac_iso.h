#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

// Aliases
#define FRM_AT   RA(NON_US_HASH)  // @
#define FRM_EXLM N8    // !
#define FRM_MINS EQUAL  // -
#define FRM_GRV  NON_US_HASH // `
#define FRM_EQL  SLASH // =
#define FRM_HASH   // #
#define FRM_UNDS LS(EQUAL) // _
#define FRM_PLUS LS(SLASH)  // +
#define FRM_EURO RA(RBKT)  // €
#define FRM_TILD    // ~ (dead)
#define FRM_PIPE LS(RA(FR_L))    // |
#define FRM_BSLS LS(RA(FR_COLN)) // (backslash)
