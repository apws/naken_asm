/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: https://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2010-2024 by Michael Kohn
 *
 */

#ifndef NAKEN_ASM_ASM_RV32EM_H
#define NAKEN_ASM_ASM_RV32EM_H

#include "common/assembler.h"

int parse_instruction_rv32em(AsmContext *asm_context, char *instr);

#endif

