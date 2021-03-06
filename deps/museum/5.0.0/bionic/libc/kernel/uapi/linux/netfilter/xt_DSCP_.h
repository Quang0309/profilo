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
#ifndef _XT_DSCP_TARGET_H
#define _XT_DSCP_TARGET_H
#define XT_DSCP_TARGET_H
#define XT_DSCP_TARGET_H_
#define _UAPI_XT_DSCP_TARGET_H
#define _UAPI_XT_DSCP_TARGET_H_
#define _XT_DSCP_TARGET_H_
#include <museum/5.0.0/bionic/libc/linux/netfilter/xt_dscp.h>
#include <museum/5.0.0/bionic/libc/linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct xt_DSCP_info {
 __u8 dscp;
};
struct xt_tos_target_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 tos_value;
 __u8 tos_mask;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
