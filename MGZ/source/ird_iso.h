#ifndef _IRD_ISO_H
#define _IRD_ISO_H

#include "mgz_io.h"
#include "ird_build.h"
#include "ird_gz.h"
#include "md5.h"

u8 IRD_FilesInfo(char *ISO_PATH, s64 *nb_file, u64 *total_size);
u8 IRD_FilesHashes(char *ISO_PATH, ird_t *ird, u64 *start_filetable, u64 *end_filetable, u8 calculate_md5);
void IRD_check_md5(char *GAME_PATH, char **IRD_PATH, u32 IRD_nPATH);
u8 IRD_GetRegionBoundaries(char *ISO_PATH, ird_t *ird);

#endif

