#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT( \
      K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
      K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
      K40, K41, K42, K43,                K47, K48, K49, K4A, K4B, K4C, K4D \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___ }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, ___ }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
    { K40, K41, K42, K43, ___, ___, ___, K47, K48, K49, K4A, K4B, K4C, K4D, ___ } \
}

#define LAYOUT_minila_split_bs_rshft( \
      K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
      K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
      K40, K41, K42, K43,                K47, K48, K49, K4A, K4B, K4C, K4D \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___ }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, ___, K2D, ___ }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
    { K40, K41, K42, K43, ___, ___, ___, K47, K48, K49, K4A, K4B, K4C, K4D, ___ } \
}

#define LAYOUT_60_ansi( \
      K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,      K0E, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
      K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, \
      K40, K41, K42,                     K47,      K49, K4A,      K4C, K4D \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, ___, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___ }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, ___, K2D, ___ }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, ___, K3D, ___ }, \
    { K40, K41, K42, ___, ___, ___, ___, K47, ___, K49, K4A, ___, K4C, K4D, ___ } \
}

#define LAYOUT_60_iso( \
      K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,     K0E, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
      K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, \
      K40, K41, K42,                     K47,      K49, K4A,      K4C, K4D \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, ___, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, ___, ___ }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, ___ }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, ___, K3D, ___ }, \
    { K40, K41, K42, ___, ___, ___, ___, K47, ___, K49, K4A, ___, K4C, K4D, ___ } \
}

#define LAYOUT_60_ansi_split_bs_rshift( \
      K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
      K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3E, \
      K40, K41, K42,                     K47,      K49, K4A,      K4C, K4D  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___ }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, ___, K2D, ___ }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, ___, K3D, K3E }, \
    { K40, K41, K42, ___, ___, ___, ___, K47, ___, K49, K4A, ___, K4C, K4D, ___ } \
}

#define LAYOUT_60_iso_split_bs_rshift( \
      K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
      K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3E, \
      K40, K41, K42,                     K47,      K49, K4A,      K4C, K4D \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, ___, ___ }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, ___ }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, ___, K3D, K3E }, \
    { K40, K41, K42, ___, ___, ___, ___, K47, ___, K49, K4A, ___, K4C, K4D, ___ } \
}

#define LAYOUT_60_iso_split_rshift_with_nav_br( \
      K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,      K0E, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
      K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3E, \
      K40, K41, K42,                     K47,      K49, K4A, K4B, K4C, K4D \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, ___, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, ___, ___ }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, ___ }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, ___, K3D, K3E }, \
    { K40, K41, K42, ___, ___, ___, ___, K47, ___, K49, K4A, K4B, K4C, K4D, ___ } \
}

#define LAYOUT_225u_arrow( \
      K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
      K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3E, \
      K40, K41, K42,                     K47,      K49, K4A, K4B, K4C, K4D \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___ }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, ___, K2D, ___ }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, ___, K3D, K3E }, \
    { K40, K41, K42, ___, ___, ___, ___, K47, ___, K49, K4A, K4B, K4C, K4D, ___ } \
}

#define LAYOUT_2u_arrow( \
      K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
      K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
      K40, K41, K42,                     K47,      K49, K4A, K4B, K4C, K4D \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___ }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, ___, K2D, ___ }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
    { K40, K41, K42, ___, ___, ___, ___, K47, ___, K49, K4A, K4B, K4C, K4D, ___ } \
}
