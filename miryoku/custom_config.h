// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_KLUDGE_MOUSEKEYSPR


#define XXX &none
#define TTT &trans

#if !defined (MIRYOKU_LAYOUTMAPPING_SOFLE)

#define MIRYOKU_LAYOUTMAPPING_SOFLE( \
     K00, K01, K02, K03, K04, K05 ,              K06, K07, K08, K09, K10, K11, \
     K12, K13, K14, K15, K16, K17,               K18, K19, K20, K21, K22, K23, \
     K24, K25, K26, K27, K28, K29,               K30, K31, K32, K33, K34, K35, \
     K36, K37, K38, K39, K40, K41,               K42, K43, K44, K45, K46, K47, \
          K48, K49, K50, K51, K52,               K53, K54, K55, K56, K57 \
) \
K00       K01       K02       K03       K04       K05                           K06       K07       K08       K09       K10       K11 \
K12       K13       K14       K15       K16       K17                           K18       K19       K20       K21       K22       K23 \
K24       K25       K26       K27       K28       K29                           K30       K31       K32       K33       K34       K35 \
K36       K37       K38       K39       K40       K41       XXX       XXX       K42       K43       K44       K45       K46       K47 \
                    K48       K49       K50       K51       K52       K53       K54       K55       K56       K57

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 53 54
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 55 56

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_ADJUST MIRYOKU_MAPPING

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(ADJUST, "Adjust") \

#define U_BASE   0
#define U_GAME   1
#define U_EXTRA  2
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_ADJUST 10

// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  |  Q  |  W  |  E   |  R   |  T   |                   |  Y   |  U    |  I    |  O   |   P   | DEL   |
// |  ESC  |  A  |  S  |  D   |  F   |  G   |                   |  H   |  J    |  K    |  L   |   ;   |   '   |
// | SHIFT |  Z  |  X  |  C   |  V   |  B   |  VOL   | |        |  N   |  M    |  ,    |  .   |   /   | SHIFT |
//     | XXX | XXX  | DEL(FUN)  | BSPC(NUM) |TAB(SYM)| |ENTER(MOUS)| SPACE(NAV) | ESC(MEDIA) | XXX   | XXX  |

#define MIRYOKU_LAYER_BASE \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,             &kp MINUS, \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,              &kp DEL, \
&kp ESC,           &hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI SEMI,       &kp SQT, \
&kp LSHFT,         &lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH, &kp RSHFT, \
                   &kp LEFT,          &lt U_NAV RET,     &lt U_FUN DEL,     &lt U_NUM BSPC,    &lt U_SYM TAB,     &lt U_MOUSE RET,   &lt U_NAV SPC,     &lt U_MEDIA ESC,   &kp DOWN,          &kp UP

// Tap Layer

// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  |  Q  |  W  |  E   |  R   |  T   |                   |  Y   |  U    |  I    |  O   |   P   | DEL   |
// |  ESC  |  A  |  S  |  D   |  F   |  G   |                   |  H   |  J    |  K    |  L   |   ;   |   '   |
// | SHIFT |  Z  |  X  |  C   |  V   |  B   |  VOL   | |        |  N   |  M    |  ,    |  .   |   /   | SHIFT |
//     | XXX | XXX  | DEL(FUN)  | BSPC(NUM) |TAB(SYM)| |ENTER(MOUS)| SPACE(NAV) | ESC(MEDIA) | XXX   | XXX  |

#define MIRYOKU_LAYER_TAP \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,             &kp MINUS, \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,              &kp DEL, \
&kp ESC,           &hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI SEMI,       &kp SQT, \
&kp LSHFT,         &lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH, &kp RSHFT, \
                   U_NP,              U_NP,              &lt U_FUN DEL,     &lt U_NUM BSPC,    &lt U_SYM TAB,     &lt U_MOUSE RET,   &lt U_NAV SPC,     &lt U_MEDIA ESC,   U_NP,              U_NP

// Button Layer

// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  |UNDO | CUT | CPY  | PASTE|  RDO |                   | RDO  | PST   | CPY   | CUT  |  UND  | DEL   |
// |  ESC  |     |     |      |      |      |                   |      |       |       |      |       |   '   |
// |  SHFT |UNDO | CUT | CPY  | PASTE|  RDO |                   | RDO  | PST   | CPY   | CUT  |  UND  | SHFT  |
//     | XXX | XXX  | DEL(FUN)  | BSPC(NUM) |TAB(SYM)| |ENTER(MOUS)| SPACE(NAV) | ESC(MEDIA) | XXX   | XXX  |

#define MIRYOKU_LAYER_BUTTON \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,             &kp MINUS, \
&kp TAB,           U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,              &kp DEL, \
&kp ESC,           &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,           &kp SQT, \
&kp LSHFT,         U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,              &kp RSHFT, \
                   U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

// Nav Layer

// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  |PGUP |HOME | UP   | END  | INS  |                   | BASE | EXTRA | TAP   |      | bootl | DEL   |
// |  ESC  |PGDWN|LEFT | DOWN |RIGHT |CAPSWD|                   |      |       |       |      |       |   '   |
// |  SHFT |UNDO | CUT | CPY  | PASTE|  RDO |                   | NAV  | NUM   |       |      |       | SHFT  |
//               | XXX | XXX  | DEL  | BSPC  |TAB   | | XXX     | XXX  |  XXX  | XXX   | XXX  |

#define MIRYOKU_LAYER_NAV \
&kp F11,           &kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            &kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,            &kp F12, \
&kp TAB,           &kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,      &kp DEL,\
&kp ESC,           &kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,           &kp SQT, \
&kp LSHFT,         U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_NAV,         &to U_NUM,         &kp RALT,          U_NA,               &kp RSHFT,\
                   U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Mouse Layer

// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  |WH_U |WH_L | MS_U | WH_R | XXX  |                   | BASE | EXTRA | TAP   |      | bootl | DEL   |
// |  ESC  |WH_D |MS_L | MS_D | MS_R | XXX  |                   |      |       |       |      |       |   '   |
// |  SHFT |UNDO | CUT | CPY  | PASTE|  RDO |                   | NAV  | NUM   |       |      |       | SHFT  |
//               | XXX | XXX  | DEL  | BSPC | XXX   | | XXX     | XXX  |  XXX  | XXX   | XXX  |

#define MIRYOKU_LAYER_MOUSE \
&kp F11,           &kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            &kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,            &kp F12, \
&kp TAB,           U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,      &kp DEL, \
&kp ESC,           U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,           &kp SQT, \
&kp LSHFT,         U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_NAV,         &to U_NUM,         &kp RALT,          U_NA,               &kp RSHFT,\
                   U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// |  ESC  |     |     |      |      |      |                   |      |       |       |      |       |   '   |

// Media Layer
// Hold shift with bt sel to clear a bt slot
// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  | XXX | XXX |V_UP  | XXX  | XXX  |                   | BASE | EXTRA | TAP   |      | bootl | DEL   |
// |  ESC  | XXX |PREV |V_DWN | NEXT | XXX  |                   |      |       |       |      |       |   '   |
// |  SHFT | bt0 | bt1 | bt2  | bt3  |outTog|                   | MED  | NUM   |       |      |       | SHFT  |
//               | XXX | XXX  | DEL  | BSPC | XXX   | | XXX     | XXX  |  XXX  | XXX   | XXX  |

#define MIRYOKU_LAYER_MEDIA \
&kp F11,           &kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            &kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,            &kp F12, \
&kp TAB,           U_NP,              U_NP,              &kp C_VOL_UP,      U_NP,              U_NP,              U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,        &kp DEL, \
&kp ESC,           U_NP,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_NP,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,           &kp SQT, \
&kp LSHFT,         &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &to U_MEDIA,       &to U_FUN,         &kp RALT,          &tog U_GAME,        &kp RSHFT, \
                   U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Number Layer
// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  |bootl| TAP |EXTRA | BASE |      |                   | LBKT |  7    |  8    |  9   | RBKT  | DEL   |
// |  ESC  |     |     |      |      |      |                   | EQL  |  4    |  5    |  6   | SEMI  |   '   |
// |  SHFT |     | ALT | NAV  | NUM  |                 | BSLH |  1    |  2    |  3   | GRAVE | SHFT  |
//               | XXX | XXX  | DEL  | BSPC | XXX   | | XXX     | MINS |  0    | DOT   | XXX  |

