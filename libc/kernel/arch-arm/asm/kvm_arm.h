/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __ARM_KVM_ARM_H__
#define __ARM_KVM_ARM_H__
#include <linux/types.h>
#define HCR_TGE (1 << 27)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCR_TVM (1 << 26)
#define HCR_TTLB (1 << 25)
#define HCR_TPU (1 << 24)
#define HCR_TPC (1 << 23)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCR_TSW (1 << 22)
#define HCR_TAC (1 << 21)
#define HCR_TIDCP (1 << 20)
#define HCR_TSC (1 << 19)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCR_TID3 (1 << 18)
#define HCR_TID2 (1 << 17)
#define HCR_TID1 (1 << 16)
#define HCR_TID0 (1 << 15)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCR_TWE (1 << 14)
#define HCR_TWI (1 << 13)
#define HCR_DC (1 << 12)
#define HCR_BSU (3 << 10)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCR_BSU_IS (1 << 10)
#define HCR_FB (1 << 9)
#define HCR_VA (1 << 8)
#define HCR_VI (1 << 7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCR_VF (1 << 6)
#define HCR_AMO (1 << 5)
#define HCR_IMO (1 << 4)
#define HCR_FMO (1 << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCR_PTW (1 << 2)
#define HCR_SWIO (1 << 1)
#define HCR_VM 1
#define HCR_GUEST_MASK (HCR_TSC | HCR_TSW | HCR_TWI | HCR_VM | HCR_BSU_IS |   HCR_FB | HCR_TAC | HCR_AMO | HCR_IMO | HCR_FMO |   HCR_SWIO | HCR_TIDCP)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCR_VIRT_EXCP_MASK (HCR_VA | HCR_VI | HCR_VF)
#define SCTLR_TE (1 << 30)
#define SCTLR_EE (1 << 25)
#define SCTLR_V (1 << 13)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSCTLR_TE (1 << 30)
#define HSCTLR_EE (1 << 25)
#define HSCTLR_FI (1 << 21)
#define HSCTLR_WXN (1 << 19)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSCTLR_I (1 << 12)
#define HSCTLR_C (1 << 2)
#define HSCTLR_A (1 << 1)
#define HSCTLR_M 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSCTLR_MASK (HSCTLR_M | HSCTLR_A | HSCTLR_C | HSCTLR_I |   HSCTLR_WXN | HSCTLR_FI | HSCTLR_EE | HSCTLR_TE)
#define TTBCR_EAE (1 << 31)
#define TTBCR_IMP (1 << 30)
#define TTBCR_SH1 (3 << 28)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTBCR_ORGN1 (3 << 26)
#define TTBCR_IRGN1 (3 << 24)
#define TTBCR_EPD1 (1 << 23)
#define TTBCR_A1 (1 << 22)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTBCR_T1SZ (3 << 16)
#define TTBCR_SH0 (3 << 12)
#define TTBCR_ORGN0 (3 << 10)
#define TTBCR_IRGN0 (3 << 8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTBCR_EPD0 (1 << 7)
#define TTBCR_T0SZ 3
#define HTCR_MASK (TTBCR_T0SZ | TTBCR_IRGN0 | TTBCR_ORGN0 | TTBCR_SH0)
#define HSTR_T(x) (1 << x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSTR_TTEE (1 << 16)
#define HSTR_TJDBX (1 << 17)
#define HCPTR_TCP(x) (1 << x)
#define HCPTR_TCP_MASK (0x3fff)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCPTR_TASE (1 << 15)
#define HCPTR_TTA (1 << 20)
#define HCPTR_TCPAC (1 << 31)
#define HDCR_TDRA (1 << 11)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HDCR_TDOSA (1 << 10)
#define HDCR_TDA (1 << 9)
#define HDCR_TDE (1 << 8)
#define HDCR_HPME (1 << 7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HDCR_TPM (1 << 6)
#define HDCR_TPMCR (1 << 5)
#define HDCR_HPMN_MASK (0x1F)
#define KVM_PHYS_SHIFT (40)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_PHYS_SIZE (1ULL << KVM_PHYS_SHIFT)
#define KVM_PHYS_MASK (KVM_PHYS_SIZE - 1ULL)
#define PTRS_PER_S2_PGD (1ULL << (KVM_PHYS_SHIFT - 30))
#define S2_PGD_ORDER get_order(PTRS_PER_S2_PGD * sizeof(pgd_t))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define S2_PGD_SIZE (1 << S2_PGD_ORDER)
#define VTCR_SH0 (3 << 12)
#define VTCR_ORGN0 (3 << 10)
#define VTCR_IRGN0 (3 << 8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VTCR_SL0 (3 << 6)
#define VTCR_S (1 << 4)
#define VTCR_T0SZ (0xf)
#define VTCR_MASK (VTCR_SH0 | VTCR_ORGN0 | VTCR_IRGN0 | VTCR_SL0 |   VTCR_S | VTCR_T0SZ)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VTCR_HTCR_SH (VTCR_SH0 | VTCR_ORGN0 | VTCR_IRGN0)
#define VTCR_SL_L2 (0 << 6)
#define VTCR_SL_L1 (1 << 6)
#define KVM_VTCR_SL0 VTCR_SL_L1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_T0SZ (32 - KVM_PHYS_SHIFT)
#define KVM_VTCR_T0SZ (KVM_T0SZ & VTCR_T0SZ)
#define KVM_VTCR_S ((KVM_VTCR_T0SZ << 1) & VTCR_S)
#if KVM_VTCR_SL0 == VTCR_SL_L2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VTTBR_X (14 - KVM_T0SZ)
#else
#define VTTBR_X (5 - KVM_T0SZ)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VTTBR_BADDR_SHIFT (VTTBR_X - 1)
#define VTTBR_BADDR_MASK (((1LLU << (40 - VTTBR_X)) - 1) << VTTBR_BADDR_SHIFT)
#define VTTBR_VMID_SHIFT (48LLU)
#define VTTBR_VMID_MASK (0xffLLU << VTTBR_VMID_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_EC_SHIFT (26)
#define HSR_EC (0x3fU << HSR_EC_SHIFT)
#define HSR_IL (1U << 25)
#define HSR_ISS (HSR_IL - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_ISV_SHIFT (24)
#define HSR_ISV (1U << HSR_ISV_SHIFT)
#define HSR_SRT_SHIFT (16)
#define HSR_SRT_MASK (0xf << HSR_SRT_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_FSC (0x3f)
#define HSR_FSC_TYPE (0x3c)
#define HSR_SSE (1 << 21)
#define HSR_WNR (1 << 6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_CV_SHIFT (24)
#define HSR_CV (1U << HSR_CV_SHIFT)
#define HSR_COND_SHIFT (20)
#define HSR_COND (0xfU << HSR_COND_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSC_FAULT (0x04)
#define FSC_PERM (0x0c)
#define HPFAR_MASK (~0xf)
#define HSR_EC_UNKNOWN (0x00)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_EC_WFI (0x01)
#define HSR_EC_CP15_32 (0x03)
#define HSR_EC_CP15_64 (0x04)
#define HSR_EC_CP14_MR (0x05)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_EC_CP14_LS (0x06)
#define HSR_EC_CP_0_13 (0x07)
#define HSR_EC_CP10_ID (0x08)
#define HSR_EC_JAZELLE (0x09)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_EC_BXJ (0x0A)
#define HSR_EC_CP14_64 (0x0C)
#define HSR_EC_SVC_HYP (0x11)
#define HSR_EC_HVC (0x12)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_EC_SMC (0x13)
#define HSR_EC_IABT (0x20)
#define HSR_EC_IABT_HYP (0x21)
#define HSR_EC_DABT (0x24)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_EC_DABT_HYP (0x25)
#define HSR_HVC_IMM_MASK ((1UL << 16) - 1)
#define HSR_DABT_S1PTW (1U << 7)
#define HSR_DABT_CM (1U << 8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HSR_DABT_EA (1U << 9)
#endif
