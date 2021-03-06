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
#ifndef NES_ABI_USER_H
#define NES_ABI_USER_H
#define _NES_ABI_USER_H
#define _NES_ABI_USER_H_
#define _UAPI_NES_ABI_USER_H
#define _UAPI_NES_ABI_USER_H_
#define _UAPINES_ABI_USER_H
#define _UAPINES_ABI_USER_H_
#define NES_ABI_USER_H_
#include <museum/8.0.0/bionic/libc/linux/types.h>
#define NES_ABI_USERSPACE_VER 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NES_ABI_KERNEL_VER 2
struct nes_alloc_ucontext_req {
  __u32 reserved32;
  __u8 userspace_ver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 reserved8[3];
};
struct nes_alloc_ucontext_resp {
  __u32 max_pds;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 max_qps;
  __u32 wq_size;
  __u8 virtwq;
  __u8 kernel_ver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 reserved[2];
};
struct nes_alloc_pd_resp {
  __u32 pd_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 mmap_db_index;
};
struct nes_create_cq_req {
  __u64 user_cq_buffer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 mcrqf;
  __u8 reserved[4];
};
struct nes_create_qp_req {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 user_wqe_buffers;
  __u64 user_qp_buffer;
};
enum iwnes_memreg_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IWNES_MEMREG_TYPE_MEM = 0x0000,
  IWNES_MEMREG_TYPE_QP = 0x0001,
  IWNES_MEMREG_TYPE_CQ = 0x0002,
  IWNES_MEMREG_TYPE_MW = 0x0003,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IWNES_MEMREG_TYPE_FMR = 0x0004,
  IWNES_MEMREG_TYPE_FMEM = 0x0005,
};
struct nes_mem_reg_req {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 reg_type;
  __u32 reserved;
};
struct nes_create_cq_resp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 cq_id;
  __u32 cq_size;
  __u32 mmap_db_index;
  __u32 reserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nes_create_qp_resp {
  __u32 qp_id;
  __u32 actual_sq_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 actual_rq_size;
  __u32 mmap_sq_db_index;
  __u32 mmap_rq_db_index;
  __u32 nes_drv_opt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
