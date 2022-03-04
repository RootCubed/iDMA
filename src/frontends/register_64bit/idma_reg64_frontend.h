// Generated register defines for idma_reg64_frontend

#ifndef _IDMA_REG64_FRONTEND_REG_DEFS_
#define _IDMA_REG64_FRONTEND_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Register width
#define IDMA_REG64_FRONTEND_PARAM_REG_WIDTH 64

// Source Address
#define IDMA_REG64_FRONTEND_SRC_ADDR_REG_OFFSET 0x0

// Destination Address
#define IDMA_REG64_FRONTEND_DST_ADDR_REG_OFFSET 0x8

// Number of bytes
#define IDMA_REG64_FRONTEND_NUM_BYTES_REG_OFFSET 0x10

// Configuration Register for DMA settings
#define IDMA_REG64_FRONTEND_CONF_REG_OFFSET 0x18
#define IDMA_REG64_FRONTEND_CONF_DECOUPLE_BIT 0
#define IDMA_REG64_FRONTEND_CONF_DEBURST_BIT 1
#define IDMA_REG64_FRONTEND_CONF_SERIALIZE_BIT 2

// DMA Status
#define IDMA_REG64_FRONTEND_STATUS_REG_OFFSET 0x20
#define IDMA_REG64_FRONTEND_STATUS_BUSY_BIT 0

// Next ID, launches transfer, returns 0 if transfer not set up properly.
#define IDMA_REG64_FRONTEND_NEXT_ID_REG_OFFSET 0x28

// Get ID of finished transactions.
#define IDMA_REG64_FRONTEND_DONE_REG_OFFSET 0x30

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _IDMA_REG64_FRONTEND_REG_DEFS_
// End generated register defines for idma_reg64_frontend