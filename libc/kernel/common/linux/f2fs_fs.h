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
#ifndef _LINUX_F2FS_FS_H
#define _LINUX_F2FS_FS_H
#include <linux/pagemap.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define F2FS_SUPER_OFFSET 1024
#define F2FS_LOG_SECTOR_SIZE 9
#define F2FS_LOG_SECTORS_PER_BLOCK 3
#define F2FS_BLKSIZE 4096
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define F2FS_MAX_EXTENSION 64
#define NULL_ADDR 0x0U
#define NEW_ADDR -1U
#define F2FS_ROOT_INO(sbi) (sbi->root_ino_num)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define F2FS_NODE_INO(sbi) (sbi->node_ino_num)
#define F2FS_META_INO(sbi) (sbi->meta_ino_num)
#define GFP_F2FS_ZERO (GFP_NOFS | __GFP_ZERO)
#define MAX_ACTIVE_LOGS 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_ACTIVE_NODE_LOGS 8
#define MAX_ACTIVE_DATA_LOGS 8
struct f2fs_super_block {
 __le32 magic;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 major_ver;
 __le16 minor_ver;
 __le32 log_sectorsize;
 __le32 log_sectors_per_block;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 log_blocksize;
 __le32 log_blocks_per_seg;
 __le32 segs_per_sec;
 __le32 secs_per_zone;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 checksum_offset;
 __le64 block_count;
 __le32 section_count;
 __le32 segment_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 segment_count_ckpt;
 __le32 segment_count_sit;
 __le32 segment_count_nat;
 __le32 segment_count_ssa;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 segment_count_main;
 __le32 segment0_blkaddr;
 __le32 cp_blkaddr;
 __le32 sit_blkaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 nat_blkaddr;
 __le32 ssa_blkaddr;
 __le32 main_blkaddr;
 __le32 root_ino;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 node_ino;
 __le32 meta_ino;
 __u8 uuid[16];
 __le16 volume_name[512];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 extension_count;
 __u8 extension_list[F2FS_MAX_EXTENSION][8];
} __packed;
#define CP_ERROR_FLAG 0x00000008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CP_COMPACT_SUM_FLAG 0x00000004
#define CP_ORPHAN_PRESENT_FLAG 0x00000002
#define CP_UMOUNT_FLAG 0x00000001
struct f2fs_checkpoint {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le64 checkpoint_ver;
 __le64 user_block_count;
 __le64 valid_block_count;
 __le32 rsvd_segment_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 overprov_segment_count;
 __le32 free_segment_count;
 __le32 cur_node_segno[MAX_ACTIVE_NODE_LOGS];
 __le16 cur_node_blkoff[MAX_ACTIVE_NODE_LOGS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 cur_data_segno[MAX_ACTIVE_DATA_LOGS];
 __le16 cur_data_blkoff[MAX_ACTIVE_DATA_LOGS];
 __le32 ckpt_flags;
 __le32 cp_pack_total_block_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 cp_pack_start_sum;
 __le32 valid_node_count;
 __le32 valid_inode_count;
 __le32 next_free_nid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 sit_ver_bitmap_bytesize;
 __le32 nat_ver_bitmap_bytesize;
 __le32 checksum_offset;
 __le64 elapsed_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char alloc_type[MAX_ACTIVE_LOGS];
 unsigned char sit_nat_version_bitmap[1];
} __packed;
#define F2FS_ORPHANS_PER_BLOCK 1020
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct f2fs_orphan_block {
 __le32 ino[F2FS_ORPHANS_PER_BLOCK];
 __le32 reserved;
 __le16 blk_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 blk_count;
 __le32 entry_count;
 __le32 check_sum;
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct f2fs_extent {
 __le32 fofs;
 __le32 blk_addr;
 __le32 len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
#define F2FS_NAME_LEN 255
#define ADDRS_PER_INODE 923
#define ADDRS_PER_BLOCK 1018
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NIDS_PER_BLOCK 1018
struct f2fs_inode {
 __le16 i_mode;
 __u8 i_advise;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 i_reserved;
 __le32 i_uid;
 __le32 i_gid;
 __le32 i_links;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le64 i_size;
 __le64 i_blocks;
 __le64 i_atime;
 __le64 i_ctime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le64 i_mtime;
 __le32 i_atime_nsec;
 __le32 i_ctime_nsec;
 __le32 i_mtime_nsec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 i_generation;
 __le32 i_current_depth;
 __le32 i_xattr_nid;
 __le32 i_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 i_pino;
 __le32 i_namelen;
 __u8 i_name[F2FS_NAME_LEN];
 __u8 i_reserved2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct f2fs_extent i_ext;
 __le32 i_addr[ADDRS_PER_INODE];
 __le32 i_nid[5];
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct direct_node {
 __le32 addr[ADDRS_PER_BLOCK];
} __packed;
struct indirect_node {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 nid[NIDS_PER_BLOCK];
} __packed;
enum {
 COLD_BIT_SHIFT = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FSYNC_BIT_SHIFT,
 DENT_BIT_SHIFT,
 OFFSET_BIT_SHIFT
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct node_footer {
 __le32 nid;
 __le32 ino;
 __le32 flag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le64 cp_ver;
 __le32 next_blkaddr;
} __packed;
struct f2fs_node {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct f2fs_inode i;
 struct direct_node dn;
 struct indirect_node in;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 struct node_footer footer;
} __packed;
#define NAT_ENTRY_PER_BLOCK (PAGE_CACHE_SIZE / sizeof(struct f2fs_nat_entry))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct f2fs_nat_entry {
 __u8 version;
 __le32 ino;
 __le32 block_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
struct f2fs_nat_block {
 struct f2fs_nat_entry entries[NAT_ENTRY_PER_BLOCK];
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIT_VBLOCK_MAP_SIZE 64
#define SIT_ENTRY_PER_BLOCK (PAGE_CACHE_SIZE / sizeof(struct f2fs_sit_entry))
#define SIT_VBLOCKS_SHIFT 10
#define SIT_VBLOCKS_MASK ((1 << SIT_VBLOCKS_SHIFT) - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GET_SIT_VBLOCKS(raw_sit)   (le16_to_cpu((raw_sit)->vblocks) & SIT_VBLOCKS_MASK)
#define GET_SIT_TYPE(raw_sit)   ((le16_to_cpu((raw_sit)->vblocks) & ~SIT_VBLOCKS_MASK)   >> SIT_VBLOCKS_SHIFT)
struct f2fs_sit_entry {
 __le16 vblocks;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 valid_map[SIT_VBLOCK_MAP_SIZE];
 __le64 mtime;
} __packed;
struct f2fs_sit_block {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct f2fs_sit_entry entries[SIT_ENTRY_PER_BLOCK];
} __packed;
#define ENTRIES_IN_SUM 512
#define SUMMARY_SIZE (7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SUM_FOOTER_SIZE (5)
#define SUM_ENTRY_SIZE (SUMMARY_SIZE * ENTRIES_IN_SUM)
struct f2fs_summary {
 __le32 nid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 __u8 reserved[3];
 struct {
 __u8 version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 ofs_in_node;
 } __packed;
 };
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SUM_TYPE_NODE (1)
#define SUM_TYPE_DATA (0)
struct summary_footer {
 unsigned char entry_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 check_sum;
} __packed;
#define SUM_JOURNAL_SIZE (F2FS_BLKSIZE - SUM_FOOTER_SIZE -  SUM_ENTRY_SIZE)
#define NAT_JOURNAL_ENTRIES ((SUM_JOURNAL_SIZE - 2) /  sizeof(struct nat_journal_entry))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAT_JOURNAL_RESERVED ((SUM_JOURNAL_SIZE - 2) %  sizeof(struct nat_journal_entry))
#define SIT_JOURNAL_ENTRIES ((SUM_JOURNAL_SIZE - 2) /  sizeof(struct sit_journal_entry))
#define SIT_JOURNAL_RESERVED ((SUM_JOURNAL_SIZE - 2) %  sizeof(struct sit_journal_entry))
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NAT_JOURNAL = 0,
 SIT_JOURNAL
};
struct nat_journal_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 nid;
 struct f2fs_nat_entry ne;
} __packed;
struct nat_journal {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nat_journal_entry entries[NAT_JOURNAL_ENTRIES];
 __u8 reserved[NAT_JOURNAL_RESERVED];
} __packed;
struct sit_journal_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 segno;
 struct f2fs_sit_entry se;
} __packed;
struct sit_journal {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sit_journal_entry entries[SIT_JOURNAL_ENTRIES];
 __u8 reserved[SIT_JOURNAL_RESERVED];
} __packed;
struct f2fs_summary_block {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct f2fs_summary entries[ENTRIES_IN_SUM];
 union {
 __le16 n_nats;
 __le16 n_sits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 union {
 struct nat_journal nat_j;
 struct sit_journal sit_j;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 struct summary_footer footer;
} __packed;
#define F2FS_DOT_HASH 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define F2FS_DDOT_HASH F2FS_DOT_HASH
#define F2FS_MAX_HASH (~((0x3ULL) << 62))
#define F2FS_HASH_COL_BIT ((0x1ULL) << 63)
typedef __le32 f2fs_hash_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define F2FS_SLOT_LEN 8
#define F2FS_SLOT_LEN_BITS 3
#define GET_DENTRY_SLOTS(x) ((x + F2FS_SLOT_LEN - 1) >> F2FS_SLOT_LEN_BITS)
#define NR_DENTRY_IN_BLOCK 214
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_DIR_HASH_DEPTH 63
#define SIZE_OF_DIR_ENTRY 11
#define SIZE_OF_DENTRY_BITMAP ((NR_DENTRY_IN_BLOCK + BITS_PER_BYTE - 1) /   BITS_PER_BYTE)
#define SIZE_OF_RESERVED (PAGE_SIZE - ((SIZE_OF_DIR_ENTRY +   F2FS_SLOT_LEN) *   NR_DENTRY_IN_BLOCK + SIZE_OF_DENTRY_BITMAP))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct f2fs_dir_entry {
 __le32 hash_code;
 __le32 ino;
 __le16 name_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 file_type;
} __packed;
struct f2fs_dentry_block {
 __u8 dentry_bitmap[SIZE_OF_DENTRY_BITMAP];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved[SIZE_OF_RESERVED];
 struct f2fs_dir_entry dentry[NR_DENTRY_IN_BLOCK];
 __u8 filename[NR_DENTRY_IN_BLOCK][F2FS_SLOT_LEN];
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 F2FS_FT_UNKNOWN,
 F2FS_FT_REG_FILE,
 F2FS_FT_DIR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 F2FS_FT_CHRDEV,
 F2FS_FT_BLKDEV,
 F2FS_FT_FIFO,
 F2FS_FT_SOCK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 F2FS_FT_SYMLINK,
 F2FS_FT_MAX
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
