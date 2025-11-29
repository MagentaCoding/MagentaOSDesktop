// 
// MagentaOS C Library - boot.h
// Provides bootloader related functions and definitions
// © 2025 MagentaOS Developers
// Licensed under the MagentaOS License v1.0
//

#ifndef MAGENTAOS_BOOT_H
#define MAGENTAOS_BOOT_H

#include <stdint.h>

// Bootloader-Funktionen
void initialize_bootloader(void);
void load_kernel(const char* kernel_path);
void jump_to_kernel(void);

#endif // MAGENTAOS_BOOT_H
