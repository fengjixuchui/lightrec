/*
 * Copyright (C) 2014 Paul Cercueil <paul@crapouillou.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */

#ifndef __RECOMPILER_H__
#define __RECOMPILER_H__

#include "disassembler.h"
#include "lightrec.h"

int lightrec_rec_opcode(const struct block *block, struct opcode *op, u32 pc);

__weak int rec_J(const struct block *, struct opcode *, u32);
__weak int rec_JAL(const struct block *, struct opcode *, u32);
__weak int rec_BEQ(const struct block *, struct opcode *, u32);
__weak int rec_BNE(const struct block *, struct opcode *, u32);
__weak int rec_BLEZ(const struct block *, struct opcode *, u32);
__weak int rec_BGTZ(const struct block *, struct opcode *, u32);
__weak int rec_ADDI(const struct block *, struct opcode *, u32);
__weak int rec_ADDIU(const struct block *, struct opcode *, u32);
__weak int rec_SLTI(const struct block *, struct opcode *, u32);
__weak int rec_SLTIU(const struct block *, struct opcode *, u32);
__weak int rec_ANDI(const struct block *, struct opcode *, u32);
__weak int rec_ORI(const struct block *, struct opcode *, u32);
__weak int rec_XORI(const struct block *, struct opcode *, u32);
__weak int rec_LUI(const struct block *, struct opcode *, u32);
__weak int rec_LB(const struct block *, struct opcode *, u32);
__weak int rec_LH(const struct block *, struct opcode *, u32);
__weak int rec_LWL(const struct block *, struct opcode *, u32);
__weak int rec_LW(const struct block *, struct opcode *, u32);
__weak int rec_LBU(const struct block *, struct opcode *, u32);
__weak int rec_LHU(const struct block *, struct opcode *, u32);
__weak int rec_LWR(const struct block *, struct opcode *, u32);
__weak int rec_SB(const struct block *, struct opcode *, u32);
__weak int rec_SH(const struct block *, struct opcode *, u32);
__weak int rec_SWL(const struct block *, struct opcode *, u32);
__weak int rec_SW(const struct block *, struct opcode *, u32);
__weak int rec_SWR(const struct block *, struct opcode *, u32);
__weak int rec_LWC2(const struct block *, struct opcode *, u32);
__weak int rec_SWC2(const struct block *, struct opcode *, u32);
__weak int rec_HLE(const struct block *, struct opcode *, u32);

__weak int rec_special_SLL(const struct block *, struct opcode *, u32);
__weak int rec_special_SRL(const struct block *, struct opcode *, u32);
__weak int rec_special_SRA(const struct block *, struct opcode *, u32);
__weak int rec_special_SLLV(const struct block *, struct opcode *, u32);
__weak int rec_special_SRLV(const struct block *, struct opcode *, u32);
__weak int rec_special_SRAV(const struct block *, struct opcode *, u32);
__weak int rec_special_JR(const struct block *, struct opcode *, u32);
__weak int rec_special_JALR(const struct block *, struct opcode *, u32);
__weak int rec_special_SYSCALL(const struct block *, struct opcode *, u32);
__weak int rec_special_BREAK(const struct block *, struct opcode *, u32);
__weak int rec_special_MFHI(const struct block *, struct opcode *, u32);
__weak int rec_special_MTHI(const struct block *, struct opcode *, u32);
__weak int rec_special_MFLO(const struct block *, struct opcode *, u32);
__weak int rec_special_MTLO(const struct block *, struct opcode *, u32);
__weak int rec_special_MULT(const struct block *, struct opcode *, u32);
__weak int rec_special_MULTU(const struct block *, struct opcode *, u32);
__weak int rec_special_DIV(const struct block *, struct opcode *, u32);
__weak int rec_special_DIVU(const struct block *, struct opcode *, u32);
__weak int rec_special_ADD(const struct block *, struct opcode *, u32);
__weak int rec_special_ADDU(const struct block *, struct opcode *, u32);
__weak int rec_special_SUB(const struct block *, struct opcode *, u32);
__weak int rec_special_SUBU(const struct block *, struct opcode *, u32);
__weak int rec_special_AND(const struct block *, struct opcode *, u32);
__weak int rec_special_OR(const struct block *, struct opcode *, u32);
__weak int rec_special_XOR(const struct block *, struct opcode *, u32);
__weak int rec_special_NOR(const struct block *, struct opcode *, u32);
__weak int rec_special_SLT(const struct block *, struct opcode *, u32);
__weak int rec_special_SLTU(const struct block *, struct opcode *, u32);

__weak int rec_regimm_BLTZ(const struct block *, struct opcode *, u32);
__weak int rec_regimm_BGEZ(const struct block *, struct opcode *, u32);
__weak int rec_regimm_BLTZAL(const struct block *, struct opcode *, u32);
__weak int rec_regimm_BGEZAL(const struct block *, struct opcode *, u32);

__weak int rec_cp0_MFC0(const struct block *, struct opcode *, u32);
__weak int rec_cp0_CFC0(const struct block *, struct opcode *, u32);
__weak int rec_cp0_MTC0(const struct block *, struct opcode *, u32);
__weak int rec_cp0_CTC0(const struct block *, struct opcode *, u32);
__weak int rec_cp0_RFE(const struct block *, struct opcode *, u32);

__weak int rec_CP(const struct block *, struct opcode *, u32);

__weak int rec_cp2_basic_MFC2(const struct block *, struct opcode *, u32);
__weak int rec_cp2_basic_CFC2(const struct block *, struct opcode *, u32);
__weak int rec_cp2_basic_MTC2(const struct block *, struct opcode *, u32);
__weak int rec_cp2_basic_CTC2(const struct block *, struct opcode *, u32);

__weak int rec_meta_LB(const struct block *, struct opcode *, u32);
__weak int rec_meta_LH(const struct block *, struct opcode *, u32);
__weak int rec_meta_LW(const struct block *, struct opcode *, u32);
__weak int rec_meta_LBU(const struct block *, struct opcode *, u32);
__weak int rec_meta_LHU(const struct block *, struct opcode *, u32);
__weak int rec_meta_SB(const struct block *, struct opcode *, u32);
__weak int rec_meta_SH(const struct block *, struct opcode *, u32);
__weak int rec_meta_SW(const struct block *, struct opcode *, u32);

#endif /* __RECOMPILER_H__ */
