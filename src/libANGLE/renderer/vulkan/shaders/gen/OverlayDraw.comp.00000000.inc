// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/OverlayDraw.comp.00000000.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kOverlayDraw_comp_00000000[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x75,0x58,0x6b,0x8c,0x56,0xd5,
    0x15,0xbd,0xfb,0x7c,0xc3,0xcc,0xd0,0xfa,0x00,0x2b,0x5a,0x95,0x8e,0x32,0x48,0x6d,
    0x79,0x05,0x2d,0x12,0xcc,0x04,0x66,0x86,0xc7,0x30,0x80,0x2f,0x4a,0x8d,0xa6,0xfe,
    0x00,0x5a,0x1e,0xb5,0x44,0x12,0xd3,0xc6,0x64,0x66,0x3e,0x09,0x5a,0xb5,0xa1,0xd1,
    0xfe,0xb0,0xf2,0xa3,0x55,0x46,0x14,0x41,0x04,0x42,0xc6,0x20,0xce,0x38,0xfe,0x68,
    0x46,0x61,0xb0,0x8d,0xa0,0x22,0x49,0x85,0x46,0x21,0x5a,0x28,0x53,0x45,0x1e,0x89,
    0x0a,0xc2,0x64,0xba,0xd7,0xdd,0xeb,0x70,0xf7,0x77,0xfd,0x9c,0xe4,0xe4,0xde,0xb3,
    0xf6,0x3e,0x6b,0xaf,0xb3,0xcf,0xbe,0xe7,0x9c,0xf9,0x0a,0x61,0x64,0x55,0x92,0x48,
    0xf2,0xbd,0xa4,0x3a,0xb9,0x2f,0x24,0xe9,0xdf,0xd0,0x24,0x28,0x92,0x24,0xdf,0x4f,
    0x2a,0xd3,0xe7,0xac,0x5b,0xe7,0xdf,0x3a,0xfe,0x77,0xbf,0x5f,0x3c,0x7e,0xe2,0xcd,
    0x13,0x60,0xbf,0x24,0x29,0xa4,0x7e,0xb0,0x5d,0x9a,0x54,0x25,0x83,0xf4,0x59,0xa1,
    0xed,0xfe,0x45,0xf7,0xad,0x00,0xfe,0x9c,0xb6,0x4e,0x6d,0x43,0x74,0x7c,0x45,0xca,
    0x97,0x28,0xbb,0xf9,0xa4,0x7c,0xfa,0x56,0xaf,0xcf,0xca,0xd4,0x27,0x49,0x9a,0x95,
    0xa1,0xc1,0x42,0x27,0x23,0xf9,0x8c,0x98,0x10,0xf3,0x7e,0x81,0xd8,0x75,0x0e,0x2b,
    0x10,0x9b,0x40,0xfe,0x69,0xe4,0x9f,0x20,0xe6,0x33,0x3d,0xc7,0x3f,0x4b,0x47,0x4c,
    0x27,0x17,0xfc,0x67,0xea,0xb3,0xf6,0x82,0xcd,0xfa,0x23,0x9c,0xde,0xa5,0x39,0xfb,
    0x52,0xda,0x2b,0xd8,0x6f,0xc9,0xcd,0xa7,0xb5,0xcc,0x7c,0x5a,0xcb,0xcc,0xa7,0xb5,
    0xcc,0x7c,0x5a,0xcb,0xcc,0xa7,0x2d,0x37,0x9f,0x62,0x99,0xf9,0x14,0xdd,0x7c,0x56,
    0xe6,0xf4,0xae,0xa4,0xde,0x68,0x7f,0x2e,0x5d,0xdf,0x24,0x19,0xce,0x98,0xeb,0xcb,
    0xf0,0xad,0x77,0xfe,0x3b,0x72,0x7c,0x3b,0xc8,0x57,0x60,0xbf,0x93,0x7c,0x57,0xb3,
    0xff,0x82,0x94,0xfa,0xa3,0x3f,0xc2,0xf5,0x5f,0x17,0xf3,0xbf,0x4a,0xdb,0x0f,0x34,
    0x4a,0x48,0xf9,0x0a,0x29,0x1f,0xde,0x87,0xa9,0x4f,0x25,0x73,0x82,0xbf,0x2b,0xb5,
    0x5f,0xc5,0x1c,0x04,0xf6,0xab,0xd9,0xc7,0x1a,0x5c,0xae,0xe8,0x60,0x7d,0x5e,0xa1,
    0x0c,0xc3,0x38,0x0e,0x3e,0xb5,0x29,0x97,0xf9,0xa0,0xff,0x53,0x7d,0x0e,0x26,0xc7,
    0x18,0xc6,0x98,0xc4,0x18,0xb1,0x5f,0x47,0xff,0xd8,0x9f,0xca,0xf5,0x1a,0xce,0xba,
    0xad,0x26,0x56,0xa3,0xd6,0x06,0xf6,0x6b,0xf9,0xac,0x77,0xe3,0x1a,0xa9,0x63,0x38,
    0xeb,0xb1,0x81,0x58,0x0d,0x6b,0x6f,0x5a,0x6a,0xaf,0x48,0x66,0x50,0xcf,0xf4,0x34,
    0xb6,0xf5,0x67,0xba,0x3c,0x34,0x91,0x47,0xc8,0xdd,0x94,0xe6,0x30,0xd3,0xdc,0x94,
    0xae,0xa1,0xad,0x05,0xf8,0x6e,0xe3,0xd8,0x4a,0xa7,0x65,0x3e,0xf5,0xc5,0xfe,0x3d,
    0xda,0x06,0xd2,0xfc,0x0f,0x4e,0x16,0x33,0x47,0x42,0xce,0xfc,0x13,0x9c,0x4b,0xf8,
    0xbe,0x98,0x1a,0xd1,0x5f,0xea,0xd6,0x66,0xb9,0x3e,0x9b,0xdc,0xda,0xac,0x60,0xbf,
    0xc0,0xf9,0xb7,0xe4,0xf2,0xd6,0x9a,0xcb,0x5b,0x0b,0xfd,0x50,0xe7,0xad,0x2e,0x4f,
    0xa8,0xe9,0x36,0x6a,0x78,0x88,0xfc,0x45,0x6a,0x40,0x7f,0xa5,0x8b,0xf9,0x47,0xce,
    0xa3,0xc0,0x79,0xe2,0x7d,0x75,0xaa,0x70,0x55,0x3d,0xec,0x6b,0x99,0x93,0x98,0xa7,
    0x76,0xce,0x71,0x2d,0xf9,0xda,0xb9,0x77,0x09,0x63,0xa3,0xfe,0xab,0xe8,0xfb,0x22,
    0xeb,0x66,0x3d,0x7d,0xd1,0xdf,0x40,0x0c,0xf6,0x8d,0x7c,0xaf,0x72,0xb1,0x3b,0x98,
    0x9f,0xb1,0x8a,0x62,0x9e,0xaf,0x10,0x8b,0x6d,0x35,0xf3,0xbf,0x9d,0xba,0x62,0xbe,
    0x93,0x32,0xf9,0x7f,0x95,0xef,0xdb,0x19,0x1f,0xfd,0x1d,0xc4,0xa2,0xf6,0x4e,0x57,
    0x23,0xe0,0xeb,0xc9,0xd5,0xcc,0xbb,0xec,0x83,0xef,0x43,0xe6,0xad,0xda,0xe9,0xab,
    0x92,0x52,0x7d,0x1d,0x6e,0xec,0x10,0x31,0x7f,0x8c,0x9d,0xc6,0xf7,0x5a,0x17,0xab,
    0x45,0xb1,0x85,0x6e,0xee,0x8f,0x69,0x7f,0xcf,0x3b,0xef,0x4c,0x8d,0xdc,0x8f,0xe7,
    0xb8,0x61,0xc7,0xdc,0xd7,0x49,0x69,0xed,0xc5,0xbf,0xe0,0xb4,0x3e,0x4f,0x23,0x7c,
    0xeb,0xd8,0x7f,0x41,0x62,0x6e,0x2b,0xd3,0xf5,0xc3,0x7e,0x32,0x9f,0xdf,0x6e,0x4f,
    0xfa,0x4d,0x0f,0x4a,0x39,0x2a,0xc8,0x87,0x35,0x3f,0xa3,0x08,0xce,0xaa,0xaf,0xb5,
    0xd7,0xcd,0xf1,0xe7,0xf4,0x1d,0xdf,0xff,0x1b,0x62,0x76,0x3c,0xa7,0xb0,0x56,0xd6,
    0xb1,0x1e,0xee,0xd0,0x39,0x60,0x5d,0x9f,0x27,0xb6,0xce,0xad,0x4f,0xa3,0x32,0x62,
    0xed,0x5f,0x62,0x3d,0xe0,0xbb,0x9c,0xc2,0xbd,0x6a,0x13,0xf1,0x6d,0xea,0x83,0x7d,
    0xe7,0x65,0x72,0x00,0xff,0x9b,0xfa,0xa0,0x5e,0x36,0x13,0x87,0xa6,0xad,0xe4,0xfd,
    0x46,0x6d,0xc0,0xb7,0x68,0xdb,0x4a,0xdd,0x78,0x3f,0xab,0xcf,0x6e,0xea,0xdc,0xca,
    0x38,0xa8,0x87,0xd7,0x58,0x0b,0x51,0x77,0x17,0x6b,0x21,0xea,0x7e,0x9d,0x58,0x97,
    0xd3,0x5d,0xe4,0x37,0xdb,0x4d,0xfb,0x02,0xf5,0x44,0x2d,0xbc,0x41,0xbe,0xee,0x0b,
    0x7b,0x7f,0x92,0xcc,0x53,0xfd,0x58,0xe3,0xbf,0xd3,0x9e,0x38,0xec,0x2d,0x62,0x42,
    0x7d,0x3b,0xa9,0x17,0xcf,0x2f,0xb9,0xf6,0xb3,0x83,0xd5,0x3e,0x34,0x2f,0xd1,0xf7,
    0xdd,0xb4,0x61,0xfc,0xcc,0x60,0x1c,0xb0,0xed,0x4f,0xcc,0xb6,0x45,0xb9,0x91,0x9b,
    0x7f,0xd2,0x8e,0xf5,0xf9,0x4a,0xf5,0xf6,0xd2,0x1e,0x73,0x04,0xfb,0x2e,0x6d,0xbd,
    0x8c,0x89,0xf7,0x8b,0x94,0x15,0xf5,0xba,0x87,0x9a,0x66,0x93,0xa3,0xc8,0x3a,0xdd,
    0x4b,0xdb,0x4e,0x8d,0x01,0xbf,0xf7,0xf9,0x5d,0xec,0x4d,0x32,0x9f,0x7d,0xc4,0x7b,
    0x39,0xc7,0xfd,0xe4,0xd8,0x97,0xae,0x77,0x55,0xfa,0xed,0x1c,0xe0,0xde,0x33,0x8b,
    0x63,0xe3,0xba,0x23,0x87,0x07,0x69,0x8f,0xf9,0xef,0x11,0xc3,0x0e,0xba,0xfc,0xc7,
    0x9a,0x78,0x53,0xac,0x26,0xe0,0xf3,0x0c,0x6b,0xe2,0x2d,0x31,0x1c,0x35,0xf1,0xb6,
    0x64,0xf3,0x05,0xbe,0x53,0xdb,0xdb,0xac,0x01,0xbc,0xc7,0x18,0xbb,0x5c,0x8c,0xc0,
    0x7a,0xef,0x60,0x8c,0x5e,0xc6,0xd8,0xe5,0x62,0xec,0x16,0xc3,0xb1,0x66,0x91,0x0f,
    0x4f,0xac,0x0b,0xec,0xff,0x10,0xd3,0xb1,0x8b,0xbe,0x88,0xb5,0x89,0x63,0x3f,0xa6,
    0x1d,0xfa,0x0e,0xbb,0xf5,0x00,0x7e,0x48,0xdb,0x61,0xae,0xc7,0x21,0xd6,0xc4,0x6e,
    0xf6,0x0f,0xbb,0xba,0xf9,0xd4,0x7d,0x47,0x11,0x3b,0xe2,0x72,0xb4,0x99,0x35,0x70,
    0x94,0xbe,0x47,0x92,0x2c,0xfe,0x7f,0x89,0x23,0x7e,0x9f,0x8b,0x0f,0xfc,0x98,0xb6,
    0x3e,0xc6,0x3b,0xe6,0xb8,0x3f,0x63,0x3c,0x71,0xd8,0x71,0xc6,0x13,0x17,0xef,0x0b,
    0xfa,0x1e,0xa7,0xf6,0xc8,0xd5,0x97,0x64,0xb9,0x39,0xc1,0xf8,0x87,0xe9,0x7f,0xcc,
    0x69,0x3b,0x49,0x3b,0xb4,0x9d,0x76,0xda,0x80,0x9f,0xd2,0x76,0x9a,0x7c,0x78,0x5f,
    0x45,0x1d,0x5f,0x72,0x8e,0x3d,0x4e,0xdb,0x19,0xb7,0x96,0x51,0xdb,0x59,0xfa,0x9e,
    0xa1,0xb6,0xc8,0x75,0xda,0x69,0xfb,0x86,0xf1,0xfb,0xe8,0x7f,0xca,0x69,0x3b,0x47,
    0x3b,0xb4,0xf5,0x3b,0x6d,0xc0,0xcf,0x6b,0xeb,0x27,0xdf,0x79,0xa7,0x63,0xc0,0xe5,
    0x2d,0xea,0x45,0x67,0x20,0xa7,0x37,0xb0,0xfe,0x0a,0x4e,0x6f,0x41,0xcc,0x37,0xb0,
    0xce,0x22,0x7f,0xbf,0xd3,0x5b,0x21,0xa6,0xe9,0x34,0xfd,0xcf,0x53,0x5f,0xa5,0xab,
    0x7b,0xf8,0x0c,0xd2,0x56,0xc9,0x3a,0x1d,0x24,0xa5,0x75,0x05,0xfc,0x11,0x8d,0x89,
    0xef,0xe0,0x62,0xf7,0x3d,0x35,0xea,0xd7,0x88,0xbb,0xd0,0x50,0x29,0xfd,0x56,0x71,
    0x96,0x4d,0xe2,0xf7,0x0a,0xed,0x97,0x89,0xf9,0xc4,0xb9,0xec,0x11,0xe3,0xc1,0xdf,
    0xe3,0xc4,0xf6,0x8a,0xe1,0xf0,0x8d,0xd8,0x7b,0x62,0x78,0x5d,0x7a,0x96,0x1b,0xb6,
    0xcf,0x61,0x8d,0x3a,0x43,0xc4,0xff,0x20,0x17,0xbf,0x99,0x63,0xf7,0x49,0xa6,0x61,
    0xbf,0x98,0x5f,0xd4,0x70,0x8d,0xcb,0x67,0xc4,0x7e,0x24,0x59,0xbd,0x3e,0x42,0xac,
    0x46,0xcc,0x17,0xb6,0xad,0xcc,0xfb,0x48,0x31,0xbe,0x1a,0x7e,0xa3,0xa3,0x5c,0x2e,
    0x61,0xbb,0x5e,0xdb,0x28,0xe6,0xf2,0x7a,0x17,0xf3,0x06,0xce,0xdb,0xaf,0xf5,0x4f,
    0xc4,0xf0,0x3a,0xee,0x59,0xe0,0x1f,0x2d,0x86,0xd7,0x70,0x1d,0x22,0xd7,0x28,0xb7,
    0x7f,0x8c,0x11,0xd3,0x81,0xb5,0x19,0xcd,0x98,0xd0,0x32,0xce,0x69,0x81,0xcf,0x58,
    0x6d,0xe3,0x38,0x7e,0xac,0xd3,0x72,0xa3,0xd3,0x12,0xf7,0xe1,0x9b,0xb8,0x06,0xb0,
    0xed,0x26,0xf6,0x33,0x31,0xbc,0xc7,0xd5,0xdd,0x44,0x31,0x7c,0x12,0xbf,0x93,0xc8,
    0x3f,0xce,0xe9,0xbb,0x59,0x4c,0x23,0x34,0x4f,0xa4,0x8e,0x18,0x7b,0xb2,0x8b,0x1d,
    0xf3,0x7c,0x0b,0xe7,0x3b,0x59,0x6c,0x5f,0x05,0x47,0x9d,0x18,0xbe,0xdf,0xed,0x8d,
    0x53,0xc4,0xb8,0x5f,0xa2,0xcf,0x54,0x31,0xbf,0x29,0x9c,0x7f,0x83,0x9b,0x3f,0x6c,
    0xf5,0xda,0x1a,0xa8,0xaf,0x5e,0xec,0x7c,0xc1,0xfd,0x6a,0x7a,0xae,0x66,0xde,0x65,
    0xbd,0xe2,0x3c,0x9d,0x41,0xfb,0x1d,0x5a,0xdf,0xb8,0xf3,0xfe,0x4b,0xec,0x8c,0x9d,
    0x1d,0xb2,0xf3,0x25,0xb0,0x6e,0x70,0xb7,0xfa,0x50,0x6c,0x0c,0x6a,0xe9,0x0f,0xc4,
    0x0e,0x88,0xdd,0x3f,0x61,0xfb,0xb3,0x62,0xe0,0x39,0x28,0xc6,0x75,0xc0,0x71,0xff,
    0x9b,0x63,0x67,0x48,0x29,0x77,0x1c,0xf3,0x91,0x98,0x0f,0x78,0x1e,0x26,0xf6,0xb1,
    0x18,0xd7,0x47,0x92,0x69,0x38,0x44,0x8d,0xd0,0xf0,0x18,0xb1,0x4f,0xc4,0xf0,0x03,
    0xce,0xef,0x53,0xb1,0xf1,0x89,0xd3,0xff,0x1f,0x62,0xe2,0xb0,0x23,0xc4,0xa0,0xe5,
    0x4e,0xde,0x33,0x8e,0x8a,0x8d,0x87,0x3f,0xec,0x9f,0xb0,0x3e,0x63,0x7e,0x1b,0x24,
    0xbb,0x93,0x2c,0x65,0xbe,0x50,0x13,0x47,0xb9,0x0e,0x7e,0x4f,0xb1,0x3b,0xca,0xe0,
    0xd4,0x77,0x09,0x7d,0x0f,0xf1,0x8e,0x8c,0xfd,0x07,0xe3,0x1b,0xa4,0xf4,0xce,0xd3,
    0xcb,0x7a,0x6b,0x66,0xbc,0x66,0x17,0xaf,0x99,0x1c,0xf0,0x59,0xa6,0xcf,0xb9,0x92,
    0xdd,0x81,0x9a,0x82,0xdd,0xad,0x60,0xbb,0x5b,0xcc,0x16,0xef,0x40,0xb7,0x8b,0xd9,
    0xe3,0x1d,0x68,0x0e,0xed,0xb1,0x86,0x60,0x9f,0xad,0x6d,0x0e,0x63,0xe2,0x3d,0xde,
    0x81,0xe6,0x49,0x76,0x07,0x6a,0x72,0x77,0xa0,0x9f,0x8b,0xd9,0xe2,0x1d,0xe8,0x17,
    0x62,0xf5,0x05,0x3c,0xfa,0xdc,0x25,0x86,0xc7,0x6f,0xef,0x6e,0xea,0xb8,0x4b,0xb2,
    0x3b,0xd0,0x2f,0xc5,0xfe,0x4f,0x9d,0xc5,0xb1,0xfe,0x0e,0x74,0xaf,0x98,0x3d,0xde,
    0x4f,0xfa,0xc4,0xb0,0x7b,0xe5,0xdb,0x77,0xa0,0xff,0x71,0xcf,0xee,0x73,0xf7,0x93,
    0xcf,0xc4,0x70,0x7c,0x33,0x27,0xdd,0x7c,0x81,0x7f,0xae,0xed,0x24,0xe7,0xfb,0xb9,
    0x8b,0x71,0xdc,0xc5,0xc8,0xdf,0x81,0xbe,0x60,0x8c,0xe3,0x2e,0xc6,0x09,0x31,0x1c,
    0x6b,0x16,0xf9,0x4e,0xba,0x3d,0xe2,0x94,0x98,0x0e,0xe4,0xf4,0x04,0xe3,0xc6,0xef,
    0x7c,0x81,0x98,0x1d,0xfa,0x16,0x39,0x7d,0xc0,0x17,0x6a,0x5b,0x44,0xbe,0x85,0xe4,
    0x9f,0xcb,0xfe,0x22,0x77,0x56,0x2d,0x73,0xf3,0x8e,0x39,0xfd,0x6d,0x2e,0xa7,0x43,
    0x24,0xcb,0xe9,0x72,0x31,0x7b,0x9c,0xef,0x0a,0x31,0x6c,0xb9,0xcb,0x69,0xdc,0xc3,
    0x1e,0x20,0x1e,0x1c,0xf6,0xa0,0xf3,0xbd,0x70,0xcf,0x10,0xd3,0xe1,0xcf,0xba,0xb3,
    0x62,0xf8,0x83,0xee,0xac,0x3b,0x27,0x86,0xd7,0x39,0xbf,0x7e,0x31,0xdc,0x9f,0x7f,
    0x03,0x0e,0x8b,0xe7,0x1f,0x44,0xf8,0x39,0x35,0x73,0xec,0x80,0x3b,0xff,0x24,0x98,
    0x5f,0xe4,0x29,0x84,0x2c,0xde,0xa3,0xc4,0x2a,0x82,0xe1,0xf8,0x3f,0xef,0x4d,0x62,
    0x55,0xc1,0xc6,0x56,0x84,0xec,0x4c,0xa8,0x0e,0x86,0xdf,0x93,0x64,0x7b,0x75,0xab,
    0x18,0xde,0xc2,0x35,0x2b,0xba,0x35,0x83,0xad,0x0d,0xb5,0xcf,0x35,0x6a,0x13,0xd3,
    0x91,0xde,0x27,0x82,0xe5,0x67,0x85,0x64,0xda,0x2e,0x09,0xc6,0xd5,0xe8,0x72,0x71,
    0xa9,0xc3,0xee,0xe4,0xd8,0x21,0xc1,0x7c,0x61,0x7b,0x94,0xd8,0xd0,0x60,0x5c,0xb0,
    0x61,0xee,0xf8,0x3d,0xe5,0xb2,0x60,0xbf,0xa5,0xac,0xa2,0xcf,0xb0,0x60,0x7e,0x17,
    0x87,0xec,0xff,0xb4,0x2b,0x82,0xe1,0x45,0xfe,0x3f,0x7e,0x65,0xb0,0x35,0x9e,0xc7,
    0x6f,0xf8,0x87,0xc1,0x7c,0xe2,0xda,0x02,0xbb,0x8a,0x98,0xa4,0x9a,0x2a,0xd3,0xdf,
    0x64,0xae,0x0e,0xe6,0x0b,0x1b,0x38,0x16,0x70,0x7f,0xba,0x26,0x98,0x0e,0xd8,0xfd,
    0xff,0x7d,0xd8,0x6b,0x87,0x07,0xb3,0x27,0x49,0x76,0x3e,0xad,0xce,0xd5,0xa9,0x3f,
    0x9f,0xfe,0x44,0x7b,0xdc,0x97,0x9f,0x10,0xe3,0xf0,0xed,0x22,0xad,0x68,0xd8,0x9e,
    0xe4,0x1e,0x35,0x9e,0xbf,0x11,0x60,0xec,0x13,0xee,0xfc,0xb9,0x36,0xd8,0xde,0xd9,
    0xfc,0x1d,0x67,0xdb,0x75,0xc1,0x38,0xfc,0xd9,0x36,0x22,0xd8,0xd9,0x06,0x5b,0x3c,
    0xa7,0x6a,0x83,0x71,0xc1,0x16,0xb9,0x47,0x72,0xec,0x93,0xdf,0x71,0xb6,0x8d,0x0a,
    0xe6,0x03,0x9e,0x78,0xb6,0xfd,0x38,0x18,0x17,0x6c,0x51,0xc3,0x0d,0xd4,0xe7,0xcf,
    0xb6,0xd1,0xc1,0xf0,0x11,0xce,0x6f,0x4c,0xb0,0xf1,0xfe,0x6c,0x1b,0x4b,0xcc,0x9f,
    0x6d,0xe3,0x88,0xf9,0xb3,0x6d,0x7c,0xb0,0xf1,0xf0,0x87,0x1d,0xfc,0xd8,0x57,0x62,
    0xcd,0x16,0xdd,0x59,0xf3,0x1b,0xea,0xc1,0x5e,0x83,0x71,0x6d,0xb9,0x3d,0x68,0xae,
    0xf3,0x5d,0x46,0x5f,0xec,0x53,0x18,0x57,0x94,0xd2,0x33,0x6c,0x8e,0x3b,0x9b,0x9f,
    0x92,0x6c,0x9e,0x5d,0xfc,0xae,0xfe,0x22,0x86,0xaf,0xe6,0xbd,0x7d,0x8d,0xfb,0xae,
    0x60,0x7b,0x5a,0xdb,0x1a,0x72,0x3d,0xed,0xd6,0xf5,0xaf,0x52,0x7e,0x5d,0xbb,0xc9,
    0xfb,0x2c,0x79,0x3b,0xc8,0xdb,0xee,0x78,0x61,0x5b,0xab,0xad,0x9d,0xbc,0x6b,0xb9,
    0x8f,0xe0,0xf7,0xa1,0xf5,0xfc,0x6d,0x28,0x7e,0x37,0x1b,0xb8,0xc7,0xfe,0x4a,0x79,
    0x31,0xdf,0x8d,0xf4,0xd9,0xe0,0xb4,0x6c,0x12,0xc3,0x37,0x4a,0xf9,0x1a,0xdb,0x4c,
    0x5b,0xc1,0xd5,0xc6,0x16,0xb1,0x71,0x9b,0xdd,0xfd,0x69,0x9b,0x18,0xfe,0x94,0xbb,
    0x0b,0x75,0x88,0xcd,0x75,0x1b,0xf3,0x1a,0x35,0xb7,0x73,0x0d,0xe0,0x33,0x27,0x98,
    0x0f,0xf2,0xd3,0xc1,0xb9,0xc5,0xf9,0xbc,0x92,0x9b,0xcf,0x76,0xce,0x27,0x6a,0xdb,
    0x21,0x36,0xde,0xd7,0xd4,0x6b,0xc4,0x7c,0x4d,0x75,0x12,0xf3,0x35,0xd5,0x25,0x36,
    0x1e,0xfe,0x9d,0x5c,0xc3,0x5f,0x6b,0x1c,0xc4,0x44,0x9c,0x2e,0x6a,0x8e,0xeb,0xb7,
    0x46,0x4a,0x7f,0x83,0xc2,0xb3,0x5f,0xa3,0x4c,0xd6,0xf6,0x7f,0xfd,0xf1,0x94,0xcc,
    0x48,0x1a,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_EXT_samplerless_texture_functions : require
