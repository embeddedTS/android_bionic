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
#ifndef __LINUX_USB_USUAL_H
#define __LINUX_USB_USUAL_H
#define US_DO_ALL_FLAGS   US_FLAG(SINGLE_LUN, 0x00000001)       US_FLAG(NEED_OVERRIDE, 0x00000002)       US_FLAG(SCM_MULT_TARG, 0x00000004)       US_FLAG(FIX_INQUIRY, 0x00000008)       US_FLAG(FIX_CAPACITY, 0x00000010)       US_FLAG(IGNORE_RESIDUE, 0x00000020)       US_FLAG(BULK32, 0x00000040)       US_FLAG(NOT_LOCKABLE, 0x00000080)       US_FLAG(GO_SLOW, 0x00000100)       US_FLAG(NO_WP_DETECT, 0x00000200)       US_FLAG(MAX_SECTORS_64, 0x00000400)       US_FLAG(IGNORE_DEVICE, 0x00000800)       US_FLAG(CAPACITY_HEURISTICS, 0x00001000)       US_FLAG(MAX_SECTORS_MIN,0x00002000)       US_FLAG(BULK_IGNORE_TAG,0x00004000)       US_FLAG(SANE_SENSE, 0x00008000)       US_FLAG(CAPACITY_OK, 0x00010000)       US_FLAG(BAD_SENSE, 0x00020000)       US_FLAG(NO_READ_DISC_INFO, 0x00040000)       US_FLAG(NO_READ_CAPACITY_16, 0x00080000)       US_FLAG(INITIAL_READ10, 0x00100000)       US_FLAG(WRITE_CACHE, 0x00200000)
#define US_FLAG(name, value) US_FL_##name = value ,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum { US_DO_ALL_FLAGS };
#undef US_FLAG
#include <linux/usb/storage.h>
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