#define MIRYOKU_LAYER_NUM \
&kp F11,           &kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            &kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,            &kp F12, \
&kp TAB,           &bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,           &kp DEL, \
&kp ESC,           &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQL,           &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp SEMI,           &kp SQT, \
&kp LSHFT,         U_NA,              &kp RALT,          &to U_NAV,         &to U_NUM,         U_NA,              &kp BSLH,          &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp GRAVE,          &kp RSHFT, \
                   U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

// Symbol Layer
// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  |bootl| TAP |EXTRA | BASE |      |                   | LBRC |  AMPS | ASTRK | LPAR | RBRC  | DEL   |
// |  ESC  |     |     |      |      |      |                   | PLUS |  DLLR | PRCT  | CRRT | COLON |   '   |
// |  SHFT |     | ALT |MOUSE | SYM  |      |                   | PIPE |  EXCL |  AT   | HASH | TILDE | SHFT  |
//               | XXX | XXX  | DEL  | BSPC | XXX   | | XXX     |UNDER | LPAR  | RPAR  | XXX  |

#define MIRYOKU_LAYER_SYM \
&kp F11,           &kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            &kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,            &kp F12, \
&kp TAB,           &bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,           &kp DEL, \
&kp ESC,           &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp COLON,          &kp SQT, \
&kp LSHFT,         U_NA,              &kp RALT,          &to U_MOUSE,       &to U_SYM,         U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,          &kp RSHFT, \
                   U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP

// Function Layer

// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  |bootl| TAP |EXTRA | BASE |      |                   |PSCRN |  F7   | F8    | F9   | F12   | DEL   |
// |  ESC  |     |     |      |      |      |                   |SLCK  |  F4   | F5    | F6   | F11   |   '   |
// |  SHFT |     | ALT |MEDIA | FUN  |      |                   |PS_BRK|  F1   | F2    | F3   | F10   | SHFT  |
//               | XXX | XXX  | DEL  | BSPC | XXX   | | XXX     | TAB  | SPC   | K_APP | XXX  |

#define MIRYOKU_LAYER_FUN \
&kp F11,           &kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            &kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,            &kp F12, \
&kp TAB,           &bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,            &kp DEL, \
&kp ESC,           &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,            &kp SQT, \
&kp LSHFT,         U_NA,              &kp RALT,          &to U_MEDIA,       &to U_FUN,         U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,            &kp RSHFT,\
                   U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp TAB,           &kp SPC,           &kp K_APP,         U_NP,              U_NP

// Game Layer

// ------------------------------------------------------------------------------------------------------------
// |  `    |  1  |  2  |  3   |  4   |  5   |                   |  6   |  7    |  8    |  9   |   0   | MIN   |
// |  TAB  |PGUP |HOME | UP   | END  | INS  |                   | BASE | EXTRA | TAP   |      | bootl | DEL   |
// |  ESC  |PGDWN|LEFT | DOWN |RIGHT |CAPSWD|                   |      |       |       |      |       |   '   |
// |  SHFT |UNDO | CUT | CPY  | PASTE|  RDO |                   | NAV  | NUM   |       |      |       | SHFT  |
//               | XXX | XXX | DEL  | BSPC  |TAB   | | XXX      | XXX  |  XXX  | XXX   | XXX  |

#define MIRYOKU_LAYER_GAME \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,            &kp MINUS, \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             &kp DEL, \
&kp ESC,           &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SEMI,           &kp SQT, \
&kp LSHFT,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp RSHFT, \
                   &tog U_GAME,       U_NP,              &lt U_FUN DEL,     &lt U_NUM BSPC,    &lt U_SYM TAB,     &lt U_MOUSE RET,   &lt U_NAV SPC,     &lt U_MEDIA ESC,   U_NP,              &tog U_GAME

// ADJUST

#define MIRYOKU_LAYER_ADJUST \
XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX, \
XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX, \
XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               &tog U_GAME,       XXX,               XXX,               XXX,               XXX, \
XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX,               XXX, \
                   U_NP,              U_NP,              TTT,               TTT,               TTT,               TTT,               TTT,               TTT,               U_NP,              U_NP

#endif