//
// layout(local_size_x = 8, local_size_y = 4, local_size_z = 1)in;
//
// struct TextWidgetData
// {
//     uvec4 coordinates;
//     vec4 color;
//     uvec4 fontSize;
//     uvec4 text[256 / 16];
// };
//
// struct GraphWidgetData
// {
//     uvec4 coordinates;
//     vec4 color;
//     uvec4 valueWidth;
//     uvec4 values[64 / 4];
// };
//
// layout(set = 0, binding = 0, rgba32f)uniform image2D blendOutput;
//
// layout(set = 0, binding = 1)uniform TextWidgets
// {
//     TextWidgetData textWidgetsData[32];
// };
//
// layout(set = 0, binding = 2)uniform GraphWidgets
// {
//     GraphWidgetData graphWidgetsData[32];
// };
//
// layout(set = 0, binding = 3)uniform utexture2D culledWidgets;
// layout(set = 0, binding = 4)uniform texture2DArray font;
//
// layout(push_constant)uniform PushConstants
// {
//     uvec2 outputSize;
// } params;
//
// bool intersects(const uvec2 imageCoords, const uvec4 widgetCoords)
// {
//     return all(greaterThanEqual(imageCoords, widgetCoords . xy))&&
//            all(lessThan(imageCoords, widgetCoords . zw));
// }
//
// uint getChar(const uint textWidget, const uvec2 coordInWidget, const uint fontGlyphWidth)
// {
//     const uint charIndex = coordInWidget . x / fontGlyphWidth;
//     const uint packIndex = charIndex / 4;
//     const uint packedChars = textWidgetsData[textWidget]. text[packIndex / 4][packIndex % 4];
//     const uint shift =(charIndex % 4)* 8;
//
//     return(packedChars >> shift)& 0xFF;
//
// }
//
// float sampleFont(const uint textChar,
//                  const uvec2 coordInWidget,
//                  const uvec2 fontGlyphSize,
//                  const uint fontLayer)
// {
//     const uvec2 coordInGlyph = coordInWidget % fontGlyphSize;
//     const uvec2 glyphOffset = fontGlyphSize *
//         uvec2(textChar % 32, textChar / 32);
//
//     return texelFetch(font, ivec3(glyphOffset + coordInGlyph, fontLayer), 0). x;
// }
//
// uint getValue(const uint graphWidget, const uvec2 coordInWidget, const uint valueWidth)
// {
//     const uint valueIndex = coordInWidget . x / valueWidth . x;
//     return graphWidgetsData[graphWidget]. values[valueIndex / 4][valueIndex % 4];
// }
//
// vec4 blend(const vec4 blendedSoFar, const vec4 color)
// {
//
//     return vec4(blendedSoFar . rgb *(1 - color . a)+ color . rgb * color . a,
//                 blendedSoFar . a *(1 - color . a));
// }
//
// void main()
// {
//     const uvec2 imageCoords = gl_GlobalInvocationID . xy;
//     if(any(greaterThanEqual(imageCoords, params . outputSize)))
//     {
//         return;
//     }
//
//     vec4 blendedWidgets = vec4(0, 0, 0, 1);
//
//     const uvec2 subgroupWidgets = texelFetch(culledWidgets, ivec2(gl_WorkGroupID . xy), 0). xy;
//     uint textWidgets = subgroupWidgets . x;
//     uint graphWidgets = subgroupWidgets . y;
//
//     while(graphWidgets != 0)
//     {
//         const uint graphWidget = findLSB(graphWidgets);
//         graphWidgets ^= 1 << graphWidget;
//
//         const uvec4 widgetCoords = graphWidgetsData[graphWidget]. coordinates;
//         if(! intersects(imageCoords, widgetCoords))
//         {
//             continue;
//         }
//
//         if(imageCoords . x == widgetCoords . x || imageCoords . y == widgetCoords . y ||
//             imageCoords . x + 1 == widgetCoords . z || imageCoords . y + 1 == widgetCoords . w)
//         {
//
//             blendedWidgets = vec4(0);
//             continue;
//         }
//
//         const uvec2 coordInWidget = imageCoords - widgetCoords . xy;
//         const uint valueWidth = graphWidgetsData[graphWidget]. valueWidth . x;
//
//         const uint value = getValue(graphWidget, coordInWidget, valueWidth);
//
//         vec4 color = vec4(0);
//         const uint widgetHeight = widgetCoords . w - widgetCoords . y;
//
//         bool indicateOverflow = value > widgetHeight && coordInWidget . y + 4 >= widgetHeight
//                 &&((coordInWidget . x ^ coordInWidget . y)& 1)== 0;
//
//         if((widgetHeight - coordInWidget . y)< value && ! indicateOverflow)
//         {
//             color = graphWidgetsData[graphWidget]. color;
//             blendedWidgets = blend(blendedWidgets, color);
//         }
//     }
//
//     while(textWidgets != 0)
//     {
//         const uint textWidget = findLSB(textWidgets);
//         textWidgets ^= 1 << textWidget;
//
//         const uvec4 widgetCoords = textWidgetsData[textWidget]. coordinates;
//         if(! intersects(imageCoords, widgetCoords))
//         {
//             continue;
//         }
//
//         const uvec2 coordInWidget = imageCoords - widgetCoords . xy;
//         const uvec4 fontSizePacked = textWidgetsData[textWidget]. fontSize;
//         const uvec2 fontGlyphSize = fontSizePacked . xy;
//         const uint fontLayer = fontSizePacked . z;
//
//         const uint textChar = getChar(textWidget, coordInWidget, fontGlyphSize . x);
//
//         if(textChar <(32 * 3))
//         {
//
//             const float sampleValue = sampleFont(textChar, coordInWidget, fontGlyphSize, fontLayer);
//
//             vec4 color = vec4(0, 0, 0, 0.4);
//             color = mix(color, textWidgetsData[textWidget]. color, sampleValue);
//
//             blendedWidgets = blend(blendedWidgets, color);
//         }
//     }
//
//     if(blendedWidgets . a < 1)
//     {
//         vec3 blendedColor = blendedWidgets . rgb;
//         if(blendedWidgets . a > 0)
//         {
//             const vec4 color = imageLoad(blendOutput, ivec2(imageCoords));
//             blendedColor += color . rgb * color . a * blendedWidgets . a;
//         }
//         imageStore(blendOutput, ivec2(imageCoords), vec4(blendedColor, 1));
//     }
// }
