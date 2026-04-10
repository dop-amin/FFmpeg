/*
 * SLOTHY H.264 NEON target selection
 *
 * Edit this file to select the implementation.
 * Make will detect the change and rebuild only the affected files.
 *
 * Uncomment exactly one option, or none for the original implementations.
 */

#define H264_SLOTHY_A55_OPT 1   /* Cortex-A55 */
/* #define H264_SLOTHY_A72_OPT 1 */ /* Cortex-A72 */

#if defined(H264_SLOTHY_A55_OPT) || defined(H264_SLOTHY_A72_OPT)
# define H264_SLOTHY_OPT 1
#endif
