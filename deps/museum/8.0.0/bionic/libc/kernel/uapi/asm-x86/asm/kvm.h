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
#ifndef _ASM_X86_KVM_H
#define _ASM_X86_KVM_H
#include <museum/8.0.0/bionic/libc/linux/types.h>
#include <museum/8.0.0/bionic/libc/linux/ioctl.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DE_VECTOR 0
#define DB_VECTOR 1
#define BP_VECTOR 3
#define OF_VECTOR 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BR_VECTOR 5
#define UD_VECTOR 6
#define NM_VECTOR 7
#define DF_VECTOR 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TS_VECTOR 10
#define NP_VECTOR 11
#define SS_VECTOR 12
#define GP_VECTOR 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PF_VECTOR 14
#define MF_VECTOR 16
#define AC_VECTOR 17
#define MC_VECTOR 18
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define XM_VECTOR 19
#define VE_VECTOR 20
#define __KVM_HAVE_PIT
#define __KVM_HAVE_IOAPIC
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __KVM_HAVE_IRQ_LINE
#define __KVM_HAVE_MSI
#define __KVM_HAVE_USER_NMI
#define __KVM_HAVE_GUEST_DEBUG
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __KVM_HAVE_MSIX
#define __KVM_HAVE_MCE
#define __KVM_HAVE_PIT_STATE2
#define __KVM_HAVE_XEN_HVM
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __KVM_HAVE_VCPU_EVENTS
#define __KVM_HAVE_DEBUGREGS
#define __KVM_HAVE_XSAVE
#define __KVM_HAVE_XCRS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __KVM_HAVE_READONLY_MEM
#define KVM_NR_INTERRUPTS 256
struct kvm_memory_alias {
  __u32 slot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 flags;
  __u64 guest_phys_addr;
  __u64 memory_size;
  __u64 target_phys_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_pic_state {
  __u8 last_irr;
  __u8 irr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 imr;
  __u8 isr;
  __u8 priority_add;
  __u8 irq_base;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 read_reg_select;
  __u8 poll;
  __u8 special_mask;
  __u8 init_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 auto_eoi;
  __u8 rotate_on_auto_eoi;
  __u8 special_fully_nested_mode;
  __u8 init4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 elcr;
  __u8 elcr_mask;
};
#define KVM_IOAPIC_NUM_PINS 24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_ioapic_state {
  __u64 base_address;
  __u32 ioregsel;
  __u32 id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 irr;
  __u32 pad;
  union {
    __u64 bits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    struct {
      __u8 vector;
      __u8 delivery_mode : 3;
      __u8 dest_mode : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
      __u8 delivery_status : 1;
      __u8 polarity : 1;
      __u8 remote_irr : 1;
      __u8 trig_mode : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
      __u8 mask : 1;
      __u8 reserve : 7;
      __u8 reserved[4];
      __u8 dest_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    } fields;
  } redirtbl[KVM_IOAPIC_NUM_PINS];
};
#define KVM_IRQCHIP_PIC_MASTER 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_IRQCHIP_PIC_SLAVE 1
#define KVM_IRQCHIP_IOAPIC 2
#define KVM_NR_IRQCHIPS 3
#define KVM_RUN_X86_SMM (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_regs {
  __u64 rax, rbx, rcx, rdx;
  __u64 rsi, rdi, rsp, rbp;
  __u64 r8, r9, r10, r11;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 r12, r13, r14, r15;
  __u64 rip, rflags;
};
#define KVM_APIC_REG_SIZE 0x400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_lapic_state {
  char regs[KVM_APIC_REG_SIZE];
};
struct kvm_segment {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 base;
  __u32 limit;
  __u16 selector;
  __u8 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 present, dpl, db, s, l, g, avl;
  __u8 unusable;
  __u8 padding;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_dtable {
  __u64 base;
  __u16 limit;
  __u16 padding[3];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_sregs {
  struct kvm_segment cs, ds, es, fs, gs, ss;
  struct kvm_segment tr, ldt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct kvm_dtable gdt, idt;
  __u64 cr0, cr2, cr3, cr4, cr8;
  __u64 efer;
  __u64 apic_base;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 interrupt_bitmap[(KVM_NR_INTERRUPTS + 63) / 64];
};
struct kvm_fpu {
  __u8 fpr[8][16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 fcw;
  __u16 fsw;
  __u8 ftwx;
  __u8 pad1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 last_opcode;
  __u64 last_ip;
  __u64 last_dp;
  __u8 xmm[16][16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 mxcsr;
  __u32 pad2;
};
struct kvm_msr_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 index;
  __u32 reserved;
  __u64 data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_msrs {
  __u32 nmsrs;
  __u32 pad;
  struct kvm_msr_entry entries[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_msr_list {
  __u32 nmsrs;
  __u32 indices[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_cpuid_entry {
  __u32 function;
  __u32 eax;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ebx;
  __u32 ecx;
  __u32 edx;
  __u32 padding;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_cpuid {
  __u32 nent;
  __u32 padding;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct kvm_cpuid_entry entries[0];
};
struct kvm_cpuid_entry2 {
  __u32 function;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 index;
  __u32 flags;
  __u32 eax;
  __u32 ebx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ecx;
  __u32 edx;
  __u32 padding[3];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CPUID_FLAG_SIGNIFCANT_INDEX (1 << 0)
#define KVM_CPUID_FLAG_STATEFUL_FUNC (1 << 1)
#define KVM_CPUID_FLAG_STATE_READ_NEXT (1 << 2)
struct kvm_cpuid2 {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 nent;
  __u32 padding;
  struct kvm_cpuid_entry2 entries[0];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_pit_channel_state {
  __u32 count;
  __u16 latched_count;
  __u8 count_latched;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 status_latched;
  __u8 status;
  __u8 read_state;
  __u8 write_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 write_latch;
  __u8 rw_mode;
  __u8 mode;
  __u8 bcd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 gate;
  __s64 count_load_time;
};
struct kvm_debug_exit_arch {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 exception;
  __u32 pad;
  __u64 pc;
  __u64 dr6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 dr7;
};
#define KVM_GUESTDBG_USE_SW_BP 0x00010000
#define KVM_GUESTDBG_USE_HW_BP 0x00020000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_GUESTDBG_INJECT_DB 0x00040000
#define KVM_GUESTDBG_INJECT_BP 0x00080000
struct kvm_guest_debug_arch {
  __u64 debugreg[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_pit_state {
  struct kvm_pit_channel_state channels[3];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_PIT_FLAGS_HPET_LEGACY 0x00000001
struct kvm_pit_state2 {
  struct kvm_pit_channel_state channels[3];
  __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 reserved[9];
};
struct kvm_reinject_control {
  __u8 pit_reinject;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 reserved[31];
};
#define KVM_VCPUEVENT_VALID_NMI_PENDING 0x00000001
#define KVM_VCPUEVENT_VALID_SIPI_VECTOR 0x00000002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_VCPUEVENT_VALID_SHADOW 0x00000004
#define KVM_VCPUEVENT_VALID_SMM 0x00000008
#define KVM_X86_SHADOW_INT_MOV_SS 0x01
#define KVM_X86_SHADOW_INT_STI 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_vcpu_events {
  struct {
    __u8 injected;
    __u8 nr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    __u8 has_error_code;
    __u8 pad;
    __u32 error_code;
  } exception;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct {
    __u8 injected;
    __u8 nr;
    __u8 soft;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    __u8 shadow;
  } interrupt;
  struct {
    __u8 injected;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    __u8 pending;
    __u8 masked;
    __u8 pad;
  } nmi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 sipi_vector;
  __u32 flags;
  struct {
    __u8 smm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    __u8 pending;
    __u8 smm_inside_nmi;
    __u8 latched_init;
  } smi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 reserved[9];
};
struct kvm_debugregs {
  __u64 db[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 dr6;
  __u64 dr7;
  __u64 flags;
  __u64 reserved[9];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_xsave {
  __u32 region[1024];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_MAX_XCRS 16
struct kvm_xcr {
  __u32 xcr;
  __u32 reserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 value;
};
struct kvm_xcrs {
  __u32 nr_xcrs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 flags;
  struct kvm_xcr xcrs[KVM_MAX_XCRS];
  __u64 padding[16];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_sync_regs {
};
#define KVM_X86_QUIRK_LINT0_REENABLED (1 << 0)
#define KVM_X86_QUIRK_CD_NW_CLEARED (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
